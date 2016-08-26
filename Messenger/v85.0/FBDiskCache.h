/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPersistentKeyValueStore.h>
#import <Messenger/FBDiskCacheProtocol.h>

@class NSString;

@interface FBDiskCache : FBPersistentKeyValueStore <FBDiskCacheProtocol> {

	shared_ptr<facebook::mobile::xplat::compactdisk::DiskCache>* _diskCache;
	BOOL _enforceExtendedMetadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)cacheData:(id)arg1 toDiskForKey:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)fetchCachedDataOnDiskForKey:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fetchCachedDataOnDiskForKey:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)cacheData:(id)arg1 toDiskForKey:(id)arg2 options:(unsigned long long)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)dataForKey:(id)arg1 options:(unsigned long long)arg2 modificationDate:(id*)arg3 ;
-(void)setEnforceExtendedMetadata;
-(void)fetchFirstCachedDataOnDiskForKeys:(id)arg1 tag:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)fetchCachedDataOnDiskForKey:(id)arg1 tag:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithURL:(id)arg1 name:(id)arg2 tmpDirPath:(id)arg3 maxCapacity:(id)arg4 staleAge:(double)arg5 lruSizeLimit:(unsigned long long)arg6 survivalSize:(unsigned long long)arg7 inlineData:(BOOL)arg8 ;
-(void)fetchFirstCachedDataOnDiskForKeys:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fetchFirstCachedDataOnDiskForKeys:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithStore:(shared_ptr<facebook::mobile::xplat::compactdisk::DiskCache>*)arg1 ;
-(id)initWithURL:(id)arg1 ;
@end
