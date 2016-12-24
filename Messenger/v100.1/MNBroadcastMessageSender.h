/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNForwardSending.h>

@protocol MNAuthenticationManager, FBMessageOutgoingAttachmentPreparing, MNMessageSendConversionContextAwareController, MNForwardSenderListening, MNForwardContentMessageFactory;
@class FBUserSession, FBAnalytics, FBReachabilityAnnouncer, FBGraphMessageSendRequestRunner, MNBroadcastMessageRequestHandler, NSString;

@interface MNBroadcastMessageSender : NSObject <MNForwardSending> {

	BOOL _isConfigured;
	FBUserSession* _session;
	id<MNAuthenticationManager> _authManager;
	FBAnalytics* _analytics;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	id<FBMessageOutgoingAttachmentPreparing> _attachmentPreparer;
	id<MNMessageSendConversionContextAwareController> _sendContextAwareController;
	id<MNForwardSenderListening> _listener;
	FBGraphMessageSendRequestRunner* _sender;
	MNBroadcastMessageRequestHandler* _requestHandler;
	id<MNForwardContentMessageFactory> _messageFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginSendForwardContent:(id)arg1 withPreparedAttachmentInfo:(id)arg2 toRecipients:(id)arg3 sendConversionContext:(id)arg4 listener:(id)arg5 ;
-(id)beginPrepareAttachmentForPreupload:(id)arg1 attachmentContext:(id)arg2 outgoingAttribution:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithUserSession:(id)arg1 authManager:(id)arg2 analytics:(id)arg3 reachabilityAnnouncer:(id)arg4 attachmentPreparer:(id)arg5 sendContextAwareController:(id)arg6 shouldSplitMessages:(BOOL)arg7 ;
-(void)cancel;
@end
