/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSStorage, CSTaskExecutor, CSMeasurementDispatcher, CSOfflineCache, CSNotificationsObserver, CSKeepAlive, CSCacheFlusher, NSString, NSMutableDictionary, NSArray, NSNumber, NSMutableSet;

@interface CSCore : NSObject {

	BOOL _errorHandlingEnabled;
	CSStorage* _storage;
	CSTaskExecutor* _taskExecutor;
	CSMeasurementDispatcher* _measurementDispatcher;
	CSOfflineCache* _offlineCache;
	CSNotificationsObserver* observer;
	CSKeepAlive* _keepAlive;
	CSCacheFlusher* _cacheFlusher;
	BOOL isKeepAliveEnabled;
	BOOL isCrossPublisherIdBasedOnIFDA;
	BOOL autoStartEnabled;
	BOOL secure;
	BOOL adIdChanged;
	BOOL idChangedWhenAppNotRunning;
	BOOL autoUpdateInForegroundOnly;
	BOOL coldStart;
	BOOL enabled_;
	BOOL wasErrorHandlingEnabled;
	int liveTransmissionMode;
	int offlineTransmissionMode;
	int adIdEnabled;
	int runsCount;
	int coldStartCount;
	int currentApplicationState;
	int foregroundComponentsCount;
	int activeUxComponentsCount;
	int foregroundTransitionsCount;
	int currentSessionState;
	int userSessionCount;
	int activeUserSessionCount;
	int userInteractionCount;
	int applicationSessionCount;
	NSString* visitorID;
	NSString* publisherSecret;
	NSString* appName;
	NSMutableDictionary* labels;
	NSMutableDictionary* autoStartLabels;
	NSString* devModel;
	long long cacheFlushingInterval;
	NSString* crossPublisherID_;
	NSString* md5CrossPublisherRawId;
	/*function pointer*/void* defaultUncaughtExceptionHandler;
	NSArray* measurementLabelOrder;
	NSNumber* adSupportFrameworkAvailable;
	long long autoUpdateInterval;
	long long coldStartId;
	long long installId;
	long long firstInstallId;
	NSString* currentVersion;
	NSString* previousVersion_;
	long long totalForegroundTime;
	long long accumulatedBackgroundTime;
	long long accumulatedForegroundTime;
	long long accumulatedInactiveTime;
	long long genesis;
	long long previousGenesis_;
	long long lastApplicationAccumulationTimestamp;
	long long totalBackgroundTime;
	long long totalInactiveTime;
	long long accumulatedApplicationSessionTime;
	long long accumulatedUserSessionTime;
	long long accumulatedActiveUserSessionTime;
	long long lastApplicationSessionTimestamp;
	long long lastUserSessionTimestamp;
	long long lastActiveUserSessionTimestamp;
	long long lastUserInteractionTimestamp;
	long long lastSessionAccumulationTimestamp;
	NSString* userInteractionTimerId;
	NSString* autoUpdateTimerId;
	NSMutableSet* ssids;
	NSString* pixelURL;

}

