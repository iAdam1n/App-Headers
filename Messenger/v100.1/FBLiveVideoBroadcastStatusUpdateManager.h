/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLiveVideoBroadcastStatusPollQueueDelegate.h>
#import <Messenger/FBReachabilityListener.h>

@class FBUserSession, NSMutableDictionary, FBLiveVideoBroadcastStatusPollQueue, FBCache, NSHashTable, NSString;

@interface FBLiveVideoBroadcastStatusUpdateManager : NSObject <FBLiveVideoBroadcastStatusPollQueueDelegate, FBReachabilityListener> {

	FBUserSession* _session;
	NSMutableDictionary* _items;
	FBLiveVideoBroadcastStatusPollQueue* _pollQueue;
	BOOL _enableDebugInfo;
	FBCache* _debugInfoVideoStatusEvents;
	NSHashTable* _transitionedVideos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)_subscribeToReachability;
-(void)_subscribeToLifecycleNotifications;
-(void)_unsubscribeFromReachability;
-(void)_unsubscribeFromLifecycleNotifications;
-(id)_subscribeVideoID:(id)arg1 ;
-(void)_addVideoStatusDebugEvent:(id)arg1 forVideoID:(id)arg2 loggingSource:(id)arg3 ;
-(void)_processBroadcastStatus:(id)arg1 forVideoID:(id)arg2 loggingSource:(id)arg3 ;
-(void)_pollAllVideos;
-(void)_applicationDidEnterForeground;
-(void)broadcastStatusPollQueue:(id)arg1 didReceiveBroadcastStatus:(id)arg2 forVideoID:(id)arg3 ;
-(id)initWithSession:(id)arg1 enableDebugInfo:(BOOL)arg2 ;
-(void)registerVideoID:(id)arg1 broadcastStatus:(id)arg2 updateCallback:(/*^block*/id)arg3 ;
-(void)unregisterVideoID:(id)arg1 ;
-(id)lastBroadcastStatusForVideoID:(id)arg1 ;
-(id)_buildDebugInfo;
-(void)dealloc;
@end
