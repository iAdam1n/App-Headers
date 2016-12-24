/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionStoreListener.h>
#import <Facebook/FBGraphQLConnectionControllerListener.h>

@protocol FBGraphQLConnectionInterface;
@class FBUserSession, NSString, FBGraphQLConnectionStorePersistenceCoordinator, NSMutableSet, NSMutableDictionary, FBNotificationsOptionsModificationServiceListenerAnnouncer;

@interface FBNotificationsOptionsModificationService : NSObject <FBGraphQLConnectionStoreListener, FBGraphQLConnectionControllerListener> {

	FBUserSession* _session;
	NSString* _actorID;
	double _confirmationDuration;
	id<FBGraphQLConnectionInterface> _connection;
	FBGraphQLConnectionStorePersistenceCoordinator* _persistenceCoordinator;
	NSMutableSet* _notificationGraphQLIDsPendingRemoval;
	NSMutableSet* _notificationGraphQLIDsWithSelectedOptionRowHash;
	NSMutableDictionary* _pendingStateNotificationGraphQLIDsToCancelableBlocks;
	/*^block*/id _actionInputFactory;
	FBNotificationsOptionsModificationServiceListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphQLConnectionControllerDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStoreDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4 ;
-(void)clearNotificationsOptionRowPendingState;
-(void)performActionsForNotifOption:(id)arg1 inNotifOptionSet:(id)arg2 forNotification:(id)arg3 ;
-(void)performActionsForNotifOptionRow:(id)arg1 forNotification:(id)arg2 ;
-(void)performUndoActionsForNotifOption:(id)arg1 inNotifOptionSet:(id)arg2 forNotification:(id)arg3 ;
-(void)performUndoActionsForNotifOptionRow:(id)arg1 forNotification:(id)arg2 ;
-(id)initWithSession:(id)arg1 actorID:(id)arg2 confirmationDuration:(double)arg3 ;
-(void)setupWithConnection:(id)arg1 persistenceCoordinator:(id)arg2 ;
-(id)initWithSession:(id)arg1 actorID:(id)arg2 confirmationDuration:(double)arg3 actionInputFactory:(/*^block*/id)arg4 ;
-(BOOL)_isConnectionFinishedInitializing;
-(void)_sanitizeConnection;
-(void)_performActionsIfNeededForOptionRow:(id)arg1 forNotifOption:(id)arg2 inNotifOptionSet:(id)arg3 forUndoAction:(BOOL)arg4 notification:(id)arg5 ;
-(void)_clearNotificationsPendingRemoval;
-(void)_clearNotificationsSelectedOptionRowState;
-(void)_updateLocalFieldsIfNeededForOptionRow:(id)arg1 forNotifOption:(id)arg2 inNotifOptionSet:(id)arg3 forUndoAction:(BOOL)arg4 notification:(id)arg5 ;
-(id)_previousSelectedNotifOptionInSingleSelectorForOption:(id)arg1 notification:(id)arg2 ;
-(/*^block*/id)_successHandlerForOptionRow:(id)arg1 forNotifOption:(id)arg2 inNotifOptionSet:(id)arg3 forUndoAction:(BOOL)arg4 notification:(id)arg5 ;
-(/*^block*/id)_errorHandlerForOptionRow:(id)arg1 forNotifOption:(id)arg2 inNotifOptionSet:(id)arg3 forUndoAction:(BOOL)arg4 notification:(id)arg5 ;
-(void)_cancelPendingStateUpdateForNotificationGraphQLID:(id)arg1 ;
-(void)_enqueueCancelablePendingStateUpdateForNotification:(id)arg1 ;
-(void)_clearPendingStateForNotificationGraphQLID:(id)arg1 ;
-(void)graphQLConnectionStore:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingIsLoadingAtLocation:(id)arg3 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
