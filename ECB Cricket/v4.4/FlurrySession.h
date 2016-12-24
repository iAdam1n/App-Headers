/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ECBCricketApp/FlurryDataSenderDelegate.h>
#import <ECBCricketApp/IFlurrySession.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSString, NSData, NSMutableDictionary, NSMutableArray;

@interface FlurrySession : NSObject <FlurryDataSenderDelegate, IFlurrySession, NSCoding> {

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
@property (assign,nonatomic) NSString * sessionOriginName;                             //@synthesize sessionOriginName=_sessionOriginName - In the implementation block
@property (assign,nonatomic) NSString * deepLinkName;                                  //@synthesize deepLinkName=_deepLinkName - In the implementation block
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
+(id)currentWatchSession;
+(id)getAgentVersionWithBuild;
+(void)setMaxSessions:(int)arg1 ;
+(void)setupCurrentSessionWithKey:(id)arg1 ;
+(id)getAgentVersion;
+(id)logEventPreCache;
+(id)currentSessionFilePath;
+(void)addToSavedSessions:(id)arg1 ;
+(void)removeCurrentSessionFile;
+(id)sessionWithApiKey:(id)arg1 startTime:(id)arg2 ;
+(id)currentWatchSessionFilePath;
+(id)currentWatchAutoIncrementFilePath;
+(void)setSavedSessions:(id)arg1 ;
+(id)sessionsFilePath;
+(id)savedSessions;
+(id)removeOldSessionsIfNecessary:(id)arg1 ;
+(id)oldInitialTimestampFilePathUptilAgentVersion109;
+(id)initialTimestampFilePath;
+(void)cleanup;
+(id)sessionId;
+(id)currentSession;
-(void)endTimedEvent:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)crashed;
-(NSString *)apiKey;
-(void)setCrashed:(BOOL)arg1 ;
-(int)recordWatchEvent:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)crashReportingEnabled;
-(void)recordWatchError:(id)arg1 message:(id)arg2 exception:(id)arg3 liveReport:(id)arg4 ;
-(void)recordWatchError:(id)arg1 message:(id)arg2 error:(id)arg3 liveReport:(id)arg4 ;
-(void)pauseSession;
-(BOOL)sessionReportsOnCloseEnabled;
-(void)setSessionReportsOnCloseEnabled:(BOOL)arg1 ;
-(BOOL)sessionReportsOnPauseEnabled;
-(void)setSessionReportsOnPauseEnabled:(BOOL)arg1 ;
-(BOOL)eventLoggingEnabled;
-(void)setEventLoggingEnabled:(BOOL)arg1 ;
-(void)setCrashReportingEnabled:(BOOL)arg1 ;
-(void)sendSessionsToServerForCreateSession;
-(void)setAppApplicationState:(int)arg1 ;
-(void)setLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(float)arg3 verticalAccuracy:(float)arg4 ;
-(void)markSessionAsResuming;
-(void)setSessionOriginName:(NSString *)arg1 ;
-(void)setHasSessionOriginName:(BOOL)arg1 ;
-(void)setDeepLinkName:(NSString *)arg1 ;
-(void)setHasDeepLinkName:(BOOL)arg1 ;
-(void)recordError:(id)arg1 message:(id)arg2 exception:(id)arg3 liveReport:(id)arg4 ;
-(void)recordError:(id)arg1 message:(id)arg2 error:(id)arg3 liveReport:(id)arg4 ;
-(void)maybeIncrementPageView;
-(int)recordEvent:(id)arg1 withParameters:(id)arg2 timed:(BOOL)arg3 ;
-(void)setGenderAsString:(id)arg1 ;
-(void)setAgeInYears:(int)arg1 ;
-(void)endSessionAsync;
-(long long)totalPauseIntervalMillis;
-(void)setCrashReportData:(NSData *)arg1 ;
-(id)initWithAPIKey:(id)arg1 appVersion:(id)arg2 startDate:(id)arg3 ;
-(int)putEventIntoLog:(id)arg1 ;
-(BOOL)hasWatchSessionExpired;
-(void)endWatchSession;
-(void)loadWatchDebug;
-(void)loadWatchAppVersion;
-(void)loadWatchEventThreshold;
-(void)loadWatchDurationThreshold;
-(void)loadWatchUserID;
-(void)saveWatchSessionToDisk;
-(void)setWatchEventThreshold:(int)arg1 ;
-(void)setWatchDurationThreshold:(int)arg1 ;
-(void)resetSessionData;
-(void)setTotalPauseIntervalMillis:(long long)arg1 ;
-(void)setSessionParams:(NSMutableDictionary *)arg1 ;
-(void)setSessionPropertyParams:(NSMutableDictionary *)arg1 ;
-(void)setEventCounts:(NSMutableDictionary *)arg1 ;
-(void)setPendingEventLog:(NSMutableArray *)arg1 ;
-(void)setEventLog:(NSMutableArray *)arg1 ;
-(void)setEventLogComplete:(BOOL)arg1 ;
-(void)setPurchaseItems:(NSMutableArray *)arg1 ;
-(void)setPageViewCount:(int)arg1 ;
-(void)getSessionParametersAtPhase:(int)arg1 ;
-(void)sendSessionsToServerIncludingCurrentSession:(BOOL)arg1 ;
-(void)mergePendingEventLog;
-(void)mergeValidPendingEventLog;
-(void)endTimedEvents;
-(int)watchEventThreshold;
-(void)clearWatchSessionOnDisk;
-(int)pageViewCount;
-(id)dataForSessions:(id)arg1 ;
-(void)setTotalErrorCount:(int)arg1 ;
-(NSString *)sessionOriginName;
-(NSString *)deepLinkName;
-(NSMutableDictionary *)sessionPropertyParams;
-(NSMutableDictionary *)sessionParams;
-(void)setSetBackgroundSessionEnabled:(BOOL)arg1 ;
-(void)setWatchAppVersion:(NSString *)arg1 ;
-(void)finishWatchEvent;
-(NSMutableDictionary *)eventCounts;
-(int)watchDurationThreshold;
-(void)recordError:(id)arg1 message:(id)arg2 exceptionString:(id)arg3 errorType:(int)arg4 liveReport:(id)arg5 ;
-(NSMutableArray *)purchaseItems;
-(void)resetEventLogs;
-(long long)sessionLength;
-(int)appApplicationState;
-(BOOL)hasSessionOriginName;
-(BOOL)hasDeepLinkName;
-(int)updateIfTrackedAndChangedPropertyValue:(id)arg1 forPropertyKey:(id)arg2 ;
-(BOOL)sentReportSuccessful;
-(id)initialTimestamp;
-(long long)timeIntervalSinceSessionStart:(id)arg1 ;
-(id)prepareForSendingSessions:(id)arg1 ;
-(int)recordEvent:(id)arg1 withParameters:(id)arg2 ;
-(void)recordPurchaseItem:(id)arg1 ;
-(NSData *)crashReportData;
-(NSMutableArray *)eventLog;
-(id)sessionWithNewEventsWithApiKey:(id)arg1 startTime:(id)arg2 ;
-(void)archiveSession;
-(NSMutableArray *)pendingEventLog;
-(BOOL)eventLogComplete;
-(int)totalErrorCount;
-(void)setSerializationVersion:(int)arg1 ;
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
-(BOOL)isPaused;
-(NSDate *)endTime;
-(float)accuracy;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(int)gender;
-(void)setGender:(int)arg1 ;
-(NSDate *)pauseTime;
-(void)setAccuracy:(float)arg1 ;
-(int)totalEventCount;
-(void)setResumeTime:(NSDate *)arg1 ;
-(NSDate *)resumeTime;
-(NSMutableArray *)errors;
-(void)finishSession;
-(double)latitude;
-(double)longitude;
-(void)resumeSession;
-(int)serializationVersion;
-(void)setApiKey:(NSString *)arg1 ;
-(void)setAge:(NSDate *)arg1 ;
-(NSDate *)age;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(void)setPauseTime:(NSDate *)arg1 ;
-(void)saveToDisk;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)appVersion;
@end
