/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@interface AFSDKWeakTimer : NSObject {

	struct {
		unsigned timerIsInvalidated;
	}  _timerFlags;
	BOOL _repeats;
	double _tolerance;
	double _timeInterval;
	id _target;
	SEL _selector;
	id _userInfo;
	dispatch_queue_sRef _privateSerialQueue;
	dispatch_source_sRef _timer;

}

@property (assign) double tolerance;                                              //@synthesize tolerance=_tolerance - In the implementation block
@property (assign,nonatomic) double timeInterval;                                 //@synthesize timeInterval=_timeInterval - In the implementation block
@property (assign,nonatomic,__weak) id target;                                    //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                        //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) id userInfo;                                         //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) BOOL repeats;                                        //@synthesize repeats=_repeats - In the implementation block
@property (assign,nonatomic) dispatch_queue_sRef privateSerialQueue;              //@synthesize privateSerialQueue=_privateSerialQueue - In the implementation block
@property (assign,nonatomic) dispatch_source_sRef timer;                          //@synthesize timer=_timer - In the implementation block
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 dispatchQueue:(dispatch_queue_sRef)arg6 ;
-(void)setPrivateSerialQueue:(dispatch_queue_sRef)arg1 ;
-(dispatch_queue_sRef)privateSerialQueue;
-(id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 dispatchQueue:(dispatch_queue_sRef)arg6 ;
-(void)resetTimerProperties;
-(void)timerFired;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(void)fire;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)invalidate;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)target;
-(SEL)selector;
-(id)userInfo;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1 ;
-(void)setTimer:(dispatch_source_sRef)arg1 ;
-(dispatch_source_sRef)timer;
-(BOOL)repeats;
-(void)schedule;
-(void)setRepeats:(BOOL)arg1 ;
@end
