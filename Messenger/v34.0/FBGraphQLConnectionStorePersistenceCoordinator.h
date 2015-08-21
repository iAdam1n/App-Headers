/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBGraphQLConnectionStoreListener.h>

@protocol OS_dispatch_source;
@class FBGraphQLConnectionStorePersistentPageLoader, NSString, NSObject, _FBGraphQLConnectionStoreChunk, FBGraphQLConnectionStorePersistenceCoordinatorListenerAnnouncer;

@interface FBGraphQLConnectionStorePersistenceCoordinator : NSObject <FBGraphQLConnectionStoreListener> {

	BOOL _isPersistingStore;
	FBGraphQLConnectionStorePersistentPageLoader* _persistentPageLoader;
	NSString* _diskCacheKey;
	double _persistenceDelay;
	unsigned long long _persistenceEdgeCountLimit;
	NSObject*<OS_dispatch_source> _coalescenceTimer;
	_FBGraphQLConnectionStoreChunk* _pendingChunk;
	/*^block*/id _restoredEdgeFilter;
	long long _persistenceStrategy;
	FBGraphQLConnectionStorePersistenceCoordinatorListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 ;
-(void)beginPersistingStore:(id)arg1 ;
-(void)fetchPagesBeginningAtStartCursor:(id)arg1 maxNumberOfPagesToLoad:(unsigned long long)arg2 pageHandler:(/*^block*/id)arg3 pagesFinishedLoadingHandler:(/*^block*/id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)_persistPendingStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_removeCoalescenceTimer;
-(id)_pagesToPersistFromPendingChunk:(id)arg1 ;
-(void)_schedulePersistenceForState:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_containsIndexPathWithinPersistenceLimit:(id)arg1 ;
-(id)initWithDiskCache:(id)arg1 uniqueIdentifier:(id)arg2 persistedEdgeCountLimit:(unsigned long long)arg3 restoredEdgeFilter:(/*^block*/id)arg4 persistenceDelay:(double)arg5 persistenceStrategy:(long long)arg6 ;
-(void)immediatelyPersistPendingStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

