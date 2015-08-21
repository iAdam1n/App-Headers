/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNViewController.h>
#import <Twitter/TFNZoomableImageViewZoomDelegate.h>
#import <Twitter/T1SlideshowUserListViewControllerDelegate.h>
#import <Twitter/TFNDownloadMediaPlayerDelegate.h>
#import <Twitter/TFNImageDisplayViewDownloadDelegate.h>
#import <Twitter/TFNPlayerDownloadItemDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <Twitter/TFNPresented.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/TFNLayoutMetricsEnvironment.h>
#import <Twitter/TFNImageDisplayViewDelegate.h>

@protocol T1SlideshowViewControllerDataSource, T1SlideshowViewControllerDelegate, T1SlideshowViewControllerLoadingDelegate;
@class UIView, T1SlideshowScrollView, TFNPaddedButton, TFNCustomHitTestView, TFNBlurrableImageView, T1SlideshowSlide, UIImageView, UILabel, CAGradientLayer, UIPopoverController, TCActivityIndicatorView, TFNVinePlayer, TFNGifPlayer, UIViewController, TFNTwitterAccount, TFNTwitterScribeContext, T1SlideshowStatusView, UISwipeGestureRecognizer, TFNFullscreenImageTransition, TFNTwitterStatus, NSString;

@interface T1SlideshowViewController : TFNViewController <TFNZoomableImageViewZoomDelegate, T1SlideshowUserListViewControllerDelegate, TFNDownloadMediaPlayerDelegate, TFNImageDisplayViewDownloadDelegate, TFNPlayerDownloadItemDelegate, UIScrollViewDelegate, UIPopoverControllerDelegate, TFNPresented, TFNTwitterAuthenticated, TFNLayoutMetricsEnvironment, TFNImageDisplayViewDelegate> {

	id<T1SlideshowViewControllerDataSource> _retainedDataSource;
	long long _slideCount;
	UIView* _backgroundView;
	T1SlideshowScrollView* _scrollView;
	TFNPaddedButton* _closeButton;
	TFNCustomHitTestView* _topChromeView;
	UIView* _fullScreenRasterizationOverlay;
	TFNBlurrableImageView* _fullScreenBlurRasterization;
	UIView* _fullScreenRasterization;
	long long _fullScreenRasterizationOrientation;
	T1SlideshowSlide* _prevSlide;
	T1SlideshowSlide* _nextSlide;
	UIImageView* _chevronImageView;
	UILabel* _swipeToDismissLabel;
	double _verticalScrollTrackingPercentCentered;
	CAGradientLayer* _tutorialViewGradientLayer;
	UIPopoverController* _popoverController;
	TCActivityIndicatorView* _spinner;
	TFNVinePlayer* _vinePlayer;
	TFNGifPlayer* _gifPlayer;
	double _lastZoomScale;
	BOOL _bottomChromeVisible;
	BOOL _topChromeVisible;
	BOOL _canRequestLoadingMoreSlides;
	UIViewController* _dismissingFromInHierarchyViewController;
	struct {
		unsigned statusViewNeedsUpdate : 1;
		unsigned topChromeNeedsUpdate : 1;
		unsigned dismissing : 1;
		unsigned dismissingFromSwipe : 1;
		unsigned rotating : 1;
		unsigned statusViewShownBeforeRotation : 1;
		unsigned topChromeHiddenBeforeRotation : 1;
		unsigned chromesShownBeforeVerticalScroll : 1;
		unsigned chromesShownBeforeReload : 1;
		unsigned willFirstVerticalScroll : 1;
		unsigned timelineStatusViewsDidUpdate : 1;
	}  _flags;
	BOOL _displaySlideStatus;
	BOOL _notifyListenersBeforeDismissing;
	BOOL _chromeIsVisible;
	TFNTwitterAccount* _account;
	id<T1SlideshowViewControllerDelegate> _delegate;
	id<T1SlideshowViewControllerLoadingDelegate> _loadingDelegate;
	id<T1SlideshowViewControllerDataSource> _dataSource;
	long long _slideIndex;
	TFNTwitterScribeContext* _scribeContext;
	long long _cardDisplayMode;
	T1SlideshowSlide* _currentSlide;
	T1SlideshowStatusView* _statusView;
	UISwipeGestureRecognizer* _swipeUpGestureRecognizer;
	UISwipeGestureRecognizer* _swipeDownGestureRecognizer;
	TFNFullscreenImageTransition* _transition;
	UIView* _tutorialView;

}

