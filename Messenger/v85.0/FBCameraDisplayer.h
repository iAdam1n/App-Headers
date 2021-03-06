/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCameraCloseEventHandlerDelegate.h>

@protocol FBCameraComponentCaptureDelegate;
@class FBCameraComponentViewController, UINavigationController, NSString;

@interface FBCameraDisplayer : NSObject <FBCameraCloseEventHandlerDelegate> {

	FBCameraComponentViewController* _cameraViewController;
	UINavigationController* _navigationController;
	id<FBCameraComponentCaptureDelegate> _captureDelegate;

}

@property (assign,nonatomic,__weak) id<FBCameraComponentCaptureDelegate> captureDelegate;              //@synthesize captureDelegate=_captureDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCaptureDelegate:(id<FBCameraComponentCaptureDelegate>)arg1 ;
-(void)presentCameraWithCameraMode:(long long)arg1 userSession:(id)arg2 appearanceProvider:(id)arg3 componentProvider:(Class)arg4 cameraModelManager:(id)arg5 presentingViewController:(id)arg6 extraAnalyticsData:(id)arg7 ;
-(void)closeEventHandlerDidTapCloseButton;
-(void)dismissCamera;
-(void)presentViewControllerFromCamera:(id)arg1 ;
-(void)dismissViewControllerOnTopOfCameraAnimated:(BOOL)arg1 ;
-(void)pushCameraWithCameraMode:(long long)arg1 userSession:(id)arg2 appearanceProvider:(id)arg3 componentProvider:(Class)arg4 cameraModelManager:(id)arg5 navigationController:(id)arg6 extraAnalyticsData:(id)arg7 ;
-(id<FBCameraComponentCaptureDelegate>)captureDelegate;
@end

