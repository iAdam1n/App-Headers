/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendStateMachineSendRequester <NSObject>
@required
-(void)sendMessageViaMQTT:(id)arg1 preparedAttachment:(id)arg2;
-(void)sendMessageViaExtension:(id)arg1 preparedAttachment:(id)arg2;
-(void)sendMessageBatchViaMQTTBeginningWithMessage:(id)arg1 maxBatchSize:(unsigned long long)arg2;
-(void)sendMessageViaGraph:(id)arg1 preparedAttachment:(id)arg2;
-(void)retryMessage:(id)arg1;
-(void)prepareAttachment:(id)arg1 forMessage:(id)arg2;
-(void)cancelMessage:(id)arg1;

@end
