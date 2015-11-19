/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSTimer, FBSDKServerConfiguration, FBSDKAppEventsState;

@interface FBSDKAppEvents : NSObject {

	BOOL _explicitEventsLoggedYet;
	NSTimer* _flushTimer;
	NSTimer* _attributionIDRecheckTimer;
	FBSDKServerConfiguration* _serverConfiguration;
	FBSDKAppEventsState* _appEventsState;
	BOOL _disableTimer;
	unsigned long long _flushBehavior;

}

@property (assign,nonatomic) unsigned long long flushBehavior;              //@synthesize flushBehavior=_flushBehavior - In the implementation block
@property (assign,nonatomic) BOOL disableTimer;                             //@synthesize disableTimer=_disableTimer - In the implementation block
+(void)logEvent:(id)arg1 parameters:(id)arg2 ;
+(void)logEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3 ;
+(void)logEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4 ;
+(unsigned long long)flushBehavior;
+(void)setFlushBehavior:(unsigned long long)arg1 ;
+(id)loggingOverrideAppID;
+(void)logEvent:(id)arg1 valueToSum:(double)arg2 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 ;
+(void)activateApp;
+(void)setLoggingOverrideAppID:(id)arg1 ;
+(void)logImplicitEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4 ;
+(id)requestForCustomAudienceThirdPartyIDWithAccessToken:(id)arg1 ;
+(void)flush;
+(void)initialize;
+(void)logEvent:(id)arg1 ;
+(id)singleton;
-(void)flushTimerFired:(id)arg1 ;
-(void)appSettingsFetchStateResetTimerFired:(id)arg1 ;
-(void)applicationMovingFromActiveStateOrTerminating;
-(void)instanceLogEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 isImplicitlyLogged:(BOOL)arg4 accessToken:(id)arg5 ;
-(unsigned long long)flushBehavior;
-(void)flushForReason:(unsigned long long)arg1 ;
-(void)publishInstall;
-(void)fetchServerConfiguration:(/*^block*/id)arg1 ;
-(void)setFlushBehavior:(unsigned long long)arg1 ;
-(void)flushOnMainQueue:(id)arg1 forReason:(unsigned long long)arg2 ;
-(void)checkPersistedEvents;
-(void)handleActivitiesPostCompletion:(id)arg1 loggingEntry:(id)arg2 appEventsState:(id)arg3 ;
-(BOOL)disableTimer;
-(void)setDisableTimer:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive;
-(id)appID;
@end
