/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/FlurryDataSenderDelegate.h>
#import <AngryBirdsRio/FlurryWatchConnectivityDelegate.h>
#import <AngryBirdsRio/IFlurrySession.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSString, NSData, NSMutableDictionary, NSMutableArray;

@interface FlurrySession : NSObject <FlurryDataSenderDelegate, FlurryWatchConnectivityDelegate, IFlurrySession, NSCoding> {

	BOOL _crashed;
	BOOL _eventLogComplete;
	BOOL _eventLoggingEnabled;
	BOOL _sessionReportsOnCloseEnabled;
	BOOL _sessionReportsOnPauseEnabled;
	BOOL _crashReportingEnabled;
	BOOL _setBackgroundSessionEnabled;
	BOOL _hasSessionOriginName;
	BOOL _hasDeepLinkName;
	float _accuracy;
	int _pageViewCount;
	int _totalErrorCount;
	int _gender;
	int _serializationVersion;
	int _appApplicationState;
	int _watchEventThreshold;
	int _watchDurationThreshold;
	NSData* _crashReportData;
	NSDate* _startTime;
	NSString* _apiKey;
	NSMutableDictionary* _sessionParams;
	NSMutableDictionary* _sessionPropertyParams;
	double _latitude;
	double _longitude;
	NSString* _appVersion;
	NSDate* _endTime;
	NSMutableArray* _purchaseItems;
	NSDate* _resumeTime;
	NSDate* _pauseTime;
	long long _totalPauseIntervalMillis;
	NSMutableDictionary* _eventCounts;
	NSMutableArray* _pendingEventLog;
	NSMutableArray* _eventLog;
	NSMutableArray* _errors;
	NSString* _locale;
	NSString* _timeZone;
	NSString* _userID;
	NSString* _sessionOriginName;
	NSString* _deepLinkName;
	NSString* _watchAppVersion;
	NSDate* _age;

}

