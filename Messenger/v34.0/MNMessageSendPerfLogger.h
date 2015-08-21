/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/MNMessageSendEventListener.h>
#import <Messenger/MNMessageCellElementAppearanceListener.h>
#import <Messenger/FBMMessageSenderListener.h>
#import <Messenger/FBMThreadCreationListener.h>

@class FBMMessageAttachments, NSString, FBMMessageAppModel, FBMNetworkProtocolController;

@interface MNMessageSendPerfLogger : NSObject <FBSessionClassProvidable, MNMessageSendEventListener, MNMessageCellElementAppearanceListener, FBMMessageSenderListener, FBMThreadCreationListener> {

	FBMMessageAttachments* _messageAttachments;
	NSString* _event;
	FBMMessageAppModel* _message;
	BOOL _isNewThread;
	long long _sendSource;
	FBMNetworkProtocolController* _networkProtocolController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)thread:(id)arg1 didEnqueueMessage:(id)arg2 ;
-(void)didAddMessage:(id)arg1 toQueueForPendingThreadWithOfflineID:(id)arg2 ;
-(void)didCancelCreatingThreadWithOfflineID:(id)arg1 ;
-(void)willCreateThreadWithOfflineID:(id)arg1 withMessage:(id)arg2 ;
-(void)didCreateThread:(id)arg1 withMessage:(id)arg2 forPendingThreadWithOfflineID:(id)arg3 ;
-(void)didFailToCreateThreadWithOfflineID:(id)arg1 withMessage:(id)arg2 error:(id)arg3 ;
-(void)messageCellWillAppear:(id)arg1 withMessageRow:(id)arg2 ;
-(void)messageSendEventDidPressSendButtonFromSource:(long long)arg1 ;
-(void)messageSendEventWillCancelSendingMessage:(id)arg1 ;
-(void)_markStartForSendButtonPressedEvent:(id)arg1 ;
-(void)_markStopForCurrentSendButtonPressedEventWithMessage:(id)arg1 status:(id)arg2 ;
-(void)_cleanUpCachedStates;
@end

