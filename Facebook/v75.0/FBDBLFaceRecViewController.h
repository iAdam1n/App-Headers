/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBDBLCameraCaptureControllerDelegate.h>
#import <Facebook/FBDBLFaceDetectorDelegate.h>
#import <Facebook/FBDBLFaceRecViewControllerProtocol.h>

@protocol FBDBLFaceRecAuthenticating;
@class FBDBLCameraCaptureController, FBDBLFaceDetector, UIImageView, FBDBLFaceRecOverlayView, FBButton, NSString;

@interface FBDBLFaceRecViewController : UIViewController <FBDBLCameraCaptureControllerDelegate, FBDBLFaceDetectorDelegate, FBDBLFaceRecViewControllerProtocol> {

	FBDBLCameraCaptureController* _captureController;
	FBDBLFaceDetector* _faceDetector;
	UIImageView* _imageView;
	FBDBLFaceRecOverlayView* _overlayView;
	FBButton* _cancelButton;
	FBButton* _notRecognizedButton;
	id<FBDBLFaceRecAuthenticating> _authDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBDBLFaceRecAuthenticating> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBDBLFaceRecAuthenticating>)arg1 ;
-(id<FBDBLFaceRecAuthenticating>)authDelegate;
-(void)didTapCancel;
-(void)didTapNotRecognized;
-(void)cameraCaptureController:(id)arg1 didCaptureImage:(id)arg2 ;
-(void)faceDetector:(id)arg1 didDetectFaces:(id)arg2 inImage:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
