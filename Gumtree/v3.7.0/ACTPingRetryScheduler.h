/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class ACTPingRetryQueue, NSLock;

@interface ACTPingRetryScheduler : NSObject {

	BOOL _scheduling;
	double _timeBetweenBatches;
	ACTPingRetryQueue* _retryQueue;
	unsigned long long _schedulingSessionID;
	NSLock* _lock;

}

@property (assign,nonatomic) double timeBetweenBatches;                           //@synthesize timeBetweenBatches=_timeBetweenBatches - In the implementation block
@property (nonatomic,retain) ACTPingRetryQueue * retryQueue;                      //@synthesize retryQueue=_retryQueue - In the implementation block
@property (assign,getter=isScheduling,nonatomic) BOOL scheduling;                 //@synthesize scheduling=_scheduling - In the implementation block
@property (assign,nonatomic) unsigned long long schedulingSessionID;              //@synthesize schedulingSessionID=_schedulingSessionID - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                       //@synthesize lock=_lock - In the implementation block
-(void)startScheduling;
-(ACTPingRetryQueue *)retryQueue;
-(void)stopScheduling;
-(BOOL)isScheduling;
-(void)setScheduling:(BOOL)arg1 ;
-(void)startBatch;
-(unsigned long long)schedulingSessionID;
-(void)setSchedulingSessionID:(unsigned long long)arg1 ;
-(double)timeBetweenBatches;
-(void)refreshTimerForNextBatch;
-(void)setTimeBetweenBatches:(double)arg1 ;
-(void)setRetryQueue:(ACTPingRetryQueue *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSLock *)lock;
-(void)setLock:(NSLock *)arg1 ;
@end

