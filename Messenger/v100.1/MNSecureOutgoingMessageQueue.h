/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MNSecureOutgoingMessageQueue : NSObject {

	NSMutableDictionary* _pendingMessages;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)popMessagesForThreadKey:(id)arg1 ;
-(id)allThreadKeysWithQueuedMessages;
-(id)initWithQueue:(id)arg1 ;
-(void)enqueueMessage:(id)arg1 ;
@end
