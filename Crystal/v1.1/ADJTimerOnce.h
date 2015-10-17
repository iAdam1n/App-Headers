/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:35 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDate;

@interface ADJTimerOnce : NSObject {

	double _startTime;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _source;
	/*^block*/id _block;
	unsigned long long _start;
	NSDate* _fireDate;

}

@property (assign,nonatomic) double startTime;                                        //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> source;                    //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) id block;                                                  //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) unsigned long long start;                              //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) NSDate * fireDate;                                       //@synthesize fireDate=_fireDate - In the implementation block
+(id)timerWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)initBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(double)fireIn;
-(void)startIn:(double)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setFireDate:(NSDate *)arg1 ;
-(unsigned long long)start;
-(NSObject*<OS_dispatch_source>)source;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSDate *)fireDate;
-(double)startTime;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
