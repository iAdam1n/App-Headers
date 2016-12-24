/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKPVideoRecordingDelegate;
@interface SKPVideoRecording : NSObject {

	BOOL _usingFrontCamera;
	id<SKPVideoRecordingDelegate> _delegate;
	unsigned long long _numberOfAvailableCameras;

}

@property (getter=isUsingFrontCamera) BOOL usingFrontCamera;                   //@synthesize usingFrontCamera=_usingFrontCamera - In the implementation block
@property (__weak) id<SKPVideoRecordingDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long numberOfAvailableCameras;              //@synthesize numberOfAvailableCameras=_numberOfAvailableCameras - In the implementation block
+(id)videoRecording;
-(void)startRecordingWithMaxRecordingTime:(double)arg1 ;
-(unsigned long long)numberOfAvailableCameras;
-(void)resetForNewRecording;
-(void)willRotateToOrientation:(long long)arg1 ;
-(void)setUpWithPreviewInView:(id)arg1 ;
-(void)switchCameraWithCompletion:(/*^block*/id)arg1 ;
-(void)playRecordedVideo;
-(void)pauseRecordedVideo;
-(void)startVideoEffect:(unsigned long long)arg1 ;
-(void)stopVideoEffect;
-(void)setDelegate:(id<SKPVideoRecordingDelegate>)arg1 ;
-(id<SKPVideoRecordingDelegate>)delegate;
-(void)cleanUp;
-(BOOL)isUsingFrontCamera;
-(void)setUsingFrontCamera:(BOOL)arg1 ;
-(void)resumePreview;
-(void)pausePreview;
-(void)stopRecording;
@end
