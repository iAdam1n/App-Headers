/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:47:20 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B61875E7-F2F8-487D-814D-DF59A28B6A4C/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSMutableDictionary, FlurryPLCrashReporter, NSMutableArray;

@interface FlurryGlobalVariableStorage : NSObject {

	BOOL _udidEnabled;
	BOOL _sessionReportsOnCloseEnabled;
	BOOL _sessionReportsOnPauseEnabled;
	BOOL _backgroundSessionEnabled;
	BOOL _crashReportingEnabled;
	BOOL _eventLoggingEnabled;
	BOOL _hasSessionOriginName;
	BOOL _hasDeepLinkName;
	BOOL _startSessionCalled;
	BOOL _macAddressEnabled;
	BOOL _optOutSessionPending;
	BOOL _pulseMonitoringEnabled;
	BOOL _pulseRequestPending;
	BOOL lastAdTrackingEnabledSetting;
	int _pauseSecondsBeforeStartingNewSession;
	int _appApplicationState;
	int _age;
	int maxBitRateKbps;
	NSString* _savedResponseUrl;
	NSString* _apiKey;
	NSDate* _pauseTime;
	NSDate* _lastPageViewDate;
	NSString* _appVersion;
	NSString* _userID;
	NSString* _gender;
	NSString* _sessionOriginName;
	NSString* _deepLinkName;
	NSMutableDictionary* _sessionParameters;
	NSMutableDictionary* _launchOptions;
	id _location;
	FlurryPLCrashReporter* _flurryCrashReporter;
	NSMutableArray* _originSets;
	NSMutableDictionary* _persistentGlobalsMap;
	NSMutableDictionary* _persistentCookiesMap;
	NSMutableDictionary* _persistentUrlsMap;
	NSMutableArray* _pendingUrlTimers;
	NSMutableDictionary* _persistentPulseUrlsMap;
	NSMutableDictionary* _persistentPulsePrepUrlsMap;
	long long _adsFetchCount;
	long long _adRequestsCount;
	long long _adsReturnedCount;
	long long _adsReadyCount;
	long long _adsImpressionFiredCount;

}

