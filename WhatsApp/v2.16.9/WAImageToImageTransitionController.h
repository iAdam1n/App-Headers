/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIView, NSMutableDictionary, NSString;

@interface WAImageToImageTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {

	id<UIViewControllerContextTransitioning> _transitionContext;
	UIView* _animatedFromView;
	UIView* _animatedToView;
	CGPoint _animateFromCenter;
	CGPoint _animateToCenter;
	double _animationScaleFactor;
	UIView* _navBarSnapshot;
	BOOL _useSpringAnimation;
	NSMutableDictionary* _context;
	double _animationDuration;

}

@property (nonatomic,readonly) NSMutableDictionary * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double animationDuration;                     //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) BOOL useSpringAnimation;                      //@synthesize useSpringAnimation=_useSpringAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionControllerForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)interactivePopTransitionForAnimator:(id)arg1 ;
-(void)animateInteractiveTransition;
-(void)animateNonInteractiveTransition;
-(id)flattenTransitionAnimationViewIfNeeded:(id)arg1 ;
-(double)scaleFactorFromView:(id)arg1 toView:(id)arg2 ;
-(BOOL)useSpringAnimation;
-(void)performCompletedTransitionAnimationWithDuration:(double)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)performCancelledTransitionAnimationWithDuration:(double)arg1 ;
-(void)setUseSpringAnimation:(BOOL)arg1 ;
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(NSMutableDictionary *)context;
-(double)animationDuration;
@end