@property (retain) NSString * visitorID; 
@property (retain) NSString * publisherSecret; 
@property (retain) NSString * appName; 
@property (retain) NSMutableDictionary * labels; 
@property (retain) NSMutableDictionary * autoStartLabels; 
@property (retain) NSString * devModel; 
@property (assign) BOOL isKeepAliveEnabled; 
@property (assign) long long cacheFlushingInterval; 
@property (retain) NSString * crossPublisherID_; 
@property (retain) NSString * md5CrossPublisherRawId; 
@property (assign) BOOL isCrossPublisherIdBasedOnIFDA; 
@property (assign) /*function pointer*/void* defaultUncaughtExceptionHandler; 
@property (assign) BOOL autoStartEnabled; 
@property (assign) BOOL secure; 
@property (assign) int liveTransmissionMode; 
@property (assign) int offlineTransmissionMode; 
@property (retain) NSArray * measurementLabelOrder; 
@property (retain) NSNumber * adSupportFrameworkAvailable; 
@property (assign) BOOL adIdChanged; 
@property (assign) int adIdEnabled; 
@property (assign) BOOL idChangedWhenAppNotRunning; 
@property (assign) long long autoUpdateInterval; 
@property (assign) BOOL autoUpdateInForegroundOnly; 
@property (assign) int runsCount; 
@property (assign) long long coldStartId; 
@property (assign) int coldStartCount; 
@property (assign) BOOL coldStart; 
@property (assign) long long installId; 
@property (assign) long long firstInstallId; 
@property (retain) NSString * currentVersion; 
@property (retain) NSString * previousVersion_; 
@property (assign) int currentApplicationState; 
@property (assign) int foregroundComponentsCount; 
@property (assign) int activeUxComponentsCount; 
@property (assign) int foregroundTransitionsCount; 
@property (assign) long long totalForegroundTime; 
@property (assign) long long accumulatedBackgroundTime; 
@property (assign) long long accumulatedForegroundTime; 
@property (assign) long long accumulatedInactiveTime; 
@property (assign) long long genesis; 
@property (assign) long long previousGenesis_; 
@property (assign) long long lastApplicationAccumulationTimestamp; 
@property (assign) long long totalBackgroundTime; 
@property (assign) long long totalInactiveTime; 
@property (assign) int currentSessionState; 
@property (assign) long long accumulatedApplicationSessionTime; 
@property (assign) long long accumulatedUserSessionTime; 
@property (assign) long long accumulatedActiveUserSessionTime; 
@property (assign) int userSessionCount; 
@property (assign) int activeUserSessionCount; 
@property (assign) long long lastApplicationSessionTimestamp; 
@property (assign) long long lastUserSessionTimestamp; 
@property (assign) long long lastActiveUserSessionTimestamp; 
@property (assign) int userInteractionCount; 
@property (assign) long long lastUserInteractionTimestamp; 
@property (assign) long long lastSessionAccumulationTimestamp; 
@property (assign) int applicationSessionCount; 
@property (retain) NSString * userInteractionTimerId; 
@property (retain) NSString * autoUpdateTimerId; 
@property (retain) NSMutableSet * ssids; 
@property (assign) BOOL enabled_; 
@property (assign) BOOL wasErrorHandlingEnabled; 
@property (getter=isErrorHandlingEnabled) BOOL errorHandlingEnabled; 
@property (readonly) NSString * pixelURL; 
-(void)setPublisherSecret:(NSString *)arg1 ;
-(void)onEnterForeground;
-(void)onExitForeground;
-(void)initializeNotificationObserver;
-(void)initializedContextDependant:(long long)arg1 ;
-(void)loadInitialSettings;
-(void)restorePixelURL;
-(void)restoreVisitorId;
-(void)generateCrossPublisherUniqueId;
-(void)initialezeStorage;
-(void)initializeKeepAliveAlarmReceiver;
-(void)initializeOfflineCache;
-(void)initializeCacheFlusher;
-(void)initializeStateMachines:(long long)arg1 ;
-(BOOL)validateApplicationSession:(long long)arg1 ;
-(id)setPixelURL:(id)arg1 background:(BOOL)arg2 ;
-(void)migrateOldStorageKeys;
-(void)migrateOldKey:(id)arg1 toNewKeys:(id)arg2 ;
-(void)migrateOldKey:(id)arg1 toNewKey:(id)arg2 ;
-(void)disableAutoUpdate;
-(void)setLabel:(id)arg1 value:(id)arg2 background:(BOOL)arg3 ;
-(void)setOfflineURL:(id)arg1 background:(BOOL)arg2 ;
-(BOOL)isVisitorIDValid:(id)arg1 ;
-(void)resetVisitorID;
-(void)notifyWithApplicationEventType:(int)arg1 labels:(id)arg2 ;
-(id)generateVisitorId;
-(id)generateVisitorIdWithPublisherSecret:(id)arg1 ;
-(id)getUID;
-(BOOL)isAdFrameworkAvailable;
-(void)setCrossPublisherIdFromRawId:(id)arg1 ;
-(BOOL)isLimitAdTrackingEnabled;
-(BOOL)isMACAddressValid;
-(id)getPlainMACAddress;
-(id)generateInstallationID;
-(id)getPlainMACAddress:(id)arg1 ;
-(BOOL)cancelUserInteractionTask;
-(void)stopAutoUpdateTimer;
-(id)readInitialSettingsDictionary;
-(id)retrieveBooleanProperty:(id)arg1 from:(id)arg2 defaultFromStorage:(BOOL)arg3 defaultValue:(BOOL)arg4 ;
-(void)setSecure:(BOOL)arg1 background:(BOOL)arg2 ;
-(id)retrieveProperty:(id)arg1 from:(id)arg2 defaultFromStorage:(BOOL)arg3 ;
-(void)setAppName:(id)arg1 background:(BOOL)arg2 ;
-(void)setCustomerC2:(id)arg1 background:(BOOL)arg2 ;
-(void)allowLiveTransmission:(int)arg1 background:(BOOL)arg2 ;
-(void)allowOfflineTransmission:(int)arg1 background:(BOOL)arg2 ;
-(void)setKeepAliveEnabled:(BOOL)arg1 background:(BOOL)arg2 ;
-(void)setCacheFlushingInterval:(long long)arg1 background:(BOOL)arg2 ;
-(void)setErrorHandlingEnabled:(BOOL)arg1 ;
-(void)setAutoStartEnabled:(BOOL)arg1 background:(BOOL)arg2 ;
-(id)customerC2;
-(BOOL)isNotProperlyInitialized;
-(void)scheduleUserInteractionTask;
-(void)executeTransitionTask:(int)arg1 newSessionState:(int)arg2 timestamp:(long long)arg3 ;
-(void)onExitApplicationState:(int)arg1 timestamp:(long long)arg2 ;
-(void)onEnterApplicationState:(int)arg1 timestamp:(long long)arg2 ;
-(void)accumulateApplicationData:(long long)arg1 store:(BOOL)arg2 ;
-(void)onExitSessionState:(int)arg1 timestamp:(long long)arg2 ;
-(void)onEnterSessionState:(int)arg1 timestamp:(long long)arg2 ;
-(void)accumulateSessionData:(long long)arg1 store:(BOOL)arg2 ;
-(void)onApplicationStateChanged:(int)arg1 timestamp:(long long)arg2 ;
-(void)onSessionStateChanged:(int)arg1 timestamp:(long long)arg2 ;
-(void)startAutoUpdateTimer;
-(void)validateActiveUserSession:(long long)arg1 ;
-(void)validateUserSession:(long long)arg1 ;
-(void)userInteractionTask:(id)arg1 ;
-(void)update:(long long)arg1 store:(BOOL)arg2 ;
-(BOOL)isErrorHandlingEnabled;
-(id)taskExecutor;
-(id)measurementDispatcher;
-(id)cacheFlusher;
-(void)incrementRunsCount;
-(void)setOfflineURL:(id)arg1 ;
-(void)setVisitorId:(id)arg1 background:(BOOL)arg2 ;
-(BOOL)crossPublisherIdChanged;
-(id)crossPublisherID;
-(void)setPublisherSecret:(id)arg1 background:(BOOL)arg2 ;
-(long long)previousGenesis;
-(id)label:(id)arg1 ;
-(void)setLabels:(id)arg1 background:(BOOL)arg2 ;
-(id)autoStartLabel:(id)arg1 ;
-(void)setAutoStartLabel:(id)arg1 value:(id)arg2 background:(BOOL)arg3 ;
-(void)setAutoStartLabels:(id)arg1 background:(BOOL)arg2 ;
-(void)setMeasurementLabelOrder:(id)arg1 background:(BOOL)arg2 ;
-(void)onUxActive;
-(void)onUxInactive;
-(void)onUserInteraction;
-(void)enableAutoUpdate:(int)arg1 foregroundOnly:(BOOL)arg2 ;
-(BOOL)isAutoUpdateEnabled;
-(long long)totalBackgroundTime:(BOOL)arg1 ;
-(long long)totalInactiveTime:(BOOL)arg1 ;
-(int)foregroundTransitionsCountDelta:(BOOL)arg1 ;
-(long long)totalForegroundTime:(BOOL)arg1 ;
-(long long)foregroundTimeDelta:(BOOL)arg1 ;
-(long long)backgroundTimeDelta:(BOOL)arg1 ;
-(long long)inactiveTimeDelta:(BOOL)arg1 ;
-(long long)applicationSessionTimeDelta:(BOOL)arg1 ;
-(long long)activeUserSessionTimeDelta:(BOOL)arg1 ;
-(long long)userSessionTimeDelta:(BOOL)arg1 ;
-(int)applicationSessionCountDelta:(BOOL)arg1 ;
-(int)activeUserSessionCountDelta:(BOOL)arg1 ;
-(int)userSessionCountDelta:(BOOL)arg1 ;
-(int)userInteractionCount:(BOOL)arg1 ;
-(BOOL)handleColdStart:(long long)arg1 ;
-(BOOL)isJailBroken;
-(void)setEnabled:(BOOL)arg1 background:(BOOL)arg2 ;
-(NSString *)visitorID;
-(void)setVisitorID:(NSString *)arg1 ;
-(NSString *)publisherSecret;
-(NSMutableDictionary *)autoStartLabels;
-(void)setAutoStartLabels:(NSMutableDictionary *)arg1 ;
-(NSString *)devModel;
-(void)setDevModel:(NSString *)arg1 ;
-(BOOL)isKeepAliveEnabled;
-(void)setIsKeepAliveEnabled:(BOOL)arg1 ;
-(long long)cacheFlushingInterval;
-(void)setCacheFlushingInterval:(long long)arg1 ;
-(NSString *)crossPublisherID_;
-(void)setCrossPublisherID_:(NSString *)arg1 ;
-(NSString *)md5CrossPublisherRawId;
-(void)setMd5CrossPublisherRawId:(NSString *)arg1 ;
-(BOOL)isCrossPublisherIdBasedOnIFDA;
-(void)setIsCrossPublisherIdBasedOnIFDA:(BOOL)arg1 ;
-(/*function pointer*/void*)defaultUncaughtExceptionHandler;
-(void)setDefaultUncaughtExceptionHandler:(/*function pointer*/void*)arg1 ;
-(BOOL)autoStartEnabled;
-(void)setAutoStartEnabled:(BOOL)arg1 ;
-(int)liveTransmissionMode;
-(void)setLiveTransmissionMode:(int)arg1 ;
-(int)offlineTransmissionMode;
-(void)setOfflineTransmissionMode:(int)arg1 ;
-(NSArray *)measurementLabelOrder;
-(void)setMeasurementLabelOrder:(NSArray *)arg1 ;
-(NSNumber *)adSupportFrameworkAvailable;
-(void)setAdSupportFrameworkAvailable:(NSNumber *)arg1 ;
-(BOOL)adIdChanged;
-(void)setAdIdChanged:(BOOL)arg1 ;
-(int)adIdEnabled;
-(void)setAdIdEnabled:(int)arg1 ;
-(BOOL)idChangedWhenAppNotRunning;
-(void)setIdChangedWhenAppNotRunning:(BOOL)arg1 ;
-(long long)autoUpdateInterval;
-(void)setAutoUpdateInterval:(long long)arg1 ;
-(BOOL)autoUpdateInForegroundOnly;
-(void)setAutoUpdateInForegroundOnly:(BOOL)arg1 ;
-(int)runsCount;
-(void)setRunsCount:(int)arg1 ;
-(long long)coldStartId;
-(void)setColdStartId:(long long)arg1 ;
-(int)coldStartCount;
-(void)setColdStartCount:(int)arg1 ;
-(BOOL)coldStart;
-(void)setColdStart:(BOOL)arg1 ;
-(long long)installId;
-(void)setInstallId:(long long)arg1 ;
-(long long)firstInstallId;
-(void)setFirstInstallId:(long long)arg1 ;
-(NSString *)previousVersion_;
-(void)setPreviousVersion_:(NSString *)arg1 ;
-(int)currentApplicationState;
-(void)setCurrentApplicationState:(int)arg1 ;
-(int)foregroundComponentsCount;
-(void)setForegroundComponentsCount:(int)arg1 ;
-(int)activeUxComponentsCount;
-(void)setActiveUxComponentsCount:(int)arg1 ;
-(int)foregroundTransitionsCount;
-(void)setForegroundTransitionsCount:(int)arg1 ;
-(long long)totalForegroundTime;
-(void)setTotalForegroundTime:(long long)arg1 ;
-(long long)accumulatedBackgroundTime;
-(void)setAccumulatedBackgroundTime:(long long)arg1 ;
-(long long)accumulatedForegroundTime;
-(void)setAccumulatedForegroundTime:(long long)arg1 ;
-(long long)accumulatedInactiveTime;
-(void)setAccumulatedInactiveTime:(long long)arg1 ;
-(long long)genesis;
-(void)setGenesis:(long long)arg1 ;
-(long long)previousGenesis_;
-(void)setPreviousGenesis_:(long long)arg1 ;
-(long long)lastApplicationAccumulationTimestamp;
-(void)setLastApplicationAccumulationTimestamp:(long long)arg1 ;
-(long long)totalBackgroundTime;
-(void)setTotalBackgroundTime:(long long)arg1 ;
-(long long)totalInactiveTime;
-(void)setTotalInactiveTime:(long long)arg1 ;
-(int)currentSessionState;
-(void)setCurrentSessionState:(int)arg1 ;
-(long long)accumulatedApplicationSessionTime;
-(void)setAccumulatedApplicationSessionTime:(long long)arg1 ;
-(long long)accumulatedUserSessionTime;
-(void)setAccumulatedUserSessionTime:(long long)arg1 ;
-(long long)accumulatedActiveUserSessionTime;
-(void)setAccumulatedActiveUserSessionTime:(long long)arg1 ;
-(int)userSessionCount;
-(void)setUserSessionCount:(int)arg1 ;
-(int)activeUserSessionCount;
-(void)setActiveUserSessionCount:(int)arg1 ;
-(long long)lastApplicationSessionTimestamp;
-(void)setLastApplicationSessionTimestamp:(long long)arg1 ;
-(long long)lastUserSessionTimestamp;
-(void)setLastUserSessionTimestamp:(long long)arg1 ;
-(long long)lastActiveUserSessionTimestamp;
-(void)setLastActiveUserSessionTimestamp:(long long)arg1 ;
-(int)userInteractionCount;
-(void)setUserInteractionCount:(int)arg1 ;
-(long long)lastUserInteractionTimestamp;
-(void)setLastUserInteractionTimestamp:(long long)arg1 ;
-(long long)lastSessionAccumulationTimestamp;
-(void)setLastSessionAccumulationTimestamp:(long long)arg1 ;
-(int)applicationSessionCount;
-(void)setApplicationSessionCount:(int)arg1 ;
-(NSString *)userInteractionTimerId;
-(void)setUserInteractionTimerId:(NSString *)arg1 ;
-(NSString *)autoUpdateTimerId;
-(void)setAutoUpdateTimerId:(NSString *)arg1 ;
-(NSMutableSet *)ssids;
-(void)setSsids:(NSMutableSet *)arg1 ;
-(BOOL)enabled_;
-(void)setEnabled_:(BOOL)arg1 ;
-(BOOL)wasErrorHandlingEnabled;
-(void)setWasErrorHandlingEnabled:(BOOL)arg1 ;
-(NSString *)pixelURL;
-(id)storage;
-(id)previousVersion;
-(BOOL)enabled;
-(void)dealloc;
-(id)init;
-(void)reset;
-(int)applicationState;
-(void)setSecure:(BOOL)arg1 ;
-(id)observer;
-(void)update;
-(id)version;
-(void)setLabels:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)labels;
-(void)setAppName:(NSString *)arg1 ;
-(void)setCurrentVersion:(NSString *)arg1 ;
-(id)keepAlive;
-(NSString *)currentVersion;
-(id)offlineCache;
-(BOOL)secure;
-(NSString *)appName;
-(void)updateState:(long long)arg1 ;
-(id)trackingID;
@end

