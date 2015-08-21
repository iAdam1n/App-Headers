/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/CLSAnalyticsViewControllerTrackingDelegate.h>

@class NSURL, NSString, CLSAnalyticsNetworkingClient, NSFileManager, CLSEventLogSessionRepository, CLSAnalyticsMetadataController, CLSAnalyticsIdentifierGenerator, CLSAnalyticsTimestampGenerator, NSMutableArray, NSURLSession, CLSEventLogEventFile, NSData;

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
	unsigned _settingsMaxCustomEventAttributeCount;
	unsigned _settingsMaxCustomEventAttributeSize;
	BOOL _settingsTrackCustomEvents;
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
	dispatch_queue_sRef _sessionMaintenanceQueue;
	dispatch_source_sRef _sessionFragmentMaintenanceTimerSource;
	dispatch_queue_s* _priorityEventLoggingQueues[3];
	NSURL* _priorityCurrentFragmentEventFileURLs[3];
	CLSEventLogEventFile* _priorityCurrentFragmentEventFiles[3];
	BOOL _loggedAnalyticsEnabled;
	NSString* _lastSessionIdentifier;
	unsigned long long _lastSessionTimestamp;
	NSData* _lastSessionMetadata;

}

@property (nonatomic,readonly) dispatch_queue_sRef sessionMaintenanceQueue;              //@synthesize sessionMaintenanceQueue=_sessionMaintenanceQueue - In the implementation block
@property (nonatomic,readonly) BOOL customEventsFeatureSwitchEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deviceMeetsMinimumRequirements;
+(id)mutableSortedFileURLsGroupedByPrioritiesFromLogFileURLs:(id)arg1 ;
+(BOOL)supported;
-(void)logEvent:(id)arg1 ;
-(id)initWithSessionIdentifier:(id)arg1 analyticsRootDirectoryWithURL:(id)arg2 betaToken:(id)arg3 ;
-(void)logAppInstalled;
-(void)logAppLaunched;
-(void)logPreviousSessionCrashedOnDate:(id)arg1 ;
-(id)metadataJSONData;
-(void)logAnswersEvent:(id)arg1 ;
-(void)cancelSessionMaintenance;
-(id)initWithSessionIdentifier:(id)arg1 sessionTimestamp:(unsigned long long)arg2 analyticsRootDirectoryWithURL:(id)arg3 betaToken:(id)arg4 identifierGenerator:(id)arg5 timestampGenerator:(id)arg6 metadataController:(id)arg7 networkingClient:(id)arg8 ;
-(BOOL)readShouldStartTrackingViewControllers;
-(BOOL)prepareNewSessionFragmentWithIdentifier:(id)arg1 timestamp:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)readLastSessionInformation;
-(void)saveCurrentSessionInformation;
-(void)fabricSettingsDownloaded:(id)arg1 ;
-(void)applicationLifecycleEvent:(id)arg1 ;
-(id)fabricSettings;
-(void)saveShouldStartTrackingViewControllers:(BOOL)arg1 ;
-(void)scheduleSessionMaintenance;
-(void)handleDisabledFeatureSwitch;
-(void)maintainSessionFragmentsIgnoringError;
-(id)metadataController;
-(BOOL)analyticsFeatureSwitchEnabled;
-(BOOL)customEventsFeatureSwitchEnabled;
-(BOOL)ensureLogFileExistsForPriority:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)handleSizeTriggeredMaintainSessionFragmentForLogFile:(id)arg1 ;
-(BOOL)handlePriorityTriggeredMaintainSessionFragmentForEvent:(id)arg1 ;
-(void)dispatchToQueue:(dispatch_queue_sRef)arg1 asynchronous:(BOOL)arg2 block:(/*^block*/id)arg3 ;
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
-(void)handleSubmissionRequestCompletion:(id)arg1 withRestart:(BOOL)arg2 forSessionFragmentDirectory:(id)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(dispatch_queue_sRef)sessionMaintenanceQueue;
-(void)dealloc;
-(void)setSettings:(id)arg1 ;
-(id)lastMaintenanceDate;
@end

