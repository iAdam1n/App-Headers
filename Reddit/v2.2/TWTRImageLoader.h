/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/TWTRImageLoader.h>

@protocol TWTRImageLoader <NSObject>
@required
-(id)fetchImageWithURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelImageWithRequestID:(id)arg1;

@end


@protocol TWTRImageLoaderCache, TWTRImageLoaderTaskManager, OS_dispatch_queue;
@class NSURLSession, NSObject, NSString;

@interface TWTRImageLoader : NSObject <TWTRImageLoader> {

	NSURLSession* _URLSession;
	id<TWTRImageLoaderCache> _cache;
	id<TWTRImageLoaderTaskManager> _taskManager;
	NSObject*<OS_dispatch_queue> _privateConcurrentQueue;

}

@property (nonatomic,readonly) NSURLSession * URLSession;                                        //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) id<TWTRImageLoaderCache> cache;                                   //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) id<TWTRImageLoaderTaskManager> taskManager;                       //@synthesize taskManager=_taskManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> privateConcurrentQueue;              //@synthesize privateConcurrentQueue=_privateConcurrentQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateRequestID;
+(id)localizedErrorFromResponse:(id)arg1 networkError:(id)arg2 ;
-(id)fetchImageWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 cache:(id)arg2 taskManager:(id)arg3 ;
-(/*^block*/id)backfillCacheOnFetchCompletionWithImageKey:(id)arg1 postBackfillCompletion:(/*^block*/id)arg2 ;
-(void)fetchImageWithImageURL:(id)arg1 requestID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchCachedImageWithImageKey:(id)arg1 cacheHitCompletion:(/*^block*/id)arg2 cacheMissCompletion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)privateConcurrentQueue;
-(void)cancelImageWithRequestID:(id)arg1 ;
-(id<TWTRImageLoaderCache>)cache;
-(NSURLSession *)URLSession;
-(id<TWTRImageLoaderTaskManager>)taskManager;
@end
