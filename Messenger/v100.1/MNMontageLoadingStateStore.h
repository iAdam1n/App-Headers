/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageLoadingStateMutating.h>
#import <Messenger/MNMontageLoadingStateQuerying.h>
#import <Messenger/MNMontageViewModelContentPrefetchingListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol OS_dispatch_queue, MNMontageViewModelContentPrefetchingListener;
@class NSMutableDictionary, NSObject, MNMontageLoadingStateMonitoringAnnouncer, NSString;

@interface MNMontageLoadingStateStore : NSObject <MNMontageLoadingStateMutating, MNMontageLoadingStateQuerying, MNMontageViewModelContentPrefetchingListener, FBViewerContextClassProvidable> {

	NSMutableDictionary* _loadingStates;
	NSMutableDictionary* _montageThreadKeyToPrefetchedMessageKeysMap;
	NSObject*<OS_dispatch_queue> _queue;
	MNMontageLoadingStateMonitoringAnnouncer* _monitoringAnnouncer;
	id<MNMontageViewModelContentPrefetchingListener> _selfPrefetchingListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)querier;
-(id)mutator;
-(id)prefetchingListener;
-(void)getLoadingStateForMontage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setLoadingState:(id)arg1 forMontage:(id)arg2 ;
-(void)getLoadingStatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateMessageKeys:(id)arg1 forMontage:(id)arg2 ;
-(void)_updateLoadingStateIfNecessaryForMontage:(id)arg1 withNumberOfPrefetchedMessages:(unsigned long long)arg2 numberOfTotalMessages:(unsigned long long)arg3 ;
-(id)_loadingStateForMontage:(id)arg1 ;
-(unsigned long long)_minimumMessagesToLoad;
-(void)montageViewModelContentPrefetchingProgressed:(id)arg1 completedMessages:(id)arg2 remainingMessages:(id)arg3 ;
-(void)montageViewModelContentPrefetchingCompleted:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
