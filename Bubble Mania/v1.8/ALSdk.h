/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ALSdkSettings, ALTaskManager, ALLogManager, ALSettingsManager, ALConnectionManager, ALStatsManager, ALFileManager, ALAdService, ALTargetingData;

@interface ALSdk : NSObject {

	BOOL _isEnabled;
	BOOL _isNetworkError;
	BOOL _isInitializing;
	NSString* sdkKey;
	ALSdkSettings* settings;
	ALTaskManager* _taskManager;
	ALLogManager* _logManager;
	ALSettingsManager* _settingsManager;
	ALConnectionManager* _connectionManager;
	ALStatsManager* _statsManager;
	ALFileManager* _fileManager;
	ALAdService* _adService;
	ALTargetingData* _targetingData;

}

@property (readonly) ALLogManager * logManager; 
@property (readonly) ALTaskManager * taskManager; 
@property (readonly) ALSettingsManager * settingsManager; 
@property (readonly) ALConnectionManager * connectionManager; 
@property (readonly) ALStatsManager * statsManager; 
@property (readonly) ALFileManager * fileManager; 
@property (readonly) NSString * sdkKey; 
@property (readonly) ALSdkSettings * settings; 
@property (readonly) ALLogManager * _logManager;                            //@synthesize logManager=_logManager - In the implementation block
@property (readonly) ALTaskManager * _taskManager;                          //@synthesize taskManager=_taskManager - In the implementation block
@property (readonly) ALSettingsManager * _settingsManager;                  //@synthesize settingsManager=_settingsManager - In the implementation block
@property (readonly) ALConnectionManager * _connectionManager;              //@synthesize connectionManager=_connectionManager - In the implementation block
@property (readonly) ALStatsManager * _statsManager;                        //@synthesize statsManager=_statsManager - In the implementation block
@property (readonly) ALFileManager * _fileManager;                          //@synthesize fileManager=_fileManager - In the implementation block
@property (readonly) ALAdService * _adService;                              //@synthesize adService=_adService - In the implementation block
@property (retain) ALTargetingData * _targetingData;                        //@synthesize targetingData=_targetingData - In the implementation block
@property (readonly) BOOL _isInitializing;                                  //@synthesize isInitializing=_isInitializing - In the implementation block
@property (readonly) BOOL _isEnabled;                                       //@synthesize isEnabled=_isEnabled - In the implementation block
@property (readonly) BOOL _isNetworkError;                                  //@synthesize isNetworkError=_isNetworkError - In the implementation block
+(id)sharedWithKey:(id)arg1 settings:(id)arg2 ;
+(void)initializeSdk;
+(id)sharedWithKey:(id)arg1 ;
+(void)initialize;
+(id)version;
+(id)shared;
-(ALSettingsManager *)settingsManager;
-(ALLogManager *)logManager;
-(void)resetSdkState;
-(id)initWithKey:(id)arg1 usingSettings:(id)arg2 ;
-(void)attemptInitialize;
-(void)markInitialized:(BOOL)arg1 ;
-(void)markNetworkError;
-(BOOL)isInitializing;
-(BOOL)isNetworkError;
-(BOOL)isEnabledAndInitialized;
-(ALConnectionManager *)connectionManager;
-(ALStatsManager *)statsManager;
-(void)setTargetData:(id)arg1 ;
-(long long)longForKey:(int)arg1 ;
-(BOOL)boolForKey:(int)arg1 ;
-(id)stringForKey:(int)arg1 ;
-(ALFileManager *)fileManager;
-(ALTaskManager *)taskManager;
-(id)numberForKey:(int)arg1 ;
-(int)intForKey:(int)arg1 ;
-(NSString *)sdkKey;
-(void)initializeSdk;
-(id)adService;
-(id)targetingData;
-(void)setPluginVersion:(id)arg1 ;
-(ALTaskManager *)_taskManager;
-(ALLogManager *)_logManager;
-(ALSettingsManager *)_settingsManager;
-(ALConnectionManager *)_connectionManager;
-(ALStatsManager *)_statsManager;
-(ALAdService *)_adService;
-(ALTargetingData *)_targetingData;
-(void)set_targetingData:(ALTargetingData *)arg1 ;
-(BOOL)_isNetworkError;
-(BOOL)_isInitializing;
-(ALSdkSettings *)settings;
-(BOOL)_isEnabled;
-(ALFileManager *)_fileManager;
@end
