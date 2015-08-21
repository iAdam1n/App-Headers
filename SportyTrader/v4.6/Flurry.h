/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface Flurry : NSObject
+(int)logEvent:(id)arg1 withParameters:(id)arg2 ;
+(void)startSession:(id)arg1 ;
+(void)setCrashReportingEnabled:(BOOL)arg1 ;
+(void)logAllPageViewsForTarget:(id)arg1 ;
+(void)stopLogPageViewsForTarget:(id)arg1 ;
+(void)logPageView;
+(int)logEvent:(id)arg1 ;
+(void)setUserID:(id)arg1 ;
+(BOOL)sendUsageInfo;
+(void)parsePropertyList:(id)arg1 ;
+(void)parseDictionary:(id)arg1 ;
+(void)pauseSession;
+(void)setSessionReportsOnCloseEnabled:(BOOL)arg1 ;
+(void)setSessionReportsOnPauseEnabled:(BOOL)arg1 ;
+(void)setBackgroundSessionEnabled:(BOOL)arg1 ;
+(void)setEventLoggingEnabled:(BOOL)arg1 ;
+(void)setLaunchOptions:(id)arg1 ;
+(id)getFlurryAgentVersion;
+(void)didFinishLaunchingWithOptionsInBackground:(id)arg1 ;
+(void)startupNetworkAndSendSession;
+(void)createAndSendSession;
+(void)setLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(float)arg3 verticalAccuracy:(float)arg4 ;
+(void)endTimedEvent:(id)arg1 withParameters:(id)arg2 ;
+(void)setAppCloudServerToStaging:(BOOL)arg1 ;
+(void)setSecureTransportEnabledDeprecated:(BOOL)arg1 ;
+(void)setShowErrorInLogEnabled:(BOOL)arg1 ;
+(BOOL)hasUserOptedOut;
+(void)setFlurryOptOut:(BOOL)arg1 ;
+(void)setDebugLogEnabled:(BOOL)arg1 ;
+(int)sessionContinueSeconds;
+(void)setSessionContinueSeconds:(int)arg1 ;
+(void)setMaxSessionsSaved:(int)arg1 ;
+(void)startSession:(id)arg1 withOptions:(id)arg2 ;
+(BOOL)activeSessionExists;
+(void)pauseBackgroundSession;
+(void)addOrigin:(id)arg1 withVersion:(id)arg2 ;
+(void)addOrigin:(id)arg1 withVersion:(id)arg2 withParameters:(id)arg3 ;
+(int)logEvent:(id)arg1 timed:(BOOL)arg2 ;
+(int)logEvent:(id)arg1 withParameters:(id)arg2 timed:(BOOL)arg3 ;
+(void)logError:(id)arg1 message:(id)arg2 exception:(id)arg3 ;
+(void)logError:(id)arg1 message:(id)arg2 error:(id)arg3 ;
+(void)logAllPageViews:(id)arg1 ;
+(void)setLogLevel:(int)arg1 ;
+(void)setGender:(id)arg1 ;
+(void)applicationDidBecomeActive;
+(void)applicationWillResignActive;
+(void)endSession;
+(void)setServerURL:(id)arg1 ;
+(void)shutdown;
+(void)setAppVersion:(id)arg1 ;
+(void)setAge:(int)arg1 ;
+(void)applicationWillEnterForeground;
@end

