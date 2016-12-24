/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBVideoFromViewDelegate.h>
#import <Facebook/FBVideoOverlayPluginEventListener.h>
#import <Facebook/FBWatchAndMoreScrollingDelegate.h>
#import <Facebook/FBWatchAndMoreHeaderViewControllerDelegate.h>
#import <Facebook/FBWatchAndMoreContentViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Facebook/FBFullScreenVideoViewControlling.h>

@protocol FBWatchAndMoreHeaderControllingFBWatchAndMoreViewControllerDelegate, FBWatchAndMoreContentControllingFBWatchAndMoreViewControllerDelegate, FBVideoPresentingDelegate, FBScrollPositionModifyingController;
@class UIView, FBVideoViewManager, UIViewController, FBVideoViewManagerContext, FBMemFeedStory, FBMemVideo, FBVideoToolbox, FBVideoOverlayPluginView, NSArray, FBFontFoundry, FBWatchAndMoreFullScreenPresentationController, FBVideoPlayerEndScreenCallToActionPlugin, FBVideoPlayerPauseScreenCallToActionPlugin, UIScrollView, UIButton, FBMediaUFIBarController, NSString;

@interface FBWatchAndMoreViewControllerV2 : UIViewController <FBVideoFromViewDelegate, FBVideoOverlayPluginEventListener, FBWatchAndMoreScrollingDelegate, FBWatchAndMoreHeaderViewControllerDelegate, FBWatchAndMoreContentViewControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, FBFullScreenVideoViewControlling> {

	UIView* _videoContainerView;
	FBVideoViewManager* _viewManager;
	UIViewController*<FBWatchAndMoreHeaderControlling>*<FBWatchAndMoreViewControllerDelegate> _headerViewController;
	UIViewController*<FBWatchAndMoreContentControlling>*<FBWatchAndMoreViewControllerDelegate> _contentViewController;
	FBVideoViewManagerContext* _originalViewManagerContext;
	FBMemFeedStory* _story;
	FBMemVideo* _video;
	FBVideoToolbox* _videoToolbox;
	FBVideoOverlayPluginView* _overlayPluginView;
	unsigned long long _videoPlayerOptions;
	NSArray* _trackingCodes;
	FBFontFoundry* _fontFoundry;
	FBWatchAndMoreFullScreenPresentationController* _fullscreenPresentationController;
	BOOL _isDismissing;
	BOOL _enableHeader;
	unsigned long long _layoutType;
	unsigned long long _videoGestureType;
	double _videoPlayerAlpha;
	double _hiddenState;
	double _isManuallyPaused;
	FBVideoPlayerEndScreenCallToActionPlugin* _endScreenCallToActionPlugin;
	FBVideoPlayerPauseScreenCallToActionPlugin* _pauseScreenCallToActionPlugin;
	UIScrollView* _contentScrollView;
	UIButton* _dismissButton;
	BOOL _enableRotation;
	BOOL _didViewAppear;
	BOOL _preventAutoPlayIfManuallyPaused;
	id<FBVideoPresentingDelegate> _delegate;
	FBMediaUFIBarController* _ufiBarController;
	id<FBScrollPositionModifyingController> _containingScrollController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBVideoViewManager * viewManager;                                                       //@synthesize viewManager=_viewManager - In the implementation block
@property (assign,nonatomic) BOOL autoDismissWhenVideoFinishes; 
@property (nonatomic,readonly) BOOL canAutoAdvance; 
@property (nonatomic,readonly) FBMediaUFIBarController * ufiBarController;                                             //@synthesize ufiBarController=_ufiBarController - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoPresentingDelegate> fullscreenVideoDelegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<FBScrollPositionModifyingController> containingScrollController;              //@synthesize containingScrollController=_containingScrollController - In the implementation block
@property (assign,nonatomic) BOOL preventAutoPlayIfManuallyPaused;                                                     //@synthesize preventAutoPlayIfManuallyPaused=_preventAutoPlayIfManuallyPaused - In the implementation block
-(FBVideoViewManager *)viewManager;
-(void)videoDidManuallyPause;
-(void)videoDidManuallyResume;
-(CGRect)_videoFrame;
-(void)transitionManagerNeedsDismissal:(id)arg1 ;
-(id)transitionManagerNeedsMediaInfoForAnimation:(id)arg1 ;
-(unsigned long long)transitionManager:(id)arg1 preferredDismissalTransitionTypeForMedia:(id)arg2 ;
-(void)setAutoDismissWhenVideoFinishes:(BOOL)arg1 ;
-(void)setPreventAutoPlayIfManuallyPaused:(BOOL)arg1 ;
-(void)resetViewManager;
-(void)didFinishAnimatingViewAfterCancelingDismissal:(BOOL)arg1 ;
-(void)configureViewManager;
-(FBMediaUFIBarController *)ufiBarController;
-(CGRect)animationFrameForView;
-(BOOL)canAutoAdvance;
-(BOOL)autoDismissWhenVideoFinishes;
-(id<FBVideoPresentingDelegate>)fullscreenVideoDelegate;
-(void)setFullscreenVideoDelegate:(id<FBVideoPresentingDelegate>)arg1 ;
-(id<FBScrollPositionModifyingController>)containingScrollController;
-(BOOL)preventAutoPlayIfManuallyPaused;
-(id)viewToReturnVideoToForVideoID:(id)arg1 ;
-(id)initWithVideoViewManager:(id)arg1 watchAndMoreConfiguration:(id)arg2 ;
-(void)_cleanBeforeDismiss;
-(void)watchAndMoreHeaderViewControllerDidTapDismissButton:(id)arg1 ;
-(CGSize)getVideoSize;
-(void)updateVideoFrameWithHiddenState:(double)arg1 ;
-(void)_enterFullscreen;
-(CGRect)_headerFrame;
-(CGRect)_contentFrame;
-(void)_onExitFullscreen;
-(CGRect)watchAndMoreContentViewControllerNeedVideoFrame:(id)arg1 ;
-(void)watchAndMoreContentViewControllerDidTapDismissButton:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)_dismiss;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
@end
