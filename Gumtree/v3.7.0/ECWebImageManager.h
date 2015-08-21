/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class SDImageCache, SDWebImageDownloader, NSMutableArray;

@interface ECWebImageManager : NSObject {

	SDImageCache* _imageCache;
	SDWebImageDownloader* _imageDownloader;
	/*^block*/id _cacheKeyFilter;
	NSMutableArray* _failedURLs;
	NSMutableArray* _runningOperations;

}

@property (nonatomic,retain) SDImageCache * imageCache;                           //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) SDWebImageDownloader * imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,copy) id cacheKeyFilter;                                     //@synthesize cacheKeyFilter=_cacheKeyFilter - In the implementation block
@property (nonatomic,retain) NSMutableArray * failedURLs;                         //@synthesize failedURLs=_failedURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * runningOperations;                  //@synthesize runningOperations=_runningOperations - In the implementation block
+(id)sharedManager;
-(id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(/*^block*/id)arg3 transform:(/*^block*/id)arg4 completed:(/*^block*/id)arg5 ;
-(NSMutableArray *)failedURLs;
-(NSMutableArray *)runningOperations;
-(id)cacheKeyForURL:(id)arg1 ;
-(SDWebImageDownloader *)imageDownloader;
-(id)cacheKeyFilter;
-(void)saveImageToCache:(id)arg1 forURL:(id)arg2 ;
-(void)cancelAll;
-(BOOL)cachedImageExistsForURL:(id)arg1 ;
-(BOOL)diskImageExistsForURL:(id)arg1 ;
-(void)cachedImageExistsForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)diskImageExistsForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setImageDownloader:(SDWebImageDownloader *)arg1 ;
-(void)setCacheKeyFilter:(id)arg1 ;
-(void)setFailedURLs:(NSMutableArray *)arg1 ;
-(void)setRunningOperations:(NSMutableArray *)arg1 ;
-(id)init;
-(BOOL)isRunning;
-(SDImageCache *)imageCache;
-(void)setImageCache:(SDImageCache *)arg1 ;
@end

