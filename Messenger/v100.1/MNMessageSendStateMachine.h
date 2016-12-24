/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageSendStateMachineAnalyticsLogging.h>

@protocol MNMessageSendStateTransitionExecuting, MNMessageSendStateMachineListening, OS_dispatch_queue;
@class MNMessageSendState, MNMessageSendStateTransition, NSObject, FBOutgoingMessage, NSString;

@interface MNMessageSendStateMachine : NSObject <MNMessageSendStateMachineAnalyticsLogging> {

	MNMessageSendState* _state;
	MNMessageSendStateTransition* _currentTransition;
	id<MNMessageSendStateTransitionExecuting> _transitionExecutor;
	id<MNMessageSendStateMachineListening> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	FBOutgoingMessage* _message;

}

@property (nonatomic,readonly) FBOutgoingMessage * message;              //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stateMachineSendAttemptHistory;
-(id)initWithMessage:(id)arg1 initialState:(id)arg2 transitionExecutor:(id)arg3 listener:(id)arg4 queue:(id)arg5 ;
-(void)_executeCurrentTransition;
-(void)_completeCurrentTransition;
-(void)_ignoreCurrentTransition;
-(void)_continueTransitionToState:(id)arg1 ;
-(void)_failCurrentTransition;
-(NSString *)description;
-(FBOutgoingMessage *)message;
-(void)transitionToState:(id)arg1 ;
@end
