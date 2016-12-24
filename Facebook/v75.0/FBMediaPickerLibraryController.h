/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Facebook/FBLibraryThumbnailViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Facebook/FBMagicStoriesPreviewViewControllerDelegate.h>
#import <Facebook/FBVideoCoordinatorDataSource.h>

@protocol FBMediaPickerLibraryControllerDelegate, FBMediaDataSourceProtocol;
@class FBMediaPickerSession, NSMutableDictionary, UICollectionView, FBMagicStoriesPreviewViewController, FBKVOController, UIView, FBPinchGestureRecognizer, FBAnimationPerformanceLogger, FBMagicStoryPickerCollectionDataSource, FBMediaPickerThumbnailDownloaderFactory, UILabel, FBScrollViewVideoCoordinator, NSMutableArray, FBCache, UIImage, FBLibraryThumbnailView, FBAssetsRankedDataSource, NSArray, NSString;

@interface FBMediaPickerLibraryController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, FBLibraryThumbnailViewDelegate, UICollectionViewDelegateFlowLayout, FBMagicStoriesPreviewViewControllerDelegate, FBVideoCoordinatorDataSource> {

	FBMediaPickerSession* _session;
	NSMutableDictionary* _mutableOffsetsForDataSources;
	NSMutableDictionary* _thumbnailRequestDictionary;
	NSMutableDictionary* _animatedImageDataRequestDictionary;
	UICollectionView* _collectionView;
	FBMagicStoriesPreviewViewController* _magicStoriesPreviewViewController;
	FBKVOController* _KVOController;
	UIView* _invisibleMask;
	FBPinchGestureRecognizer* _invisibleMaskPinchGestureRecognizer;
	FBAnimationPerformanceLogger* _animationPerformanceTracker;
	UIEdgeInsets _initialContentInset;
	FBMagicStoryPickerCollectionDataSource* _magicStoryCollectionDataSource;
	UIView* _magicStoriesNuxDimmingView;
	FBMediaPickerThumbnailDownloaderFactory* _webImageDownloaderFactory;
	long long _thumbnailSizes;
	UIView* _multiPhotoIndicatorLabelContainerView;
	UILabel* _multiPhotoIndicatorTitle;
	UILabel* _multiPhotoIndicatorDescription;
	UIView* _rankedCameraRollPhotosView;
	UIView* _cameraRollPhotosAfterRankedView;
	FBScrollViewVideoCoordinator* _videoCoordinator;
	NSMutableArray* _videoViewPool;
	FBCache* _fetchedSphericalParametersForAssetURLs;
	BOOL _useSizeLimitationForVideoMessage;
	BOOL _enableVideoTrim;
	BOOL _shouldShowRankedInCameraRoll;
	BOOL _firstSection;
	UIImage* _defaultThumbnail;
	BOOL _allowVideoAutoplay;
	BOOL _ignoringScrollPositionUpdates;
	id<FBMediaPickerLibraryControllerDelegate> _delegate;
	id<FBMediaDataSourceProtocol> _currentDataSource;
	FBLibraryThumbnailView* _lastSelectedThumbnailView;
	FBAssetsRankedDataSource* _assetsRankedDataSource;
	double _topLayoutGuideLength;
	unsigned long long _thumbnailViewStyle;
	NSArray* _thumbnailOptions;
	NSArray* _filteredCollectionsForMovies;

}

