/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary, NSTimer;

@interface GADScheduler : NSObject {

	long long _taskID;
	NSMutableDictionary* _blocks;
	double _interval;
	NSTimer* _timer;

}
-(long long)taskIDScheduledOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)unscheduleTaskWithID:(long long)arg1 ;
-(void)executeBlocks;
-(id)init;
-(id)description;
-(void)stop;
-(void)start;
-(id)initWithInterval:(double)arg1 ;
@end

