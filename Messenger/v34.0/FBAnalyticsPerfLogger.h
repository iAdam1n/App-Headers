/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, FBReachabilityAnnouncer, NSMutableDictionary;

@interface FBAnalyticsPerfLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _logResmemEnabled;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	NSMutableDictionary* _pendingPerfEvents;

}

@property (nonatomic,retain) NSMutableDictionary * pendingPerfEvents;              //@synthesize pendingPerfEvents=_pendingPerfEvents - In the implementation block
+(id)sharedPerfLogger;
-(void)markStartForEvent:(id)arg1 nameSpace:(id)arg2 fromExistingEvent:(id)arg3 existingNameSpace:(id)arg4 copyExtras:(BOOL)arg5 usingBlock:(/*^block*/id)arg6 ;
-(double)_startTimeForPendingEvent:(id)arg1 nameSpace:(id)arg2 ;
-(unsigned long long)_residentMemoryForPendingEvent:(id)arg1 nameSpace:(id)arg2 ;
-(void)_copyExtrasFromSourceEvent:(id)arg1 sourceNameSpace:(id)arg2 toDestinationEvent:(id)arg3 destinationNameSpace:(id)arg4 ;
-(void)markStopForEvent:(id)arg1 nameSpace:(id)arg2 fromExistingEvent:(id)arg3 existingNameSpace:(id)arg4 copyExtras:(BOOL)arg5 usingBlock:(/*^block*/id)arg6 ;
-(void)markStartForEvents:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)markStopForEvents:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setExtrasForEvents:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)markCancelForEvents:(id)arg1 nameSpace:(id)arg2 ;
-(void)markStartForEvent:(id)arg1 fromExistingEvent:(id)arg2 nameSpace:(id)arg3 copyExtras:(BOOL)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)markStopForEvent:(id)arg1 fromExistingEvent:(id)arg2 nameSpace:(id)arg3 copyExtras:(BOOL)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)renameExistingEvent:(id)arg1 toNewEventNamed:(id)arg2 nameSpace:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)logEvent:(id)arg1 residentMemoryCount:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)logPersistedObjects:(long long)arg1 forClass:(id)arg2 ;
-(void)logTotalSize:(long long)arg1 forClass:(id)arg2 ;
-(void)logResidentMemoryEvent:(id)arg1 ;
-(void)syncPerfLoggerQueueInCTScan;
-(/*^block*/id)_wrapperBlockForContext:(id)arg1 tti:(double)arg2 ;
-(id)nonClosedPerfEventsForBugReporting;
-(void)markStartForEvent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)markStopForEvent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)pendingPerfEvents;
-(id)initWithReachabilityAnnouncer:(id)arg1 ;
-(void)onApplicationDidEnterBackground:(id)arg1 ;
-(void)onCTScanDidTriggerAppEventLogging;
-(void)onCTScanWillExit;
-(void)markStartForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)markStartSynchronouslyForEvent:(id)arg1 nameSpace:(id)arg2 startTime:(double)arg3 startResidentMemory:(unsigned long long)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)addToPendingPerfEventsEventName:(id)arg1 nameSpace:(id)arg2 timeStamp:(double)arg3 residentMemory:(unsigned long long)arg4 ;
-(void)setContext:(id)arg1 forEvent:(id)arg2 nameSpace:(id)arg3 ;
-(void)markStopForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)markStopForEvent:(id)arg1 atTime:(double)arg2 nameSpace:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)markStopSynchronouslyForEvent:(id)arg1 module:(id)arg2 nameSpace:(id)arg3 stopTime:(double)arg4 stopResidentMemory:(unsigned long long)arg5 usingBlock:(/*^block*/id)arg6 ;
-(BOOL)hasPendingEvent:(id)arg1 nameSpace:(id)arg2 ;
-(id)contextForEvent:(id)arg1 nameSpace:(id)arg2 ;
-(void)_cleanUpNameSpaceIfNeeded:(id)arg1 ;
-(void)logEvent:(id)arg1 module:(id)arg2 timeInterval:(double)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)markCancelForEvent:(id)arg1 nameSpace:(id)arg2 ;
-(void)markCancelSynchronouslyForEvent:(id)arg1 nameSpace:(id)arg2 ;
-(void)markScopedForEvent:(id)arg1 nameSpace:(id)arg2 onQueue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setExtrasForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setExtrasSynchronouslyForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setTimeMarker:(id)arg1 forEvent:(id)arg2 ;
-(void)setTimeMarker:(id)arg1 forEvent:(id)arg2 nameSpace:(id)arg3 ;
-(void)setTimeMarker:(id)arg1 atTime:(double)arg2 forEvent:(id)arg3 nameSpace:(id)arg4 ;
-(id)sequenceIdForEvent:(id)arg1 nameSpace:(id)arg2 ;
-(id)generateSequenceId;
-(void)markStartForEvent:(id)arg1 ;
-(void)markStopForEvent:(id)arg1 ;
-(void)markStopForEvent:(id)arg1 nameSpace:(id)arg2 ;
-(void)logEvent:(id)arg1 timeInterval:(double)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)markCancelForEvent:(id)arg1 ;
-(void)markScopedForEvent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)markScopedForEvent:(id)arg1 nameSpace:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)markScopedForEvent:(id)arg1 onQueue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setExtrasForEvent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setTimeMarker:(id)arg1 forEvents:(id)arg2 ;
-(void)setTimeMarker:(id)arg1 atTime:(double)arg2 forEvent:(id)arg3 ;
-(void)setLogResmemEnabled:(BOOL)arg1 ;
-(void)waitForQueue;
-(void)setPendingPerfEvents:(NSMutableDictionary *)arg1 ;
-(double)currentTimeStamp;
-(void)dealloc;
-(id)init;
-(id)debugDescription;
@end

