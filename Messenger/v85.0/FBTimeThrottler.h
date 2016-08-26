/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBCancelable;
@class NSObject;

@interface FBTimeThrottler : NSObject {

	double _period;
	long long _options;
	NSObject*<OS_dispatch_queue> _queueForPerforming;
	/*^block*/id _block;
	/*^block*/id _timeBlock;
	/*^block*/id _callAfterBlock;
	double _lastCallTime;
	id<FBCancelable> _scheduledTrailingInvocation;

}
-(id)initWithPeriod:(double)arg1 options:(long long)arg2 queueForPerforming:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)callWithThrottling;
-(id)initWithPeriod:(double)arg1 options:(long long)arg2 queueForPerforming:(id)arg3 block:(/*^block*/id)arg4 timeBlock:(/*^block*/id)arg5 callAfterBlock:(/*^block*/id)arg6 ;
-(BOOL)_shouldInvokeImmediately_unlocked:(double)arg1 ;
-(void)_cancelScheduledTrailingInvocation_unlocked;
-(void)_scheduleTrailingInvocationIfNeeded_unlocked:(double)arg1 ;
-(void)_performTrailingInvocation;
-(void)reset;
@end
