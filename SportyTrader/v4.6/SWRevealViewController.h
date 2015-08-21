/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:21 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SWRevealViewControllerDelegate;
@class SWRevealView, UIPanGestureRecognizer, UITapGestureRecognizer, NSMutableArray, UIViewController, NSString;

@interface SWRevealViewController : UIViewController <UIGestureRecognizerDelegate> {

	SWRevealView* _contentView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	int _frontViewPosition;
	int _rearViewPosition;
	int _rightViewPosition;
	int _panInitialFrontPosition;
	NSMutableArray* _animationQueue;
	BOOL _userInteractionStore;
	BOOL _bounceBackOnOverdraw;
	BOOL _bounceBackOnLeftOverdraw;
	BOOL _stableDragOnOverdraw;
	BOOL _stableDragOnLeftOverdraw;
	BOOL _presentFrontViewHierarchically;
	UIViewController* _rearViewController;
	UIViewController* _rightViewController;
	UIViewController* _frontViewController;
	double _rearViewRevealWidth;
	double _rightViewRevealWidth;
	double _rearViewRevealOverdraw;
	double _rightViewRevealOverdraw;
	double _rearViewRevealDisplacement;
	double _rightViewRevealDisplacement;
	double _draggableBorderWidth;
	double _quickFlickVelocity;
	double _toggleAnimationDuration;
	double _frontViewShadowRadius;
	double _frontViewShadowOpacity;
	id<SWRevealViewControllerDelegate> _delegate;
	CGSize _frontViewShadowOffset;

}

