/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <WhatsApp/WAMediaBrowserCollectionViewCellDelegate.h>
#import <WhatsApp/WAMediaBrowserToolbarDelegate.h>
#import <WhatsApp/WANoOpGestureRecognizerTouchDelegate.h>
#import <WhatsApp/WAForwardSheetDelegate.h>
#import <WhatsApp/WANavigationControllerPopFromAnimating.h>
#import <WhatsApp/WAImageToImageTransitioning.h>
#import <WhatsApp/WAImageToImagePanPopGestureRecognizerDelegate.h>

@class UINavigationController, WAMediaBrowserToolbar, WAMediaCaptionView, WAMediaBrowserCollectionView, UICollectionViewFlowLayout, WAMediaManager, WAImageToImagePanPopGestureRecognizer, UIView, UIActivityIndicatorView, WAMediaBrowserTitleView, NSMutableArray, NSMutableIndexSet, NSIndexPath, WANoOpGestureRecognizer, UIBarButtonItem, WAStarBarButtonItem, WAMessage, NSString;

@interface WAMediaBrowserViewController : WAViewController <UICollectionViewDataSource, UICollectionViewDelegate, WAMediaBrowserCollectionViewCellDelegate, WAMediaBrowserToolbarDelegate, WANoOpGestureRecognizerTouchDelegate, WAForwardSheetDelegate, WANavigationControllerPopFromAnimating, WAImageToImageTransitioning, WAImageToImagePanPopGestureRecognizerDelegate> {

	UINavigationController* _lastNavigationController;
	WAMediaBrowserToolbar* _toolbar;
	WAMediaCaptionView* _captionView;
	WAMediaBrowserCollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	WAMediaManager* _mediaManager;
	long long _initialPageIndex;
	long long _lastDisplayedPageIndex;
	BOOL _needsAdjustCaptionViewAfterLayout;
	WAImageToImagePanPopGestureRecognizer* _panPopGesture;
	UIView* _busySpinnerView;
	UIActivityIndicatorView* _busySpinner;
	WAMediaBrowserTitleView* _titleView;
	NSMutableArray* _indexPathsToInsert;
	NSMutableArray* _indexPathsToDelete;
	NSMutableArray* _moveInfoToProcess;
	NSMutableIndexSet* _sectionsToInsert;
	NSMutableIndexSet* _sectionsToDelete;
	NSIndexPath* _autoplayItemAtIndexPath;
	BOOL _suppressToolbarUpdate;
	BOOL _ignoreToolbarScrolling;
	WANoOpGestureRecognizer* _touchTracker;
	BOOL _isInterfaceOrientationPinned;
	UIBarButtonItem* _allMediaButton;
	UIBarButtonItem* _trashButton;
	UIBarButtonItem* _actionButton;
	UIBarButtonItem* _playButton;
	UIBarButtonItem* _pauseButton;
	WAStarBarButtonItem* _starButton;
	WAStarBarButtonItem* _unstarButton;
	WAMessage* _messageBeforeChangingContent;
	NSIndexPath* _indexPathBeforeChangingContent;
	BOOL _needsUpdateInterfaceOnViewDidLayoutSubviews;
	CGSize _lastViewWillLayoutSubviewsSize;
	BOOL _needsAllMediaButton;
	BOOL _fullScreen;

}

