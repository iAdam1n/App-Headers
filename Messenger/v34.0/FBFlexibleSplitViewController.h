/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>

@protocol FBFlexibleSplitViewControllerDelegate;
@class NSMutableSet, UIColor, UIViewController, UIView;

@interface FBFlexibleSplitViewController : UIViewController {

	NSMutableSet* _visibleViewControllers;
	UIColor* _defaultBackgroundColor;
	BOOL _headerViewHidden;
	BOOL _appearing;
	CGSize _previousViewSize;
	BOOL _hasDivider;
	BOOL _showColoredStatusBar;
	BOOL _visible;
	int _type;
	int _expandPolicy;
	UIViewController* _leftViewController;
	UIViewController* _rightViewController;
	UIView* _headerView;
	double _dividerExtensionHeight;
	double _fixedControllerWidthForPortrait;
	double _fixedControllerWidthForLandscape;
	double _flexibleControllerWidthForPortrait;
	double _flexibleControllerWidthForLandscape;
	UIColor* _statusBarColor;
	UIColor* _leftContainerBackgroundColor;
	UIColor* _rightContainerBackgroundColor;
	id<FBFlexibleSplitViewControllerDelegate> _delegate;
	/*^block*/id _appearingCompletion;
	/*^block*/id _disappearingCompletion;
	/*^block*/id _rotatingCompletion;
	NSMutableSet* _appearingViewControllers;
	NSMutableSet* _disappearingViewControllers;
	NSMutableSet* _rotatingViewControllers;

}

