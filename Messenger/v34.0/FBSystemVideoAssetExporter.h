/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoAssetExporter.h>

@protocol FBErrorSimulationProtocol;
@class NSURL, NSArray, AVAssetExportSession, AVAsset, NSTimer, NSString;

@interface FBSystemVideoAssetExporter : NSObject <FBVideoAssetExporter> {

	NSURL* _assetURL;
	NSURL* _outputURL;
	NSArray* _presetNames;
	NSArray* _outputFileTypes;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	AVAssetExportSession* _exportSession;
	AVAsset* _asset;
	unsigned long long _presetAndFileTypeIterator;
	NSTimer* _progressTimer;
	id<FBErrorSimulationProtocol> _errorSimulation;
	SCD_Struct_FB419 _timeRange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB242 outputDuration; 
-(SCD_Struct_FB242)outputDuration;
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelExportWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_determineBestPresetAndOutputFileType;
-(void)_exportProgressReport:(id)arg1 ;
-(void)_exportWithSession:(id)arg1 presetName:(id)arg2 outputFileType:(id)arg3 retryCount:(unsigned long long)arg4 ;
-(id)initWithAssetURL:(id)arg1 outputURL:(id)arg2 presetNames:(id)arg3 outputFileTypes:(id)arg4 errorSimulation:(id)arg5 timeRange:(SCD_Struct_FB419)arg6 ;
-(long long)estimatedOutputFileLength;
-(void)dealloc;
-(id)init;
@end

