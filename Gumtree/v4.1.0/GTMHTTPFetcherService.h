/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GTMHTTPFetcherServiceProtocol.h>

@protocol GTMFetcherAuthorizationProtocol;
@class NSOperationQueue, NSMutableDictionary, GTMHTTPFetchHistory, NSArray, NSString, NSURLCredential, NSDictionary;

@interface GTMHTTPFetcherService : NSObject <GTMHTTPFetcherServiceProtocol> {

	NSMutableDictionary* delayedHosts_;
	NSMutableDictionary* runningHosts_;
	unsigned long long maxRunningFetchersPerHost_;
	GTMHTTPFetchHistory* fetchHistory_;
	NSOperationQueue* delegateQueue_;
	NSArray* runLoopModes_;
	NSString* userAgent_;
	double timeout_;
	NSURLCredential* credential_;
	NSURLCredential* proxyCredential_;
	long long cookieStorageMethod_;
	NSArray* allowedInsecureSchemes_;
	BOOL allowLocalhostRequest_;
	BOOL shouldFetchInBackground_;
	id<GTMFetcherAuthorizationProtocol> authorizer_;

}

@property (assign) unsigned long long maxRunningFetchersPerHost; 
@property (retain) NSDictionary * delayedHosts; 
@property (retain) NSDictionary * runningHosts; 
@property (copy) NSString * userAgent; 
@property (assign) double timeout; 
@property (retain) NSOperationQueue * delegateQueue; 
@property (retain) NSArray * runLoopModes; 
@property (retain) NSURLCredential * credential; 
@property (retain) NSURLCredential * proxyCredential; 
@property (assign) BOOL shouldFetchInBackground; 
@property (copy) NSArray * allowedInsecureSchemes; 
@property (assign) BOOL allowLocalhostRequest; 
@property (retain) GTMHTTPFetchHistory * fetchHistory; 
@property (assign) long long cookieStorageMethod; 
@property (assign) BOOL shouldRememberETags; 
@property (assign) BOOL shouldCacheETaggedData; 
@property (nonatomic,retain) id<GTMFetcherAuthorizationProtocol> authorizer; 
-(id)fetcherWithRequest:(id)arg1 ;
-(void)setAllowLocalhostRequest:(BOOL)arg1 ;
-(void)setAllowedInsecureSchemes:(NSArray *)arg1 ;
-(long long)cookieStorageMethod;
-(void)setCookieStorageMethod:(long long)arg1 ;
-(void)setAuthorizer:(id<GTMFetcherAuthorizationProtocol>)arg1 ;
-(void)setShouldFetchInBackground:(BOOL)arg1 ;
-(BOOL)shouldFetchInBackground;
-(id<GTMFetcherAuthorizationProtocol>)authorizer;
-(id)fetcherWithURL:(id)arg1 ;
-(BOOL)fetcherShouldBeginFetching:(id)arg1 ;
-(void)fetcherDidStop:(id)arg1 ;
-(BOOL)isDelayingFetcher:(id)arg1 ;
-(BOOL)shouldCacheETaggedData;
-(id)fetcherWithURLString:(id)arg1 ;
-(GTMHTTPFetchHistory *)fetchHistory;
-(void)setFetchHistory:(GTMHTTPFetchHistory *)arg1 ;
-(NSArray *)allowedInsecureSchemes;
-(BOOL)allowLocalhostRequest;
-(NSURLCredential *)proxyCredential;
-(void)setProxyCredential:(NSURLCredential *)arg1 ;
-(void)detachAuthorizer;
-(id)fetcherWithRequest:(id)arg1 fetcherClass:(Class)arg2 ;
-(void)addRunningFetcher:(id)arg1 forHost:(id)arg2 ;
-(void)addDelayedFetcher:(id)arg1 forHost:(id)arg2 ;
-(void)startFetcherOnCurrentThread:(id)arg1 ;
-(void)performSelector:(SEL)arg1 onStartThreadForFetcher:(id)arg2 ;
-(void)stopFetcherOnCurrentThread:(id)arg1 ;
-(void)startFetcher:(id)arg1 ;
-(unsigned long long)numberOfRunningFetchers;
-(unsigned long long)numberOfDelayedFetchers;
-(void)stopFetcher:(id)arg1 ;
-(void)setShouldCacheETaggedData:(BOOL)arg1 ;
-(void)setShouldRememberETags:(BOOL)arg1 ;
-(BOOL)shouldRememberETags;
-(void)clearETaggedDataCache;
-(unsigned long long)numberOfFetchers;
-(id)issuedFetchersWithRequestURL:(id)arg1 ;
-(void)stopAllFetchers;
-(void)setETaggedDataCacheCapacity:(unsigned long long)arg1 ;
-(unsigned long long)ETaggedDataCacheCapacity;
-(void)waitForCompletionOfAllFetchersWithTimeout:(double)arg1 ;
-(NSDictionary *)runningHosts;
-(void)setRunningHosts:(NSDictionary *)arg1 ;
-(NSDictionary *)delayedHosts;
-(void)setDelayedHosts:(NSDictionary *)arg1 ;
-(unsigned long long)maxRunningFetchersPerHost;
-(void)setMaxRunningFetchersPerHost:(unsigned long long)arg1 ;
-(NSOperationQueue *)delegateQueue;
-(NSArray *)runLoopModes;
-(void)setRunLoopModes:(NSArray *)arg1 ;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(double)timeout;
-(void)dealloc;
-(id)init;
-(void)clearHistory;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSString *)userAgent;
-(NSURLCredential *)credential;
@end
