/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>

@protocol FBMemoryProfilerMovableViewController;
@class UIViewController, UIPanGestureRecognizer, UIPinchGestureRecognizer;

@interface FBMemoryProfilerContainerViewController : UIViewController {

	UIViewController*<FBMemoryProfilerMovableViewController> _presentedViewController;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	double _heightOnPinch;
	CGPoint _previousPinchingPoint;
	CGSize _size;

}
-(void)presentViewController:(id)arg1 withSize:(CGSize)arg2 ;
-(void)dismissCurrentViewController;
-(void)_pan;
-(void)_pinch:(id)arg1 ;
-(void)_pushPresentedViewAboveKeyboard:(double)arg1 ;
-(id)_viewControllerDecidingAboutRotations;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
@end
