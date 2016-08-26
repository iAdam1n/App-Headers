/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadCreatorExtension.h>

@class FBUserSession, FBMessengerPaymentsPlugin, FBPaymentsPeerToPeerMoneySender, NSString;

@interface FBPaymentsThreadCreatorExtension : NSObject <MNThreadCreatorExtension> {

	FBUserSession* _session;
	FBMessengerPaymentsPlugin* _paymentsPlugin;
	FBPaymentsPeerToPeerMoneySender* _newThreadMoneySender;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldHandleMessage:(id)arg1 ;
-(BOOL)isErrorRetriable:(id)arg1 ;
-(id)initWithSession:(id)arg1 paymentsPlugin:(id)arg2 ;
-(id)_preparePaymentAttachment:(id)arg1 withRecipientId:(id)arg2 ;
-(void)_handleNewThreadFetchWithRecipientId:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)_handlePaymentSentFailureWithFailureBlock:(/*^block*/id)arg1 error:(id)arg2 analyticsUUID:(id)arg3 ;
-(void)createThreadWithOfflineId:(id)arg1 message:(id)arg2 inviteeByUserId:(id)arg3 callbackQueue:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)cancelThreadCreationWithOfflineId:(id)arg1 ;
@end
