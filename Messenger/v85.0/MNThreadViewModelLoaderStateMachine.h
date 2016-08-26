/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate, MNThreadViewModelLoaderStateMachineRequesterDelegate;
@class MNThreadViewModelLoaderStateMachineListeningAnnouncer, MNAsyncOperationTracker, FBAnalytics;

@interface MNThreadViewModelLoaderStateMachine : NSObject {

	MNThreadViewModelLoaderStateMachineListeningAnnouncer* _announcer;
	MNAsyncOperationTracker* _asyncOperationTracker;
	FBAnalytics* _analytics;
	id<MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate> _creatorDelegate;
	id<MNThreadViewModelLoaderStateMachineRequesterDelegate> _requestorDelegate;

}

@property (assign,nonatomic,__weak) id<MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate> creatorDelegate;              //@synthesize creatorDelegate=_creatorDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadViewModelLoaderStateMachineRequesterDelegate> requestorDelegate;                   //@synthesize requestorDelegate=_requestorDelegate - In the implementation block
-(id)initWithAnalytics:(id)arg1 ;
-(void)setCreatorDelegate:(id<MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate>)arg1 ;
-(void)setRequestorDelegate:(id<MNThreadViewModelLoaderStateMachineRequesterDelegate>)arg1 ;
-(unsigned long long)initiateViewModelLoadRequestForThreadQuery:(id)arg1 fetchConfiguration:(id)arg2 messagesLoadingConfiguration:(id)arg3 ;
-(void)moveRequestToCanceled:(unsigned long long)arg1 ;
-(void)_cleanUpRequest:(id)arg1 ;
-(id)_requestForRequestId:(unsigned long long)arg1 ;
-(void)_updateThreadRequestStateTo:(unsigned long long)arg1 request:(id)arg2 ;
-(void)moveRequestToUserFetchFailed:(unsigned long long)arg1 error:(id)arg2 ;
-(void)_cleanUpRequestIfCompleted:(id)arg1 ;
-(void)moveRequestToThreadFetchFailed:(unsigned long long)arg1 error:(id)arg2 ;
-(void)_updateUserRequestStateTo:(unsigned long long)arg1 request:(id)arg2 ;
-(void)moveRequestToThreadFetchStartedState:(unsigned long long)arg1 ;
-(void)moveRequestToThreadFetchProvisionalResultReceived:(unsigned long long)arg1 threadSummary:(id)arg2 confirmedMessages:(id)arg3 ;
-(void)moveRequestToThreadFetchLongOperationDidBegin:(unsigned long long)arg1 ;
-(void)moveRequestToThreadFetchSucceeded:(unsigned long long)arg1 threadSummary:(id)arg2 confirmedMessages:(id)arg3 ;
-(void)moveRequestToUserFetchStartedState:(unsigned long long)arg1 requestedUserIds:(id)arg2 ;
-(void)moveRequestToUserFetchProvisionalResultReceived:(unsigned long long)arg1 usersByUserId:(id)arg2 ;
-(void)moveRequestToUserFetchLongOperationDidBegin:(unsigned long long)arg1 ;
-(void)moveRequestToUserFetchSucceeded:(unsigned long long)arg1 usersByUserId:(id)arg2 ;
-(id<MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate>)creatorDelegate;
-(id<MNThreadViewModelLoaderStateMachineRequesterDelegate>)requestorDelegate;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
