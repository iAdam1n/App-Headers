/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInboxUnitUpdateListening.h>

@protocol OS_dispatch_queue;
@class MNNonDiscardingBlobStore, MNInboxUnitsStore, NSObject, FBValueObjectPair, NSString;

@interface MNInboxCriticalUnitsStore : NSObject <MNInboxUnitUpdateListening> {

	MNNonDiscardingBlobStore* _blobStore;
	MNInboxUnitsStore* _inboxUnitStore;
	NSObject*<OS_dispatch_queue> _queue;
	FBValueObjectPair* _memoryCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)inboxUnitsDidUpdate:(id)arg1 isFreshData:(BOOL)arg2 ;
-(void)loadCriticalUnitsWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didRestoreInboxUnits:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_unitIdsAboveRecent;
-(id)_appendRecentAndMoreThreads:(id)arg1 ;
-(id)_filterCriticalUnits:(id)arg1 ;
-(id)initWithBlobStore:(id)arg1 inboxUnitsStore:(id)arg2 queue:(id)arg3 ;
-(void)_writeToDisk;
@end
