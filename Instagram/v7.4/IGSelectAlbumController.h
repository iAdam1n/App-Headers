/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/PHPhotoLibraryChangeObserver.h>

@protocol IGSelectAlbumDelegate, OS_dispatch_queue;
@class UITableView, UIVisualEffectView, UIActivityIndicatorView, NSObject, PHAssetCollection, PHFetchResult, NSMutableDictionary, PHCachingImageManager, PHImageRequestOptions, ALAssetsLibrary, NSArray, NSString;

@interface IGSelectAlbumController : UIViewController <UITableViewDataSource, UITableViewDelegate, PHPhotoLibraryChangeObserver> {

	BOOL _needsSetPhotoLibraryOptions;
	id<IGSelectAlbumDelegate> _delegate;
	UITableView* _tableView;
	UIVisualEffectView* _blurView;
	UIActivityIndicatorView* _activityIndicator;
	NSObject*<OS_dispatch_queue> _queue;
	PHAssetCollection* _userLibrary;
	PHFetchResult* _unfilteredSmartAlbums;
	PHFetchResult* _smartAlbums;
	PHFetchResult* _albums;
	NSMutableDictionary* _keyImageFetchResults;
	PHCachingImageManager* _imageManager;
	PHImageRequestOptions* _options;
	ALAssetsLibrary* _assetsLibrary;
	NSArray* _assetGroups;
	NSArray* _filteredAssetGroups;
	CGSize _thumbnailSize;
	CGRect _previousPreheatRect;

}

@property (assign,nonatomic,__weak) id<IGSelectAlbumDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                            //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PHAssetCollection * userLibrary;                          //@synthesize userLibrary=_userLibrary - In the implementation block
@property (nonatomic,retain) PHFetchResult * unfilteredSmartAlbums;                    //@synthesize unfilteredSmartAlbums=_unfilteredSmartAlbums - In the implementation block
@property (nonatomic,retain) PHFetchResult * smartAlbums;                              //@synthesize smartAlbums=_smartAlbums - In the implementation block
@property (nonatomic,retain) PHFetchResult * albums;                                   //@synthesize albums=_albums - In the implementation block
@property (retain) NSMutableDictionary * keyImageFetchResults;                         //@synthesize keyImageFetchResults=_keyImageFetchResults - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * imageManager;                     //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * options;                          //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL needsSetPhotoLibraryOptions;                         //@synthesize needsSetPhotoLibraryOptions=_needsSetPhotoLibraryOptions - In the implementation block
@property (nonatomic,retain) ALAssetsLibrary * assetsLibrary;                          //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (nonatomic,retain) NSArray * assetGroups;                                    //@synthesize assetGroups=_assetGroups - In the implementation block
@property (nonatomic,retain) NSArray * filteredAssetGroups;                            //@synthesize filteredAssetGroups=_filteredAssetGroups - In the implementation block
@property (assign,nonatomic) CGRect previousPreheatRect;                               //@synthesize previousPreheatRect=_previousPreheatRect - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                     //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allAlbumTitle;
-(BOOL)usePhotosFramework;
-(void)setNeedsSetPhotoLibraryOptions:(BOOL)arg1 ;
-(void)setPhotosLibraryOptions;
-(void)resetCachedAssets;
-(void)assetsLibraryDidChange:(id)arg1 ;
-(void)updateCachedAssets;
-(void)setPreviousPreheatRect:(CGRect)arg1 ;
-(CGRect)previousPreheatRect;
-(void)computeDifferenceBetweenRect:(CGRect)arg1 andRect:(CGRect)arg2 removedHandler:(/*^block*/id)arg3 addedHandler:(/*^block*/id)arg4 ;
-(id)assetsAtIndexPaths:(id)arg1 ;
-(BOOL)needsSetPhotoLibraryOptions;
-(void)viewDidOpen;
-(void)setKeyImageFetchResults:(NSMutableDictionary *)arg1 ;
-(id)filterSmartAlbums:(id)arg1 ;
-(void)setSmartAlbums:(PHFetchResult *)arg1 ;
-(PHFetchResult *)smartAlbums;
-(void)setUserLibrary:(PHAssetCollection *)arg1 ;
-(PHAssetCollection *)userLibrary;
-(id)keyImageFetchResultForAssetCollection:(id)arg1 ;
-(void)enumerateCollections:(/*^block*/id)arg1 ;
-(void)setAssetGroups:(NSArray *)arg1 ;
-(id)filterALResults:(id)arg1 ;
-(void)setFilteredAssetGroups:(NSArray *)arg1 ;
-(NSArray *)assetGroups;
-(NSMutableDictionary *)keyImageFetchResults;
-(id)indexPathsFromIndexes:(id)arg1 section:(long long)arg2 ;
-(NSArray *)filteredAssetGroups;
-(id)collectionFetchResultAtIndexPath:(id)arg1 ;
-(PHFetchResult *)unfilteredSmartAlbums;
-(void)setUnfilteredSmartAlbums:(PHFetchResult *)arg1 ;
-(void)setAssetsLibrary:(ALAssetsLibrary *)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(id)collectionAtIndexPath:(id)arg1 ;
-(ALAssetsLibrary *)assetsLibrary;
-(void)dealloc;
-(void)setDelegate:(id<IGSelectAlbumDelegate>)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGSelectAlbumDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UITableView *)tableView;
-(UIVisualEffectView *)blurView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(void)setOptions:(PHImageRequestOptions *)arg1 ;
-(PHImageRequestOptions *)options;
-(CGSize)thumbnailSize;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)scrollToTop;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(PHCachingImageManager *)imageManager;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PHFetchResult *)albums;
-(void)setAlbums:(PHFetchResult *)arg1 ;
-(void)loadData;
@end
