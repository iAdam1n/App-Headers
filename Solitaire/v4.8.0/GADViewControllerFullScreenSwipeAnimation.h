/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIView, NSString;

@interface GADViewControllerFullScreenSwipeAnimation : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;
	BOOL _draggableViewShownOnPresentation;
	long long _direction;
	double _startY;
	UIView* _draggableView;
	double _transitionDuration;
	CGRect _draggableViewEndFrameAfterAnimation;
	CGRect _animatedViewFrameBeforeAnimation;

}

@property (assign,nonatomic) long long direction;                                     //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double startY;                                           //@synthesize startY=_startY - In the implementation block
@property (nonatomic,retain) UIView * draggableView;                                  //@synthesize draggableView=_draggableView - In the implementation block
@property (assign,nonatomic) double transitionDuration;                               //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) CGRect draggableViewEndFrameAfterAnimation;              //@synthesize draggableViewEndFrameAfterAnimation=_draggableViewEndFrameAfterAnimation - In the implementation block
@property (assign,nonatomic) CGRect animatedViewFrameBeforeAnimation;                 //@synthesize animatedViewFrameBeforeAnimation=_animatedViewFrameBeforeAnimation - In the implementation block
@property (assign,nonatomic) BOOL draggableViewShownOnPresentation;                   //@synthesize draggableViewShownOnPresentation=_draggableViewShownOnPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)startY;
-(void)willAnimatePresentation;
-(void)willAnimateDismissal;
-(id)animationContextForTopToBottomAnimationPresentationWithTransitionContext:(id)arg1 ;
-(id)animationContextForTopToBottomAnimationDismissalWithTransitionContext:(id)arg1 ;
-(id)animationContextForBottomToTopAnimationPresentationWithTransitionContext:(id)arg1 ;
-(id)animationContextForBottomToTopAnimationDismissalWithTransitionContext:(id)arg1 ;
-(UIView *)draggableView;
-(void)setDraggableViewEndFrameAfterAnimation:(CGRect)arg1 ;
-(void)setDraggableViewShownOnPresentation:(BOOL)arg1 ;
-(BOOL)removeDraggableViewAnimationIfInvalidForAnimationContext:(id)arg1 ;
-(void)setAnimatedViewFrameBeforeAnimation:(CGRect)arg1 ;
-(id)animationContextForRestoringAnimationToSavedState:(id)arg1 ;
-(BOOL)draggableViewShownOnPresentation;
-(CGRect)draggableViewEndFrameAfterAnimation;
-(CGRect)animatedViewFrameBeforeAnimation;
-(void)setStartY:(double)arg1 ;
-(void)setDraggableView:(UIView *)arg1 ;
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
-(BOOL)isPresenting;
@end
