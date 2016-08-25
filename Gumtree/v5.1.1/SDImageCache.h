/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSFileManager, NSCache, NSString, NSMutableArray, NSObject;

@interface SDImageCache : NSObject {

	NSFileManager* _fileManager;
	BOOL _shouldDecompressImages;
	BOOL _shouldDisableiCloud;
	BOOL _shouldCacheImagesInMemory;
	long long _maxCacheAge;
	unsigned long long _maxCacheSize;
	NSCache* _memCache;
	NSString* _diskCachePath;
	NSMutableArray* _customPaths;
	NSObject*<OS_dispatch_queue> _ioQueue;

}

@property (nonatomic,retain) NSCache * memCache;                                  //@synthesize memCache=_memCache - In the implementation block
@property (nonatomic,retain) NSString * diskCachePath;                            //@synthesize diskCachePath=_diskCachePath - In the implementation block
@property (nonatomic,retain) NSMutableArray * customPaths;                        //@synthesize customPaths=_customPaths - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ioQueue;                //@synthesize ioQueue=_ioQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldDecompressImages;                         //@synthesize shouldDecompressImages=_shouldDecompressImages - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableiCloud;                            //@synthesize shouldDisableiCloud=_shouldDisableiCloud - In the implementation block
@property (assign,nonatomic) BOOL shouldCacheImagesInMemory;                      //@synthesize shouldCacheImagesInMemory=_shouldCacheImagesInMemory - In the implementation block
@property (assign,nonatomic) unsigned long long maxMemoryCost; 
@property (assign,nonatomic) unsigned long long maxMemoryCountLimit; 
@property (assign,nonatomic) long long maxCacheAge;                               //@synthesize maxCacheAge=_maxCacheAge - In the implementation block
@property (assign,nonatomic) unsigned long long maxCacheSize;                     //@synthesize maxCacheSize=_maxCacheSize - In the implementation block
+(id)sharedImageCache;
-(id)initWithNamespace:(id)arg1 ;
-(id)makeDiskCachePath:(id)arg1 ;
-(id)initWithNamespace:(id)arg1 diskCacheDirectory:(id)arg2 ;
-(void)clearMemory;
-(void)cleanDisk;
-(void)backgroundCleanDisk;
-(NSMutableArray *)customPaths;
-(void)setCustomPaths:(NSMutableArray *)arg1 ;
-(id)cachedFileNameForKey:(id)arg1 ;
-(NSString *)diskCachePath;
-(id)cachePathForKey:(id)arg1 inPath:(id)arg2 ;
-(BOOL)shouldCacheImagesInMemory;
-(NSCache *)memCache;
-(void)storeImageDataToDisk:(id)arg1 forKey:(id)arg2 ;
-(id)defaultCachePathForKey:(id)arg1 ;
-(BOOL)shouldDisableiCloud;
-(id)diskImageForKey:(id)arg1 ;
-(id)diskImageDataBySearchingAllPathsForKey:(id)arg1 ;
-(void)removeImageForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeImageForKey:(id)arg1 fromDisk:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)clearDiskOnCompletion:(/*^block*/id)arg1 ;
-(void)cleanDiskWithCompletionBlock:(/*^block*/id)arg1 ;
-(long long)maxCacheAge;
-(unsigned long long)maxCacheSize;
-(void)addReadOnlyCachePath:(id)arg1 ;
-(void)storeImage:(id)arg1 forKey:(id)arg2 ;
-(id)imageFromDiskCacheForKey:(id)arg1 ;
-(void)removeImageForKey:(id)arg1 fromDisk:(BOOL)arg2 ;
-(void)setMaxMemoryCost:(unsigned long long)arg1 ;
-(unsigned long long)maxMemoryCost;
-(unsigned long long)maxMemoryCountLimit;
-(void)setMaxMemoryCountLimit:(unsigned long long)arg1 ;
-(void)clearDisk;
-(unsigned long long)getDiskCount;
-(void)calculateSizeWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setShouldDisableiCloud:(BOOL)arg1 ;
-(void)setShouldCacheImagesInMemory:(BOOL)arg1 ;
-(void)setMaxCacheAge:(long long)arg1 ;
-(void)setMaxCacheSize:(unsigned long long)arg1 ;
-(void)setMemCache:(NSCache *)arg1 ;
-(BOOL)shouldDecompressImages;
-(void)setShouldDecompressImages:(BOOL)arg1 ;
-(id)scaledImageForKey:(id)arg1 image:(id)arg2 ;
-(id)imageFromMemoryCacheForKey:(id)arg1 ;
-(BOOL)diskImageExistsWithKey:(id)arg1 ;
-(void)diskImageExistsWithKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)storeImage:(id)arg1 recalculateFromImage:(BOOL)arg2 imageData:(id)arg3 forKey:(id)arg4 toDisk:(BOOL)arg5 ;
-(id)queryDiskCacheForKey:(id)arg1 done:(/*^block*/id)arg2 ;
-(void)storeImage:(id)arg1 forKey:(id)arg2 toDisk:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setDiskCachePath:(NSString *)arg1 ;
-(void)removeImageForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)ioQueue;
-(void)setIoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)getSize;
@end

