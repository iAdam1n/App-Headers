/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLFragmentService, FBServiceTransactionMutating, MNAuthenticationManager, OS_dispatch_queue;
@class MNGraphQLQueryConfigGenerator, NSObject;

@interface MNTopGroupListFetcher : NSObject {

	id<FBGraphQLFragmentService> _graphQLFragmentService;
	id<FBServiceTransactionMutating> _graphQLRequest;
	MNGraphQLQueryConfigGenerator* _queryConfigGenerator;
	id<MNAuthenticationManager> _authManager;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_processParsedResponse:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_processResponseWithError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(id)initWithGraphQLFragmentService:(id)arg1 queryConfigGenerator:(id)arg2 authManager:(id)arg3 queue:(id)arg4 ;
-(void)fetchTopGroupThreadsListWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)cancel;
@end

