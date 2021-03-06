/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface GADMRAIDCalendarProperties : NSObject {

	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _summary;
	NSString* _eventDescription;
	NSString* _location;

}

@property (nonatomic,readonly) NSDate * startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSDate * endTime;                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) NSString * summary;                       //@synthesize summary=_summary - In the implementation block
@property (nonatomic,readonly) NSString * eventDescription;              //@synthesize eventDescription=_eventDescription - In the implementation block
@property (nonatomic,readonly) NSString * location;                      //@synthesize location=_location - In the implementation block
-(NSString *)eventDescription;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)location;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(NSString *)summary;
@end

