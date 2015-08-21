/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSString;

@interface FBOfflinePhotoTaggingAssetDatabase : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	sqlite3Ref _db;
	sqlite3_stmtRef _selectStmt;
	sqlite3_stmtRef _insertStmt;
	NSString* _dbPath;

}

@property (nonatomic,copy) NSString * dbPath;              //@synthesize dbPath=_dbPath - In the implementation block
-(id)initWithDBPath:(id)arg1 ;
-(void)_freeResouce;
-(id)_photoAssetFromData:(id)arg1 ;
-(id)_paramValueForArray:(id)arg1 ;
-(void)_insertPhotoAsset:(id)arg1 ;
-(void)fetchAssetByAssetID:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAssetsByAssetIDs:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)insertPhotoAssets:(id)arg1 ;
-(void)cleanAssetsOlderThan:(unsigned long long)arg1 ;
-(void)insertNeedResetAsset:(id)arg1 ;
-(void)cleanAllNeedResetAssets;
-(void)deleteAssets:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)dbPath;
-(void)setDbPath:(NSString *)arg1 ;
-(void)_openDatabase;
@end

