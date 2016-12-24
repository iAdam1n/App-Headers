/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/BITHockeyBaseManager.h>

@protocol OS_dispatch_queue;
@class BITChannel, BITTelemetryContext, BITPersistence, NSUserDefaults, NSObject, BITSender;

@interface BITMetricsManager : BITHockeyBaseManager {

	id _appWillEnterForegroundObserver;
	id _appDidEnterBackgroundObserver;
	BITChannel* _channel;
	BITTelemetryContext* _telemetryContext;
	BITPersistence* _persistence;
	NSUserDefaults* _userDefaults;
	NSObject*<OS_dispatch_queue> _metricsEventQueue;
	BITSender* _sender;
	unsigned long long _appBackgroundTimeBeforeSessionExpires;

}

@property (nonatomic,readonly) NSUserDefaults * userDefaults;                                       //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) BITPersistence * persistence;                                        //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,readonly) BITChannel * channel;                                                //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) BITTelemetryContext * telemetryContext;                              //@synthesize telemetryContext=_telemetryContext - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> metricsEventQueue;                      //@synthesize metricsEventQueue=_metricsEventQueue - In the implementation block
@property (nonatomic,retain) BITSender * sender;                                                    //@synthesize sender=_sender - In the implementation block
@property (assign,nonatomic) unsigned long long appBackgroundTimeBeforeSessionExpires;              //@synthesize appBackgroundTimeBeforeSessionExpires=_appBackgroundTimeBeforeSessionExpires - In the implementation block
-(void)registerObservers;
-(void)unregisterObservers;
-(BITTelemetryContext *)telemetryContext;
-(void)startNewSessionWithId:(id)arg1 ;
-(void)updateDidEnterBackgroundTime;
-(void)startNewSessionIfNeeded;
-(unsigned long long)appBackgroundTimeBeforeSessionExpires;
-(id)createNewSessionWithId:(id)arg1 ;
-(void)trackSessionWithState:(long long)arg1 ;
-(id)initWithChannel:(id)arg1 telemetryContext:(id)arg2 persistence:(id)arg3 userDefaults:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)metricsEventQueue;
-(void)setAppBackgroundTimeBeforeSessionExpires:(unsigned long long)arg1 ;
-(void)startManager;
-(id)init;
-(BITSender *)sender;
-(BITChannel *)channel;
-(void)setSender:(BITSender *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(BITPersistence *)persistence;
@end
