/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/FBKeyboardObserverDelegate.h>

@class UIViewController, MNKeyboardAwareContainerView, FBKeyboardObserver, FBKeyboardResettingTracker, NSString;

@interface MNKeyboardAwareContainerViewController : FBContainerViewController <FBKeyboardObserverDelegate> {

	UIViewController* _contentViewController;
	MNKeyboardAwareContainerView* _containerView;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardResettingTracker* _keyboardResettingTracker;
	CGRect _keyboardFrame;
	BOOL _keyboardAware;

}

@property (assign,getter=isKeyboardAware,nonatomic) BOOL keyboardAware;              //@synthesize keyboardAware=_keyboardAware - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_updateKeyboardFrame:(CGRect)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(BOOL)isKeyboardAware;
-(id)initWithContentViewController:(id)arg1 keyboardResettingTracker:(id)arg2 ;
-(void)setKeyboardAware:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
@end
