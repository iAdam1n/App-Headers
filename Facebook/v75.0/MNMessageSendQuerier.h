/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNMessageSendQuerying.h>

@class MNMessageSendStateStore, MNMessageSendQueueStore, NSString;

@interface MNMessageSendQuerier : NSObject <MNMessageSendQuerying> {

	MNMessageSendStateStore* _sendStateStore;
	MNMessageSendQueueStore* _sendQueueStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sendStateInfoForMessageWithOfflineThreadingId:(id)arg1 ;
-(id)outgoingMessagesWithSendStatesForThreadWithKey:(id)arg1 ;
-(id)outgoingMessageWithOfflineThreadingId:(id)arg1 ;
-(BOOL)isMessageWithOfflineThreadingIdInSendQueue:(id)arg1 ;
-(unsigned long long)sizeOfSendQueueForThread:(id)arg1 ;
-(id)initWithSendStateStore:(id)arg1 sendQueueStore:(id)arg2 ;
@end
