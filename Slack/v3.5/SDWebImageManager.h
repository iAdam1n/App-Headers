/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SDWebImageManagerDelegate;
@class SDImageCache, SDWebImageDownloader, NSMutableSet, NSMutableArray;

@interface SDWebImageManager : NSObject {

	id<SDWebImageManagerDelegate> _delegate;
	SDImageCache* _imageCache;
	SDWebImageDownloader* _imageDownloader;
	/*^block*/id _cacheKeyFilter;
	NSMutableSet* _failedURLs;
	NSMutableArray* _runningOperations;

}

@property (nonatomic,retain) SDImageCache * imageCache;                                  //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) SDWebImageDownloader * imageDownloader;                     //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedURLs;                                  //@synthesize failedURLs=_failedURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * runningOperations;                         //@synthesize runningOperations=_runningOperations - In the implementation block
@property (assign,nonatomic,__weak) id<SDWebImageManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id cacheKeyFilter;                                            //@synthesize cacheKeyFilter=_cacheKeyFilter - In the implementation block
+(id)sharedManager;
-(id)downloadWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(/*^block*/id)arg3 completed:(/*^block*/id)arg4 ;
-(id)cacheKeyForURL:(id)arg1 ;
-(id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(/*^block*/id)arg3 completed:(/*^block*/id)arg4 ;
-(id)createCache;
-(id)cacheKeyFilter;
-(NSMutableSet *)failedURLs;
-(NSMutableArray *)runningOperations;
-(SDWebImageDownloader *)imageDownloader;
-(BOOL)cachedImageExistsForURL:(id)arg1 ;
-(BOOL)diskImageExistsForURL:(id)arg1 ;
-(void)cachedImageExistsForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)diskImageExistsForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveImageToCache:(id)arg1 forURL:(id)arg2 ;
-(void)setImageDownloader:(SDWebImageDownloader *)arg1 ;
-(void)setCacheKeyFilter:(id)arg1 ;
-(void)setFailedURLs:(NSMutableSet *)arg1 ;
-(void)setRunningOperations:(NSMutableArray *)arg1 ;
-(void)setDelegate:(id<SDWebImageManagerDelegate>)arg1 ;
-(id)init;
-(id<SDWebImageManagerDelegate>)delegate;
-(BOOL)isRunning;
-(SDImageCache *)imageCache;
-(void)setImageCache:(SDImageCache *)arg1 ;
-(void)cancelAll;
@end

