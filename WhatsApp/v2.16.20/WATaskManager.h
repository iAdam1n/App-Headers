/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAUpgradeCallback.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface WATaskManager : NSObject <WAUpgradeCallback> {

	BOOL _isRunning;
	NSMutableArray* _tasks;
	unsigned long long _counter;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	unsigned long long _quietTimeCounter;
	BOOL _interfaceIsIdle;
	BOOL _isBatteryLow;
	BOOL _isInLowPowerMode;
	BOOL _isInBackground;
	NSObject*<OS_dispatch_queue> _taskQueue;
	BOOL _paused;
	double _minimumIntervalBetweenTasks;
	double _minimumDelayBeforeIdle;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused;                     //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) double minimumIntervalBetweenTasks;              //@synthesize minimumIntervalBetweenTasks=_minimumIntervalBetweenTasks - In the implementation block
@property (assign,nonatomic) double minimumDelayBeforeIdle;                   //@synthesize minimumDelayBeforeIdle=_minimumDelayBeforeIdle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2 ;
+(id)defaultManager;
-(void)rescheduleTaskWithIdentifierIfNeeded:(id)arg1 ;
-(id)taskWithIdentifier:(id)arg1 ;
-(void)beginQuietTime;
-(void)endQuietTime;
-(void)restartQueueIfNeeded;
-(void)batteryLevelDidChange:(id)arg1 ;
-(void)batteryStateDidChange:(id)arg1 ;
-(void)lowPowerModeDidChange:(id)arg1 ;
-(void)updateIsBatteryLow;
-(void)updateLowPowerMode;
-(void)endQuietTimeAfterDelay;
-(double)minimumDelayBeforeIdle;
-(void)performOneTask;
-(id)findNextTask;
-(double)minimumIntervalBetweenTasks;
-(void)beginQuietTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMinimumIntervalBetweenTasks:(double)arg1 ;
-(void)setMinimumDelayBeforeIdle:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)scheduleTask:(id)arg1 ;
-(void)setBackgroundState:(BOOL)arg1 ;
-(void)reportEvent:(id)arg1 ;
@end
