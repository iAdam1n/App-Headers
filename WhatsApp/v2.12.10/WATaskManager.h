/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSMutableArray, NSObject;

@interface WATaskManager : NSObject {

	BOOL _isRunning;
	NSMutableArray* _tasks;
	unsigned long long _counter;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	unsigned long long _quietTimeCounter;
	BOOL _interfaceIsIdle;
	BOOL _isInPowerSaveMode;
	BOOL _isInBackground;
	BOOL _paused;
	double _minimumIntervalBetweenTasks;
	double _minimumDelayBeforeIdle;

}

@property (assign,nonatomic) double minimumIntervalBetweenTasks;              //@synthesize minimumIntervalBetweenTasks=_minimumIntervalBetweenTasks - In the implementation block
@property (assign,nonatomic) double minimumDelayBeforeIdle;                   //@synthesize minimumDelayBeforeIdle=_minimumDelayBeforeIdle - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                     //@synthesize paused=_paused - In the implementation block
+(id)defaultManager;
-(void)scheduleTask:(id)arg1 ;
-(void)beginQuietTime;
-(void)endQuietTime;
-(void)reportEvent:(id)arg1 ;
-(void)restartQueueIfNeeded;
-(void)batteryLevelDidChange:(id)arg1 ;
-(void)batteryStateDidChange:(id)arg1 ;
-(void)lowPowerModeDidChange:(id)arg1 ;
-(void)updatePowerSaveMode;
-(void)setBackgroundState:(BOOL)arg1 ;
-(void)endQuietTimeAfterDelay;
-(double)minimumDelayBeforeIdle;
-(void)performOneTask;
-(double)minimumIntervalBetweenTasks;
-(void)beginQuietTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMinimumIntervalBetweenTasks:(double)arg1 ;
-(void)setMinimumDelayBeforeIdle:(double)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
-(id)init;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
@end
