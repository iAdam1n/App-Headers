/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SRAssetsIndexerToolbox, OS_dispatch_queue;
@class EGODatabase, NSObject;

@interface SRAssetsMetadataStore : NSObject {

	id<SRAssetsIndexerToolbox> _toolbox;
	EGODatabase* _db;
	NSObject*<OS_dispatch_queue> _writeQueue;
	long long _localURLPlatformFormat;

}
-(id)initWithToolbox:(id)arg1 ;
-(id)latestAssetCreationDate;
-(id)allDeletedAssetIdentifiers;
-(void)recordNewAssets:(id)arg1 ;
-(void)deleteAssetMetadatas:(id)arg1 ;
-(BOOL)_quickCheckOK;
-(BOOL)_rebuildDB;
-(long long)_readPlatformFormat;
-(id)_platformFormatStringFromPlatformFormat:(long long)arg1 ;
-(long long)_readKeyValuesState;
-(id)_newAssetFromDatabaseRow:(id)arg1 ;
-(id)_dbPathCreateDirectoryIfNecessary:(BOOL)arg1 ;
-(long long)_platformFormatFromPlatformFormatString:(id)arg1 ;
-(void)_discardStore;
-(BOOL)hasAnyAssets;
-(id)chronologicalAssetsSinceDate:(id)arg1 ;
-(id)assetMetadataForNativeAssetIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)_load;
-(void)_closeDB;
-(BOOL)_openDB;
-(id)allAssets;
-(void)updateAssets:(id)arg1 ;
@end
