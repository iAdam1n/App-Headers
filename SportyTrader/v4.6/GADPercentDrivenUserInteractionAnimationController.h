/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol GADPercentDrivenUserInteractionAnimationControllerDelegate;
@class GADViewControllerFullScreenSwipeAnimation, NSString;

@interface GADPercentDrivenUserInteractionAnimationController : UIPercentDrivenInteractiveTransition <UIViewControllerTransitioningDelegate> {

	id<GADPercentDrivenUserInteractionAnimationControllerDelegate> _delegate;
	GADViewControllerFullScreenSwipeAnimation* _transitionAnimation;

}

@property (assign,nonatomic,__weak) id<GADPercentDrivenUserInteractionAnimationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GADViewControllerFullScreenSwipeAnimation * transitionAnimation;                             //@synthesize transitionAnimation=_transitionAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GADViewControllerFullScreenSwipeAnimation *)transitionAnimation;
-(BOOL)isAnimatingTopToBottom;
-(BOOL)isAnimatingBottomToTop;
-(id)initWithAnimation:(id)arg1 ;
-(void)setTransitionAnimation:(GADViewControllerFullScreenSwipeAnimation *)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
-(void)setDelegate:(id<GADPercentDrivenUserInteractionAnimationControllerDelegate>)arg1 ;
-(id<GADPercentDrivenUserInteractionAnimationControllerDelegate>)delegate;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
@end

