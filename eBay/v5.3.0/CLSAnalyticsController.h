/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/CLSAnalyticsViewControllerTrackingDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSURL, NSString, CLSAnalyticsNetworkingClient, NSFileManager, CLSEventLogSessionRepository, CLSAnalyticsMetadataController, CLSAnalyticsIdentifierGenerator, CLSAnalyticsTimestampGenerator, NSMutableArray, NSURLSession, NSObject, CLSEventLogEventFile, NSData;

@interface CLSAnalyticsController : NSObject <CLSAnalyticsViewControllerTrackingDelegate> {

	NSURL* _analyticsRootDirectoryURL;
	BOOL _haveSettings;
	BOOL _settingsShouldCollectAnalytics;
	NSURL* _settingsAnalyticsURL;
	BOOL _settingsShouldTrackViewControllers;
	BOOL _settingsShouldFlushOnBackground;
	unsigned long long _settingsMaxByteSizePerFile;
	unsigned _settingsFlushIntervalSecs;
	unsigned _settingsMaxPendingSendFileCount;
	BOOL _settingsTrackCustomEvents;
	BOOL _settingsTrackPredefinedEvents;
	long long _settingsSamplingRate;
	NSString* _betaToken;
	NSString* _sessionIdentifier;
	unsigned long long _sessionTimestamp;
	CLSAnalyticsNetworkingClient* _networkingClient;
	NSFileManager* _fileManager;
	NSString* _currentSessionFragmentIdentifier;
	unsigned long long _currentSessionFragmentTimestamp;
	NSURL* _currentSessionFragmentDirectoryURL;
	BOOL _performSessionMaintenanceAfterSettingsArrive;
	CLSEventLogSessionRepository* _logSessionRepository;
	CLSAnalyticsMetadataController* _metadataController;
	CLSAnalyticsIdentifierGenerator* _identifierGenerator;
	CLSAnalyticsTimestampGenerator* _timestampGenerator;
	NSMutableArray* _sessionFragmentsToTransmit;
	NSURLSession* _session;
	NSObject*<OS_dispatch_queue> _sessionMaintenanceQueue;
	NSObject*<OS_dispatch_source> _sessionFragmentMaintenanceTimerSource;
	NSObject*<OS_dispatch_queue> _priorityEventLoggingQueues[3];
	NSURL* _priorityCurrentFragmentEventFileURLs[3];
	CLSEventLogEventFile* _priorityCurrentFragmentEventFiles[3];
	BOOL _loggedAnalyticsEnabled;
	NSString* _lastSessionIdentifier;
	unsigned long long _lastSessionTimestamp;
	NSData* _lastSessionMetadata;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionMaintenanceQueue;              //@synthesize sessionMaintenanceQueue=_sessionMaintenanceQueue - In the implementation block
@property (nonatomic,readonly) BOOL customEventsFeatureSwitchEnabled; 
@property (nonatomic,readonly) BOOL predefinedEventsFeatureSwitchEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deviceMeetsMinimumRequirements;
+(id)mutableSortedFileURLsGroupedByPrioritiesFromLogFileURLs:(id)arg1 ;
+(BOOL)supported;
-(void)fabricSettingsDownloaded:(id)arg1 ;
-(void)cancelSessionMaintenance;
-(id)initWithSessionIdentifier:(id)arg1 sessionTimestamp:(unsigned long long)arg2 analyticsRootDirectoryWithURL:(id)arg3 betaToken:(id)arg4 identifierGenerator:(id)arg5 timestampGenerator:(id)arg6 metadataController:(id)arg7 networkingClient:(id)arg8 ;
-(BOOL)readShouldStartTrackingViewControllers;
-(BOOL)prepareNewSessionFragmentWithIdentifier:(id)arg1 timestamp:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)readLastSessionInformation;
-(void)saveCurrentSessionInformation;
-(void)applicationLifecycleEvent:(id)arg1 ;
-(id)fabricSettings;
-(void)saveShouldStartTrackingViewControllers:(BOOL)arg1 ;
-(void)scheduleSessionMaintenance;
-(void)handleDisabledFeatureSwitch;
-(void)maintainSessionFragmentsIgnoringError;
-(id)metadataController;
-(id)metadataJSONData;
-(BOOL)analyticsFeatureSwitchEnabled;
-(BOOL)predefinedEventsFeatureSwitchEnabled;
-(void)logAnswersEvent:(id)arg1 ;
-(BOOL)customEventsFeatureSwitchEnabled;
-(id)fabricInstallId;
-(BOOL)ensureLogFileExistsForPriority:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)handleSizeTriggeredMaintainSessionFragmentForLogFile:(id)arg1 ;
-(BOOL)handlePriorityTriggeredMaintainSessionFragmentForEvent:(id)arg1 ;
-(void)dispatchToQueue:(id)arg1 asynchronous:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(id)createEventFileURLForPriority:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)fabricIsFirstInstall;
-(BOOL)runOpenNewSessionFragment:(id*)arg1 ;
-(BOOL)purgePackagedPrepSessionFragmentDirectories;
-(id)sessionFragmentDirectoryURLsForStateName:(id)arg1 error:(id*)arg2 ;
-(BOOL)isOpenSessionFragmentDirectoryURL:(id)arg1 ;
-(BOOL)packageLogsFromActiveSessionFragmentDirectoryURL:(id)arg1 intoPackagedSessionFragmentDirectoryURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)runPackageClosedSessionFragments:(id*)arg1 ;
-(id)fabricAPIKey;
-(void)transmitNextPackagedSessionFragment:(/*^block*/id)arg1 ;
-(void)transmitLogsForSessionFragmentDirectory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveLastMaintenanceDate:(id)arg1 ;
-(unsigned long long)initialMaintenanceTimeWithFlushInterval:(double)arg1 ;
-(id)nonCurrentLogFileURLsForAllStates:(id*)arg1 ;
-(void)maintainSessionFragments:(/*^block*/id)arg1 ;
-(void)cleanUpRepository:(/*^block*/id)arg1 ;
-(void)pruneSessionFragmentLogFiles:(/*^block*/id)arg1 ;
-(void)transmitPackagedSessionFragments:(/*^block*/id)arg1 ;
-(void)packageClosedSessionFragments:(/*^block*/id)arg1 ;
-(void)openNewSessionFragment:(/*^block*/id)arg1 ;
-(void)viewControllerTrackingController:(id)arg1 didDetectAppearanceOfViewController:(id)arg2 ;
-(void)viewControllerTrackingController:(id)arg1 didDetectDisappearanceOfViewController:(id)arg2 ;
-(id)initWithSessionIdentifier:(id)arg1 analyticsRootDirectoryWithURL:(id)arg2 betaToken:(id)arg3 ;
-(void)logPredefinedEvent:(id)arg1 ;
-(void)logCustomEvent:(id)arg1 ;
-(void)logAppInstalled;
-(void)logAppLaunched;
-(void)logPreviousSessionCrashedOnDate:(id)arg1 ;
-(void)handleSubmissionRequestCompletion:(id)arg1 withRestart:(BOOL)arg2 forSessionFragmentDirectory:(id)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)sessionMaintenanceQueue;
-(void)dealloc;
-(void)setSettings:(id)arg1 ;
-(void)logEvent:(id)arg1 ;
-(id)lastMaintenanceDate;
@end

