/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPersistentKeyValueStore.h>
#import <Facebook/FBDiskCacheProtocol.h>

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
-(void)fetchCachedDataOnDiskForKey:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)cacheData:(id)arg1 toDiskForKey:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
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
