/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CSCore, NSMutableArray;

@interface CSTaskExecutor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	CSCore* _core;
	NSMutableArray* _activeTimers;

}
-(id)initWithCore:(id)arg1 ;
-(void)execute:(/*^block*/id)arg1 background:(BOOL)arg2 ;
-(void)cancelTimerWithId:(id)arg1 ;
-(id)startTimerWithInterval:(double)arg1 delay:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6 invokeSelectorAfterDelay:(BOOL)arg7 ;
-(void)releaseQueue;
-(void)onTick:(id)arg1 ;
-(void)startTimerWithInterval:(double)arg1 timerId:(id)arg2 ;
-(id)createDispatchTimerWithInterval:(double)arg1 dispatchQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)execute:(/*^block*/id)arg1 background:(BOOL)arg2 delay:(double)arg3 ;
-(void)waitForTasks;
-(void)dealloc;
@end

