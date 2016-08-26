/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCameraViewControllerDelegate <NSObject>
@required
-(void)cameraViewControllerDidBeginCapture:(id)arg1;
-(void)cameraViewController:(id)arg1 didCaptureImage:(id)arg2;
-(void)cameraViewController:(id)arg1 didCaptureVideo:(id)arg2;
-(void)cameraViewController:(id)arg1 didSelectSendImage:(id)arg2 metadata:(id)arg3;
-(void)cameraViewController:(id)arg1 didSelectSendVideo:(id)arg2 thumbnail:(id)arg3 size:(CGSize)arg4 metadata:(id)arg5;
-(void)cameraViewControllerDidCancelCapture:(id)arg1;
-(void)cameraViewControllerDidPressCloseButton:(id)arg1;
-(void)cameraViewControllerDidPressDismissButtonInPermissionView:(id)arg1;
-(void)cameraViewControllerDidPressCollapseButton:(id)arg1;
-(void)cameraViewControllerDidPressExpandButton:(id)arg1;
-(void)cameraViewControllerDidSelectExit:(id)arg1;
-(void)cameraViewControllerDidRotateToLandscape:(id)arg1;
-(void)cameraViewControllerDidChangeCaptureDevice:(id)arg1;
-(void)cameraViewControllerWillAppear:(id)arg1;

@end
