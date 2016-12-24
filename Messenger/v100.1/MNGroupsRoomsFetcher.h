/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCancelable.h>

@protocol FBServiceTransactionMutating, OS_dispatch_queue, MNGroupsRoomsFetchResultsHandling;
@class FBGraphQLQuery, FBMemPageInfo, FBUserSession, NSObject;

@interface MNGroupsRoomsFetcher : NSObject <FBCancelable> {

	FBGraphQLQuery* _graphQLQuery;
	id<FBServiceTransactionMutating> _graphQLFetchRequest;
	FBMemPageInfo* _pageInfo;
	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNGroupsRoomsFetchResultsHandling> _resultsHandler;

}
-(void)_runRoomsGraphQLRoomsQueryWithPageInfo:(id)arg1 requestPriority:(long long)arg2 callPath:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)_handleGraphQLFetchSuccessWithResponse:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 resultsHandler:(id)arg2 queue:(id)arg3 ;
-(void)beginFetchingRoomsWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)fetchMoreRoomsWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(BOOL)hasMoreRoomsToFetch;
-(void)cancel;
@end
