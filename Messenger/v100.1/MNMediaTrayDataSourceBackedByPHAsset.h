/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>
#import <Messenger/MNMediaTrayDataSource.h>

@protocol OS_dispatch_queue, MNPhotosDataRequesting, MNMediaTrayDataSourceDelegate;
@class NSObject, NSArray, MNMediaAssetsLoader, FBCache, PHImageRequestOptions, NSString;

@interface MNMediaTrayDataSourceBackedByPHAsset : NSObject <PHPhotoLibraryChangeObserver, MNMediaTrayDataSource> {

	NSObject*<OS_dispatch_queue> _assetLoadingQueue;
	BOOL _registeredPhotoLibraryChange;
	NSArray* _loadedAssets;
	MNMediaAssetsLoader* _mediaAssetsLoader;
	id<MNPhotosDataRequesting> _photosDataRequester;
	FBCache* _thumbnailCache;
	BOOL _isLoading;
	unsigned long long _fetchLimit;
	BOOL _photoOnly;
	PHImageRequestOptions* _imageRequestOptions;
	NSArray* _loadedAssetIds;
	id<MNMediaTrayDataSourceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * loadedAssetIds;                                //@synthesize loadedAssetIds=_loadedAssetIds - In the implementation block
@property (assign,nonatomic,__weak) id<MNMediaTrayDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMediaAssetLoader:(id)arg1 photosDataRequester:(id)arg2 photoOnly:(BOOL)arg3 fetchLimit:(long long)arg4 ;
-(void)requestPermissionAndLoadAssetsWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)loadAssets;
-(BOOL)isVideoAssetAtIndex:(long long)arg1 ;
-(id)videoURLAtIndex:(long long)arg1 ;
-(id)videoDurationAtIndex:(long long)arg1 ;
-(void)loadAssetsAtIndexes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)areAssetsLoaded;
-(BOOL)isPhotoAssetAtIndex:(long long)arg1 ;
-(NSArray *)loadedAssetIds;
-(id)assetDateAtIndex:(long long)arg1 ;
-(id)requestThumbnailAtIndex:(long long)arg1 thumbnailOption:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)requestEditImageAtIndex:(long long)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_loadAssetsAndExecuteBlockOnMainQueue:(/*^block*/id)arg1 ;
-(void)_loadAndPopulateAssets;
-(void)_registerPhotoLibraryChangeIfNeeded;
-(BOOL)_isValidMediaType:(long long)arg1 ;
-(CGSize)assetResolutionAtIndex:(long long)arg1 ;
-(long long)attachmentSendingSource;
-(void)setDelegate:(id<MNMediaTrayDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMediaTrayDataSourceDelegate>)delegate;
-(id)dataSourceIdentifier;
-(void)photoLibraryDidChange:(id)arg1 ;
-(BOOL)needsReload;
-(id)_assetAtIndex:(long long)arg1 ;
@end
