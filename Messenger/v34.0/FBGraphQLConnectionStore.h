/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLConnectionInterface.h>

@protocol FBGraphQLConnectionStoreConfiguration, FBGraphQLConnectionStoreStateModifying, OS_dispatch_queue;
@class FBGraphQLConnectionStoreListenerAnnouncer, FBGraphQLConnectionStoreState, NSMutableArray, _FBGraphQLConnectionStoreUpdateCoordinator, NSString, _FBGraphQLConnectionStorePageInfo, NSObject, FBGraphQLConnectionStorePersistenceCoordinator;

@interface FBGraphQLConnectionStore : NSObject <FBGraphQLConnectionInterface> {

	id<FBGraphQLConnectionStoreConfiguration> _configuration;
	FBGraphQLConnectionStoreListenerAnnouncer* _announcer;
	FBGraphQLConnectionStoreState* _state;
	NSMutableArray* _edgeFiltersByPriority;
	_FBGraphQLConnectionStoreUpdateCoordinator* _updateCoordinator;
	NSString* _nextStartCursorOnDisk;
	_FBGraphQLConnectionStorePageInfo* _lastRestoredPageInfo;
	id<FBGraphQLConnectionStoreStateModifying> _stateModificationBeingSynchronouslyApplied;
	BOOL _isRestoringFromDisk;
	BOOL _currentlyInsertingEdgesFromPage;
	NSObject*<OS_dispatch_queue> _asynchronousStateModificationComputationQueue;
	BOOL _isComputingAsynchronousStateModification;
	NSMutableArray* _pendingAsynchronousStateModifications;
	FBGraphQLConnectionStorePersistenceCoordinator* _persistenceCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBGraphQLConnectionStorePersistenceCoordinator * persistenceCoordinator;              //@synthesize persistenceCoordinator=_persistenceCoordinator - In the implementation block
-(void)addConnectionListener:(id)arg1 ;
-(void)removeConnectionListener:(id)arg1 ;
-(id)connectionState;
-(void)synchronouslyApplyStateModification:(id)arg1 ;
-(id)addEdgesFromConnectionPage:(id)arg1 atLocation:(id)arg2 userInfo:(id)arg3 ;
-(id)_deduplicatedEdgesFromEdgesToBeAdded:(id)arg1 allEdges:(id)arg2 ;
-(void)loadAdditionalPagesFromDiskAtTailLocationFailedToLoadPagesCallback:(/*^block*/id)arg1 ;
-(void)_synchronouslyApplyStateTransitions:(id)arg1 forStateModification:(id)arg2 ;
-(void)_startNextAsynchronousStateModificationIfNeeded;
-(id)initWithConfiguration:(id)arg1 consistentLookasideCache:(id)arg2 fieldSet:(const FBGraphQLFieldSet*)arg3 persistenceCoordinator:(id)arg4 ;
-(void)deleteChunksFromIndex:(unsigned long long)arg1 ;
-(void)registerEdgeFilter:(id)arg1 withPriority:(long long)arg2 ;
-(void)asynchronouslyApplyStateModification:(id)arg1 ;
-(FBGraphQLConnectionStorePersistenceCoordinator *)persistenceCoordinator;
-(id)init;
-(NSString *)description;
-(id)state;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
