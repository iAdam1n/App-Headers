/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBCacheIndexFileDelegate.h>

@protocol OS_dispatch_queue;
@class NSCache, FBCacheIndex, NSString, NSObject;

@interface FBDataDiskCache : NSObject <FBCacheIndexFileDelegate> {

	NSCache* _inMemoryCache;
	FBCacheIndex* _cacheIndex;
	NSString* _dataCachePath;
	NSObject*<OS_dispatch_queue> _fileQueue;

}

@property (assign,nonatomic) unsigned long long cacheSizeMemory; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> fileQueue;              //@synthesize fileQueue=_fileQueue - In the implementation block
@property (nonatomic,copy) NSString * dataCachePath;                                //@synthesize dataCachePath=_dataCachePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(void)cacheIndex:(id)arg1 writeFileWithName:(id)arg2 data:(id)arg3 ;
-(void)cacheIndex:(id)arg1 deleteFileWithName:(id)arg2 ;
-(BOOL)_doesFileExist:(id)arg1 ;
-(unsigned long long)cacheSizeMemory;
-(void)setCacheSizeMemory:(unsigned long long)arg1 ;
-(id)dataForURL:(id)arg1 ;
-(void)removeDataForUrl:(id)arg1 ;
-(void)removeDataForSession:(id)arg1 ;
-(void)setData:(id)arg1 forURL:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)fileQueue;
-(NSString *)dataCachePath;
-(void)setDataCachePath:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
@end
