/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:15 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBGraphQLService.h>

@protocol FBGraphQLService <NSObject>
@required
-(id)sendQueries:(id)arg1 callbackQueue:(id)arg2 successCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 progressCallback:(/*^block*/id)arg5 configurationCallback:(/*^block*/id)arg6;
-(id)sendQuery:(id)arg1 callbackQueue:(id)arg2 networkRequestThresholdInSeconds:(unsigned long long)arg3 cachedResponseCallback:(/*^block*/id)arg4 downloadedResponseCallback:(/*^block*/id)arg5 failureCallback:(/*^block*/id)arg6 progressCallback:(/*^block*/id)arg7 configurationCallback:(/*^block*/id)arg8;
-(id)sendQuery:(id)arg1 callbackQueue:(id)arg2 successCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 progressCallback:(/*^block*/id)arg5 configurationCallback:(/*^block*/id)arg6;

@end


@protocol OS_dispatch_queue;
@class FBService, NSObject, FBQueuePerformer, FBGraphQLMemResponseCache, FBGraphQLConsistentLookasideCache, FBAnalyticsPerfLogger, FBGraphQLResponseParser, NSString;

@interface FBGraphQLService : NSObject <FBGraphQLService> {

	FBService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	FBQueuePerformer* _queuePerformer;
	FBGraphQLMemResponseCache* _memResponseCache;
	FBGraphQLConsistentLookasideCache* _consistentLookasideCache;
	FBAnalyticsPerfLogger* _analyticsPerfLogger;
	FBGraphQLResponseParser* _responseParser;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getNextAnalyticsEventNameSpace;
-(id)sendQueries:(id)arg1 callbackQueue:(id)arg2 successCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 progressCallback:(/*^block*/id)arg5 configurationCallback:(/*^block*/id)arg6 ;
-(id)sendQuery:(id)arg1 callbackQueue:(id)arg2 networkRequestThresholdInSeconds:(unsigned long long)arg3 cachedResponseCallback:(/*^block*/id)arg4 downloadedResponseCallback:(/*^block*/id)arg5 failureCallback:(/*^block*/id)arg6 progressCallback:(/*^block*/id)arg7 configurationCallback:(/*^block*/id)arg8 ;
-(BOOL)_cachedResponseFromDate:(id)arg1 hasExpiredTTL:(unsigned long long)arg2 ;
-(id)initWithService:(id)arg1 memResponseCache:(id)arg2 consistentLookasideCache:(id)arg3 analyticsPerfLogger:(id)arg4 ;
-(void)_markStopForEvent:(id)arg1 nameSpace:(id)arg2 didSucceed:(BOOL)arg3 extras:(/*^block*/id)arg4 ;
-(void)_loadQueryFromNetwork:(id)arg1 withToken:(id)arg2 callbackQueue:(id)arg3 cachedResponseCallback:(/*^block*/id)arg4 successCallback:(/*^block*/id)arg5 failureCallback:(/*^block*/id)arg6 progressCallback:(/*^block*/id)arg7 configurationCallback:(/*^block*/id)arg8 ;
-(void)_parseCachedResponseForQuery:(id)arg1 withToken:(id)arg2 cachedResponse:(id)arg3 downloadDate:(id)arg4 shouldDownloadFreshResponse:(BOOL)arg5 callbackQueue:(id)arg6 cachedResponseCallback:(/*^block*/id)arg7 ;
-(id)sendQuery:(id)arg1 callbackQueue:(id)arg2 successCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 progressCallback:(/*^block*/id)arg5 configurationCallback:(/*^block*/id)arg6 ;
-(id)initWithNetworker:(id)arg1 memResponseCache:(id)arg2 consistentLookasideCache:(id)arg3 analyticsPerfLogger:(id)arg4 ;
@end
