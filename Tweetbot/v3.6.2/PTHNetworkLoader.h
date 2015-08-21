/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PTHFileCacheDirectory, NSObject, NSMutableArray, NSString;

@interface PTHNetworkLoader : NSObject {

	PTHFileCacheDirectory* _fileCacheDirectory;
	NSObject*<OS_dispatch_queue> _networkLoaderQueue;
	NSMutableArray* _queuedRequests;
	BOOL _dirty;
	BOOL _debugEnabled;
	BOOL _deleted;

}

@property (assign,getter=isDebugEnabled,nonatomic) BOOL debugEnabled;              //@synthesize debugEnabled=_debugEnabled - In the implementation block
@property (nonatomic,copy) NSString * fileSuffix; 
@property (assign,nonatomic) double expirationTimeInterval; 
@property (assign,nonatomic) unsigned long long maxFileCount; 
@property (assign,nonatomic) unsigned long long maxDiskSpace; 
@property (assign,getter=isDeleted,nonatomic) BOOL deleted;                        //@synthesize deleted=_deleted - In the implementation block
-(void)saveIfNeeded;
-(id)initWithCacheDirectory:(id)arg1 ;
-(NSString *)fileSuffix;
-(void)setFileSuffix:(NSString *)arg1 ;
-(void)setExpirationTimeInterval:(double)arg1 ;
-(unsigned long long)maxFileCount;
-(void)setMaxFileCount:(unsigned long long)arg1 ;
-(unsigned long long)maxDiskSpace;
-(void)setMaxDiskSpace:(unsigned long long)arg1 ;
-(void)deleteFileForNetworkURL:(id)arg1 ;
-(void)loadNetworkURL:(id)arg1 queue:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)loadCachedURL:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)createPathForURL:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_saveDirty;
-(void)loadNetworkURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_markDirty;
-(void)dealloc;
-(void)setDebugEnabled:(BOOL)arg1 ;
-(double)expirationTimeInterval;
-(void)setDeleted:(BOOL)arg1 ;
-(void)delete;
-(BOOL)isDeleted;
-(BOOL)isDebugEnabled;
@end

