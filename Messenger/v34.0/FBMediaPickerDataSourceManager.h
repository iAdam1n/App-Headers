/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAssetsLibraryListener.h>
#import <Messenger/FBMediaTraitsUpdateListener.h>
#import <Messenger/FBMediaImageManagerListener.h>

@class NSMutableArray, NSMutableDictionary, FBMediaImageManager, FBMediaComposition, FBMediaPickerBaseTraits, FBPhotoStreamDataSource, FBCameraRollDataSource, FBPhotoAssetPreparersManager, FBAssetsLibrary, FBUserSession, NSArray, NSString;

@interface FBMediaPickerDataSourceManager : NSObject <FBAssetsLibraryListener, FBMediaTraitsUpdateListener, FBMediaImageManagerListener> {

	NSMutableArray* _localDataSources;
	NSMutableDictionary* _dataSourceIDToDataSource;
	FBMediaImageManager* _imageManager;
	unsigned long long _selectionPolicy;
	FBMediaComposition* _savedComposition;
	FBMediaPickerBaseTraits* _traits;
	FBMediaComposition* _currentComposition;
	FBPhotoStreamDataSource* _photoStreamDataSource;
	FBCameraRollDataSource* _cameraRollDataSource;
	FBPhotoAssetPreparersManager* _photoAssetPreparerManager;
	FBAssetsLibrary* _assetsLibrary;
	FBUserSession* _currentFBSession;

}

@property (nonatomic,readonly) FBMediaPickerBaseTraits * traits;                                      //@synthesize traits=_traits - In the implementation block
@property (nonatomic,retain) FBMediaComposition * currentComposition;                                 //@synthesize currentComposition=_currentComposition - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfDataSources; 
@property (nonatomic,readonly) NSArray * localDataSources;                                            //@synthesize localDataSources=_localDataSources - In the implementation block
@property (nonatomic,readonly) FBPhotoStreamDataSource * photoStreamDataSource;                       //@synthesize photoStreamDataSource=_photoStreamDataSource - In the implementation block
@property (nonatomic,retain) FBCameraRollDataSource * cameraRollDataSource;                           //@synthesize cameraRollDataSource=_cameraRollDataSource - In the implementation block
@property (nonatomic,readonly) FBPhotoAssetPreparersManager * photoAssetPreparerManager;              //@synthesize photoAssetPreparerManager=_photoAssetPreparerManager - In the implementation block
@property (nonatomic,readonly) FBMediaImageManager * imageManager; 
@property (nonatomic,readonly) FBAssetsLibrary * assetsLibrary;                                       //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (nonatomic,retain) FBUserSession * currentFBSession;                                        //@synthesize currentFBSession=_currentFBSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mediaAttachmentsFromCurrentComposition;
-(id)getPhotoAttachmentFromShareItem:(id)arg1 ;
-(id)_getVideoAttachmentFromShareItem:(id)arg1 ;
-(void)assetsLibraryDidLoadAssets;
-(FBUserSession *)currentFBSession;
-(void)setCurrentFBSession:(FBUserSession *)arg1 ;
-(FBCameraRollDataSource *)cameraRollDataSource;
-(id)toggleSelectionAtDataSourceIndex:(unsigned long long)arg1 fromDataSource:(id)arg2 quality:(unsigned long long)arg3 ;
-(void)persistComposition;
-(id)getOrMakeNewAssetForDataSourceIndex:(unsigned long long)arg1 forDataSource:(id)arg2 ;
-(FBPhotoAssetPreparersManager *)photoAssetPreparerManager;
-(FBMediaComposition *)currentComposition;
-(void)didUpdateMediaTraits:(id)arg1 ;
-(unsigned long long)numberOfDataSources;
-(id)dataSourceWithID:(id)arg1 ;
-(NSArray *)localDataSources;
-(id)selectedMediaShareItemWithDataSourceIndex:(unsigned long long)arg1 fromDataSource:(id)arg2 ;
-(unsigned long long)shareIndexForDataSourceIndex:(unsigned long long)arg1 forDataSource:(id)arg2 ;
-(id)cachedThumbnailForAssetAtDataSourceIndex:(unsigned long long)arg1 option:(unsigned long long)arg2 forDataSource:(id)arg3 ;
-(id)requestThumbnailForAssetAtDataSourceIndex:(unsigned long long)arg1 option:(unsigned long long)arg2 forDataSource:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)thumbnailForAssetAtDataSourceIndex:(unsigned long long)arg1 option:(unsigned long long)arg2 forDataSource:(id)arg3 ;
-(unsigned long long)datasourceIndexForShareIndex:(unsigned long long)arg1 ;
-(id)datasourceForShareIndex:(unsigned long long)arg1 ;
-(id)initWithCurrentFBSession:(id)arg1 mediaPickerTraits:(id)arg2 assetsLibrary:(id)arg3 ;
-(unsigned long long)dataSourceIndexForMediaShareItem:(id)arg1 ;
-(void)_reloadLocalDataSources;
-(void)_removeInvalidSelectionIfNeeded;
-(id)_localDataSourceWithGroupURL:(id)arg1 ;
-(unsigned long long)_dataSourceIndexForAssetID:(id)arg1 withIndexHint:(unsigned long long)arg2 dataSourceID:(id)arg3 ;
-(void)_resetPhotoAssetEditsForInMemoryPhotoAsset:(id)arg1 ;
-(id)thumbnailForPhotoShareItem:(id)arg1 ;
-(id)_editedThumbnailForAssetAtDataSourceIndex:(unsigned long long)arg1 forDataSource:(id)arg2 ;
-(unsigned long long)_dataSourceIndexForAssetID:(id)arg1 withIndexHint:(unsigned long long)arg2 inDataSource:(id)arg3 ;
-(id)getExistingAssetForItem:(id)arg1 ;
-(void)_removeInvalidSelectionFromComposition:(id)arg1 ;
-(id)getOrMakeNewAssetForItem:(id)arg1 ;
-(void)editsDidChangeForAsset:(id)arg1 ;
-(id)getOrMakeNewAssetForDataSourceIndex:(unsigned long long)arg1 forDataSourceID:(id)arg2 ;
-(id)thumbnailImagesForPhotoShareItemsInCurrentComposition;
-(id)requestThumbnailForPhotoShareItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(unsigned long long)dataSourceIndexForPhotoAttachment:(id)arg1 ;
-(void)restoreComposition;
-(void)autoTagCreateIfNeededForPhotoAssetIDs:(id)arg1 createdType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applyEditsToThumbForPhotoAssetID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareImageForEditingFromPhotoAssetID:(id)arg1 useCroppedPhoto:(BOOL)arg2 applyStickers:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateThumbnailImage:(id)arg1 forPhotoAssetID:(id)arg2 ;
-(void)asyncPartiallyLoadAssetsIfAccessAuthorized;
-(void)setCurrentComposition:(FBMediaComposition *)arg1 ;
-(FBPhotoStreamDataSource *)photoStreamDataSource;
-(void)setCameraRollDataSource:(FBCameraRollDataSource *)arg1 ;
-(FBAssetsLibrary *)assetsLibrary;
-(void)dealloc;
-(FBMediaPickerBaseTraits *)traits;
-(void)clearComposition;
-(FBMediaImageManager *)imageManager;
@end
