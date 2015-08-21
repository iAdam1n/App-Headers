/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>
#import <Twitter/TFXSpringAnimation2DObserver.h>
#import <Twitter/TFNDockableViewGestureHandlerProtocol.h>

@protocol TFNDockableViewGestureHandlerDelegate, TFNDockableView;
@class UITapGestureRecognizer, TFXSpringAnimator2D, TFXSpringAnimator, UIView, UIImageView, NSString;

@interface TFNDockableViewGestureHandler : UIPanGestureRecognizer <TFXSpringAnimation2DObserver, TFNDockableViewGestureHandlerProtocol> {

	id<TFNDockableViewGestureHandlerDelegate> _delegate;
	UITapGestureRecognizer* _dockedTapGestureRecognizer;
	TFXSpringAnimator2D* _positionSpring;
	TFXSpringAnimator* _scaleFactorSpring;
	TFXSpringAnimator2D* _positionDismissSpring;
	TFXSpringAnimator* _dismissIconPositionSpring;
	TFXSpringAnimator* _dismissIconHighlightSpring;
	UIView*<TFNDockableView> _dockableView;
	long long _currentIntention;
	/*^block*/id _completionHandler;
	UIImageView* _dismissIcon;

}

@property (assign,nonatomic,__weak) UIView*<TFNDockableView> dockableView;              //@synthesize dockableView=_dockableView - In the implementation block
@property (assign,nonatomic) long long currentIntention;                                //@synthesize currentIntention=_currentIntention - In the implementation block
@property (nonatomic,copy) id completionHandler;                                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UIImageView * dismissIcon;                                 //@synthesize dismissIcon=_dismissIcon - In the implementation block
@property (nonatomic,retain) TFXSpringAnimator * scaleFactorSpring;                     //@synthesize scaleFactorSpring=_scaleFactorSpring - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long dockState; 
+(BOOL)implicitAnimationsEnabled;
+(void)setImplicitAnimationsEnabled:(BOOL)arg1 ;
-(void)tfx_animationDidUpdate:(id)arg1 ;
-(void)tfx_animationDidStop:(id)arg1 ;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(UIView*<TFNDockableView>)dockableView;
-(void)setDockedDockableViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dockDockableViewWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fullscreenDockableViewWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)dockState;
-(void)_dockableViewDidPan:(id)arg1 ;
-(void)_notifyWillAnimateToDismissViaGesture:(BOOL)arg1 ;
-(void)dismissWithGestureVelocity:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyWillAnimateToDockViaGesture:(BOOL)arg1 ;
-(void)_notifyWillAnimateToFullscreenViaGesture:(BOOL)arg1 ;
-(CGRect)dockBoundsInFullscreenFrame;
-(void)_fullscreenDockableViewViaTap;
-(BOOL)_isInDockableViewInDismissZone;
-(void)setDockableView:(UIView*<TFNDockableView>)arg1 ;
-(long long)currentIntention;
-(void)didDismiss;
-(UIImageView *)dismissIcon;
-(void)setDismissIconHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(TFXSpringAnimator *)scaleFactorSpring;
-(void)restoreToFullscreenWithGestureVelocity:(CGPoint)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handlePanWithGestureRecognizerState:(long long)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)currentIntentionDidChangeAnimated:(BOOL)arg1 ;
-(void)dockableViewPositionDidStabilize;
-(void)_setupDismissIcon;
-(void)_createAnimators;
-(void)restoreToDockWithGestureVelocity:(CGPoint)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCurrentIntention:(long long)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_centerPositionForDockableViewWhenDocked;
-(void)_updateCurrentIntentionAnimated:(BOOL)arg1 ;
-(BOOL)_shouldDismissWithGestureVelocity:(CGPoint)arg1 ;
-(void)_setDismissIconHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)_visibleContentFrameForDockableView;
-(void)setCurrentIntention:(long long)arg1 ;
-(void)setDismissIcon:(UIImageView *)arg1 ;
-(void)setScaleFactorSpring:(TFXSpringAnimator *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

