/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MNMessageSendStateStore, MNMessageSendQueueStore, NSObject;

@interface MNMQTTMessageBatchCreator : NSObject {

	MNMessageSendStateStore* _sendStateStore;
	MNMessageSendQueueStore* _sendQueueStore;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithSendStateStore:(id)arg1 sendQueueStore:(id)arg2 queue:(id)arg3 ;
-(id)mqttMessageBatchBeginningWithMessage:(id)arg1 maxBatchSize:(unsigned long long)arg2 ;
@end

