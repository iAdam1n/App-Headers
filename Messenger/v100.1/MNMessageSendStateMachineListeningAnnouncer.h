/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNMessageSendStateMachineListening.h>

@class NSString;

@interface MNMessageSendStateMachineListeningAnnouncer : FBAnnouncerBase <MNMessageSendStateMachineListening>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageSendStateMachine:(id)arg1 stateChangedFromState:(id)arg2 toState:(id)arg3 ;
-(void)messageSendStateMachine:(id)arg1 stateFailedToChangeFromState:(id)arg2 toState:(id)arg3 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
