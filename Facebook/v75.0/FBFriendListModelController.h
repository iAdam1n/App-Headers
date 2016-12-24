/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFriendSearchOperationAggregatorDelegate.h>
#import <Facebook/FBFriendListMonitorListener.h>
#import <Facebook/FBPresenceUpdateListener.h>
#import <Facebook/FBMessengerStatusUpdateSyncListener.h>
#import <Facebook/FBSyncStoreOpenedStateListener.h>
#import <Facebook/FBSyncEngineJobListener.h>

@protocol FBFriendListModelControllerDelegate;
@class FBFriendSearchOperationAggregator, FBFriendListMonitor, FBPresenceUpdateMonitor, FBMessengerStatusUpdateMonitor, FBSyncStore, FBDelayer, NSString;

@interface FBFriendListModelController : NSObject <FBFriendSearchOperationAggregatorDelegate, FBFriendListMonitorListener, FBPresenceUpdateListener, FBMessengerStatusUpdateSyncListener, FBSyncStoreOpenedStateListener, FBSyncEngineJobListener> {

	FBFriendSearchOperationAggregator* _operationAggregator;
	FBFriendListMonitor* _friendListMonitor;
	FBPresenceUpdateMonitor* _presenceMonitor;
	FBMessengerStatusUpdateMonitor* _messengerStatusMonitor;
	unsigned long long _sortField;
	FBSyncStore* _syncStore;
	FBDelayer* _initialSyncDelayer;
	id<FBFriendListModelControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didWritePresenceValuesIntoSyncStore:(id)arg1 didClearExistingValues:(BOOL)arg2 ;
-(void)syncEngineDidBeginSync:(unsigned long long)arg1 isInitialSync:(BOOL)arg2 ;
-(void)syncEngineDidCompleteSync:(unsigned long long)arg1 ;
-(void)startWithDelegate:(id)arg1 sortField:(unsigned long long)arg2 observationOptions:(unsigned long long)arg3 ;
-(BOOL)_isStarted;
-(id)initWithFriendListMonitor:(id)arg1 presenceMonitor:(id)arg2 statusUpdateMonitor:(id)arg3 operationAggregator:(id)arg4 syncStore:(id)arg5 initialFriendSyncComplete:(BOOL)arg6 ;
-(void)syncStoreDidOpen:(id)arg1 wasSuccessful:(BOOL)arg2 ;
-(void)didDiscardDatabaseFile;
-(void)didCreateDatabaseTables;
-(void)syncStoreDidClose:(id)arg1 ;
-(void)_startPersonSearchOperationIfStoreOpen:(BOOL)arg1 ;
-(id)searchOperation;
-(void)operatonDidCompleteWithLoadedPeople:(id)arg1 ;
-(void)didWriteUpdatesToSyncStoreInvalidatingFriendList;
-(void)didWriteMessengerStatusUpdatesIntoSyncStore:(id)arg1 didClearExistingValues:(BOOL)arg2 ;
-(void)dealloc;
-(void)stop;
@end
