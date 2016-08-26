/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol JMActionMenuViewDelegate;
@class JMActionMenuBarItemView, JMActionMenuTrackView, JMActionMenuCloseButton, JMActionMenuCustomiseButton, JMActionMenuHandSwitchView, UIImageView, JMActionMenuEditViewController, JMActionMenuFastSelectHoverIndicatorView, JMActionMenuBottomMaskingView, JMActionMenuNode, JMActionMenuThemeConfiguration, JMActionMenuHost, NSString;

@interface JMActionMenuView : UIView <UIGestureRecognizerDelegate> {

	BOOL _shouldShowStatusBarAfterMenuDismiss;
	BOOL _isTransitioningToEditScreen;
	BOOL _isShowingTrainingBadges;
	JMActionMenuBarItemView* _barItemView;
	id<JMActionMenuViewDelegate> _delegate;
	JMActionMenuTrackView* _trackView;
	JMActionMenuCloseButton* _closeButton;
	JMActionMenuCustomiseButton* _customiseButton;
	JMActionMenuHandSwitchView* _handSwitchView;
	UIImageView* _frostedUnderlayView;
	JMActionMenuEditViewController* _editViewController;
	JMActionMenuFastSelectHoverIndicatorView* _fastSelectHoverTopIndicatorView;
	JMActionMenuFastSelectHoverIndicatorView* _fastSelectHoverBottomIndicatorView;
	JMActionMenuBottomMaskingView* _bottomMaskingViewForLeftHandMode;
	JMActionMenuNode* _nodeCurrentlyTrackedUnderFinger;
	double _panGestureLastChangeTimestamp;
	CGPoint _panGestureStartLocation;

}

