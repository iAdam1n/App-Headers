/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBCameraViewDelegate <NSObject>
@optional
-(void)cameraViewDidFlash:(id)arg1;
-(void)cameraViewDidPressFullscreenButton:(id)arg1;
-(void)cameraView:(id)arg1 didTapAtPoint:(CGPoint)arg2;
-(void)cameraViewDidUpdateFlashMode:(long long)arg1;

@required
-(void)cameraViewDidSelectSwitchCamera:(id)arg1;
-(void)cameraViewDidSelectCaptureImage:(id)arg1;
-(void)cameraViewDidStartRecording:(id)arg1;
-(void)cameraViewDidStopRecording:(id)arg1 duration:(double)arg2;
-(void)cameraViewDidCancelRecording:(id)arg1 duration:(double)arg2;
-(void)cameraViewDidPressCloseButton:(id)arg1;

@end

