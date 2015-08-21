/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:11 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/PHPhotoLibraryChangeObserver.h>

@protocol IGGridViewControllerDelegate, IGGridViewControllerScrollDelegate, OS_dispatch_queue;
@class ALAssetsLibrary, PHFetchResult, NSObject, UICollectionView, PHAssetCollection, PHCachingImageManager, PHImageRequestOptions, NSArray, ALAssetsGroup, NSString;

@interface IGGridViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, PHPhotoLibraryChangeObserver> {

	id _firstAsset;
	BOOL _showSelectedOverlay;
	BOOL _needsSetPhotoLibraryOptions;
	id<IGGridViewControllerDelegate> _delegate;
	id<IGGridViewControllerScrollDelegate> _scrollDelegate;
	ALAssetsLibrary* _assetsLibrary;
	PHFetchResult* _result;
	NSObject*<OS_dispatch_queue> _queue;
	UICollectionView* _collectionView;
	PHFetchResult* _collectionFetchResult;
	PHAssetCollection* _collection;
	PHCachingImageManager* _imageManager;
	PHImageRequestOptions* _imageRequestOptions;
	id _selectedAsset;
	NSArray* _assets;
	ALAssetsGroup* _group;
	CGSize _thumbnailSize;
	CGRect _previousPreheatRect;

}

@property (nonatomic,readonly) id firstAsset; 
@property (assign,nonatomic,__weak) id<IGGridViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGGridViewControllerScrollDelegate> scrollDelegate;              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (nonatomic,readonly) NSString * currentAlbumTitle; 
@property (nonatomic,retain) ALAssetsLibrary * assetsLibrary;                                           //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (assign,nonatomic) BOOL showSelectedOverlay;                                                  //@synthesize showSelectedOverlay=_showSelectedOverlay - In the implementation block
@property (nonatomic,retain) PHFetchResult * result;                                                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                         //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) PHFetchResult * collectionFetchResult;                                     //@synthesize collectionFetchResult=_collectionFetchResult - In the implementation block
@property (nonatomic,retain) PHAssetCollection * collection;                                            //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * imageManager;                                      //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * imageRequestOptions;                               //@synthesize imageRequestOptions=_imageRequestOptions - In the implementation block
@property (assign,nonatomic) BOOL needsSetPhotoLibraryOptions;                                          //@synthesize needsSetPhotoLibraryOptions=_needsSetPhotoLibraryOptions - In the implementation block
@property (nonatomic,retain) id selectedAsset;                                                          //@synthesize selectedAsset=_selectedAsset - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                                          //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) ALAssetsGroup * group;                                                     //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) CGRect previousPreheatRect;                                                //@synthesize previousPreheatRect=_previousPreheatRect - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                                      //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)cellSpacing;
-(id<IGGridViewControllerScrollDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<IGGridViewControllerScrollDelegate>)arg1 ;
-(void)setShowSelectedOverlay:(BOOL)arg1 ;
-(BOOL)usePhotosFramework;
-(PHImageRequestOptions *)imageRequestOptions;
-(BOOL)showSelectedOverlay;
-(void)setImageRequestOptions:(PHImageRequestOptions *)arg1 ;
-(void)setNeedsSetPhotoLibraryOptions:(BOOL)arg1 ;
-(void)setPhotosLibraryOptions;
-(void)resetCachedAssets;
-(void)assetsLibraryDidChange:(id)arg1 ;
-(void)setCollectionFetchResult:(PHFetchResult *)arg1 ;
-(PHFetchResult *)collectionFetchResult;
-(void)setDefaultAlbum:(/*^block*/id)arg1 ;
-(void)updateCachedAssets;
-(unsigned long long)indexOfAsset:(id)arg1 ;
-(void)setSelectedAsset:(id)arg1 ;
-(id)gridViewCellForIndexPath:(id)arg1 ;
-(void)setPreviousPreheatRect:(CGRect)arg1 ;
-(CGRect)previousPreheatRect;
-(void)computeDifferenceBetweenRect:(CGRect)arg1 andRect:(CGRect)arg2 removedHandler:(/*^block*/id)arg3 addedHandler:(/*^block*/id)arg4 ;
-(id)assetsAtIndexPaths:(id)arg1 ;
-(BOOL)needsSetPhotoLibraryOptions;
-(void)updateFirstAsset;
-(NSString *)currentAlbumTitle;
-(void)reselectSelectedAsset;
-(id)indexPathsFromIndexes:(id)arg1 indexTranslationBlock:(/*^block*/id)arg2 ;
-(void)refreshAssetGroup:(id)arg1 ;
-(id)selectedAsset;
-(void)selectAsset:(id)arg1 ;
-(void)setAlbum:(id)arg1 fetchResult:(id)arg2 ;
-(void)scrollToIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 expanding:(BOOL)arg2 ;
-(CGRect)selectedAssetFrame;
-(void)setAssetsLibrary:(ALAssetsLibrary *)arg1 ;
-(PHAssetCollection *)collection;
-(id)firstAsset;
-(id)assetAtIndexPath:(id)arg1 ;
-(void)setCollection:(PHAssetCollection *)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(ALAssetsLibrary *)assetsLibrary;
-(void)dealloc;
-(void)setDelegate:(id<IGGridViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)reload;
-(id<IGGridViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setGroup:(ALAssetsGroup *)arg1 ;
-(ALAssetsGroup *)group;
-(CGSize)thumbnailSize;
-(PHFetchResult *)result;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)scrollToTop;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(PHCachingImageManager *)imageManager;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setResult:(PHFetchResult *)arg1 ;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
@end