@property (nonatomic,retain) UIViewController * rearViewController;                           //@synthesize rearViewController=_rearViewController - In the implementation block
@property (nonatomic,retain) UIViewController * rightViewController;                          //@synthesize rightViewController=_rightViewController - In the implementation block
@property (nonatomic,retain) UIViewController * frontViewController;                          //@synthesize frontViewController=_frontViewController - In the implementation block
@property (assign,nonatomic) int frontViewPosition;                                           //@synthesize frontViewPosition=_frontViewPosition - In the implementation block
@property (assign,nonatomic) double rearViewRevealWidth;                                      //@synthesize rearViewRevealWidth=_rearViewRevealWidth - In the implementation block
@property (assign,nonatomic) double rightViewRevealWidth;                                     //@synthesize rightViewRevealWidth=_rightViewRevealWidth - In the implementation block
@property (assign,nonatomic) double rearViewRevealOverdraw;                                   //@synthesize rearViewRevealOverdraw=_rearViewRevealOverdraw - In the implementation block
@property (assign,nonatomic) double rightViewRevealOverdraw;                                  //@synthesize rightViewRevealOverdraw=_rightViewRevealOverdraw - In the implementation block
@property (assign,nonatomic) double rearViewRevealDisplacement;                               //@synthesize rearViewRevealDisplacement=_rearViewRevealDisplacement - In the implementation block
@property (assign,nonatomic) double rightViewRevealDisplacement;                              //@synthesize rightViewRevealDisplacement=_rightViewRevealDisplacement - In the implementation block
@property (assign,nonatomic) double draggableBorderWidth;                                     //@synthesize draggableBorderWidth=_draggableBorderWidth - In the implementation block
@property (assign,nonatomic) BOOL bounceBackOnOverdraw;                                       //@synthesize bounceBackOnOverdraw=_bounceBackOnOverdraw - In the implementation block
@property (assign,nonatomic) BOOL bounceBackOnLeftOverdraw;                                   //@synthesize bounceBackOnLeftOverdraw=_bounceBackOnLeftOverdraw - In the implementation block
@property (assign,nonatomic) BOOL stableDragOnOverdraw;                                       //@synthesize stableDragOnOverdraw=_stableDragOnOverdraw - In the implementation block
@property (assign,nonatomic) BOOL stableDragOnLeftOverdraw;                                   //@synthesize stableDragOnLeftOverdraw=_stableDragOnLeftOverdraw - In the implementation block
@property (assign,nonatomic) BOOL presentFrontViewHierarchically;                             //@synthesize presentFrontViewHierarchically=_presentFrontViewHierarchically - In the implementation block
@property (assign,nonatomic) double quickFlickVelocity;                                       //@synthesize quickFlickVelocity=_quickFlickVelocity - In the implementation block
@property (assign,nonatomic) double toggleAnimationDuration;                                  //@synthesize toggleAnimationDuration=_toggleAnimationDuration - In the implementation block
@property (assign,nonatomic) double frontViewShadowRadius;                                    //@synthesize frontViewShadowRadius=_frontViewShadowRadius - In the implementation block
@property (assign,nonatomic) CGSize frontViewShadowOffset;                                    //@synthesize frontViewShadowOffset=_frontViewShadowOffset - In the implementation block
@property (assign,nonatomic) double frontViewShadowOpacity;                                   //@synthesize frontViewShadowOpacity=_frontViewShadowOpacity - In the implementation block
@property (assign,nonatomic,__weak) id<SWRevealViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRearViewController:(id)arg1 frontViewController:(id)arg2 ;
-(void)setRearViewRevealWidth:(double)arg1 ;
-(void)setRearViewRevealOverdraw:(double)arg1 ;
-(UIViewController *)rearViewController;
-(void)revealToggle:(id)arg1 ;
-(double)frontViewShadowOpacity;
-(CGSize)frontViewShadowOffset;
-(double)frontViewShadowRadius;
-(BOOL)presentFrontViewHierarchically;
-(int)frontViewPosition;
-(void)_getRevealWidth:(double*)arg1 revealOverDraw:(double*)arg2 forSymetry:(int)arg3 ;
-(void)_getAdjustedFrontViewPosition:(int*)arg1 forSymetry:(int)arg2 ;
-(double)rearViewRevealWidth;
-(double)rearViewRevealDisplacement;
-(double)rearViewRevealOverdraw;
-(double)rightViewRevealWidth;
-(double)rightViewRevealDisplacement;
-(double)rightViewRevealOverdraw;
-(void)_getBounceBack:(BOOL*)arg1 pStableDrag:(BOOL*)arg2 forSymetry:(int)arg3 ;
-(void)_initDefaultProperties;
-(void)_setRearViewController:(id)arg1 ;
-(void)_setFrontViewController:(id)arg1 ;
-(void)_setRightViewController:(id)arg1 ;
-(void)_setFrontViewPosition:(int)arg1 withDuration:(double)arg2 ;
-(void)setFrontViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dispatchSetFrontViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dispatchSetRearViewController:(id)arg1 ;
-(void)_dispatchSetRightViewController:(id)arg1 ;
-(void)setFrontViewPosition:(int)arg1 animated:(BOOL)arg2 ;
-(void)_dispatchSetFrontViewPosition:(int)arg1 animated:(BOOL)arg2 ;
-(void)_handleRevealGesture:(id)arg1 ;
-(void)revealToggleAnimated:(BOOL)arg1 ;
-(void)rightRevealToggleAnimated:(BOOL)arg1 ;
-(void)_getDragLocation:(double*)arg1 progress:(double*)arg2 ;
-(BOOL)_panGestureShouldBegin;
-(BOOL)_tapGestureShouldBegin;
-(void)_handleRevealGestureStateBeganWithRecognizer:(id)arg1 ;
-(void)_handleRevealGestureStateChangedWithRecognizer:(id)arg1 ;
-(void)_handleRevealGestureStateEndedWithRecognizer:(id)arg1 ;
-(void)_handleRevealGestureStateCancelledWithRecognizer:(id)arg1 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 ;
-(void)_disableUserInteraction;
-(void)_notifyPanGestureBegan;
-(/*^block*/id)_rightViewDeploymentForNewFrontViewPosition:(int)arg1 ;
-(/*^block*/id)_rearViewDeploymentForNewFrontViewPosition:(int)arg1 ;
-(void)_notifyPanGestureMoved;
-(void)_restoreUserInteraction;
-(void)_notifyPanGestureEnded;
-(void)_dequeue;
-(/*^block*/id)_frontViewDeploymentForNewFrontViewPosition:(int)arg1 ;
-(/*^block*/id)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 inView:(id)arg3 ;
-(/*^block*/id)_deploymentForViewController:(id)arg1 inView:(id)arg2 appear:(BOOL)arg3 disappear:(BOOL)arg4 ;
-(/*^block*/id)_deployForViewController:(id)arg1 inView:(id)arg2 ;
-(/*^block*/id)_undeployForViewController:(id)arg1 ;
-(void)setRearViewController:(UIViewController *)arg1 ;
-(void)setRightViewController:(UIViewController *)arg1 ;
-(void)setFrontViewPosition:(int)arg1 ;
-(void)rightRevealToggle:(id)arg1 ;
-(UIViewController *)rightViewController;
-(void)setRightViewRevealWidth:(double)arg1 ;
-(void)setRightViewRevealOverdraw:(double)arg1 ;
-(void)setRearViewRevealDisplacement:(double)arg1 ;
-(void)setRightViewRevealDisplacement:(double)arg1 ;
-(double)draggableBorderWidth;
-(void)setDraggableBorderWidth:(double)arg1 ;
-(BOOL)bounceBackOnOverdraw;
-(void)setBounceBackOnOverdraw:(BOOL)arg1 ;
-(BOOL)bounceBackOnLeftOverdraw;
-(void)setBounceBackOnLeftOverdraw:(BOOL)arg1 ;
-(BOOL)stableDragOnOverdraw;
-(void)setStableDragOnOverdraw:(BOOL)arg1 ;
-(BOOL)stableDragOnLeftOverdraw;
-(void)setStableDragOnLeftOverdraw:(BOOL)arg1 ;
-(void)setPresentFrontViewHierarchically:(BOOL)arg1 ;
-(double)quickFlickVelocity;
-(void)setQuickFlickVelocity:(double)arg1 ;
-(double)toggleAnimationDuration;
-(void)setToggleAnimationDuration:(double)arg1 ;
-(void)setFrontViewShadowRadius:(double)arg1 ;
-(void)setFrontViewShadowOffset:(CGSize)arg1 ;
-(void)setFrontViewShadowOpacity:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SWRevealViewControllerDelegate>)arg1 ;
-(id)init;
-(id<SWRevealViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_handleTapGesture:(id)arg1 ;
-(id)panGestureRecognizer;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(id)tapGestureRecognizer;
-(void)setFrontViewController:(UIViewController *)arg1 ;
-(UIViewController *)frontViewController;
@end

