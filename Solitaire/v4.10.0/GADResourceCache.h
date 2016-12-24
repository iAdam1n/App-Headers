/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, GADResourceCacheDelegate;
@class NSObject, NSURLRequest, NSString, NSURL, NSMutableDictionary, NSURLConnection, NSDictionary;

@interface GADResourceCache : NSObject {

	NSObject*<OS_dispatch_queue> _lockQueue;
	NSURLRequest* _request;
	NSString* _cacheID;
	NSURL* _fileURL;
	NSMutableDictionary* _responseHeaders;
	id<GADResourceCacheDelegate> _delegate;
	NSURLConnection* _connection;
	unsigned long long _cachingState;
	long long _requestID;
	BOOL _hasBeenUsed;

}

@property (assign) unsigned long long cachingState; 
@property (retain) NSURLConnection * connection; 
@property (assign) long long requestID; 
@property (copy,readonly) NSString * cacheID;                          //@synthesize cacheID=_cacheID - In the implementation block
@property (copy,readonly) NSURLRequest * request;                      //@synthesize request=_request - In the implementation block
@property (copy,readonly) NSURL * fileURL;                             //@synthesize fileURL=_fileURL - In the implementation block
@property (copy,readonly) NSDictionary * responseHeaders; 
@property (readonly) BOOL hasBeenUsed;                                 //@synthesize hasBeenUsed=_hasBeenUsed - In the implementation block
@property (readonly) BOOL cachingSucceeded; 
@property (__weak) id<GADResourceCacheDelegate> delegate; 
-(void)cachingHasFailedWithError:(id)arg1 ;
-(BOOL)createEmptyFile:(id)arg1 withError:(id*)arg2 ;
-(void)setCachingState:(unsigned long long)arg1 ;
-(void)notifyCachingStartedWithRequestID:(long long)arg1 ;
-(void)notifyCachingSucceededWithRequestID:(long long)arg1 ;
-(void)notifyCachingFailedForRequestID:(long long)arg1 withError:(id)arg2 ;
-(BOOL)appendDataToFile:(id)arg1 withError:(id*)arg2 ;
-(void)notifyCachingHasReceivedResponseWithRequestID:(long long)arg1 ;
-(void)appendDataToFile:(id)arg1 ;
-(void)cachingHasSucceeded;
-(unsigned long long)cachingState;
-(BOOL)hasBeenUsed;
-(id)initWithURLRequest:(id)arg1 cacheID:(id)arg2 error:(id*)arg3 ;
-(BOOL)cachingSucceeded;
-(id)init;
-(void)cancel;
-(void)setDelegate:(id<GADResourceCacheDelegate>)arg1 ;
-(void)dealloc;
-(id<GADResourceCacheDelegate>)delegate;
-(NSURLRequest *)request;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(NSURL *)fileURL;
-(NSString *)cacheID;
-(long long)requestID;
-(NSDictionary *)responseHeaders;
-(void)setRequestID:(long long)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
@end
