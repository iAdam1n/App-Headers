/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBMediaAssetStorageManager;
@class FBVideoClipRecorder, NSString;

@interface FBVideoRecorder : NSObject <FBClassProvidable> {

	id<FBMediaAssetStorageManager> _storageManager;
	double _bitRate;
	long long _frameSamplingInterval;
	long long _state;
	long long _position;
	FBVideoClipRecorder* _clipRecorder;
	CGSize _videoSize;

}

@property (assign,nonatomic) CGSize videoSize;                                //@synthesize videoSize=_videoSize - In the implementation block
@property (assign,nonatomic) long long frameSamplingInterval;                 //@synthesize frameSamplingInterval=_frameSamplingInterval - In the implementation block
@property (assign,nonatomic) long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double runningTime; 
@property (assign,nonatomic) long long position;                              //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) FBVideoClipRecorder * clipRecorder;              //@synthesize clipRecorder=_clipRecorder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)stopRecordingWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(BOOL)handleVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)handleAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(double)runningTime;
-(void)onAppDidBecomeActive;
-(id)initWithStorageManager:(id)arg1 ;
-(void)setClipRecorder:(FBVideoClipRecorder *)arg1 ;
-(FBVideoClipRecorder *)clipRecorder;
-(long long)frameSamplingInterval;
-(void)setFrameSamplingInterval:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(void)cancelRecording;
-(void)startRecording;
-(void)setBitRate:(double)arg1 ;
-(void)setVideoSize:(CGSize)arg1 ;
-(CGSize)videoSize;
@end
