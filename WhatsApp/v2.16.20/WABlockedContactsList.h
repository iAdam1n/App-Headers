/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, WAChatStorage, NSObject, NSMutableArray, NSSet;

@interface WABlockedContactsList : NSObject {

	NSMutableSet* _allContacts;
	NSMutableSet* _pendingContacts;
	WAChatStorage* _storage;
	NSObject*<OS_dispatch_queue> _saveQueue;
	BOOL _synchronizationInProgress;
	BOOL _needsUpstreamSync;
	NSMutableArray* _upstreamSyncWebClientRequestIDs;
	/*^block*/id _upstreamSyncWebClientCompletionHandler;
	BOOL _needsDownstreamSync;

}

@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) NSSet * jids; 
-(void)xmppConnectionStateDidChange:(id)arg1 ;
-(void)unblockJID:(id)arg1 webClientRequestID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSSet *)jids;
-(id)initWithChatStorage:(id)arg1 ;
-(BOOL)isJIDBlocked:(id)arg1 ;
-(void)setNeedsDownstreamSync;
-(void)setNeedsUpstreamSync;
-(void)loadContactsIfNecessary;
-(void)saveBlockedContactsToChatStorage:(id)arg1 ;
-(void)savePendingContacts;
-(void)requestListFromServer;
-(void)sendListToServer;
-(void)processBlockedContactsFromServer:(id)arg1 ;
-(void)blockJID:(id)arg1 webClientRequestID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)size;
-(void)dealloc;
-(void)synchronize;
@end
