/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol FBSyncPersonLoadedListener;
@class NSMutableDictionary, FBSyncStorePersonSearchOperationConfig, EGODatabase, NSDictionary, NSArray;

@interface FBSyncStorePersonSearchOperation : NSOperation {

	NSMutableDictionary* _mutablePeople;
	FBSyncStorePersonSearchOperationConfig* _config;
	EGODatabase* _db;
	NSDictionary* _dbStatements;
	NSDictionary* _parameters;
	id<FBSyncPersonLoadedListener> _listener;
	/*^block*/id _queryBuilder;
	NSArray* _queryBuilderArgs;

}

@property (nonatomic,copy,readonly) NSDictionary * people; 
@property (nonatomic,retain) FBSyncStorePersonSearchOperationConfig * config;              //@synthesize config=_config - In the implementation block
@property (retain) EGODatabase * db;                                                       //@synthesize db=_db - In the implementation block
@property (retain) NSDictionary * dbStatements;                                            //@synthesize dbStatements=_dbStatements - In the implementation block
@property (retain) NSDictionary * parameters;                                              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) id<FBSyncPersonLoadedListener> listener;                      //@synthesize listener=_listener - In the implementation block
@property (nonatomic,copy) id queryBuilder;                                                //@synthesize queryBuilder=_queryBuilder - In the implementation block
@property (nonatomic,copy) NSArray * queryBuilderArgs;                                     //@synthesize queryBuilderArgs=_queryBuilderArgs - In the implementation block
-(void)setDbStatements:(NSDictionary *)arg1 ;
-(void)setQueryBuilder:(id)arg1 ;
-(void)setQueryBuilderArgs:(NSArray *)arg1 ;
-(id)queryBuilder;
-(NSArray *)queryBuilderArgs;
-(void)executePersonStatement:(id)arg1 parameters:(id)arg2 ;
-(NSDictionary *)dbStatements;
-(id)initWithDB:(id)arg1 listener:(id)arg2 statements:(id)arg3 parameters:(id)arg4 ;
-(id)initWithDB:(id)arg1 listener:(id)arg2 statement:(id)arg3 parameters:(id)arg4 ;
-(id)initWithDB:(id)arg1 listener:(id)arg2 queryBuilder:(/*^block*/id)arg3 queryBuilderArgs:(id)arg4 ;
-(void)dealloc;
-(void)main;
-(id<FBSyncPersonLoadedListener>)listener;
-(void)setListener:(id<FBSyncPersonLoadedListener>)arg1 ;
-(EGODatabase *)db;
-(FBSyncStorePersonSearchOperationConfig *)config;
-(void)setConfig:(FBSyncStorePersonSearchOperationConfig *)arg1 ;
-(void)setDb:(EGODatabase *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)people;
@end

