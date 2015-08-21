/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:35:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BAB6B524-089F-49C7-9E02-F76A6A5EBF73/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDate, NSMutableDictionary, FlurryPLCrashReporter, NSMutableArray;

@interface FlurryGlobalVariableStorage : NSObject {

	char _udidEnabled;
	char _sessionReportsOnCloseEnabled;
	char _sessionReportsOnPauseEnabled;
	char _backgroundSessionEnabled;
	char _crashReportingEnabled;
	char _eventLoggingEnabled;
	char _startSessionCalled;
	char _macAddressEnabled;
	char _optOutSessionPending;
	NSString* _savedResponseUrl;
	NSString* _apiKey;
	int _pauseSecondsBeforeStartingNewSession;
	NSDate* _pauseTime;
	NSDate* _lastPageViewDate;
	NSString* _appVersion;
	NSString* _userID;
	int _age;
	NSString* _gender;
	NSMutableDictionary* _launchOptions;
	id _location;
	FlurryPLCrashReporter* _flurryCrashReporter;
	NSMutableArray* _originSets;
	NSMutableDictionary* _persistentGlobalsMap;
	NSMutableDictionary* _persistentCookiesMap;

}

@property (copy) NSString * savedResponseUrl;                                          //@synthesize savedResponseUrl=_savedResponseUrl - In the implementation block
@property (nonatomic,copy) NSString * apiKey;                                          //@synthesize apiKey=_apiKey - In the implementation block
@property (assign) char udidEnabled;                                                   //@synthesize udidEnabled=_udidEnabled - In the implementation block
@property (assign) int pauseSecondsBeforeStartingNewSession;                           //@synthesize pauseSecondsBeforeStartingNewSession=_pauseSecondsBeforeStartingNewSession - In the implementation block
@property (retain) NSDate * pauseTime;                                                 //@synthesize pauseTime=_pauseTime - In the implementation block
@property (retain) NSDate * lastPageViewDate;                                          //@synthesize lastPageViewDate=_lastPageViewDate - In the implementation block
@property (assign) char sessionReportsOnCloseEnabled;                                  //@synthesize sessionReportsOnCloseEnabled=_sessionReportsOnCloseEnabled - In the implementation block
@property (assign) char sessionReportsOnPauseEnabled;                                  //@synthesize sessionReportsOnPauseEnabled=_sessionReportsOnPauseEnabled - In the implementation block
@property (assign) char backgroundSessionEnabled;                                      //@synthesize backgroundSessionEnabled=_backgroundSessionEnabled - In the implementation block
@property (assign) char crashReportingEnabled;                                         //@synthesize crashReportingEnabled=_crashReportingEnabled - In the implementation block
@property (copy) NSString * appVersion;                                                //@synthesize appVersion=_appVersion - In the implementation block
@property (assign) char eventLoggingEnabled;                                           //@synthesize eventLoggingEnabled=_eventLoggingEnabled - In the implementation block
@property (copy) NSString * userID;                                                    //@synthesize userID=_userID - In the implementation block
@property (assign) int age;                                                            //@synthesize age=_age - In the implementation block
@property (copy) NSString * gender;                                                    //@synthesize gender=_gender - In the implementation block
@property (assign) char startSessionCalled;                                            //@synthesize startSessionCalled=_startSessionCalled - In the implementation block
@property (readonly) NSMutableDictionary * launchOptions;                              //@synthesize launchOptions=_launchOptions - In the implementation block
@property (retain) id location;                                                        //@synthesize location=_location - In the implementation block
@property (assign) char macAddressEnabled;                                             //@synthesize macAddressEnabled=_macAddressEnabled - In the implementation block
@property (nonatomic,retain) FlurryPLCrashReporter * flurryCrashReporter;              //@synthesize flurryCrashReporter=_flurryCrashReporter - In the implementation block
@property (assign) char optOutSessionPending;                                          //@synthesize optOutSessionPending=_optOutSessionPending - In the implementation block
@property (nonatomic,retain) NSMutableArray * originSets;                              //@synthesize originSets=_originSets - In the implementation block
@property (readonly) NSMutableDictionary * persistentGlobalsMap;                       //@synthesize persistentGlobalsMap=_persistentGlobalsMap - In the implementation block
@property (readonly) NSMutableDictionary * persistentCookiesMap;                       //@synthesize persistentCookiesMap=_persistentCookiesMap - In the implementation block
+(id)sharedInstance;
+(void)cleanup;
-(void)setCrashReportingEnabled:(char)arg1 ;
-(int)pauseSecondsBeforeStartingNewSession;
-(void)setPauseSecondsBeforeStartingNewSession:(int)arg1 ;
-(char)backgroundSessionEnabled;
-(char)sessionReportsOnCloseEnabled;
-(void)setSessionReportsOnCloseEnabled:(char)arg1 ;
-(char)sessionReportsOnPauseEnabled;
-(void)setSessionReportsOnPauseEnabled:(char)arg1 ;
-(void)setBackgroundSessionEnabled:(char)arg1 ;
-(char)eventLoggingEnabled;
-(void)setEventLoggingEnabled:(char)arg1 ;
-(char)crashReportingEnabled;
-(void)setUserID:(NSString *)arg1 ;
-(char)startSessionCalled;
-(void)setStartSessionCalled:(char)arg1 ;
-(FlurryPLCrashReporter *)flurryCrashReporter;
-(void)setFlurryCrashReporter:(FlurryPLCrashReporter *)arg1 ;
-(void)recordOrigin:(id)arg1 originVersion:(id)arg2 withParameters:(id)arg3 ;
-(void)setOptOutSessionPending:(char)arg1 ;
-(void)savePersistentGlobalsToDisk;
-(NSDate *)lastPageViewDate;
-(void)setLastPageViewDate:(NSDate *)arg1 ;
-(char)optOutSessionPending;
-(NSString *)savedResponseUrl;
-(NSMutableDictionary *)persistentGlobalsMap;
-(NSMutableArray *)originSets;
-(NSMutableDictionary *)persistentCookiesMap;
-(char)macAddressEnabled;
-(void)initPersistentMap;
-(id)persistentGlobalsFilePath;
-(id)persistentCookiesFilePath;
-(void)writeDictionary:(id)arg1 toFile:(id)arg2 ;
-(id)getPersistentFilePath:(id)arg1 ;
-(void)setSavedResponseUrl:(NSString *)arg1 ;
-(char)udidEnabled;
-(void)setUdidEnabled:(char)arg1 ;
-(void)setMacAddressEnabled:(char)arg1 ;
-(void)setOriginSets:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)launchOptions;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)location;
-(NSString *)apiKey;
-(void)setApiKey:(NSString *)arg1 ;
-(NSString *)userID;
-(void)setLocation:(id)arg1 ;
-(NSDate *)pauseTime;
-(void)setPauseTime:(NSDate *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(int)age;
-(void)setAge:(int)arg1 ;
@end

