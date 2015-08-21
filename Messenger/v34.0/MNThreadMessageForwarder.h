/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMBatchThreadCreatorListening.h>
#import <Messenger/FBMMessageSenderListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNAuthenticationManager, FBProvider, MNThreadMessageForwarderDelegate;
@class MNSimpleSingleThreadFetcher, FBMSendKitMessageSender, MNForwardMessageAttachmentsPreparer, FBMessageAttachmentPreparer, FBMBatchThreadCreator, FBMMessageSenderListenerAnnouncer, FBMMutableMessage, NSString;

@interface MNThreadMessageForwarder : NSObject <FBMBatchThreadCreatorListening, FBMMessageSenderListener, FBClassProvidable> {

	MNSimpleSingleThreadFetcher* _threadFetcher;
	id<MNAuthenticationManager> _authManager;
	FBMSendKitMessageSender* _sendKitMessageSender;
	MNForwardMessageAttachmentsPreparer* _forwardMessageAttachmentsPreparer;
	FBMessageAttachmentPreparer* _messageAttachmentsPreparer;
	FBMBatchThreadCreator* _threadCreator;
	id<FBProvider> _threadCreatorProvider;
	FBMMessageSenderListenerAnnouncer* _messageSenderAnnouncer;
	BOOL _longOperationBegun;
	id<MNThreadMessageForwarderDelegate> _delegate;
	FBMMutableMessage* _pendingMessage;

}

@property (assign,nonatomic,__weak) id<MNThreadMessageForwarderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBMMutableMessage * pendingMessage;                                //@synthesize pendingMessage=_pendingMessage - In the implementation block
@property (assign,nonatomic) BOOL longOperationBegun;                                           //@synthesize longOperationBegun=_longOperationBegun - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)batchThreadCreator:(id)arg1 didCreateThread:(id)arg2 ;
-(void)batchThreadCreator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)thread:(id)arg1 didSendMessage:(id)arg2 ;
-(void)thread:(id)arg1 couldNotSendMessage:(id)arg2 error:(id)arg3 ;
-(void)cancelPendingOperation;
-(void)forwardContent:(id)arg1 toRecipient:(id)arg2 ;
-(BOOL)hasPendingOperation;
-(void)_clearThreadCreator;
-(void)setPendingMessage:(FBMMutableMessage *)arg1 ;
-(id)_forwardedMessageFromMessage:(id)arg1 ;
-(id)_forwardedMessageFromAttachments:(id)arg1 text:(id)arg2 ;
-(void)_performForwardMessage:(id)arg1 toRecipient:(id)arg2 ;
-(void)setLongOperationBegun:(BOOL)arg1 ;
-(FBMMutableMessage *)pendingMessage;
-(void)_sendPendingMessageToThreadQueue:(id)arg1 ;
-(void)_sendPendingMessageToNewCanonicalThread:(id)arg1 ;
-(void)_checkPrepareAttachmentsWithSuccessBlock:(/*^block*/id)arg1 ;
-(void)_fetchThreadForRecipient:(id)arg1 isGroupThread:(BOOL)arg2 withSuccessBlock:(/*^block*/id)arg3 ;
-(void)_didFailToForwardPendingMessageWithError:(id)arg1 ;
-(void)_willBeginLongOperation;
-(void)_logEvent:(id)arg1 withExtras:(id)arg2 ;
-(void)_didForwardPendingMessageToThread:(id)arg1 ;
-(BOOL)longOperationBegun;
-(void)dealloc;
-(void)setDelegate:(id<MNThreadMessageForwarderDelegate>)arg1 ;
-(id<MNThreadMessageForwarderDelegate>)delegate;
@end