@property (retain) JMActionMenuBarItemView * barItemView;                                                      //@synthesize barItemView=_barItemView - In the implementation block
@property (__weak) id<JMActionMenuViewDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (retain) JMActionMenuTrackView * trackView;                                                          //@synthesize trackView=_trackView - In the implementation block
@property (retain) JMActionMenuCloseButton * closeButton;                                                      //@synthesize closeButton=_closeButton - In the implementation block
@property (retain) JMActionMenuCustomiseButton * customiseButton;                                              //@synthesize customiseButton=_customiseButton - In the implementation block
@property (retain) JMActionMenuHandSwitchView * handSwitchView;                                                //@synthesize handSwitchView=_handSwitchView - In the implementation block
@property (retain) UIImageView * frostedUnderlayView;                                                          //@synthesize frostedUnderlayView=_frostedUnderlayView - In the implementation block
@property (retain) JMActionMenuEditViewController * editViewController;                                        //@synthesize editViewController=_editViewController - In the implementation block
@property (retain) JMActionMenuFastSelectHoverIndicatorView * fastSelectHoverTopIndicatorView;                 //@synthesize fastSelectHoverTopIndicatorView=_fastSelectHoverTopIndicatorView - In the implementation block
@property (retain) JMActionMenuFastSelectHoverIndicatorView * fastSelectHoverBottomIndicatorView;              //@synthesize fastSelectHoverBottomIndicatorView=_fastSelectHoverBottomIndicatorView - In the implementation block
@property (retain) JMActionMenuBottomMaskingView * bottomMaskingViewForLeftHandMode;                           //@synthesize bottomMaskingViewForLeftHandMode=_bottomMaskingViewForLeftHandMode - In the implementation block
@property (__weak) JMActionMenuNode * nodeCurrentlyTrackedUnderFinger;                                         //@synthesize nodeCurrentlyTrackedUnderFinger=_nodeCurrentlyTrackedUnderFinger - In the implementation block
@property (assign) CGPoint panGestureStartLocation;                                                            //@synthesize panGestureStartLocation=_panGestureStartLocation - In the implementation block
@property (assign) double panGestureLastChangeTimestamp;                                                       //@synthesize panGestureLastChangeTimestamp=_panGestureLastChangeTimestamp - In the implementation block
@property (assign) BOOL shouldShowStatusBarAfterMenuDismiss;                                                   //@synthesize shouldShowStatusBarAfterMenuDismiss=_shouldShowStatusBarAfterMenuDismiss - In the implementation block
@property (assign) BOOL isTransitioningToEditScreen;                                                           //@synthesize isTransitioningToEditScreen=_isTransitioningToEditScreen - In the implementation block
@property (readonly) JMActionMenuThemeConfiguration * themeConfiguration; 
@property (readonly) JMActionMenuHost * presentingHost; 
@property (assign) BOOL isShowingTrainingBadges;                                                               //@synthesize isShowingTrainingBadges=_isShowingTrainingBadges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didPan:(id)arg1 ;
-(void)didTap:(id)arg1 ;
-(JMActionMenuThemeConfiguration *)themeConfiguration;
-(void)setTrackView:(JMActionMenuTrackView *)arg1 ;
-(JMActionMenuTrackView *)trackView;
-(JMActionMenuBarItemView *)barItemView;
-(void)setBadgesNeedUpdate;
-(void)setFrostedUnderlayView:(UIImageView *)arg1 ;
-(UIImageView *)frostedUnderlayView;
-(void)dismissMenu;
-(void)setBottomMaskingViewForLeftHandMode:(JMActionMenuBottomMaskingView *)arg1 ;
-(JMActionMenuBottomMaskingView *)bottomMaskingViewForLeftHandMode;
-(void)setCustomiseButton:(JMActionMenuCustomiseButton *)arg1 ;
-(JMActionMenuCustomiseButton *)customiseButton;
-(void)showEditScreen;
-(void)setHandSwitchView:(JMActionMenuHandSwitchView *)arg1 ;
-(JMActionMenuHandSwitchView *)handSwitchView;
-(void)didSwitchHands;
-(void)setFastSelectHoverTopIndicatorView:(JMActionMenuFastSelectHoverIndicatorView *)arg1 ;
-(JMActionMenuFastSelectHoverIndicatorView *)fastSelectHoverTopIndicatorView;
-(void)setFastSelectHoverBottomIndicatorView:(JMActionMenuFastSelectHoverIndicatorView *)arg1 ;
-(JMActionMenuFastSelectHoverIndicatorView *)fastSelectHoverBottomIndicatorView;
-(void)createBarItemView;
-(void)updateCloseButtonAngleAndBackgroundMask;
-(void)layoutActionMenu;
-(void)setBarItemView:(JMActionMenuBarItemView *)arg1 ;
-(void)revealMenuForFastSelect;
-(JMActionMenuNode *)nodeCurrentlyTrackedUnderFinger;
-(void)revealMenuForScrolling;
-(void)updateBarItemViewAnimated:(BOOL)arg1 ;
-(BOOL)shouldShowStatusBarAfterMenuDismiss;
-(void)attachMenuToViewHierarchy;
-(void)didBecomeVisible;
-(void)setShouldShowStatusBarAfterMenuDismiss:(BOOL)arg1 ;
-(void)updateFrostedUnderlayUsingHierarchySnapshotImage:(id)arg1 ;
-(void)setPanGestureStartLocation:(CGPoint)arg1 ;
-(void)setPanGestureLastChangeTimestamp:(double)arg1 ;
-(CGPoint)panGestureStartLocation;
-(BOOL)handlePanOverCustomiseButtonIfNecessary:(id)arg1 ;
-(double)panGestureLastChangeTimestamp;
-(JMActionMenuHost *)presentingHost;
-(id)orderedNodesToDisplay;
-(void)prepareNodeViewsIfNecessary;
-(BOOL)isTransitioningToEditScreen;
-(void)executeActionsForActivatedNode:(id)arg1 ;
-(void)setNodeCurrentlyTrackedUnderFinger:(JMActionMenuNode *)arg1 ;
-(id)barButtonItemForActionMenuToggle;
-(void)userDidPresentActionMenuView;
-(void)setIsTransitioningToEditScreen:(BOOL)arg1 ;
-(void)attachEditScreenToViewHierarchyDoAfterEditingComplete:(/*^block*/id)arg1 ;
-(void)setIsShowingTrainingBadges:(BOOL)arg1 ;
-(BOOL)isShowingTrainingBadges;
-(void)i_showTrainingBadgesNowAnimated:(BOOL)arg1 ;
-(void)didActivateNodeView:(id)arg1 ;
-(void)didCancelHoverDuringFastSelectOverNodeView:(id)arg1 ;
-(void)didHoverDuringFastSelectOverNodeView:(id)arg1 ;
-(id)generateRightBarButtonItemsForActionMenuToggle;
-(void)showTrainingBadgesIfNecessaryAnimated:(BOOL)arg1 ;
-(void)hideTrainingBadgesIfNecessaryAnimated:(BOOL)arg1 ;
-(JMActionMenuEditViewController *)editViewController;
-(void)setEditViewController:(JMActionMenuEditViewController *)arg1 ;
-(void)setDelegate:(id<JMActionMenuViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<JMActionMenuViewDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)present;
-(void)dismissMenuAnimated:(BOOL)arg1 ;
-(JMActionMenuCloseButton *)closeButton;
-(void)setCloseButton:(JMActionMenuCloseButton *)arg1 ;
@end
