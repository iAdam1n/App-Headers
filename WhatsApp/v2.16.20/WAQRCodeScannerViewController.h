/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WABasicCameraViewController.h>

@protocol WAQRCodeScannerViewControllerDelegate;
@class NSString, UIView, WAShapeView, UIActivityIndicatorView, UIButton, NSTimer;

@interface WAQRCodeScannerViewController : WABasicCameraViewController {

	NSString* _lastQRCode;
	UIView* _shutterView;
	WAShapeView* _maskView;
	UIActivityIndicatorView* _spinner;
	UIButton* _exitButton;
	NSTimer* _exitButtonTimer;
	id<WAQRCodeScannerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WAQRCodeScannerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect cameraPreviewRect; 
+(BOOL)statusBarHidden;
+(long long)cameraMode;
-(void)wa_applicationDidEnterBackground;
-(void)exitApp:(id)arg1 ;
-(void)showExitButton:(id)arg1 ;
-(CGRect)cameraPreviewRect;
-(void)didCreateCameraController;
-(void)handleTapToFocus:(id)arg1 ;
-(void)cameraControllerSessionDidBeginRunning:(id)arg1 ;
-(void)cameraController:(id)arg1 didDetectQRCode:(id)arg2 ;
-(void)willAcceptQRCode;
-(void)willShowExitButton;
-(void)setDelegate:(id<WAQRCodeScannerViewControllerDelegate>)arg1 ;
-(id<WAQRCodeScannerViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
@end
