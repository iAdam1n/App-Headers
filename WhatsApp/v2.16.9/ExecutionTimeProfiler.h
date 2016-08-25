/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface ExecutionTimeProfiler : NSObject {

	NSMutableDictionary* beginDates;
	NSMutableDictionary* endDates;
	NSDate* beginDate;
	NSDate* endDate;

}

@property (nonatomic,retain) NSDate * beginDate; 
@property (nonatomic,retain) NSDate * endDate; 
-(void)beginTask:(id)arg1 ;
-(double)timeFromStart;
-(double)durationForTask:(id)arg1 ;
-(void)endTask:(id)arg1 ;
-(void)setBeginDate:(NSDate *)arg1 ;
-(id)init;
-(void)end;
-(void)begin;
-(NSDate *)beginDate;
-(id)result;
-(double)totalTime;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
@end

