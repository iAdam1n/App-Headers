/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSCache, MPDiskLRUCache, NSString;

@interface MPNativeCache : NSObject <NSCacheDelegate> {

	int _cacheMethod;
	NSCache* _memoryCache;
	MPDiskLRUCache* _diskCache;

}

@property (nonatomic,retain) NSCache * memoryCache;                   //@synthesize memoryCache=_memoryCache - In the implementation block
@property (nonatomic,retain) MPDiskLRUCache * diskCache;              //@synthesize diskCache=_diskCache - In the implementation block
@property (assign,nonatomic) int cacheMethod;                         //@synthesize cacheMethod=_cacheMethod - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(NSCache *)memoryCache;
-(void)setMemoryCache:(NSCache *)arg1 ;
-(void)setCacheMethod:(int)arg1 ;
-(int)cacheMethod;
-(BOOL)cachedDataExistsForKey:(id)arg1 withCacheMethod:(int)arg2 ;
-(id)retrieveDataForKey:(id)arg1 withCacheMethod:(int)arg2 ;
-(void)storeData:(id)arg1 forKey:(id)arg2 withCacheMethod:(int)arg3 ;
-(void)removeAllDataFromMemory;
-(void)removeAllDataFromDisk;
-(MPDiskLRUCache *)diskCache;
-(BOOL)cachedDataExistsForKey:(id)arg1 ;
-(id)retrieveDataForKey:(id)arg1 ;
-(void)storeData:(id)arg1 forKey:(id)arg2 ;
-(void)setInMemoryCacheEnabled:(BOOL)arg1 ;
-(void)removeAllDataFromCache;
-(void)setDiskCache:(MPDiskLRUCache *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
@end