@property (assign,nonatomic,__weak) id<T1SlideshowViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<TFNImageTransitionDelegate> transitionDelegate; 
@property (assign,nonatomic,__weak) id<T1SlideshowViewControllerLoadingDelegate> loadingDelegate;              //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<T1SlideshowViewControllerDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long slideIndex;                                                             //@synthesize slideIndex=_slideIndex - In the implementation block
@property (nonatomic,readonly) TFNTwitterStatus * slideStatus; 
@property (assign,nonatomic) BOOL displaySlideStatus;                                                          //@synthesize displaySlideStatus=_displaySlideStatus - In the implementation block
@property (assign,nonatomic) BOOL notifyListenersBeforeDismissing;                                             //@synthesize notifyListenersBeforeDismissing=_notifyListenersBeforeDismissing - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeContext * scribeContext;                                          //@synthesize scribeContext=_scribeContext - In the implementation block
@property (assign,nonatomic) long long cardDisplayMode;                                                        //@synthesize cardDisplayMode=_cardDisplayMode - In the implementation block
@property (assign,nonatomic) BOOL chromeIsVisible;                                                             //@synthesize chromeIsVisible=_chromeIsVisible - In the implementation block
@property (nonatomic,readonly) T1SlideshowSlide * currentSlide;                                                //@synthesize currentSlide=_currentSlide - In the implementation block
@property (nonatomic,readonly) T1SlideshowStatusView * statusView;                                             //@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,readonly) UISwipeGestureRecognizer * swipeUpGestureRecognizer;                            //@synthesize swipeUpGestureRecognizer=_swipeUpGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UISwipeGestureRecognizer * swipeDownGestureRecognizer;                          //@synthesize swipeDownGestureRecognizer=_swipeDownGestureRecognizer - In the implementation block
@property (nonatomic,readonly) TFNFullscreenImageTransition * transition;                                      //@synthesize transition=_transition - In the implementation block
@property (nonatomic,readonly) UIView * tutorialView;                                                          //@synthesize tutorialView=_tutorialView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                                      //@synthesize account=_account - In the implementation block
-(id)scribe;
-(id)scribePage;
-(TFNTwitterScribeContext *)scribeContext;
-(id)scribeSection;
-(id)scribeComponent;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(void)layoutMetricsDidChange:(id)arg1 ;
-(id)scribeElement;
-(BOOL)mediaPlayerShouldScrub:(id)arg1 ;
-(void)mediaPlayerDidBeginScrubbing:(id)arg1 ;
-(void)mediaPlayerReadyToPlay:(id)arg1 ;
-(void)didTapMediaPlayer:(id)arg1 ;
-(void)setScribeContext:(TFNTwitterScribeContext *)arg1 ;
-(id)scribeImpressionParameters;
-(void)_handleSwipeUp:(id)arg1 ;
-(void)_handleSwipeDown:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSlideIndex:(long long)arg1 ;
-(void)setDataSource:(id)arg1 retain:(BOOL)arg2 ;
-(void)setDisplaySlideStatus:(BOOL)arg1 ;
-(void)reloadSlideshowData;
-(long long)_maximumSlideIndex;
-(void)_configureSlides;
-(void)_updateSlideDisplayResettingOffset:(BOOL)arg1 animateOffset:(BOOL)arg2 animateStatus:(BOOL)arg3 ;
-(id<T1SlideshowViewControllerLoadingDelegate>)loadingDelegate;
-(long long)_maximumSlideIndexWithLoading:(BOOL)arg1 ;
-(BOOL)_chromesVisible;
-(BOOL)_currentSlideIsLoading;
-(void)_configureSlide:(id)arg1 atIndex:(long long)arg2 ;
-(void)_setStatusViewNeedsUpdateForDisplayedStatus:(id)arg1 displayedTagSet:(id)arg2 ;
-(id)_imageForSlideAtIndex:(long long)arg1 ;
-(id)_previewImageForSlideAtIndex:(long long)arg1 ;
-(TFNTwitterStatus *)slideStatus;
-(id)_playerStreamURLForSlideAtIndex:(long long)arg1 ;
-(void)_deactivateCurrentSlide;
-(void)_activateCurrentSlide;
-(void)_setChromesVisible:(BOOL)arg1 topAnimated:(BOOL)arg2 bottomAnimated:(BOOL)arg3 ;
-(void)_logPromotedEvent:(long long)arg1 forStatus:(id)arg2 ;
-(void)_legacyUpdateSlideDisplayResettingOffset:(BOOL)arg1 animateOffset:(BOOL)arg2 animateStatus:(BOOL)arg3 ;
-(id)_currentSlideMediaPlayer;
-(void)_setStatusViewContentVisible:(BOOL)arg1 ;
-(void)_setTopChromeViewVisible:(BOOL)arg1 move:(BOOL)arg2 ;
-(void)_updateSlideIndex:(long long)arg1 resettingOffset:(BOOL)arg2 animateOffset:(BOOL)arg3 animateStatus:(BOOL)arg4 ;
-(BOOL)_currentSlideCanShowSpinner;
-(void)_addSpinnerToView:(id)arg1 ;
-(void)_updateCurrentSlideMediaPlayerDownloadedItem;
-(void)_handlePrepareBlurFinished;
-(id)_transitionObject;
-(UIView *)tutorialView;
-(CGAffineTransform)_transformForFullscreenRasterizationWithInterfaceOrientation:(long long)arg1 ;
-(void)_setTopChromeViewVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_closeAction:(id)arg1 ;
-(void)_didTapTag:(id)arg1 ;
-(void)_retweetsActivityAction:(id)arg1 ;
-(void)_favoritesActivityAction:(id)arg1 ;
-(void)presentTaggedUserListView;
-(void)_setBottomChromeVisible:(BOOL)arg1 animated:(BOOL)arg2 tutorialVisible:(BOOL)arg3 ;
-(void)_setChromesVisible:(BOOL)arg1 topAnimated:(BOOL)arg2 bottomAnimated:(BOOL)arg3 tutorialVisible:(BOOL)arg4 ;
-(void)setChromeIsVisible:(BOOL)arg1 ;
-(void)_setStatusViewContentVisible:(BOOL)arg1 tutorialVisible:(BOOL)arg2 ;
-(long long)_slideIndexForCurrentScrollContentOffset;
-(void)_dismissSlideshowFromSwipe;
-(double)_backgroundViewAlphaForVerticalScrollWithPercentCentered:(double)arg1 ;
-(void)_showPopoverControllerForActivitySummary:(id)arg1 viewController:(id)arg2 presentFromRect:(CGRect)arg3 ;
-(void)_presentPopoverWithContentController:(id)arg1 presentFromRect:(CGRect)arg2 inView:(id)arg3 ;
-(BOOL)zoomableImageViewShouldSupportPinchToClose;
-(void)zoomableImageViewDidPinchToClose:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)zoomScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)zoomScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)slideshowUserListViewController:(id)arg1 didSelectUser:(id)arg2 ;
-(void)imageDisplayView:(id)arg1 didFinishDownloadWithError:(id)arg2 ;
-(void)playerDownloadItemDidFinish:(id)arg1 ;
-(void)imageDisplayView:(id)arg1 didLongPress:(id)arg2 ;
-(void)setLoadingDelegate:(id<T1SlideshowViewControllerLoadingDelegate>)arg1 ;
-(long long)slideIndex;
-(BOOL)displaySlideStatus;
-(BOOL)notifyListenersBeforeDismissing;
-(void)setNotifyListenersBeforeDismissing:(BOOL)arg1 ;
-(long long)cardDisplayMode;
-(void)setCardDisplayMode:(long long)arg1 ;
-(BOOL)chromeIsVisible;
-(UISwipeGestureRecognizer *)swipeUpGestureRecognizer;
-(UISwipeGestureRecognizer *)swipeDownGestureRecognizer;
-(T1SlideshowSlide *)currentSlide;
-(BOOL)_hideLoadingIndicator;
-(void)_setOverlaysVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)setDataSource:(id<T1SlideshowViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<T1SlideshowViewControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<T1SlideshowViewControllerDataSource>)dataSource;
-(id<T1SlideshowViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(TFNFullscreenImageTransition *)transition;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id<TFNImageTransitionDelegate>)transitionDelegate;
-(void)setTransitionDelegate:(id<TFNImageTransitionDelegate>)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)_tapAction:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(T1SlideshowStatusView *)statusView;
-(void)_showSpinner;
-(void)_hideSpinner;
-(void)_dismissAnimated:(BOOL)arg1 ;
@end

