/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Flurry : NSObject
+(void)disableWatchConnectivity;
+(BOOL)isFlurryUserInfo:(id)arg1 ;
+(BOOL)flurryUserInfo:(id)arg1 ;
+(BOOL)hasUserOptedOut;
+(void)setEventLoggingEnabled:(BOOL)arg1 ;
+(void)setSessionReportsOnCloseEnabled:(BOOL)arg1 ;
+(void)setSessionReportsOnPauseEnabled:(BOOL)arg1 ;
+(void)setCrashReportingEnabled:(BOOL)arg1 ;
+(void)disableTransferOfFlurryInfo;
+(void)setLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(float)arg3 verticalAccuracy:(float)arg4 ;
+(void)endTimedEvent:(id)arg1 withParameters:(id)arg2 ;
+(void)pauseSession;
+(void)removeInstallationIDFromKeychain;
+(void)setBackgroundSessionEnabled:(BOOL)arg1 ;
+(void)setShowErrorInLogEnabled:(BOOL)arg1 ;
+(void)setFlurryOptOut:(BOOL)arg1 ;
+(void)setSecureTransportEnabledDeprecated:(BOOL)arg1 ;
+(void)setAppCloudServerToStaging:(BOOL)arg1 ;
+(BOOL)sendUsageInfo;
+(void)parsePropertyList:(id)arg1 ;
+(void)parseDictionary:(id)arg1 ;
+(id)getSessionID;
+(void)setLaunchOptions:(id)arg1 ;
+(void)startSession:(id)arg1 ;
+(id)getFlurryAgentVersion;
+(void)didFinishLaunchingWithOptionsInBackground:(id)arg1 ;
+(void)startupNetworkAndSendSession;
+(void)createAndSendSession;
+(int)logEvent:(id)arg1 withParameters:(id)arg2 timed:(BOOL)arg3 ;
+(BOOL)areParametersValidForSyndicationEvent:(int)arg1 syndicationID:(id)arg2 parameters:(id)arg3 ;
+(id)updateSyndicationParameters:(id)arg1 syndicationID:(id)arg2 ;
+(int)logEvent:(id)arg1 withParameters:(id)arg2 ;
+(void)setDebugLogEnabled:(BOOL)arg1 ;
+(int)sessionContinueSeconds;
+(void)setSessionContinueSeconds:(int)arg1 ;
+(void)setMaxSessionsSaved:(int)arg1 ;
+(void)startSession:(id)arg1 withOptions:(id)arg2 ;
+(BOOL)activeSessionExists;
+(void)pauseBackgroundSession;
+(void)addSessionOrigin:(id)arg1 ;
+(void)addSessionOrigin:(id)arg1 withDeepLink:(id)arg2 ;
+(void)sessionProperties:(id)arg1 ;
+(void)addOrigin:(id)arg1 withVersion:(id)arg2 ;
+(void)addOrigin:(id)arg1 withVersion:(id)arg2 withParameters:(id)arg3 ;
+(void)logError:(id)arg1 message:(id)arg2 exception:(id)arg3 ;
+(void)logError:(id)arg1 message:(id)arg2 error:(id)arg3 ;
+(void)logAllPageViews:(id)arg1 ;
+(void)logAllPageViewsForTarget:(id)arg1 ;
+(void)stopLogPageViewsForTarget:(id)arg1 ;
+(void)logPageView;
+(int)logEvent:(int)arg1 syndicationID:(id)arg2 parameters:(id)arg3 ;
+(int)logEvent:(id)arg1 timed:(BOOL)arg2 ;
+(void)setPulseEnabled:(BOOL)arg1 ;
+(void)setPulseServerURL:(id)arg1 ;
+(void)setPulseCBServerURL:(id)arg1 ;
+(void)setLogLevel:(int)arg1 ;
+(void)setDelegate:(id)arg1 ;
+(void)applicationDidBecomeActive;
+(void)applicationWillResignActive;
+(void)endSession;
+(void)setGender:(id)arg1 ;
+(void)setAppVersion:(id)arg1 ;
+(int)logEvent:(id)arg1 ;
+(void)shutdown;
+(void)setAge:(int)arg1 ;
+(void)applicationWillEnterForeground;
+(void)setServerURL:(id)arg1 ;
+(void)setUserID:(id)arg1 ;
@end

