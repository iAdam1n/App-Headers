/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCacheHandlerLogger.h>
#import <Messenger/FBReachabilityListener.h>

@protocol OS_dispatch_queue, OS_dispatch_source, FBBackgroundStateManaging;
@class FBAnalytics, NSObject, FBReachabilityAnnouncer, NSMutableDictionary, NSFileManager, FBAppStateLogger, FBAllocationTrackerLogger, NSString, FBOOMArchiver, FBStateTimeIntervalsManager, FBApplicationStatusProvider, FBCPUInfoProvider, FBApplicationStatusSnapshot, FBRadioTechnologyFetcher;

@interface FBActivityMonitor : NSObject <FBCacheHandlerLogger, FBReachabilityListener> {

	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;
	double _lastStatusSnapshotSendTimeSec;
	double _lastSeenInForegroundTimestamp;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	unsigned long long _reachabilityState;
	NSMutableDictionary* _deviceStatusEvents;
	NSObject*<OS_dispatch_source> _deviceStatusTimer;
	BOOL _scheduledToSendDeviceLogs;
	NSFileManager* _fileManager;
	FBAppStateLogger* _appStateLogger;
	FBAllocationTrackerLogger* _allocationTrackerLogger;
	BOOL _sentReportAfterBecomingActive;
	Mutex _statusFromLastBackgroundingMutex;
	BOOL _backgroundedInThisRun;
	NSString* _coldStartReason;
	Mutex _coldStartReasonMutex;
	id<FBBackgroundStateManaging> _backgroundStateManager;
	NSString* _bgRefreshStatus;
	long long _currentState;
	FBOOMArchiver* _OOMArchiver;
	FBStateTimeIntervalsManager* _timeIntervalsManager;
	FBApplicationStatusProvider* _applicationStatusProvider;
	FBCPUInfoProvider* _cpuInfoProvider;
	FBApplicationStatusSnapshot* _statusFromLastBackgrounding;
	NSString* _statusSnapshotPath;
	FBRadioTechnologyFetcher* _radioTechnologyFetcher;

}

@property (nonatomic,copy) FBApplicationStatusSnapshot * statusFromLastBackgrounding;              //@synthesize statusFromLastBackgrounding=_statusFromLastBackgrounding - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,copy) NSString * statusSnapshotPath;                                          //@synthesize statusSnapshotPath=_statusSnapshotPath - In the implementation block
@property (nonatomic,retain) FBRadioTechnologyFetcher * radioTechnologyFetcher;                    //@synthesize radioTechnologyFetcher=_radioTechnologyFetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setSharedMonitor:(id)arg1 ;
+(void)resetSharedMonitor;
+(id)sharedMonitor;
-(id)initWithAnalytics:(id)arg1 appStateLoggerSetting:(unsigned long long)arg2 ;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(FBRadioTechnologyFetcher *)radioTechnologyFetcher;
-(void)onCTScanWillExit;
-(void)cacheHandlerClearedCacheAfterBackgrounding;
-(void)setLastAccessedURL:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 appStateLogger:(id)arg2 fileManager:(id)arg3 ;
-(id)initWithAnalytics:(id)arg1 appStateLogger:(id)arg2 fileManager:(id)arg3 backgroundStateManager:(id)arg4 reachabilityAnnouncer:(id)arg5 timeManager:(id)arg6 applicationStatusProvider:(id)arg7 ;
-(void)_setBackgroundRefreshStatus:(id)arg1 ;
-(void)logDeviceStatusForCTScan;
-(void)logDeviceMemoryWarning;
-(void)_logDeviceStatusOnLastBackgrounding;
-(void)_saveCurrentDeviceStatusToDisk;
-(void)restartDeviceStatusTimerForAppState:(long long)arg1 ;
-(void)logStableDeviceStatus;
-(void)_applicationDidSuspend:(long long)arg1 ;
-(void)cancelDeviceStatusTimer;
-(void)sendOrScheduleDeviceLogsToBeSent:(BOOL)arg1 ;
-(void)logDeviceStatus;
-(void)logBackgroundDeviceStatus;
-(void)logDeviceStatus:(id)arg1 byModule:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)logDeviceStatus:(unsigned long long)arg1 ;
-(void)_addConnectionStatusToDictionary:(id)arg1 ;
-(void)saveStatusSnapshotAfterBackgrounding:(id)arg1 ;
-(void)loadStatusSnapshotFromLastBackgroundingIfNeeded;
-(void)setColdStartReason:(id)arg1 ;
-(void)logEventTerminatingLastRun:(id)arg1 additionalLoggingContext:(id)arg2 ;
-(void)updateTerminationLogFiles:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 fileManager:(id)arg2 ;
-(void)applicationDidReceiveMemoryWarning;
-(void)applicationDidBecomeActiveWithState:(long long)arg1 notification:(id)arg2 ;
-(void)applicationWillResignActiveWithState:(long long)arg1 notification:(id)arg2 ;
-(void)applicationDidEnterBackgroundWithState:(long long)arg1 notification:(id)arg2 ;
-(void)applicationWillTerminateWithState:(long long)arg1 notification:(id)arg2 ;
-(void)applicationWillEnterForegroundWithState:(long long)arg1 notification:(id)arg2 ;
-(void)applicationDidFinishLaunchingWithState:(long long)arg1 notification:(id)arg2 ;
-(void)applicationBackgroundRefreshStatusDidChange;
-(void)provideRootWindow:(id)arg1 ;
-(unsigned)appRunningState;
-(void)updateDeviceStatusForEventAttribute:(id)arg1 stringValue:(id)arg2 ;
-(BOOL)backgroundedInThisRun;
-(void)setBackgroundedInThisRun:(BOOL)arg1 ;
-(FBApplicationStatusSnapshot *)statusFromLastBackgrounding;
-(void)setStatusFromLastBackgrounding:(FBApplicationStatusSnapshot *)arg1 ;
-(id)coldStartReason;
-(void)handleColdStart:(id)arg1 ;
-(NSString *)statusSnapshotPath;
-(void)setStatusSnapshotPath:(NSString *)arg1 ;
-(void)setRadioTechnologyFetcher:(FBRadioTechnologyFetcher *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end

