/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSMutableDictionary;

@interface FBPhotoMetadataIndex : NSObject {

	NSObject*<OS_dispatch_queue> _indexingQueue;
	NSObject*<OS_dispatch_queue> _photoRequestQueue;
	NSMutableDictionary* _assetAbsoluteUrlToDerivedInfo;

}
+(id)sharedInstance;
-(void)indexAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_indexAssetsUsingQuickFetch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_indexAssetsUsingFreeFetch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)derivedInfoForAssetAbsoluteUrl:(id)arg1 ;
-(long long)_derivedInfoForAsset:(id)arg1 ;
-(void)_setDerivedInfo:(long long)arg1 forAsset:(id)arg2 persistToDisk:(BOOL)arg3 ;
-(SCD_Struct_FB457)photoSourceForAssetAbsoluteUrl:(id)arg1 ;
-(id)init;
@end

