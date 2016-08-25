/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSTimer;

@interface GADScheduler : NSObject {

	long long _taskID;
	NSMutableDictionary* _blocks;
	double _interval;
	NSTimer* _timer;

}
-(long long)taskIDScheduledOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)executeBlocks;
-(void)unscheduleTaskWithID:(long long)arg1 ;
-(id)init;
-(id)description;
-(void)stop;
-(void)start;
-(id)initWithInterval:(double)arg1 ;
@end

