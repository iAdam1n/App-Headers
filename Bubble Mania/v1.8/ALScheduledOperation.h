/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALTask;

@interface ALScheduledOperation : NSObject {

	ALTask* task;
	unsigned long long queue;
	double delay;

}

@property (nonatomic,retain) ALTask * task; 
@property (assign,nonatomic) unsigned long long queue; 
@property (assign,nonatomic) double delay; 
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(ALTask *)task;
-(unsigned long long)queue;
-(void)setTask:(ALTask *)arg1 ;
-(void)setQueue:(unsigned long long)arg1 ;
@end
