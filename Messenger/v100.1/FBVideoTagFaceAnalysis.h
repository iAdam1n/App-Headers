/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoTagSamplerDelegate.h>
#import <Messenger/FBVideoTagFaceDetectorDelegate.h>

@protocol FBCancelable, FBVideoTagFaceAnalysisDelegate;
@class FBVideoTagSampler, FBVideoTagFaceDetector, NSMutableSet, FBVideoTagConfiguration, AVAsset, NSArray, NSString, FBValueObjectEither;

@interface FBVideoTagFaceAnalysis : NSObject <FBVideoTagSamplerDelegate, FBVideoTagFaceDetectorDelegate> {

	FBVideoTagSampler* _assetFrameSampler;
	FBVideoTagFaceDetector* _faceDetector;
	id<FBCancelable> _samplerCancellable;
	NSMutableSet* _detectorCancellableSet;
	long long _framesLeftToAnalyse;
	long long _totalFramesToAnalyse;
	long long _framesFaceDetected;
	long long _framesSampled;
	double _framesSampleDuration;
	double _extractionFramesPerSecond;
	double _faceDetectedFPSTotalSum;
	FBVideoTagConfiguration* _configuration;
	double _analysisStartTime;
	AVAsset* _videoAsset;
	NSArray* _frameSampleTimes;
	long long _nextFrameSampleBatchStartIndex;
	long long _unprocessedFrameSampleCountInCurrentBatch;
	NSString* _assetID;
	long long _status;
	id<FBVideoTagFaceAnalysisDelegate> _delegate;
	FBValueObjectEither* _result;

}

@property (nonatomic,copy,readonly) NSString * assetID;                                         //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) long long status;                                                //@synthesize status=_status - In the implementation block
@property (nonatomic,__weak,readonly) id<FBVideoTagFaceAnalysisDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBValueObjectEither * result;                               //@synthesize result=_result - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 videoAssetID:(id)arg2 config:(id)arg3 delegate:(id)arg4 ;
-(void)_cleanUpFaceProcessing;
-(void)_transitionToStatus:(long long)arg1 ;
-(void)_startAnalysis;
-(void)_completeAnalysisWithResult:(FBValueObjectEither*)arg1 ;
-(void)_sampleNextFrameBatch;
-(void)_tryStartSamplingAsset:(id)arg1 error:(id)arg2 ;
-(void)faceDetector:(id)arg1 didCompleteWithFaceBoxes:(id)arg2 inImage:(id)arg3 inVideoAsset:(id)arg4 atTimestamp:(SCD_Struct_FB25)arg5 framesPerSecond:(double)arg6 ;
-(void)videoSampler:(id)arg1 didFinishForVideoAsset:(id)arg2 cancellable:(id)arg3 ;
-(void)videoSampler:(id)arg1 didGetImage:(id)arg2 forVideoAsset:(id)arg3 atTimestamp:(SCD_Struct_FB25)arg4 error:(id)arg5 ;
-(void)cancel;
-(void)dealloc;
-(id<FBVideoTagFaceAnalysisDelegate>)delegate;
-(void)run;
-(FBValueObjectEither *)result;
-(long long)status;
-(NSString *)assetID;
@end