@property (assign,nonatomic) unsigned long long thumbnailViewStyle;                                   //@synthesize thumbnailViewStyle=_thumbnailViewStyle - In the implementation block
@property (assign,nonatomic) BOOL ignoringScrollPositionUpdates;                                      //@synthesize ignoringScrollPositionUpdates=_ignoringScrollPositionUpdates - In the implementation block
@property (nonatomic,copy) NSArray * thumbnailOptions;                                                //@synthesize thumbnailOptions=_thumbnailOptions - In the implementation block
@property (nonatomic,copy) NSArray * filteredCollectionsForMovies;                                    //@synthesize filteredCollectionsForMovies=_filteredCollectionsForMovies - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaPickerLibraryControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) id<FBMediaDataSourceProtocol> currentDataSource;                         //@synthesize currentDataSource=_currentDataSource - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCameraInGrid; 
@property (nonatomic,retain) FBLibraryThumbnailView * lastSelectedThumbnailView;                      //@synthesize lastSelectedThumbnailView=_lastSelectedThumbnailView - In the implementation block
@property (assign,nonatomic) BOOL allowVideoAutoplay;                                                 //@synthesize allowVideoAutoplay=_allowVideoAutoplay - In the implementation block
@property (nonatomic,retain) FBAssetsRankedDataSource * assetsRankedDataSource;                       //@synthesize assetsRankedDataSource=_assetsRankedDataSource - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                                             //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(unsigned long long)thumbnailViewStyle;
-(void)setThumbnailViewStyle:(unsigned long long)arg1 ;
-(void)initMagicStoriesDataSource;
-(void)_selectedItemsDidChange;
-(void)_sessionTraitsDidChange;
-(void)_photoAssetDidChangeEdits:(id)arg1 ;
-(BOOL)_shouldShowCamera;
-(void)_saveScrollPositionForCurrentDataSource;
-(void)_beginIgnoringScrollPositionUpdates;
-(void)_endIgnoringScrollPositionUpdates;
-(void)_restoreScrollPositionForCurrentDataSource;
-(void)_resizeMagicStoriesToFit;
-(void)_resizeMultiPhotoIndicatorLabelContainerToFit;
-(unsigned long long)thumbnailCount;
-(unsigned long long)dataSourceIndexForGridIndex:(unsigned long long)arg1 ;
-(BOOL)shouldShowCameraInGrid;
-(id)dataSourceForGridIndex:(unsigned long long)arg1 ;
-(BOOL)_isPlayerContainer:(id)arg1 ;
-(BOOL)_autoplayVideoOnAppearance;
-(id)_sphericalParameterForAssetURL:(id)arg1 ;
-(void)_configThumbnail:(id)arg1 atIndexPath:(id)arg2 refreshOnly:(BOOL)arg3 ;
-(void)_prefetchEMetadataForSphericalPhotoCandidateWithAsset:(id)arg1 success:(/*^block*/id)arg2 ;
-(void)_adjustScrollOffsetWithScreenSize:(CGSize)arg1 oldStyle:(unsigned long long)arg2 newStyle:(unsigned long long)arg3 ;
-(unsigned long long)_gridIndexForCell:(id)arg1 ;
-(unsigned long long)_gridIndexForThumbnailView:(id)arg1 ;
-(BOOL)_autoplayVideoOnSelection;
-(unsigned long long)_assetIndexForCell:(id)arg1 ;
-(BOOL)_showAlertOnInvalidSelectionForThumbnailView:(id)arg1 ;
-(void)_bringUpGalleryViewForThumbnailView:(id)arg1 ;
-(void)_handleTapForThumbnailView:(id)arg1 ;
-(void)_mediaNeedsToBePresentedFromThumbnailView:(id)arg1 ;
-(void)_refreshVisibleThumbnailView:(id)arg1 ;
-(void)_fetchExpensiveMetadataIfNeededForAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_toggleSelectionForThumbnailView:(id)arg1 ;
-(void)_didReceiveVideoURL:(id)arg1 thumbnailView:(id)arg2 gridIndex:(unsigned long long)arg3 ;
-(void)_didReceivedAnimatedImageData:(id)arg1 thumbnailView:(id)arg2 gridIndex:(unsigned long long)arg3 ;
-(void)_setAnimatedImage:(id)arg1 thumbnailView:(id)arg2 gridIndex:(unsigned long long)arg3 ;
-(void)_showPinchNuxIfNeeded;
-(BOOL)_showAlertOnTooManyPhotosForThumbnailView:(id)arg1 ;
-(BOOL)_showAlertOnDifferentMediaTypeForThumbnailView:(id)arg1 ;
-(BOOL)_showAlertOnIncorrectCombinationWithGIFMediaTypeForThumbnailView:(id)arg1 ;
-(BOOL)_showAlertOnMultiplePlayableMediaForThumbnailView:(id)arg1 ;
-(BOOL)_showAlertOnVideoTooLargeForThumbnailView:(id)arg1 ;
-(BOOL)_showAlertOnVideoTooLongForThumbnailView:(id)arg1 ;
-(BOOL)_showAlertOnVideoTooLowResolutionForThumbnailView:(id)arg1 ;
-(BOOL)_showAlertOnExternalLogicForThumnailView:(id)arg1 ;
-(BOOL)_showAlertOn360VideoNotSupportedForThumbnailView:(id)arg1 ;
-(BOOL)_showAlertOnMultiple360PhotosNotSupportedForThumbnailView:(id)arg1 ;
-(BOOL)_showAlertOnMultipleGIFsNotSupportedForThumbnailView:(id)arg1 ;
-(void)_showValidationFailureAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_showValidationWarningWithMessage:(id)arg1 ;
-(BOOL)_isVideoFromThumbnailViewTooLong:(id)arg1 ;
-(void)_showSelectedVideoTooLongAlertViewForVideoFromThumbnailView:(id)arg1 ;
-(BOOL)_isVideoFromThumbnailViewTooLarge:(id)arg1 ;
-(BOOL)_is360VideoFromThumbnailViewNotSupported:(id)arg1 ;
-(void)_showSelected360VideoNotSupportedAlertView;
-(BOOL)_isVideoFromThumbnailViewTooLowResolution:(id)arg1 ;
-(void)_showSelectedVideoTooLowResolutionAlertViewForVideoFromThumbnailView:(id)arg1 ;
-(id<FBMediaDataSourceProtocol>)currentDataSource;
-(void)setIgnoringScrollPositionUpdates:(BOOL)arg1 ;
-(void)_updateCollectionHeaderView;
-(void)scrollContentsToTop;
-(void)_datasourceDidChangeAssets:(id)arg1 ;
-(void)resetThumbnailViewStyleWithScreenSize:(CGSize)arg1 ;
-(void)_refreshVisibleThumbnails;
-(void)_updateCustomMagicStory;
-(void)_showPinchNux;
-(BOOL)_isLastSelectedThumbnailFullyVisible;
-(void)_didPinchInvisibleMask:(id)arg1 ;
-(void)thumbnailViewDidReceivePinch:(id)arg1 sender:(id)arg2 ;
-(id)_videoDurationForVideoFromThumbnailView:(id)arg1 ;
-(CGSize)_videoResolutionForVideoFromThumbnailView:(id)arg1 ;
-(void)_hideOrDisplayMagicStoriesIfNecessary;
-(void)_hideOrDisplayMoviesIfNecessary;
-(void)_hideOrDisplayRankedPhotos;
-(void)_hideOrDisplayCameraRollAfterRankedPhotos;
-(NSArray *)filteredCollectionsForMovies;
-(BOOL)shouldShowMovies;
-(BOOL)_shouldShowMagicStories;
-(void)_storeSphericalParameters:(id)arg1 forAssetUR:(id)arg2 ;
-(void)thumbnailViewDidReceiveTap:(id)arg1 ;
-(void)thumbnailViewDidReceiveLongPress:(id)arg1 ;
-(void)thumbnailViewDidReceiveDoubleTap:(id)arg1 ;
-(BOOL)thumbnailViewDidToggleSelection:(id)arg1 ;
-(void)thumbnailViewDidRequestAnimatedImage:(id)arg1 ;
-(void)thumbnailViewDidRequestVideo:(id)arg1 ;
-(void)thumbnailViewDidRequestImageMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)magicStoriesPreviewViewController:(id)arg1 didSelectMagicStory:(id)arg2 ;
-(void)magicStoriesPreviewViewControllerWillShowNux:(id)arg1 ;
-(void)magicStoriesPreviewViewControllerWillCloseNux:(id)arg1 ;
-(id)videoCoordinatorVisiblePlayerContainers:(id)arg1 ;
-(id)videoCoordinator:(id)arg1 indexPathForPlayerContainer:(id)arg2 ;
-(id)videoCoordinator:(id)arg1 playersForContainer:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)videoCoordinator:(id)arg1 shouldStopPlayingForContainer:(id)arg2 indexPath:(id)arg3 ;
-(id)initWithSession:(id)arg1 initialContentInset:(UIEdgeInsets)arg2 ;
-(void)setAllowVideoAutoplay:(BOOL)arg1 ;
-(void)pickerDidAppear;
-(void)pickerWillDisappear;
-(double)collectionView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)scrollToThumbnailAtGridIndex:(unsigned long long)arg1 ;
-(void)setCurrentDataSource:(id<FBMediaDataSourceProtocol>)arg1 ;
-(void)clearPinchNux;
-(FBLibraryThumbnailView *)lastSelectedThumbnailView;
-(void)setLastSelectedThumbnailView:(FBLibraryThumbnailView *)arg1 ;
-(BOOL)allowVideoAutoplay;
-(FBAssetsRankedDataSource *)assetsRankedDataSource;
-(void)setAssetsRankedDataSource:(FBAssetsRankedDataSource *)arg1 ;
-(BOOL)ignoringScrollPositionUpdates;
-(NSArray *)thumbnailOptions;
-(void)setThumbnailOptions:(NSArray *)arg1 ;
-(void)setFilteredCollectionsForMovies:(NSArray *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMediaPickerLibraryControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<FBMediaPickerLibraryControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)reset;
-(void)_updateContentInsets;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end
