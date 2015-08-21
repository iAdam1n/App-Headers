/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNForwardSending.h>

@protocol MNAuthenticationManager, MNForwardSenderListening, MNForwardContentMessageFactory;
@class FBUserSession, FBAnalytics, FBReachabilityAnnouncer, FBMessageAttachmentPreparer, FBGraphMessageSendRequestRunner, MNBroadcastMessageRequestHandler, NSString;

@interface MNBroadcastMessageSender : NSObject <MNForwardSending> {

	BOOL _isConfigured;
	FBUserSession* _session;
	id<MNAuthenticationManager> _authManager;
	FBAnalytics* _analytics;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	FBMessageAttachmentPreparer* _preparer;
	id<MNForwardSenderListening> _listener;
	FBGraphMessageSendRequestRunner* _sender;
	MNBroadcastMessageRequestHandler* _requestHandler;
	id<MNForwardContentMessageFactory> _messageFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginSendForwardContent:(id)arg1 toRecipient:(id)arg2 listener:(id)arg3 ;
-(id)initWithUserSession:(id)arg1 authManager:(id)arg2 analytics:(id)arg3 reachabilityAnnouncer:(id)arg4 attachmentPreparer:(id)arg5 shouldSplitMessages:(BOOL)arg6 ;
-(void)cancel;
@end

