/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/ASBaseLogger.h>

@class NSDate;

@interface ASAdResponseLogger : ASBaseLogger {

	NSDate* _startTime;
	NSDate* _endTime;

}

@property (nonatomic,retain) NSDate * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                //@synthesize endTime=_endTime - In the implementation block
+(void)endAdResponseAndSendEvent;
+(id)logInstance;
+(void)resetFields;
+(id)durationInMillisecondsAsANumberObj;
+(id)createJSONAdResponseEventData;
+(void)startAdResponseLogWithPLC:(id)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
@end
