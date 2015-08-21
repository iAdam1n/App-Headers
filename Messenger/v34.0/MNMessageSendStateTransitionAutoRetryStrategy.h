/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNMessageSendStateTransitionExecuting.h>

@class MNMessageSendStateTransitionAutoRetryStrategyExecutor, NSString;

@interface MNMessageSendStateTransitionAutoRetryStrategy : NSObject <MNMessageSendStateTransitionExecuting> {

	MNMessageSendStateTransitionAutoRetryStrategyExecutor* _executor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stateMachineAnalyticsExtras;
-(void)_transitionToQueuedStateFromState:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(void)_transitionToPreparingStateFromState:(id)arg1 message:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)_transitionToSendingStateWithContext:(id)arg1 fromState:(id)arg2 message:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(void)_transitionToPublishedStateFromState:(id)arg1 message:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)_transitionToSentStateFromState:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(void)_transitionToSyncedStateFromState:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(void)_transitionToFailedStateFromState:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(void)_transitionToCancelledStateFromState:(id)arg1 message:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)executeTransition:(id)arg1 message:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)initWithConfiguration:(id)arg1 requester:(id)arg2 clock:(id)arg3 queue:(id)arg4 ;
@end