@property (copy) NSString * savedResponseUrl;                                              //@synthesize savedResponseUrl=_savedResponseUrl - In the implementation block
@property (nonatomic,copy) NSString * apiKey;                                              //@synthesize apiKey=_apiKey - In the implementation block
@property (assign) BOOL udidEnabled;                                                       //@synthesize udidEnabled=_udidEnabled - In the implementation block
@property (assign) int pauseSecondsBeforeStartingNewSession;                               //@synthesize pauseSecondsBeforeStartingNewSession=_pauseSecondsBeforeStartingNewSession - In the implementation block
@property (retain) NSDate * pauseTime;                                                     //@synthesize pauseTime=_pauseTime - In the implementation block
@property (retain) NSDate * lastPageViewDate;                                              //@synthesize lastPageViewDate=_lastPageViewDate - In the implementation block
@property (assign) BOOL sessionReportsOnCloseEnabled;                                      //@synthesize sessionReportsOnCloseEnabled=_sessionReportsOnCloseEnabled - In the implementation block
@property (assign) BOOL sessionReportsOnPauseEnabled;                                      //@synthesize sessionReportsOnPauseEnabled=_sessionReportsOnPauseEnabled - In the implementation block
@property (assign) BOOL backgroundSessionEnabled;                                          //@synthesize backgroundSessionEnabled=_backgroundSessionEnabled - In the implementation block
@property (assign) int appApplicationState;                                                //@synthesize appApplicationState=_appApplicationState - In the implementation block
@property (assign) BOOL crashReportingEnabled;                                             //@synthesize crashReportingEnabled=_crashReportingEnabled - In the implementation block
@property (copy) NSString * appVersion;                                                    //@synthesize appVersion=_appVersion - In the implementation block
@property (assign) BOOL eventLoggingEnabled;                                               //@synthesize eventLoggingEnabled=_eventLoggingEnabled - In the implementation block
@property (copy) NSString * userID;                                                        //@synthesize userID=_userID - In the implementation block
@property (assign) int age;                                                                //@synthesize age=_age - In the implementation block
@property (copy) NSString * gender;                                                        //@synthesize gender=_gender - In the implementation block
@property (assign) BOOL hasSessionOriginName;                                              //@synthesize hasSessionOriginName=_hasSessionOriginName - In the implementation block
@property (assign) BOOL hasDeepLinkName;                                                   //@synthesize hasDeepLinkName=_hasDeepLinkName - In the implementation block
@property (copy) NSString * sessionOriginName;                                             //@synthesize sessionOriginName=_sessionOriginName - In the implementation block
@property (copy) NSString * deepLinkName;                                                  //@synthesize deepLinkName=_deepLinkName - In the implementation block
@property (retain) NSMutableDictionary * sessionParameters;                                //@synthesize sessionParameters=_sessionParameters - In the implementation block
@property (assign) BOOL startSessionCalled;                                                //@synthesize startSessionCalled=_startSessionCalled - In the implementation block
@property (readonly) NSMutableDictionary * launchOptions;                                  //@synthesize launchOptions=_launchOptions - In the implementation block
@property (retain) id location;                                                            //@synthesize location=_location - In the implementation block
@property (assign) BOOL macAddressEnabled;                                                 //@synthesize macAddressEnabled=_macAddressEnabled - In the implementation block
@property (nonatomic,retain) FlurryPLCrashReporter * flurryCrashReporter;                  //@synthesize flurryCrashReporter=_flurryCrashReporter - In the implementation block
@property (assign) BOOL optOutSessionPending;                                              //@synthesize optOutSessionPending=_optOutSessionPending - In the implementation block
@property (nonatomic,retain) NSMutableArray * originSets;                                  //@synthesize originSets=_originSets - In the implementation block
@property (retain,readonly) NSMutableDictionary * persistentGlobalsMap;                    //@synthesize persistentGlobalsMap=_persistentGlobalsMap - In the implementation block
@property (retain,readonly) NSMutableDictionary * persistentCookiesMap;                    //@synthesize persistentCookiesMap=_persistentCookiesMap - In the implementation block
@property (retain,readonly) NSMutableDictionary * persistentUrlsMap;                       //@synthesize persistentUrlsMap=_persistentUrlsMap - In the implementation block
@property (retain,readonly) NSMutableDictionary * persistentPulseUrlsMap;                  //@synthesize persistentPulseUrlsMap=_persistentPulseUrlsMap - In the implementation block
@property (retain,readonly) NSMutableDictionary * persistentPulsePrepUrlsMap;              //@synthesize persistentPulsePrepUrlsMap=_persistentPulsePrepUrlsMap - In the implementation block
@property (assign) int maxBitRateKbps; 
@property (retain) NSMutableArray * pendingUrlTimers;                                      //@synthesize pendingUrlTimers=_pendingUrlTimers - In the implementation block
@property (assign) BOOL pulseMonitoringEnabled;                                            //@synthesize pulseMonitoringEnabled=_pulseMonitoringEnabled - In the implementation block
@property (assign) BOOL pulseRequestPending;                                               //@synthesize pulseRequestPending=_pulseRequestPending - In the implementation block
@property (assign) BOOL lastAdTrackingEnabledSetting; 
@property (assign) long long adsFetchCount;                                                //@synthesize adsFetchCount=_adsFetchCount - In the implementation block
@property (assign) long long adRequestsCount;                                              //@synthesize adRequestsCount=_adRequestsCount - In the implementation block
@property (assign) long long adsReturnedCount;                                             //@synthesize adsReturnedCount=_adsReturnedCount - In the implementation block
@property (assign) long long adsReadyCount;                                                //@synthesize adsReadyCount=_adsReadyCount - In the implementation block
@property (assign) long long adsImpressionFiredCount;                                      //@synthesize adsImpressionFiredCount=_adsImpressionFiredCount - In the implementation block
+(id)sharedInstance;
+(void)cleanup;
-(void)setCrashReportingEnabled:(BOOL)arg1 ;
-(NSString *)apiKey;
-(BOOL)crashReportingEnabled;
-(FlurryPLCrashReporter *)flurryCrashReporter;
-(BOOL)lastAdTrackingEnabledSetting;
-(void)setLastAdTrackingEnabledSetting:(BOOL)arg1 ;
-(NSMutableDictionary *)persistentGlobalsMap;
-(NSMutableDictionary *)persistentPulsePrepUrlsMap;
-(NSMutableDictionary *)persistentPulseUrlsMap;
-(void)removePendingUrlTimers;
-(BOOL)pulseMonitoringEnabled;
-(NSMutableArray *)pendingUrlTimers;
-(int)pauseSecondsBeforeStartingNewSession;
-(void)setPauseSecondsBeforeStartingNewSession:(int)arg1 ;
-(BOOL)backgroundSessionEnabled;
-(BOOL)sessionReportsOnCloseEnabled;
-(void)setSessionReportsOnCloseEnabled:(BOOL)arg1 ;
-(BOOL)sessionReportsOnPauseEnabled;
-(void)setSessionReportsOnPauseEnabled:(BOOL)arg1 ;
-(void)setBackgroundSessionEnabled:(BOOL)arg1 ;
-(BOOL)eventLoggingEnabled;
-(void)setEventLoggingEnabled:(BOOL)arg1 ;
-(BOOL)startSessionCalled;
-(void)setStartSessionCalled:(BOOL)arg1 ;
-(void)setFlurryCrashReporter:(FlurryPLCrashReporter *)arg1 ;
-(void)setAppApplicationState:(int)arg1 ;
-(void)setSessionOriginName:(NSString *)arg1 ;
-(void)setHasSessionOriginName:(BOOL)arg1 ;
-(void)setDeepLinkName:(NSString *)arg1 ;
-(void)setHasDeepLinkName:(BOOL)arg1 ;
-(void)recordSessionProperties:(id)arg1 ;
-(void)recordOrigin:(id)arg1 originVersion:(id)arg2 withParameters:(id)arg3 ;
-(void)setPulseMonitoringEnabled:(BOOL)arg1 ;
-(void)setOptOutSessionPending:(BOOL)arg1 ;
-(BOOL)pulseRequestPending;
-(void)setPulseRequestPending:(BOOL)arg1 ;
-(void)savePersistentGlobalsToDisk;
-(void)resetLaunchOptions;
-(NSDate *)lastPageViewDate;
-(void)setLastPageViewDate:(NSDate *)arg1 ;
-(NSString *)sessionOriginName;
-(NSString *)deepLinkName;
-(long long)adsFetchCount;
-(long long)adRequestsCount;
-(long long)adsReturnedCount;
-(long long)adsReadyCount;
-(long long)adsImpressionFiredCount;
-(void)setAdsImpressionFiredCount:(long long)arg1 ;
-(void)setAdsReadyCount:(long long)arg1 ;
-(void)setAdsReturnedCount:(long long)arg1 ;
-(void)setAdRequestsCount:(long long)arg1 ;
-(void)setAdsFetchCount:(long long)arg1 ;
-(BOOL)optOutSessionPending;
-(NSString *)savedResponseUrl;
-(int)appApplicationState;
-(BOOL)hasSessionOriginName;
-(BOOL)hasDeepLinkName;
-(NSMutableDictionary *)sessionParameters;
-(NSMutableArray *)originSets;
-(NSMutableDictionary *)persistentCookiesMap;
-(BOOL)macAddressEnabled;
-(void)initPersistentMap;
-(id)persistentGlobalsFilePath;
-(id)persistentCookiesFilePath;
-(id)persistentUrlsFilePath;
-(id)persistentPulseUrlsFilePath;
-(id)persistentPulsePrepUrlsFilePath;
-(NSMutableDictionary *)persistentUrlsMap;
-(void)setSessionParameters:(NSMutableDictionary *)arg1 ;
-(id)getPersistentFilePath:(id)arg1 ;
-(void)setMaxBitRateKbps:(int)arg1 ;
-(int)maxBitRateKbps;
-(BOOL)analyticsEnabled;
-(BOOL)isMoPubIntegration;
-(void)setSavedResponseUrl:(NSString *)arg1 ;
-(BOOL)udidEnabled;
-(void)setUdidEnabled:(BOOL)arg1 ;
-(void)setMacAddressEnabled:(BOOL)arg1 ;
-(void)setOriginSets:(NSMutableArray *)arg1 ;
-(void)setPendingUrlTimers:(NSMutableArray *)arg1 ;
-(int)logLevel;
-(id)init;
-(void)dealloc;
-(id)location;
-(void)setLocation:(id)arg1 ;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(NSDate *)pauseTime;
-(NSMutableDictionary *)launchOptions;
-(void)setApiKey:(NSString *)arg1 ;
-(void)setAge:(int)arg1 ;
-(int)age;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(void)setPauseTime:(NSDate *)arg1 ;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)appVersion;
@end
