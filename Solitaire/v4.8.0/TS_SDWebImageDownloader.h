/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSOperation, NSMutableDictionary, NSObject;

@interface TS_SDWebImageDownloader : NSObject {

	double _downloadTimeout;
	long long _executionOrder;
	/*^block*/id _headersFilter;
	NSOperationQueue* _downloadQueue;
	NSOperation* _lastAddedOperation;
	NSMutableDictionary* _URLCallbacks;
	NSMutableDictionary* _HTTPHeaders;
	NSObject*<OS_dispatch_queue> _barrierQueue;

}

@property (assign,nonatomic) long long maxConcurrentDownloads; 
@property (nonatomic,readonly) unsigned long long currentDownloadCount; 
@property (assign,nonatomic) double downloadTimeout;                                 //@synthesize downloadTimeout=_downloadTimeout - In the implementation block
@property (assign,nonatomic) long long executionOrder;                               //@synthesize executionOrder=_executionOrder - In the implementation block
@property (nonatomic,copy) id headersFilter;                                         //@synthesize headersFilter=_headersFilter - In the implementation block
@property (nonatomic,retain) NSOperationQueue * downloadQueue;                       //@synthesize downloadQueue=_downloadQueue - In the implementation block
@property (assign,nonatomic,__weak) NSOperation * lastAddedOperation;                //@synthesize lastAddedOperation=_lastAddedOperation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * URLCallbacks;                     //@synthesize URLCallbacks=_URLCallbacks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * HTTPHeaders;                      //@synthesize HTTPHeaders=_HTTPHeaders - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> barrierQueue;              //@synthesize barrierQueue=_barrierQueue - In the implementation block
+(void)initialize;
+(id)sharedDownloader;
-(double)downloadTimeout;
-(id)headersFilter;
-(id)callbacksForURL:(id)arg1 ;
-(void)removeCallbacksForURL:(id)arg1 ;
-(long long)executionOrder;
-(NSOperation *)lastAddedOperation;
-(void)setLastAddedOperation:(NSOperation *)arg1 ;
-(void)addProgressCallback:(/*^block*/id)arg1 andCompletedBlock:(/*^block*/id)arg2 forURL:(id)arg3 createCallback:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)barrierQueue;
-(NSMutableDictionary *)URLCallbacks;
-(void)setMaxConcurrentDownloads:(long long)arg1 ;
-(unsigned long long)currentDownloadCount;
-(long long)maxConcurrentDownloads;
-(id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(/*^block*/id)arg3 completed:(/*^block*/id)arg4 ;
-(void)setDownloadTimeout:(double)arg1 ;
-(void)setExecutionOrder:(long long)arg1 ;
-(void)setHeadersFilter:(id)arg1 ;
-(void)setDownloadQueue:(NSOperationQueue *)arg1 ;
-(void)setURLCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setBarrierQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setHTTPHeaders:(NSMutableDictionary *)arg1 ;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(NSOperationQueue *)downloadQueue;
-(NSMutableDictionary *)HTTPHeaders;
@end