@property (assign,getter=isFullScreen,nonatomic) BOOL fullScreen;                            //@synthesize fullScreen=_fullScreen - In the implementation block
@property (assign,nonatomic) double currentFractionalIndex; 
@property (assign,getter=isBusySpinnerHidden,nonatomic) BOOL busySpinnerHidden; 
@property (nonatomic,retain) WAMediaManager * mediaManager; 
@property (assign,nonatomic) long long currentPageIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wa_fontSizeDidChange;
-(void)didLoadDatabase:(id)arg1 ;
-(void)trashButtonTapped:(id)arg1 ;
-(void)starButtonTapped:(id)arg1 ;
-(void)unstarButtonTapped:(id)arg1 ;
-(void)showAllMedia:(id)arg1 ;
-(void)pauseButtonTapped:(id)arg1 ;
-(void)playButtonTapped:(id)arg1 ;
-(void)reloadMediaManager;
-(void)updateCaptionView;
-(void)wa_applicationDidBecomeActive;
-(void)setUpBusySpinnerView;
-(WAMediaManager *)mediaManager;
-(id)currentCell;
-(void)setFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateNavigationBarItems;
-(void)updateInterfaceForCurrentMessage;
-(void)updatePresentationState;
-(void)updateTitleView;
-(BOOL)isBusySpinnerHidden;
-(double)currentFractionalIndex;
-(void)setMediaManager:(WAMediaManager *)arg1 ;
-(void)mediaManagerWillChangeContent:(id)arg1 ;
-(void)mediaManagerDidChangeContent:(id)arg1 ;
-(void)mediaManagerDidInsertItem:(id)arg1 ;
-(void)mediaManagerDidDeleteItem:(id)arg1 ;
-(void)mediaManagerDidMoveItem:(id)arg1 ;
-(void)mediaManagerDidInsertSection:(id)arg1 ;
-(void)mediaManagerDidDeleteSection:(id)arg1 ;
-(void)showBackupSettings;
-(id)nonTransitioningContainerView;
-(void)saveMediaInMessage:(id)arg1 ;
-(void)forwardMediaInMessage:(id)arg1 toContacts:(id)arg2 status:(unsigned long long)arg3 ;
-(void)showPersonPickerForForwardingMediaInMessage:(id)arg1 withPreselectedContacts:(id)arg2 ;
-(void)shareMediaInMessageExternally:(id)arg1 ;
-(void)deleteMessageInCell:(id)arg1 ;
-(void)showActionMenuForMessageInCell:(id)arg1 ;
-(void)setStarred:(BOOL)arg1 forMessageInCell:(id)arg2 ;
-(void)deleteMessage:(id)arg1 ;
-(void)showMissingVideoErrorWhenForwardingMessage:(BOOL)arg1 ;
-(void)presentQuickForwardSheetForMessage:(id)arg1 ;
-(void)assignGroupImageWithMessage:(id)arg1 ;
-(void)setProfilePhotoWithMessage:(id)arg1 ;
-(void)setBusySpinnerHidden:(BOOL)arg1 ;
-(UIEdgeInsets)layoutInsetsForMediaBrowserCollectionViewCell:(id)arg1 ;
-(BOOL)isDisplayingMediaBrowserCollectionViewCellInFullScreen:(id)arg1 ;
-(void)mediaBrowserCollectionViewCell:(id)arg1 prefersFullScreen:(BOOL)arg2 ;
-(void)mediaBrowserCollectionViewCell:(id)arg1 didReceiveSingleTapAtPoint:(CGPoint)arg2 ;
-(void)mediaBrowserCollectionViewCellWillBeginChangingVisibleContentViewFrame:(id)arg1 ;
-(void)mediaBrowserCollectionViewCellDidChangeVisibleContentViewFrame:(id)arg1 ;
-(void)mediaBrowserCollectionViewCellDidEndChangingVisibleContentViewFrame:(id)arg1 ;
-(void)mediaBrowserCollectionViewCellDidChangePresentationState:(id)arg1 ;
-(void)mediaBrowserCollectionViewCellDidRequestPresentBackupSettings:(id)arg1 ;
-(BOOL)isPreviewingMediaBrowserCollectionViewCell:(id)arg1 ;
-(id)fastThumbnailForMediaBrowserCollectionViewCell:(id)arg1 ;
-(double)rateOfChangeForMediaBrowserCollectionViewCell:(id)arg1 ;
-(void)mediaBrowserCollectionViewCell:(id)arg1 didUpdateProgress:(double)arg2 ;
-(void)toolbarDidActivateActionButton:(id)arg1 ;
-(void)toolbarDidActivateTrashButton:(id)arg1 ;
-(void)toolbarDidActivatePlayButton:(id)arg1 ;
-(void)toolbarDidActivatePauseButton:(id)arg1 ;
-(void)toolbarDidActivateStarButton:(id)arg1 ;
-(void)toolbarDidActivateUnstarButton:(id)arg1 ;
-(void)toolbarDidBeginScrubbing:(id)arg1 ;
-(void)toolbar:(id)arg1 didScrollToIndexPath:(id)arg2 ;
-(void)toolbarDidEndScrubbing:(id)arg1 ;
-(void)noOpGestureRecognizerDidBeginTrackingTouches:(id)arg1 ;
-(void)noOpGestureRecognizerDidEndTrackingTouches:(id)arg1 ;
-(void)forwardSheetDidRequestFullscreenView:(id)arg1 ;
-(void)forwardSheetDidRequestToShowSystemShareSheet:(id)arg1 ;
-(id)popFromAnimationIdentifier;
-(BOOL)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
-(BOOL)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4 ;
-(void)prepareForTransitionWithContext:(id)arg1 ;
-(id)viewForTransitionAnimationWithContext:(id)arg1 ;
-(void)finishTransitionWithView:(id)arg1 context:(id)arg2 ;
-(void)gestureRecognizerWillBeginManagingInteractivePopTransition:(id)arg1 ;
-(void)gestureRecognizerDidBeginManagingInteractivePopTransition:(id)arg1 ;
-(void)gestureRecognizerWillFinishManagingInteractivePopTransition:(id)arg1 ;
-(BOOL)wa_prefersMinimalBackButton;
-(void)setCurrentFractionalIndex:(double)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)previewActionItems;
-(void)setFullScreen:(BOOL)arg1 ;
-(long long)currentPageIndex;
-(void)setCurrentPageIndex:(long long)arg1 ;
-(BOOL)isFullscreen;
-(void)deviceOrientationDidChange:(id)arg1 ;
-(id)currentMessage;
-(BOOL)isFullScreen;
-(void)actionButtonTapped:(id)arg1 ;
@end
