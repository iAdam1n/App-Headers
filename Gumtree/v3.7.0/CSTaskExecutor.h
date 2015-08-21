/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)execute:(/*^block*/id)arg1 background:(BOOL)arg2 delay:(double)arg3 ;
-(void)waitForTasks;
-(void)dealloc;
@end
