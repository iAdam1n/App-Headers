/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSDate, NSString;

@interface MPTimer : NSObject {

	BOOL _isPaused;
	double _timeInterval;
	NSTimer* _timer;
	NSDate* _pauseDate;
	id _target;
	SEL _selector;
	NSString* _runLoopMode;

}

@property (assign,nonatomic,__weak) id target;                  //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                      //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) double timeInterval;               //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                   //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy) NSDate * pauseDate;                  //@synthesize pauseDate=_pauseDate - In the implementation block
@property (assign,nonatomic) BOOL isPaused;                     //@synthesize isPaused=_isPaused - In the implementation block
@property (nonatomic,copy) NSString * runLoopMode;              //@synthesize runLoopMode=_runLoopMode - In the implementation block
+(id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 repeats:(BOOL)arg4 ;
-(BOOL)scheduleNow;
-(void)timerDidFire;
-(BOOL)isScheduled;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)target;
-(SEL)selector;
-(BOOL)resume;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(BOOL)pause;
-(BOOL)isPaused;
-(double)initialTimeInterval;
-(void)setIsPaused:(BOOL)arg1 ;
-(NSString *)runLoopMode;
-(void)setRunLoopMode:(NSString *)arg1 ;
-(void)setPauseDate:(NSDate *)arg1 ;
-(NSDate *)pauseDate;
@end
