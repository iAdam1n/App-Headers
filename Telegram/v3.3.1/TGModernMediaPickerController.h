//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString, TGMediaEditingContext, TGMediaPickerAssetsGroup, TGMediaPickerAssetsLibrary, TGMediaPickerGalleryModel, TGModernButton, TGModernMediaListLayout, TGVideoConverter, UICollectionView, UIImageView, UILabel, UIPanGestureRecognizer, UIView;

@interface TGModernMediaPickerController : TGViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    int _intent;
    struct CGSize _normalItemSize;
    struct CGSize _wideItemSize;
    double _widescreenWidth;
    double _normalLineSpacing;
    double _wideLineSpacing;
    struct UIEdgeInsets _normalEdgeInsets;
    struct UIEdgeInsets _wideEdgeInsets;
    UIView *_toolbarView;
    UIImageView *_toolbarLogoView;
    TGModernButton *_cancelButton;
    TGModernButton *_doneButton;
    UIImageView *_countBadge;
    UILabel *_countLabel;
    UIPanGestureRecognizer *_panGestureRecognizer;
    struct CGPoint _checkGestureStartPoint;
    _Bool _processingCheckGesture;
    _Bool _failCheckGesture;
    _Bool _checkGestureChecks;
    UICollectionView *_collectionView;
    double _collectionViewWidth;
    TGModernMediaListLayout *_collectionLayout;
    UIView *_collectionContainer;
    _Bool _loadItemsSynchronously;
    struct CGRect _previousPreheatRect;
    id <TGModernMediaListItem> _hiddenItem;
    TGMediaPickerAssetsLibrary *_assetsLibrary;
    TGMediaPickerAssetsGroup *_assetsGroup;
    NSArray *_items;
    NSArray *_selectedItems;
    CDUnknownBlockType _isItemSelected;
    CDUnknownBlockType _isItemHidden;
    CDUnknownBlockType _changeItemSelection;
    CDUnknownBlockType _changeGalleryItemSelection;
    UIView *_accessDeniedContainer;
    UIView *_emptyGroupContainer;
    TGMediaPickerGalleryModel *_galleryModel;
    TGMediaEditingContext *_editingContext;
    CDUnknownBlockType _fetchAdjustments;
    CDUnknownBlockType _fetchCaption;
    CDUnknownBlockType _fetchThumbnailImage;
    CDUnknownBlockType _fetchScreenImage;
    TGVideoConverter *_videoConverter;
    _Bool _appeared;
    double _appearanceTime;
    NSObject<OS_dispatch_semaphore> *_waitSemaphore;
    _Bool _usedSemaphore;
    CDUnknownBlockType _recycleItemContentView;
    NSMutableArray *_storedItemContentViews;
    NSMutableDictionary *_reusableItemContentViewsByIdentifier;
    _Bool _liveUploadEnabled;
    _Bool _serverAssetCacheEnabled;
    _Bool _shouldShowFileTipIfNeeded;
    _Bool _disallowCaptions;
    CDUnknownBlockType _photosPicked;
    CDUnknownBlockType _videoPicked;
    CDUnknownBlockType _avatarCreated;
    CDUnknownBlockType _dismiss;
    CDUnknownBlockType _userListSignal;
    CDUnknownBlockType _hashtagListSignal;
}

+ (int)assetTypeForIntent:(int)arg1;
@property(copy, nonatomic) CDUnknownBlockType hashtagListSignal; // @synthesize hashtagListSignal=_hashtagListSignal;
@property(copy, nonatomic) CDUnknownBlockType userListSignal; // @synthesize userListSignal=_userListSignal;
@property(copy, nonatomic) CDUnknownBlockType dismiss; // @synthesize dismiss=_dismiss;
@property(copy, nonatomic) CDUnknownBlockType avatarCreated; // @synthesize avatarCreated=_avatarCreated;
@property(copy, nonatomic) CDUnknownBlockType videoPicked; // @synthesize videoPicked=_videoPicked;
@property(copy, nonatomic) CDUnknownBlockType photosPicked; // @synthesize photosPicked=_photosPicked;
@property(nonatomic) _Bool disallowCaptions; // @synthesize disallowCaptions=_disallowCaptions;
@property(nonatomic) _Bool shouldShowFileTipIfNeeded; // @synthesize shouldShowFileTipIfNeeded=_shouldShowFileTipIfNeeded;
@property(nonatomic) _Bool serverAssetCacheEnabled; // @synthesize serverAssetCacheEnabled=_serverAssetCacheEnabled;
@property(nonatomic) _Bool liveUploadEnabled; // @synthesize liveUploadEnabled=_liveUploadEnabled;
- (void).cxx_destruct;
- (void)_updateContainerLayout:(id)arg1 forSize:(struct CGSize)arg2;
- (void)_showAccessDisabled;
- (void)_setNoMediaHidden:(_Bool)arg1;
- (id)accessDisabledContainer;
- (id)emptyGroupContainer;
- (id)selectedItemSignals:(CDUnknownBlockType)arg1;
- (void)commitVideoSendWithItems:(id)arg1 currentIndex:(long long)arg2;
- (void)dismissVideoCompression;
- (void)_cancelVideoConversion;
- (void)prepareVideoSendWithSelectedItems:(id)arg1;
- (void)completeWithItem:(id)arg1;
- (void)_selectItemIfApplicable:(id)arg1;
- (void)presentGalleryControllerForItem:(id)arg1 withThumbnailImage:(id)arg2;
- (id)prepareGalleryItemsWithSelectedItemsModel:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (id)listItemForAsset:(id)arg1;
- (id)referenceViewForAsset:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePan:(id)arg1;
- (void)updateItemsSelectedAnimated:(_Bool)arg1;
- (void)updateHiddenItemAnimated:(_Bool)arg1;
- (void)updateEditedItem:(id)arg1;
- (void)setSelectedItems:(id)arg1 animated:(_Bool)arg2;
- (id)selectedItems;
- (_Bool)toggleItemSelected:(id)arg1 updateInterface:(_Bool)arg2;
- (void)updateSelectionInterface:(_Bool)arg1;
- (void)actualizeSelectedItems;
- (id)_assetsAtIndexPaths:(id)arg1;
- (void)_resetAssetsImageCaching;
- (void)_updateAssetsImageCaching;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_handleAssetsLibraryChanged;
- (CDUnknownBlockType)reloadData;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)enqueueView:(id)arg1;
- (id)dequeueViewForItem:(id)arg1 synchronously:(_Bool)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)_adjustContentOffsetToBottom:(long long)arg1;
- (void)layoutControllerForSize:(struct CGSize)arg1 duration:(double)arg2;
- (void)_layoutCollectionViewForSize:(struct CGSize)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAdjustScrollViewInsetsForInversedLayout;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)doneButtonPressed;
- (void)cancelButtonPressed;
- (void)dealloc;
- (id)initWithAssetsGroup:(id)arg1 intent:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
