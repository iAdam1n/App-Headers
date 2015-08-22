/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class TFNNavigationController, UIScreenEdgePanGestureRecognizer, NSString;

@interface TFNNavigationControllerTransitionAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate> {

	TFNNavigationController* _navigationController;
	BOOL _completingInteractivePop;
	BOOL _interactive;
	long long _operation;
	UIScreenEdgePanGestureRecognizer* _interactivePopGestureRecognizer;

}

@property (nonatomic,readonly) UIScreenEdgePanGestureRecognizer * interactivePopGestureRecognizer;              //@synthesize interactivePopGestureRecognizer=_interactivePopGestureRecognizer - In the implementation block
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive;                                           //@synthesize interactive=_interactive - In the implementation block
@property (assign,nonatomic) long long operation;                                                               //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_pan:(id)arg1 ;
-(void)_animatePushTransition:(id)arg1 ;
-(void)_animatePopTransition:(id)arg1 ;
-(void)dealloc;
-(BOOL)isInteractive;
-(double)transitionDuration:(id)arg1 ;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIScreenEdgePanGestureRecognizer *)interactivePopGestureRecognizer;
-(id)initWithNavigationController:(id)arg1 ;
@end
