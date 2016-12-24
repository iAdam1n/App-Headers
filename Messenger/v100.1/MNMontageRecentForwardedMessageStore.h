/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMCustomDictionaryStoreDelegate.h>
#import <Messenger/MNMontageRecentForwardedMessageStoreWriting.h>
#import <Messenger/MNMontageRecentForwardedMessageStoreReading.h>

@protocol OS_dispatch_queue;
@class FBMCustomDictionaryStore, NSObject, MNMontageRecentForwardedMessageStoreListenerAnnouncer, NSDictionary, NSString;

@interface MNMontageRecentForwardedMessageStore : NSObject <FBMCustomDictionaryStoreDelegate, MNMontageRecentForwardedMessageStoreWriting, MNMontageRecentForwardedMessageStoreReading> {

	FBMCustomDictionaryStore* _diskHandler;
	NSObject*<OS_dispatch_queue> _queue;
	MNMontageRecentForwardedMessageStoreListenerAnnouncer* _announcer;
	NSDictionary* _recentForwardedMessageKeys;

}

@property (copy) NSDictionary * recentForwardedMessageKeys;              //@synthesize recentForwardedMessageKeys=_recentForwardedMessageKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recentForwardedMessageKeyForThreadKey:(id)arg1 ;
-(NSDictionary *)recentForwardedMessageKeys;
-(void)setRecentForwardedMessageKeys:(NSDictionary *)arg1 ;
-(void)_scheduleWriteToDatabase;
-(void)customDictionaryStore:(id)arg1 didRestoreStateFromDisk:(id)arg2 ;
-(void)setRecentForwardedMessageKey:(id)arg1 forThreadKey:(id)arg2 ;
-(id)initWithMessagingStore:(id)arg1 messagingStoreDelayer:(id)arg2 queue:(id)arg3 ;
-(void)beginDiskRestore;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
