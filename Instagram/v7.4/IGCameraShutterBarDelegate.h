/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:11 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol IGCameraShutterBarDelegate <NSObject>
@required
-(void)cameraShutterBarDidStartMoving;
-(void)cameraShutterBarDidMoveToPosition:(double)arg1;
-(void)cameraShutterBarDidFinishMoving;
-(void)cameraShutterBarDidChangeCameraMode:(long long)arg1;
-(void)cameraShutterBarDidTakePicture;
-(void)cameraShutterBarDidAskForPhotoLibrary;
-(void)cameraShutterBarDidBeginRecording;
-(void)cameraShutterBarDidEndRecording;
-(void)cameraShutterBarVideoBackButtonTapped;
-(void)cameraShutterBarVideoBackButtonLongPressed;
-(void)cameraShutterBarDidAskForVideoLibrary;

@end

