/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBatchThreadNetworkFetchRequestRunningListener.h>

@protocol MNBatchThreadNetworkFetchRunning, MNAuthenticationManager, MNBatchThreadNetworkFetchRequestRunningListener, OS_dispatch_queue;
@class FBMBatchThreadNetworkFetchRunnerFactory, NSDictionary, NSObject, NSString;

@interface FBMMessageFetchSingleNetworkRequestRunner : NSObject <MNBatchThreadNetworkFetchRequestRunningListener> {

	FBMBatchThreadNetworkFetchRunnerFactory* _factory;
	unsigned long long _requestId;
	NSDictionary* _queryMap;
	BOOL _isForegroundRequest;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	id<MNBatchThreadNetworkFetchRunning> _runner;
	id<MNAuthenticationManager> _authManager;
	id<MNBatchThreadNetworkFetchRequestRunningListener> _dispatchedQueueSelfWrapper;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)threadFetchRunnerDidFailFetchForThreadQueries:(id)arg1 withError:(id)arg2 forRequestWithId:(unsigned long long)arg3 ;
-(void)threadFetchRunnerDidFetchThreadSummaries:(id)arg1 messageResponses:(id)arg2 encounteredErrors:(id)arg3 forRequestWithId:(unsigned long long)arg4 ;
-(id)initWithNetworkFetchRunnerFactory:(id)arg1 requestId:(unsigned long long)arg2 queryMap:(id)arg3 isForegroundRequest:(BOOL)arg4 authManager:(id)arg5 successBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 queue:(id)arg8 ;
-(void)run;
@end
