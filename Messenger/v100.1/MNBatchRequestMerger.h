/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNBatchRequestMergeResultPropagating;
@class NSMutableDictionary;

@interface MNBatchRequestMerger : NSObject {

	NSMutableDictionary* _trackedQueryToRequestIdMap;
	NSMutableDictionary* _requestIdToMergeInfo;
	id<MNBatchRequestMergeResultPropagating> _mergerHandler;

}
-(id)initWithMergeHander:(id)arg1 ;
-(void)handleBatchRequestId:(unsigned long long)arg1 requestQueryDefination:(id)arg2 originalRequestBlock:(/*^block*/id)arg3 newRequestBlock:(/*^block*/id)arg4 isRequestPolicyRemoteOnlyBlock:(/*^block*/id)arg5 ;
-(void)propagateBatchRequestWithRequestId:(unsigned long long)arg1 asHandled:(id)arg2 ;
-(void)propagateBatchRequestWithRequestId:(unsigned long long)arg1 wasNotHandled:(id)arg2 ;
-(void)propagateBatchRequestWithRequestId:(unsigned long long)arg1 didUpdatePreliminaryResult:(id)arg2 longOperationDidBegin:(BOOL)arg3 ;
-(id)_newlyTrackedQueriesForRequestId:(unsigned long long)arg1 queries:(id)arg2 isRequestPolicyRemoteOnlyBlock:(/*^block*/id)arg3 ;
-(void)_clearCompletedRequests;
-(void)_trackQueries:(id)arg1 mergeInfo:(id)arg2 ;
-(void)handleBatchRequestId:(unsigned long long)arg1 requestQueryDefination:(id)arg2 originalRequestBlock:(/*^block*/id)arg3 newRequestBlock:(/*^block*/id)arg4 ;
@end