@property (nonatomic,retain) NSMutableArray * purchaseItems;                           //@synthesize purchaseItems=_purchaseItems - In the implementation block
@property (retain) NSDate * startTime;                                                 //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSDate * resumeTime;                                                //@synthesize resumeTime=_resumeTime - In the implementation block
@property (retain) NSDate * pauseTime;                                                 //@synthesize pauseTime=_pauseTime - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sessionParams;                      //@synthesize sessionParams=_sessionParams - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sessionPropertyParams;              //@synthesize sessionPropertyParams=_sessionPropertyParams - In the implementation block
@property (retain) NSString * apiKey;                                                  //@synthesize apiKey=_apiKey - In the implementation block
@property (assign,nonatomic) double latitude;                                          //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                                         //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) float accuracy;                                           //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingEventLog;                         //@synthesize pendingEventLog=_pendingEventLog - In the implementation block
@property (assign,nonatomic) BOOL eventLogComplete;                                    //@synthesize eventLogComplete=_eventLogComplete - In the implementation block
@property (nonatomic,retain) NSMutableArray * errors;                                  //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) int totalErrorCount;                                      //@synthesize totalErrorCount=_totalErrorCount - In the implementation block
@property (assign,nonatomic) int gender;                                               //@synthesize gender=_gender - In the implementation block
@property (nonatomic,retain) NSDate * age;                                             //@synthesize age=_age - In the implementation block
@property (nonatomic,retain) NSString * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * timeZone;                                      //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) int serializationVersion;                                 //@synthesize serializationVersion=_serializationVersion - In the implementation block
@property (nonatomic,copy) NSString * userID;                                          //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) BOOL eventLoggingEnabled;                                 //@synthesize eventLoggingEnabled=_eventLoggingEnabled - In the implementation block
@property (assign,nonatomic) BOOL sessionReportsOnCloseEnabled;                        //@synthesize sessionReportsOnCloseEnabled=_sessionReportsOnCloseEnabled - In the implementation block
@property (assign,nonatomic) BOOL sessionReportsOnPauseEnabled;                        //@synthesize sessionReportsOnPauseEnabled=_sessionReportsOnPauseEnabled - In the implementation block
@property (assign,nonatomic) BOOL crashReportingEnabled;                               //@synthesize crashReportingEnabled=_crashReportingEnabled - In the implementation block
@property (assign,nonatomic) BOOL setBackgroundSessionEnabled;                         //@synthesize setBackgroundSessionEnabled=_setBackgroundSessionEnabled - In the implementation block
@property (assign,nonatomic) int appApplicationState;                                  //@synthesize appApplicationState=_appApplicationState - In the implementation block
@property (assign,nonatomic) BOOL hasSessionOriginName;                                //@synthesize hasSessionOriginName=_hasSessionOriginName - In the implementation block
@property (assign,nonatomic) BOOL hasDeepLinkName;                                     //@synthesize hasDeepLinkName=_hasDeepLinkName - In the implementation block
@property (nonatomic,copy) NSString * sessionOriginName;                               //@synthesize sessionOriginName=_sessionOriginName - In the implementation block
@property (nonatomic,copy) NSString * deepLinkName;                                    //@synthesize deepLinkName=_deepLinkName - In the implementation block
@property (nonatomic,retain) NSString * watchAppVersion;                               //@synthesize watchAppVersion=_watchAppVersion - In the implementation block
@property (assign,nonatomic) int watchEventThreshold;                                  //@synthesize watchEventThreshold=_watchEventThreshold - In the implementation block
@property (assign,nonatomic) int watchDurationThreshold;                               //@synthesize watchDurationThreshold=_watchDurationThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL crashed;                                                       //@synthesize crashed=_crashed - In the implementation block
@property (nonatomic,retain) NSData * crashReportData;                                 //@synthesize crashReportData=_crashReportData - In the implementation block
@property (nonatomic,copy) NSString * appVersion;                                      //@synthesize appVersion=_appVersion - In the implementation block
@property (assign,nonatomic) int pageViewCount;                                        //@synthesize pageViewCount=_pageViewCount - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventCounts;                        //@synthesize eventCounts=_eventCounts - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventLog;                                //@synthesize eventLog=_eventLog - In the implementation block
@property (assign,nonatomic) long long totalPauseIntervalMillis;                       //@synthesize totalPauseIntervalMillis=_totalPauseIntervalMillis - In the implementation block
+(id)currentWatchSessionFilePath;
+(id)currentWatchAutoIncrementFilePath;
+(void)disableWatchConnectivity;
+(id)oldInitialTimestampFilePathUptilAgentVersion109;
+(id)initialTimestampFilePath;
+(id)getAgentVersionWithBuild;
+(id)currentSessionFilePath;
+(void)addToSavedSessions:(id)arg1 ;
+(void)removeCurrentSessionFile;
+(id)sessionWithApiKey:(id)arg1 startTime:(id)arg2 withPreCacheEventLog:(id)arg3 ;
+(void)setSavedSessions:(id)arg1 ;
+(id)sessionsFilePath;
+(id)savedSessions;
+(id)removeOldSessionsIfNecessary:(id)arg1 ;
+(id)getAgentVersion;
+(void)setupCurrentSessionWithKey:(id)arg1 ;
+(void)disableTransferOfFlurryInfo;
+(long long)getBatteryState;
+(void)cleanup;
+(id)sessionId;
+(id)currentSession;
-(id)initWithAPIKey:(id)arg1 appVersion:(id)arg2 startDate:(id)arg3 ;
-(void)setWatchEventThreshold:(int)arg1 ;
-(void)setWatchDurationThreshold:(int)arg1 ;
-(void)resetSessionData;
-(void)setTotalPauseIntervalMillis:(long long)arg1 ;
-(void)setSessionParams:(NSMutableDictionary *)arg1 ;
-(void)setEventCounts:(NSMutableDictionary *)arg1 ;
-(void)setEventLog:(NSMutableArray *)arg1 ;
-(void)setEventLogComplete:(BOOL)arg1 ;
-(void)getSessionParametersAtPhase:(int)arg1 ;
-(int)watchEventThreshold;
-(id)dataForSessions:(id)arg1 ;
-(void)setTotalErrorCount:(int)arg1 ;
-(NSMutableDictionary *)sessionParams;
-(NSMutableDictionary *)eventCounts;
-(int)watchDurationThreshold;
-(int)recordEvent:(id)arg1 withParameters:(id)arg2 timed:(BOOL)arg3 ;
-(int)putEventIntoLog:(id)arg1 ;
-(void)recordError:(id)arg1 message:(id)arg2 exceptionString:(id)arg3 errorType:(int)arg4 liveReport:(id)arg5 ;
-(void)recordError:(id)arg1 message:(id)arg2 exception:(id)arg3 liveReport:(id)arg4 ;
-(void)recordError:(id)arg1 message:(id)arg2 error:(id)arg3 liveReport:(id)arg4 ;
-(NSString *)apiKey;
-(int)updateIfTrackedAndChangedPropertyValue:(id)arg1 forPropertyKey:(id)arg2 ;
-(long long)sessionLength;
-(BOOL)sentReportSuccessful;
-(id)initialTimestamp;
-(long long)timeIntervalSinceSessionStart:(id)arg1 ;
-(id)dataForSending:(id)arg1 ;
-(BOOL)isFlurryUserInfo:(id)arg1 ;
-(void)resetEventLogs;
-(BOOL)flurryUserInfo:(id)arg1 ;
-(void)setSerializationVersion:(int)arg1 ;
-(long long)totalPauseIntervalMillis;
-(NSMutableArray *)eventLog;
-(BOOL)eventLogComplete;
-(int)totalErrorCount;
-(void)saveToDisk;
-(BOOL)crashReportingEnabled;
-(void)setCrashed:(BOOL)arg1 ;
-(void)setCrashReportData:(NSData *)arg1 ;
-(void)setEventLoggingEnabled:(BOOL)arg1 ;
-(void)setSessionReportsOnCloseEnabled:(BOOL)arg1 ;
-(void)setSessionReportsOnPauseEnabled:(BOOL)arg1 ;
-(void)setCrashReportingEnabled:(BOOL)arg1 ;
-(void)setDeepLinkName:(NSString *)arg1 ;
-(void)setSessionOriginName:(NSString *)arg1 ;
-(void)setHasDeepLinkName:(BOOL)arg1 ;
-(void)setHasSessionOriginName:(BOOL)arg1 ;
-(void)setSessionPropertyParams:(NSMutableDictionary *)arg1 ;
-(void)setPendingEventLog:(NSMutableArray *)arg1 ;
-(void)setPurchaseItems:(NSMutableArray *)arg1 ;
-(void)setPageViewCount:(int)arg1 ;
-(BOOL)sessionReportsOnPauseEnabled;
-(void)sendSessionsToServerIncludingCurrentSession:(BOOL)arg1 ;
-(void)mergePendingEventLog;
-(void)mergeValidPendingEventLog;
-(BOOL)sessionReportsOnCloseEnabled;
-(void)endTimedEvents;
-(int)pageViewCount;
-(NSString *)sessionOriginName;
-(NSString *)deepLinkName;
-(NSMutableDictionary *)sessionPropertyParams;
-(void)setSetBackgroundSessionEnabled:(BOOL)arg1 ;
-(void)setAppApplicationState:(int)arg1 ;
-(void)setWatchAppVersion:(NSString *)arg1 ;
-(NSMutableArray *)purchaseItems;
-(void)transferIDs;
-(int)appApplicationState;
-(BOOL)hasSessionOriginName;
-(BOOL)hasDeepLinkName;
-(id)installationIDAsBytes;
-(void)migrateInstallIDFromDiskToKeychain;
-(id)installationIDForSessionReport;
-(void)setLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(float)arg3 verticalAccuracy:(float)arg4 ;
-(void)maybeIncrementPageView;
-(void)setGenderAsString:(id)arg1 ;
-(void)setAgeInYears:(int)arg1 ;
-(int)recordEvent:(id)arg1 withParameters:(id)arg2 ;
-(void)endTimedEvent:(id)arg1 withParameters:(id)arg2 ;
-(void)recordPurchaseItem:(id)arg1 ;
-(void)pauseSession;
-(void)markSessionAsResuming;
-(void)endSessionAsync;
-(void)sendSessionsToServerForCreateSession;
-(void)removeInstallationIDFromKeychain;
-(BOOL)crashed;
-(NSData *)crashReportData;
-(id)sessionWithNewEventsWithApiKey:(id)arg1 startTime:(id)arg2 ;
-(void)archiveSession;
-(NSMutableArray *)pendingEventLog;
-(BOOL)eventLoggingEnabled;
-(BOOL)setBackgroundSessionEnabled;
-(NSString *)watchAppVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setTimeZone:(NSString *)arg1 ;
-(id)data;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)timeZone;
-(NSString *)locale;
-(NSDate *)startTime;
-(void)endSession;
-(NSDate *)endTime;
-(float)accuracy;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(int)gender;
-(void)setGender:(int)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSDate *)pauseTime;
-(void)setAge:(NSDate *)arg1 ;
-(NSDate *)age;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)errors;
-(void)setAccuracy:(float)arg1 ;
-(int)totalEventCount;
-(void)setResumeTime:(NSDate *)arg1 ;
-(NSDate *)resumeTime;
-(void)finishSession;
-(BOOL)isPaused;
-(double)latitude;
-(double)longitude;
-(void)setPauseTime:(NSDate *)arg1 ;
-(void)resumeSession;
-(int)serializationVersion;
-(void)setApiKey:(NSString *)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end
