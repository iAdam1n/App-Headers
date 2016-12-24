/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerVideoRecordingManagerDelegate
@required
-(void)composerVideoRecordingManagerDidCancelRecording:(id)arg1;
-(void)composerVideoRecordingManagerDidAuthorizeRecording:(id)arg1 withPrompt:(BOOL)arg2;
-(void)composerVideoRecordingManager:(id)arg1 didFailPermissionForDevice:(unsigned long long)arg2;
-(void)composerVideoRecordingManager:(id)arg1 didInitRecordingWithCaptureView:(id)arg2;
-(void)composerVideoRecordingManager:(id)arg1 didUpdateDuration:(double)arg2;
-(void)composerVideoRecordingManager:(id)arg1 didStopRecordingWithResult:(id)arg2 reachedTimeout:(BOOL)arg3;
-(void)composerVideoRecordingManager:(id)arg1 didCaptureImage:(id)arg2 cameraPosition:(long long)arg3 deviceOrientation:(long long)arg4;

@end
