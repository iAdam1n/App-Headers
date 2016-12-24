/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SQueue;

@interface TGMediaAssetsLibrary : NSObject {

	SQueue* _queue;
	int _assetType;

}

@property (nonatomic,readonly) int assetType;              //@synthesize assetType=_assetType - In the implementation block
+(id)libraryForAssetType:(int)arg1 ;
+(id)authorizationStatusSignal;
+(void)requestAuthorizationForAssetType:(int)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)usesPhotoFramework;
+(void)load;
+(int)authorizationStatus;
+(id)sharedLibrary;
-(id)initForAssetType:(int)arg1 ;
-(id)libraryChanged;
-(id)cameraRollGroup;
-(id)assetWithIdentifier:(id)arg1 ;
-(id)assetGroups;
-(id)assetsOfAssetGroup:(id)arg1 reversed:(BOOL)arg2 ;
-(id)updatedAssetsForAssets:(id)arg1 ;
-(id)saveAssetWithImage:(id)arg1 ;
-(id)saveAssetWithImageData:(id)arg1 ;
-(id)_saveAssetWithUrl:(id)arg1 isVideo:(BOOL)arg2 ;
-(id)saveAssetWithImageAtUrl:(id)arg1 ;
-(id)saveAssetWithVideoAtUrl:(id)arg1 ;
-(id)_legacyAssetsOfAssetGroup:(id)arg1 reversed:(BOOL)arg2 ;
-(int)assetType;
@end
