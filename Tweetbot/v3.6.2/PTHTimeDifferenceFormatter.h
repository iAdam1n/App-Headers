/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter, NSString;

@interface PTHTimeDifferenceFormatter : NSFormatter {

	NSNumberFormatter* _numberFormatter;
	NSString* _oneSecondLong;
	NSString* _secondsLong;
	NSString* _oneMinuteLong;
	NSString* _minutesLong;
	NSString* _oneHourLong;
	NSString* _hoursLong;
	NSString* _oneDayLong;
	NSString* _daysLong;
	NSString* _overOneYearLong;
	NSString* _secondsShort;
	NSString* _minutesShort;
	NSString* _hoursShort;
	NSString* _daysShort;
	NSString* _daysFormattedShort;
	BOOL _longFormat;
	BOOL _futureDate;
	NSString* _nowString;

}

@property (assign,nonatomic) BOOL longFormat;                                  //@synthesize longFormat=_longFormat - In the implementation block
@property (nonatomic,copy) NSString * nowString;                               //@synthesize nowString=_nowString - In the implementation block
@property (assign,getter=isFutureDate,nonatomic) BOOL futureDate;              //@synthesize futureDate=_futureDate - In the implementation block
-(void)setLongFormat:(BOOL)arg1 ;
-(void)setNowString:(NSString *)arg1 ;
-(BOOL)longFormat;
-(NSString *)nowString;
-(BOOL)isFutureDate;
-(void)setFutureDate:(BOOL)arg1 ;
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
@end

