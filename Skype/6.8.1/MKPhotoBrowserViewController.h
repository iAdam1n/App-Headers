//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class MKActivityIndicatorView, MKPhotoBrowserViewControllerStylesheet, NSMutableArray, NSMutableSet, NSString, NSTimer, UIActivityViewController, UIBarButtonItem, UIColor, UIImage, UIScrollView, UIToolbar;

@interface MKPhotoBrowserViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _zoomPhotosToFill;
    _Bool _displayNavArrows;
    _Bool _displayActionButton;
    _Bool _displaySelectionButtons;
    _Bool _alwaysShowControls;
    _Bool _enableGrid;
    _Bool _startOnGrid;
    _Bool _hideLoadingIndicator;
    _Bool _previousNavBarHidden;
    _Bool _previousNavToolbarHidden;
    _Bool _previousNavBarTranslucent;
    _Bool _vcBasedStatusBarAppearance;
    _Bool _statusBarShouldBeHidden;
    _Bool _leaveStatusBarAlone;
    _Bool _performingLayout;
    _Bool _rotating;
    _Bool _viewActive;
    _Bool _didSavePreviousStateOfNavBar;
    _Bool _skipNextPagingScrollViewPositioning;
    _Bool _viewHasAppearedInitially;
    MKPhotoBrowserViewControllerStylesheet *_stylesheet;
    id <MKPhotoBrowserViewControllerDelegate> _delegate;
    UIToolbar *_topBar;
    unsigned long long _photoCount;
    NSMutableArray *_photos;
    NSMutableArray *_thumbPhotos;
    UIScrollView *_pagingScrollView;
    NSMutableSet *_visiblePages;
    NSMutableSet *_recycledPages;
    unsigned long long _currentPageIndex;
    unsigned long long _previousPageIndex;
    unsigned long long _pageIndexBeforeRotation;
    UIToolbar *_toolbar;
    NSTimer *_controlVisibilityTimer;
    UIBarButtonItem *_previousButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_actionButton;
    UIBarButtonItem *_doneButton;
    MKActivityIndicatorView *_progressHUD;
    UIActivityViewController *_activityViewController;
    long long _previousNavBarStyle;
    long long _previousStatusBarStyle;
    UIColor *_previousNavBarTintColor;
    UIColor *_previousNavBarBarTintColor;
    UIBarButtonItem *_previousViewControllerBackButton;
    UIImage *_previousNavigationBarBackgroundImageDefault;
    UIImage *_previousNavigationBarBackgroundImageLandscapePhone;
    struct CGRect _previousLayoutBounds;
}

