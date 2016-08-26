/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMMailboxPreparingDelegate.h>

@protocol MNThreadSummaryCacheReading, FBProvider, MNAggregatedAppMessageQuerying, MNAuthenticationManager, OS_dispatch_queue;
@class MNThreadSummaryCacheThreadListFilterer, FBMessagingStore, FBMessagingStoreDatabaseOpenedDelayer, MNUserStore, MNThreadImageManager, MNDateFormatter, MNThreadParticipantNameFormatter, MNThreadSnippetGenerator, UIApplication, NSObject, NSMutableDictionary, FBMInboxPreparer, MNAsyncOperationTracker, NSString;

@interface MNWatchThreadListGenerator : NSObject <FBMMailboxPreparingDelegate> {

	id<MNThreadSummaryCacheReading> _threadSummaryCacheReader;
	MNThreadSummaryCacheThreadListFilterer* _threadListFilterer;
	FBMessagingStore* _messagingStore;
	FBMessagingStoreDatabaseOpenedDelayer* _databaseOpenedDelayer;
	id<FBProvider> _inboxPreparerProvider;
	MNUserStore* _userStore;
	id<MNAggregatedAppMessageQuerying> _aggregatedAppMessageQuerier;
	id<MNAuthenticationManager> _authManager;
	MNThreadImageManager* _threadImageManager;
	MNDateFormatter* _dateFormatter;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNThreadSnippetGenerator* _snippetGenerator;
	UIApplication* _application;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _currentUserRequestId;
	NSMutableDictionary* _currentMessageRequestCancelTokenByThreadKey;
	FBMInboxPreparer* _inboxPreparer;
	MNAsyncOperationTracker* _asyncOperationTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelRequestWithId:(unsigned long long)arg1 ;
-(void)_beginFetchingInboxThreadSummaries;
-(void)_cleanUpStates;
-(id)_threadSummariesForInbox;
-(void)_beginFetchingUsersWithFetchedThreadSummaries:(id)arg1 ;
-(void)_failAllPendingRequestsWithError:(id)arg1 ;
-(void)_beginFetchingInboxFromNetwork;
-(void)_completeLoadingThreadSummariesForInboxFromDiskWithLoadedThreadSummaries:(id)arg1 error:(id)arg2 ;
-(void)_loadThreadSummariesForInboxFromDiskWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_handleSucceededUserStoreRequestWithResponse:(id)arg1 threadSummaries:(id)arg2 ;
-(void)_handleFailedUserStoreRequestWithError:(id)arg1 ;
-(void)_beginFetchingLatestDisplayableMessagesForFetchedThreadSummaries:(id)arg1 usersByUserId:(id)arg2 ;
-(id)_snippetFromLatestDisplayableMessage:(id)arg1 summary:(id)arg2 usersByUserId:(id)arg3 ;
-(void)_handleCompletedLatestDisplayableMessageRequestForThreadKey:(id)arg1 fetchedThreadSummaries:(id)arg2 usersByUserId:(id)arg3 snippetByThreadKey:(id)arg4 ;
-(void)_succeedAllPendingRequestsWithFetchedThreadSummaries:(id)arg1 usersByUserId:(id)arg2 snippetByThreadKey:(id)arg3 ;
-(void)didFetchAdditionalInformation;
-(void)didFailToFetchAdditionalInformation;
-(void)didFinishingPreparingThreadList:(long long)arg1 didLoadAllThreads:(BOOL)arg2 ;
-(void)didCancelFetchThreads;
-(void)couldNotPrepareThreadList:(long long)arg1 dueToError:(id)arg2 ;
-(id)initWithThreadSummaryCacheReader:(id)arg1 threadListFilterer:(id)arg2 messagingStore:(id)arg3 databaseOpenedDelayer:(id)arg4 inboxPreparerProvider:(id)arg5 userStore:(id)arg6 aggregatedAppMessageQuerier:(id)arg7 authManager:(id)arg8 threadImageManager:(id)arg9 dateFormatter:(id)arg10 nameFormatter:(id)arg11 snippetGenerator:(id)arg12 application:(id)arg13 queue:(id)arg14 ;
-(unsigned long long)generateThreadListWithRequest:(id)arg1 ;
@end
