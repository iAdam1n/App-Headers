/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ALSdkSettings, ALAdService, ALNativeAdService, ALPostbackService, ALEventService, ALTargetingData, ALLogManager, ALTaskManager, ALSettingsManager, ALConnectionManager, ALStatsManager, ALFileManager, ALPreloadedAdManager, ALPreloadedNativeAdManager, ALDataCollector, ALPersistentPostbackManager;

@interface ALSdk : NSObject {

	BOOL _initializing;
	BOOL _enabled;
	BOOL _networkError;
	NSString* _sdkKey;
	ALSdkSettings* _settings;
	ALAdService* _adService;
	ALNativeAdService* _nativeAdService;
	ALPostbackService* _postbackService;
	ALEventService* _eventService;
	ALTargetingData* _targetingData;
	ALLogManager* _logManager;
	ALTaskManager* _taskManager;
	ALSettingsManager* _settingsManager;
	ALConnectionManager* _connectionManager;
	ALStatsManager* _statsManager;
	ALFileManager* _fileManager;
	ALPreloadedAdManager* _preloadedAdManager;
	ALPreloadedNativeAdManager* _preloadedNativeAdManager;
	ALDataCollector* _dataCollector;
	ALPersistentPostbackManager* _persistentPostbackManager;

}

@property (nonatomic,readonly) ALLogManager * logManager; 
@property (nonatomic,readonly) ALTaskManager * taskManager; 
@property (nonatomic,readonly) ALSettingsManager * settingsManager; 
@property (nonatomic,readonly) ALConnectionManager * connectionManager; 
@property (nonatomic,readonly) ALStatsManager * statsManager; 
@property (nonatomic,readonly) ALFileManager * fileManager; 
@property (nonatomic,readonly) ALPreloadedAdManager * preloadedAdManager; 
@property (nonatomic,readonly) ALPreloadedNativeAdManager * preloadedNativeAdManager; 
@property (nonatomic,readonly) ALPersistentPostbackManager * persistentPostbackManager; 
@property (nonatomic,readonly) ALDataCollector * dataCollector; 
@property (nonatomic,retain) ALTargetingData * targetingData; 
@property (getter=isInitializing,readonly) BOOL initializing; 
@property (getter=isEnabled,readonly) BOOL enabled; 
@property (getter=isNetworkError,readonly) BOOL networkError; 
@property (getter=isEnabledAndInitialized,readonly) BOOL enabledAndInitialized; 
@property (nonatomic,retain) NSString * sdkKey;                                                      //@synthesize sdkKey=_sdkKey - In the implementation block
@property (nonatomic,retain) ALSdkSettings * settings;                                               //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) ALAdService * adService;                                                //@synthesize adService=_adService - In the implementation block
@property (nonatomic,retain) ALNativeAdService * nativeAdService;                                    //@synthesize nativeAdService=_nativeAdService - In the implementation block
@property (nonatomic,retain) ALLogManager * logManager;                                              //@synthesize logManager=_logManager - In the implementation block
@property (nonatomic,retain) ALTaskManager * taskManager;                                            //@synthesize taskManager=_taskManager - In the implementation block
@property (nonatomic,retain) ALSettingsManager * settingsManager;                                    //@synthesize settingsManager=_settingsManager - In the implementation block
@property (nonatomic,retain) ALConnectionManager * connectionManager;                                //@synthesize connectionManager=_connectionManager - In the implementation block
@property (nonatomic,retain) ALStatsManager * statsManager;                                          //@synthesize statsManager=_statsManager - In the implementation block
@property (nonatomic,retain) ALFileManager * fileManager;                                            //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,retain) ALPreloadedAdManager * preloadedAdManager;                              //@synthesize preloadedAdManager=_preloadedAdManager - In the implementation block
@property (nonatomic,retain) ALPreloadedNativeAdManager * preloadedNativeAdManager;                  //@synthesize preloadedNativeAdManager=_preloadedNativeAdManager - In the implementation block
@property (nonatomic,retain) ALPostbackService * postbackService;                                    //@synthesize postbackService=_postbackService - In the implementation block
@property (nonatomic,retain) ALEventService * eventService;                                          //@synthesize eventService=_eventService - In the implementation block
@property (nonatomic,retain) ALTargetingData * targetingData;                                        //@synthesize targetingData=_targetingData - In the implementation block
@property (nonatomic,retain) ALDataCollector * dataCollector;                                        //@synthesize dataCollector=_dataCollector - In the implementation block
@property (nonatomic,retain) ALPersistentPostbackManager * persistentPostbackManager;                //@synthesize persistentPostbackManager=_persistentPostbackManager - In the implementation block
@property (getter=isInitializing) BOOL initializing;                                                 //@synthesize initializing=_initializing - In the implementation block
@property (getter=isEnabled) BOOL enabled;                                                           //@synthesize enabled=_enabled - In the implementation block
@property (getter=isNetworkError) BOOL networkError;                                                 //@synthesize networkError=_networkError - In the implementation block
@property (getter=isEnabledAndInitialized) BOOL enabledAndInitialized; 
+(id)sharedWithKey:(id)arg1 settings:(id)arg2 ;
+(void)initializeSdk;
+(id)sharedWithKey:(id)arg1 ;
+(void)initialize;
+(id)version;
+(id)shared;
-(BOOL)isNetworkError;
-(void)initializeSdk;
-(ALAdService *)adService;
-(ALStatsManager *)statsManager;
-(double)timeIntervalForKey:(long long)arg1 ;
-(ALPreloadedAdManager *)preloadedAdManager;
-(void)setSettingsManager:(ALSettingsManager *)arg1 ;
-(NSString *)sdkKey;
-(void)resetSdkState;
-(ALPreloadedNativeAdManager *)preloadedNativeAdManager;
-(void)setNativeAdService:(ALNativeAdService *)arg1 ;
-(id)constraintsForKeys:(id)arg1 variableBindings:(id)arg2 ;
-(id)initWithKey:(id)arg1 usingSettings:(id)arg2 ;
-(void)setPluginVersion:(id)arg1 ;
-(void)setSdkKey:(NSString *)arg1 ;
-(void)setPostbackService:(ALPostbackService *)arg1 ;
-(void)setEventService:(ALEventService *)arg1 ;
-(void)setTargetingData:(ALTargetingData *)arg1 ;
-(void)setLogManager:(ALLogManager *)arg1 ;
-(void)setStatsManager:(ALStatsManager *)arg1 ;
-(void)setPreloadedAdManager:(ALPreloadedAdManager *)arg1 ;
-(void)setPreloadedNativeAdManager:(ALPreloadedNativeAdManager *)arg1 ;
-(void)setDataCollector:(ALDataCollector *)arg1 ;
-(void)setPersistentPostbackManager:(ALPersistentPostbackManager *)arg1 ;
-(void)setInitializing:(BOOL)arg1 ;
-(void)setNetworkError:(BOOL)arg1 ;
-(void)handleSdkUpdate;
-(void)markNetworkError;
-(void)markInitialized:(BOOL)arg1 ;
-(BOOL)isInitializing;
-(BOOL)isEnabledAndInitialized;
-(void)attemptInitialize;
-(ALEventService *)eventService;
-(ALNativeAdService *)nativeAdService;
-(ALPersistentPostbackManager *)persistentPostbackManager;
-(ALPostbackService *)postbackService;
-(void)setAdService:(ALAdService *)arg1 ;
-(ALDataCollector *)dataCollector;
-(ALTargetingData *)targetingData;
-(ALLogManager *)logManager;
-(ALSettingsManager *)settingsManager;
-(ALConnectionManager *)connectionManager;
-(ALSdkSettings *)settings;
-(BOOL)boolForKey:(long long)arg1 ;
-(id)stringForKey:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(long long)integerForKey:(long long)arg1 ;
-(void)setSettings:(ALSdkSettings *)arg1 ;
-(void)setFileManager:(ALFileManager *)arg1 ;
-(ALTaskManager *)taskManager;
-(void)setTaskManager:(ALTaskManager *)arg1 ;
-(void)setConnectionManager:(ALConnectionManager *)arg1 ;
-(ALFileManager *)fileManager;
-(id)numberForKey:(long long)arg1 ;
@end