@property(nonatomic) _Bool viewHasAppearedInitially; // @synthesize viewHasAppearedInitially=_viewHasAppearedInitially;
@property(nonatomic) _Bool skipNextPagingScrollViewPositioning; // @synthesize skipNextPagingScrollViewPositioning=_skipNextPagingScrollViewPositioning;
@property(nonatomic) _Bool didSavePreviousStateOfNavBar; // @synthesize didSavePreviousStateOfNavBar=_didSavePreviousStateOfNavBar;
@property(nonatomic, getter=isViewActive) _Bool viewActive; // @synthesize viewActive=_viewActive;
@property(nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(nonatomic) _Bool performingLayout; // @synthesize performingLayout=_performingLayout;
@property(nonatomic) _Bool leaveStatusBarAlone; // @synthesize leaveStatusBarAlone=_leaveStatusBarAlone;
@property(nonatomic) _Bool statusBarShouldBeHidden; // @synthesize statusBarShouldBeHidden=_statusBarShouldBeHidden;
@property(nonatomic, getter=isVCBasedStatusBarAppearance) _Bool vcBasedStatusBarAppearance; // @synthesize vcBasedStatusBarAppearance=_vcBasedStatusBarAppearance;
@property(retain, nonatomic) UIImage *previousNavigationBarBackgroundImageLandscapePhone; // @synthesize previousNavigationBarBackgroundImageLandscapePhone=_previousNavigationBarBackgroundImageLandscapePhone;
@property(retain, nonatomic) UIImage *previousNavigationBarBackgroundImageDefault; // @synthesize previousNavigationBarBackgroundImageDefault=_previousNavigationBarBackgroundImageDefault;
@property(retain, nonatomic) UIBarButtonItem *previousViewControllerBackButton; // @synthesize previousViewControllerBackButton=_previousViewControllerBackButton;
@property(retain, nonatomic) UIColor *previousNavBarBarTintColor; // @synthesize previousNavBarBarTintColor=_previousNavBarBarTintColor;
@property(retain, nonatomic) UIColor *previousNavBarTintColor; // @synthesize previousNavBarTintColor=_previousNavBarTintColor;
@property(nonatomic) long long previousStatusBarStyle; // @synthesize previousStatusBarStyle=_previousStatusBarStyle;
@property(nonatomic) long long previousNavBarStyle; // @synthesize previousNavBarStyle=_previousNavBarStyle;
@property(nonatomic) _Bool previousNavBarTranslucent; // @synthesize previousNavBarTranslucent=_previousNavBarTranslucent;
@property(nonatomic) _Bool previousNavToolbarHidden; // @synthesize previousNavToolbarHidden=_previousNavToolbarHidden;
@property(nonatomic) _Bool previousNavBarHidden; // @synthesize previousNavBarHidden=_previousNavBarHidden;
@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) MKActivityIndicatorView *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIBarButtonItem *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIBarButtonItem *previousButton; // @synthesize previousButton=_previousButton;
@property(retain, nonatomic) NSTimer *controlVisibilityTimer; // @synthesize controlVisibilityTimer=_controlVisibilityTimer;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) unsigned long long pageIndexBeforeRotation; // @synthesize pageIndexBeforeRotation=_pageIndexBeforeRotation;
@property(nonatomic) struct CGRect previousLayoutBounds; // @synthesize previousLayoutBounds=_previousLayoutBounds;
@property(nonatomic) unsigned long long previousPageIndex; // @synthesize previousPageIndex=_previousPageIndex;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) NSMutableSet *recycledPages; // @synthesize recycledPages=_recycledPages;
@property(retain, nonatomic) NSMutableSet *visiblePages; // @synthesize visiblePages=_visiblePages;
@property(retain, nonatomic) UIScrollView *pagingScrollView; // @synthesize pagingScrollView=_pagingScrollView;
@property(retain, nonatomic) NSMutableArray *thumbPhotos; // @synthesize thumbPhotos=_thumbPhotos;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(nonatomic) unsigned long long photoCount; // @synthesize photoCount=_photoCount;
@property(retain, nonatomic) UIToolbar *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) _Bool hideLoadingIndicator; // @synthesize hideLoadingIndicator=_hideLoadingIndicator;
@property(nonatomic) _Bool startOnGrid; // @synthesize startOnGrid=_startOnGrid;
@property(nonatomic) _Bool enableGrid; // @synthesize enableGrid=_enableGrid;
@property(nonatomic) _Bool alwaysShowControls; // @synthesize alwaysShowControls=_alwaysShowControls;
@property(nonatomic) _Bool displaySelectionButtons; // @synthesize displaySelectionButtons=_displaySelectionButtons;
@property(nonatomic) _Bool displayActionButton; // @synthesize displayActionButton=_displayActionButton;
@property(nonatomic) _Bool displayNavArrows; // @synthesize displayNavArrows=_displayNavArrows;
@property(nonatomic) _Bool zoomPhotosToFill; // @synthesize zoomPhotosToFill=_zoomPhotosToFill;
@property(nonatomic) __weak id <MKPhotoBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MKPhotoBrowserViewControllerStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
- (void).cxx_destruct;
- (void)actuallyEmailPhoto:(id)arg1;
- (void)emailPhoto;
- (void)actuallyCopyPhoto:(id)arg1;
- (void)copyPhoto;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)actuallySavePhoto:(id)arg1;
- (void)savePhoto;
- (void)showProgressHUDCompleteMessage:(id)arg1;
- (void)hideProgressHUD:(_Bool)arg1;
- (void)showProgressHUDWithMessage:(id)arg1;
- (void)actionButtonPressed:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)setCurrentPhotoIndex:(unsigned long long)arg1;
- (void)setInitialPageIndex:(unsigned long long)arg1;
- (void)toggleControls;
- (void)hideControls;
- (_Bool)areControlsHidden;
- (void)hideControlsAfterDelay;
- (void)cancelControlHiding;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)setControlsHidden:(_Bool)arg1 animated:(_Bool)arg2 permanent:(_Bool)arg3;
- (void)selectedButtonTapped:(id)arg1;
- (void)showNextPhotoAnimated:(_Bool)arg1;
- (void)showPreviousPhotoAnimated:(_Bool)arg1;
- (void)gotoNextPage;
- (void)gotoPreviousPage;
- (void)jumpToPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateNavigation;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)frameForSelectedButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)frameForCaptionView:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)frameForTopbarAtOrientation:(long long)arg1;
- (struct CGRect)frameForToolbarAtOrientation:(long long)arg1;
- (struct CGPoint)contentOffsetForPageAtIndex:(unsigned long long)arg1;
- (struct CGSize)contentSizeForPagingScrollView;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForPagingScrollView;
- (void)didStartViewingPageAtIndex:(unsigned long long)arg1;
- (id)dequeueRecycledPage;
- (void)configurePage:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)pageDisplayingPhoto:(id)arg1;
- (id)pageDisplayedAtIndex:(unsigned long long)arg1;
- (_Bool)isDisplayingPageForIndex:(unsigned long long)arg1;
- (void)updateVisiblePageStates;
- (void)tilePages;
- (void)handleMKPhotoLoadingDidEndNotification:(id)arg1;
- (void)loadAdjacentPhotosIfNecessary:(id)arg1;
- (id)imageForPhoto:(id)arg1;
- (void)setPhotoSelected:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)photoIsSelectedAtIndex:(unsigned long long)arg1;
- (id)captionViewForPhotoAtIndex:(unsigned long long)arg1;
- (id)thumbPhotoAtIndex:(unsigned long long)arg1;
- (id)photoAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPhotos;
- (void)reloadData;
@property(readonly, nonatomic) unsigned long long currentIndex;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)layoutVisiblePages;
- (void)viewWillLayoutSubviews;
- (void)restorePreviousNavBarAppearance:(_Bool)arg1;
- (void)storePreviousNavBarAppearance;
- (void)setNavBarAppearance:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)presentingViewControllerPrefersStatusBarHidden;
- (void)performLayout;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)commonInit;
- (void)releaseAllUnderlyingPhotos:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
