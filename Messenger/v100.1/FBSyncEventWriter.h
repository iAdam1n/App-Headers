/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSyncStoreOpenedStateListener.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, FBSyncEventWriterListenerAnnouncer, FBSyncStore, FBDelayer, NSObject, FBPersonSyncProfileImageCacheFilter, NSString;

@interface FBSyncEventWriter : NSObject <FBSyncStoreOpenedStateListener> {

	NSOperationQueue* _operationQueue;
	FBSyncEventWriterListenerAnnouncer* _announcer;
	FBSyncStore* _syncStore;
	FBDelayer* _storeOpenedDelayer;
	NSObject*<OS_dispatch_queue> _operationCreationQueue;
	FBPersonSyncProfileImageCacheFilter* _profileImageCacheFilter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCreateDatabaseTables;
-(void)didDiscardDatabaseFile;
-(id)initWithSyncStore:(id)arg1 profileImageCacheFilter:(id)arg2 ;
-(void)addSyncEventWriterListener:(id)arg1 ;
-(void)enqueueWriteToSyncStoreWithEvents:(id)arg1 queuePriority:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isWriteOperationPending;
-(void)syncStoreDidOpen:(id)arg1 wasSuccessful:(BOOL)arg2 ;
-(void)syncStoreDidClose:(id)arg1 ;
-(id)initWithSyncStore:(id)arg1 profileImageCacheFilter:(id)arg2 operationQueue:(id)arg3 operationCreationQueue:(id)arg4 ;
-(void)_createWriteSyncEventsOperationAndAddToQueue:(id)arg1 queuePriority:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_onOperationCompletedWithSyncEvents:(id)arg1 wasCanceled:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)enqueueWriteToSyncStoreWithEvents:(id)arg1 ;
-(void)cancelAllPendingOperations;
-(void)removeSyncEventWriterListener:(id)arg1 ;
@end
