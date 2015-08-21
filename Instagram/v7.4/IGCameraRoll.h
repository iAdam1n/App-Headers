/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface IGCameraRoll : NSObject {

	long long _initializationStatus;
	NSMutableArray* _initializationBlocks;
	NSMutableDictionary* _assetGroupMap;

}

@property (assign,nonatomic) long long initializationStatus;                     //@synthesize initializationStatus=_initializationStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * initializationBlocks;              //@synthesize initializationBlocks=_initializationBlocks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetGroupMap;                //@synthesize assetGroupMap=_assetGroupMap - In the implementation block
+(id)assetsLibrary;
+(long long)status;
+(id)sharedCameraRoll;
-(void)initializeLibrary:(BOOL)arg1 withReadyBlock:(/*^block*/id)arg2 ;
-(id)sortedAssetGroupsForAssetType:(long long)arg1 ;
-(id)mostRecentAssetOfType:(long long)arg1 ;
-(id)assetGroupForUniqueID:(id)arg1 ;
-(id)defaultAssetGroup;
-(id)fullScreenImageForAsset:(id)arg1 ;
-(NSMutableDictionary *)assetGroupMap;
-(long long)initializationStatus;
-(NSMutableArray *)initializationBlocks;
-(void)setInitializationStatus:(long long)arg1 ;
-(void)setInitializationBlocks:(NSMutableArray *)arg1 ;
-(void)doInitializeLibraryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)onAssetsLibraryChanged:(id)arg1 ;
-(void)setAssetGroupMap:(NSMutableDictionary *)arg1 ;
-(void)handleDeletedAssetGroups:(id)arg1 ;
-(void)handleUpdatedAssetGroups:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleInsertedAssetGroups:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)allAssetGroups;
-(id)fullSizeImageForAsset:(id)arg1 ;
-(BOOL)hasMediaOfType:(long long)arg1 ;
-(void)dealloc;
-(id)init;
@end

