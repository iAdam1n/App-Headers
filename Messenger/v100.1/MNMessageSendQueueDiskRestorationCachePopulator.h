/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageSendQueueRestorationListening.h>
#import <Messenger/MNAppExtensionMessageSendQueueRestoreListening.h>

@protocol OS_dispatch_queue;
@class MNMessageSendStateStore, MNMessageSendQueueStore, MNMessageSendQueueRestorationListeningAnnouncer, MNAppExtensionMessageSendQueueRestoreListeningAnnouncer, NSObject, NSString;

@interface MNMessageSendQueueDiskRestorationCachePopulator : NSObject <MNMessageSendQueueRestorationListening, MNAppExtensionMessageSendQueueRestoreListening> {

	MNMessageSendStateStore* _sendStateStore;
	MNMessageSendQueueStore* _sendQueueStore;
	MNMessageSendQueueRestorationListeningAnnouncer* _appSendQueueRestoreAnnouncer;
	MNAppExtensionMessageSendQueueRestoreListeningAnnouncer* _appExtSendQueueRestoreAnnouncer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didRestoreOutgoingMessagesFromAppExtensionWithSendStatesFromDisk:(id)arg1 ;
-(id)initWithSendStateStore:(id)arg1 sendQueueStore:(id)arg2 queue:(id)arg3 ;
-(void)addAppSendQueueRestorationListener:(id)arg1 ;
-(void)addAppExtensionSendQueueRestorationListener:(id)arg1 ;
-(void)didRestoreOutgoingMessagesWithSendStatesFromDisk:(id)arg1 ;
-(void)_restoreSendQueue:(id)arg1 ;
-(void)_restoreMessageToSendQueue:(id)arg1 sendStates:(id)arg2 ;
-(void)removeAppSendQueueRestorationListener:(id)arg1 ;
-(void)removeAppExtensionSendQueueRestorationListener:(id)arg1 ;
@end
