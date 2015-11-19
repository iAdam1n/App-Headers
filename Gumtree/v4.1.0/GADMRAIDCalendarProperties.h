/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
