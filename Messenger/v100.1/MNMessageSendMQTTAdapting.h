/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendMQTTAdapting <NSObject>
@required
-(void)sendMessageViaMQTT:(id)arg1 preparedAttachment:(id)arg2 callbackQueue:(id)arg3 publishBlock:(/*^block*/id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6;
-(void)sendMessageBatchViaMQTT:(id)arg1 callbackQueue:(id)arg2 publishBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4;
-(BOOL)canSendMessageViaMQTT:(id)arg1;
-(BOOL)isRetriableMQTTError:(id)arg1;
-(BOOL)mqttStatusEligibleForSend;
-(BOOL)isMessageBatchSendingSupported;

@end
