/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBDirectionalPanGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBScrollViewSwipeBasedDismissalManagerDelegate, FBKeyboardPresenting;
@class UIView, UIScrollView, FBSwipeBasedDismissalScrollViewDelegate, FBScrollKeyboardController, FBDirectionalPanGestureRecognizer, NSDate, UIGestureRecognizer, NSString;

@interface FBScrollViewSwipeBasedDismissalManager : NSObject <FBDirectionalPanGestureRecognizerDelegate, UIScrollViewDelegate> {

	UIView* _containerView;
	UIScrollView* _scrollView;
	unsigned long long _bounceMode;
	FBSwipeBasedDismissalScrollViewDelegate* _scrollViewDelegate;
	FBScrollKeyboardController* _keyboardController;
	FBDirectionalPanGestureRecognizer* _scrollViewDismissGestureRecognizer;
	FBDirectionalPanGestureRecognizer* _containerViewDismissGestureRecognizer;
	double _yPositionOfContainerViewBeforeGesture;
	double _scrollViewVerticalContentOffsetBeforeGesture;
	double _yPositionOfKeyboardViewBeforeGesture;
	NSDate* _lastDragInitiatedScrollActionTime;
	double _contentOffsetAtLastDragInitiatedScrollAction;
	double _scrollVelocityAtLastDragInitiatedScrollAction;
	NSDate* _lastDragInitiatedScrollStartTime;
	BOOL _scrollViewIsMovingDueToDragging;
	BOOL _wasScrolledToTopAtGestureStart;
	BOOL _wasScrolledToBottomAtGestureStart;
	BOOL _dismissalAllowed;
	BOOL _wasScrollTransferredToContainerViewPositioning;
	BOOL _delegateRespondsToProgressUpdates;
	double _dismissalActivationTranslationThreshold;
	double _dismissalActivationVelocityThreshold;
	double _translationRubberBandDampeningFactor;
	double _containerViewTranslationResetSpringBounciness;
	double _containerViewTranslationResetSpringSpeed;
	double _containerViewTranslationResetSpringThreshold;
	BOOL _enabled;
	BOOL _isMovingViews;
	BOOL _allowUserCancelByDraggingInOppositeDirection;
	id<FBScrollViewSwipeBasedDismissalManagerDelegate> _delegate;
	id<FBKeyboardPresenting> _keyboardPresenter;

}

@property (assign,nonatomic,__weak) id<FBScrollViewSwipeBasedDismissalManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL isMovingViews;                                                            //@synthesize isMovingViews=_isMovingViews - In the implementation block
@property (assign,nonatomic) BOOL allowUserCancelByDraggingInOppositeDirection;                               //@synthesize allowUserCancelByDraggingInOppositeDirection=_allowUserCancelByDraggingInOppositeDirection - In the implementation block
@property (nonatomic,retain) id<FBKeyboardPresenting> keyboardPresenter;                                      //@synthesize keyboardPresenter=_keyboardPresenter - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * swipeGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * containerViewSwipeGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllowUserCancelByDraggingInOppositeDirection:(BOOL)arg1 ;
-(id)initWithContainerView:(id)arg1 scrollView:(id)arg2 bounceMode:(unsigned long long)arg3 ;
-(UIGestureRecognizer *)swipeGestureRecognizer;
-(UIGestureRecognizer *)containerViewSwipeGestureRecognizer;
-(void)_processScrollViewGesture:(id)arg1 ;
-(void)_processHandleViewGesture:(id)arg1 ;
-(id<FBKeyboardPresenting>)keyboardPresenter;
-(void)setKeyboardPresenter:(id<FBKeyboardPresenting>)arg1 ;
-(void)setIsMovingViews:(BOOL)arg1 ;
-(void)_bounceContainerViewWithVerticalVelocity:(double)arg1 ;
-(BOOL)isMovingViews;
-(void)_prepareInitialGestureState;
-(void)_animateContainerViewResetWithVerticalVelocity:(double)arg1 ;
-(void)_willScrollTransferToContainerViewPositioning;
-(double)_rubberBandTranslationForLinearTranslation:(double)arg1 ;
-(void)_applyContainerViewTranslation:(double)arg1 ;
-(void)_processGestureEndForRecognizer:(id)arg1 allowVelocityTriggeredDismissal:(BOOL)arg2 ;
-(void)_forceResetContainerView;
-(void)_processScrollAction;
-(void)_processScrollStop;
-(BOOL)allowUserCancelByDraggingInOppositeDirection;
-(BOOL)enabled;
-(void)setDelegate:(id<FBScrollViewSwipeBasedDismissalManagerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<FBScrollViewSwipeBasedDismissalManagerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)requireGestureRecognizerToFail:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
@end
