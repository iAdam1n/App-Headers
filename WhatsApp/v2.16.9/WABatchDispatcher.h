/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, WATimer;

@interface WABatchDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSMutableArray* _bufferedObjects;
	/*^block*/id _handler;
	long long _maximumBatchSize;
	double _maximumDelay;
	double _lastDrainTime;
	WATimer* _timer;

}

@property (assign,nonatomic) double maximumDelay; 
@property (assign,nonatomic) long long maximumBatchSize; 
-(id)initWithTargetQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(double)maximumDelay;
-(void)setMaximumDelay:(double)arg1 ;
-(void)drain;
-(void)setMaximumBatchSize:(long long)arg1 ;
-(long long)maximumBatchSize;
-(void)enqueue:(id)arg1 ;
@end
