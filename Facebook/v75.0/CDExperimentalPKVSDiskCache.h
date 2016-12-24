/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CDExperimentalDiskCache.h>

@class FBPersistentKeyValueStore, NSString;

@interface CDExperimentalPKVSDiskCache : NSObject <CDExperimentalDiskCache> {

	FBPersistentKeyValueStore* _pkvs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchCachedDataOnDiskForKey:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)cacheData:(id)arg1 toDiskForKey:(id)arg2 options:(unsigned long long)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)fetch:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)store:(id)arg1 key:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)storeForKey:(id)arg1 writeBlock:(/*^block*/id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)removeItemForKey:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)dataForKey:(id)arg1 modificationDate:(id*)arg2 ;
-(id)getAllKeys;
-(void)fetch:(id)arg1 readBlock:(/*^block*/id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)updateLastAccessDateForKey:(id)arg1 ;
-(void)fetch:(id)arg1 tag:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithPersistentKeyValueStore:(id)arg1 ;
-(void)fetchFirstCachedDataOnDiskForKeys:(id)arg1 tag:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)fetchCachedDataOnDiskForKey:(id)arg1 tag:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)fetch:(id)arg1 tag:(id)arg2 readBlock:(/*^block*/id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)updateLastAccessDateForKey:(id)arg1 tag:(id)arg2 ;
-(void)store:(id)arg1 key:(id)arg2 ;
-(void)clear:(/*^block*/id)arg1 ;
@end