@property (nonatomic,retain) UIViewController * leftViewController;                                  //@synthesize leftViewController=_leftViewController - In the implementation block
@property (nonatomic,retain) UIViewController * rightViewController;                                 //@synthesize rightViewController=_rightViewController - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                    //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) int type;                                                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double dividerExtensionHeight;                                          //@synthesize dividerExtensionHeight=_dividerExtensionHeight - In the implementation block
@property (assign,nonatomic) BOOL hasDivider;                                                        //@synthesize hasDivider=_hasDivider - In the implementation block
@property (assign,nonatomic) int expandPolicy;                                                       //@synthesize expandPolicy=_expandPolicy - In the implementation block
@property (assign,nonatomic) double fixedControllerWidthForPortrait;                                 //@synthesize fixedControllerWidthForPortrait=_fixedControllerWidthForPortrait - In the implementation block
@property (assign,nonatomic) double fixedControllerWidthForLandscape;                                //@synthesize fixedControllerWidthForLandscape=_fixedControllerWidthForLandscape - In the implementation block
@property (assign,nonatomic) double flexibleControllerWidthForPortrait;                              //@synthesize flexibleControllerWidthForPortrait=_flexibleControllerWidthForPortrait - In the implementation block
@property (assign,nonatomic) double flexibleControllerWidthForLandscape;                             //@synthesize flexibleControllerWidthForLandscape=_flexibleControllerWidthForLandscape - In the implementation block
@property (assign,nonatomic) BOOL showColoredStatusBar;                                              //@synthesize showColoredStatusBar=_showColoredStatusBar - In the implementation block
@property (nonatomic,retain) UIColor * statusBarColor;                                               //@synthesize statusBarColor=_statusBarColor - In the implementation block
@property (nonatomic,retain) UIColor * leftContainerBackgroundColor;                                 //@synthesize leftContainerBackgroundColor=_leftContainerBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * rightContainerBackgroundColor;                                //@synthesize rightContainerBackgroundColor=_rightContainerBackgroundColor - In the implementation block
@property (assign,nonatomic,__weak) id<FBFlexibleSplitViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL visible;                                                           //@synthesize visible=_visible - In the implementation block
@property (nonatomic,copy) id appearingCompletion;                                                   //@synthesize appearingCompletion=_appearingCompletion - In the implementation block
@property (nonatomic,copy) id disappearingCompletion;                                                //@synthesize disappearingCompletion=_disappearingCompletion - In the implementation block
@property (nonatomic,copy) id rotatingCompletion;                                                    //@synthesize rotatingCompletion=_rotatingCompletion - In the implementation block
@property (nonatomic,retain) NSMutableSet * appearingViewControllers;                                //@synthesize appearingViewControllers=_appearingViewControllers - In the implementation block
@property (nonatomic,retain) NSMutableSet * disappearingViewControllers;                             //@synthesize disappearingViewControllers=_disappearingViewControllers - In the implementation block
@property (nonatomic,retain) NSMutableSet * rotatingViewControllers;                                 //@synthesize rotatingViewControllers=_rotatingViewControllers - In the implementation block
-(id)analyticsPresentedViewController;
-(UIViewController *)leftViewController;
-(UIViewController *)rightViewController;
-(void)setLeftViewController:(UIViewController *)arg1 ;
-(void)setRightViewController:(UIViewController *)arg1 ;
-(UIColor *)statusBarColor;
-(void)setShowColoredStatusBar:(BOOL)arg1 ;
-(void)setDividerExtensionHeight:(double)arg1 ;
-(void)setHasDivider:(BOOL)arg1 ;
-(void)setStatusBarColor:(UIColor *)arg1 ;
-(double)dividerExtensionHeight;
-(BOOL)hasDivider;
-(BOOL)showColoredStatusBar;
-(id)_flexibleSplitView;
-(void)_hideViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)_newVisibleViewControllersForOrientation:(long long)arg1 ;
-(void)_showViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateFixedControllerWidthForContainer:(id)arg1 forOrientation:(long long)arg2 ;
-(void)_updateFlexibleControllerWidthForContainer:(id)arg1 forOrientation:(long long)arg2 ;
-(void)setExpandPolicy:(int)arg1 animated:(BOOL)arg2 animationDuration:(double)arg3 ;
-(void)_applyExpandPolicyForOrientation:(long long)arg1 animated:(BOOL)arg2 duration:(double)arg3 ;
-(BOOL)fb_deferSwipeToOpenLeftNav;
-(BOOL)fb_swipeToOpenLeftNav;
-(BOOL)_expandFlexibleControllerForOrientation:(long long)arg1 ;
-(BOOL)_slideFlexibleControllerForOrientation:(long long)arg1 ;
-(void)_notifyDelegateOfSizeChangeIfNeeded;
-(void)setAppearingCompletion:(id)arg1 ;
-(void)setDisappearingCompletion:(id)arg1 ;
-(void)setRotatingCompletion:(id)arg1 ;
-(void)setRotatingViewControllers:(NSMutableSet *)arg1 ;
-(void)_expandFlexibleController:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3 ;
-(BOOL)_flexibleControllerExpanded;
-(void)_addViewControllersForOrientation:(long long)arg1 toSet:(id)arg2 ;
-(void)setHeaderViewHidden:(BOOL)arg1 alongsideTransition:(id)arg2 animation:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setFixedControllerWidthForPortrait:(double)arg1 ;
-(void)setFixedControllerWidthForLandscape:(double)arg1 ;
-(void)setFlexibleControllerWidthForPortrait:(double)arg1 ;
-(void)setFlexibleControllerWidthForLandscape:(double)arg1 ;
-(void)setExpandPolicy:(int)arg1 ;
-(void)setLeftContainerBackgroundColor:(UIColor *)arg1 ;
-(void)setRightContainerBackgroundColor:(UIColor *)arg1 ;
-(BOOL)fb_showNavBarSearchField;
-(void)setExpandFlexibleController:(BOOL)arg1 ;
-(int)expandPolicy;
-(double)fixedControllerWidthForPortrait;
-(double)fixedControllerWidthForLandscape;
-(double)flexibleControllerWidthForPortrait;
-(double)flexibleControllerWidthForLandscape;
-(UIColor *)leftContainerBackgroundColor;
-(UIColor *)rightContainerBackgroundColor;
-(id)appearingCompletion;
-(id)disappearingCompletion;
-(id)rotatingCompletion;
-(NSMutableSet *)appearingViewControllers;
-(void)setAppearingViewControllers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)disappearingViewControllers;
-(void)setDisappearingViewControllers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)rotatingViewControllers;
-(void)setDelegate:(id<FBFlexibleSplitViewControllerDelegate>)arg1 ;
-(id)init;
-(id<FBFlexibleSplitViewControllerDelegate>)delegate;
-(void)setType:(int)arg1 ;
-(int)type;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)setVisible:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(BOOL)visible;
-(void)setHeaderViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

