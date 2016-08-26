/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGMediaAssetsLibrary.h>

@class ALAssetsLibrary, TGObserverProxy, SPipe;

@interface TGMediaAssetsLegacyLibrary : TGMediaAssetsLibrary {

	ALAssetsLibrary* _assetsLibrary;
	TGObserverProxy* _assetsChangeObserver;
	SPipe* _libraryChangePipe;

}
+(id)_assetsFilterForAssetType:(int)arg1 ;
+(int)_authorizationStatusForALAuthorizationStatus:(long long)arg1 ;
+(id)authorizationStatusSignal;
+(void)requestAuthorizationForAssetType:(int)arg1 completion:(/*^block*/id)arg2 ;
+(int)authorizationStatus;
-(id)initForAssetType:(int)arg1 ;
-(void)assetsLibraryDidChange:(id)arg1 ;
-(id)libraryChanged;
-(id)cameraRollGroup;
-(id)assetWithIdentifier:(id)arg1 ;
-(id)assetGroups;
-(id)assetsOfAssetGroup:(id)arg1 reversed:(BOOL)arg2 ;
-(id)updatedAssetsForAssets:(id)arg1 ;
-(id)filterDeletedAssets:(id)arg1 ;
-(id)saveAssetWithImage:(id)arg1 ;
-(id)saveAssetWithImageData:(id)arg1 ;
-(id)_saveAssetWithUrl:(id)arg1 isVideo:(BOOL)arg2 ;
@end
