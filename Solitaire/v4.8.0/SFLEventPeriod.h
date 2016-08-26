/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SFLEventPeriod : NSObject {

	NSString* _title;
	long long _startMonth;
	long long _endMonth;
	long long _startDay;
	long long _endDay;

}

@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long startMonth;              //@synthesize startMonth=_startMonth - In the implementation block
@property (assign,nonatomic) long long endMonth;                //@synthesize endMonth=_endMonth - In the implementation block
@property (assign,nonatomic) long long startDay;                //@synthesize startDay=_startDay - In the implementation block
@property (assign,nonatomic) long long endDay;                  //@synthesize endDay=_endDay - In the implementation block
-(id)initWithStartMonth:(long long)arg1 startDay:(long long)arg2 endMonth:(long long)arg3 endDay:(long long)arg4 ;
-(BOOL)isDateInEventPeriod:(id)arg1 ;
-(BOOL)monthsIncludeMonth:(long long)arg1 ;
-(long long)startMonth;
-(long long)endMonth;
-(BOOL)startMonthIncludesMonth:(long long)arg1 day:(long long)arg2 ;
-(BOOL)endMonthIncludesMonth:(long long)arg1 day:(long long)arg2 ;
-(long long)startDay;
-(long long)endDay;
-(id)initWithStartMonth:(long long)arg1 endMonth:(long long)arg2 ;
-(id)initWithMonth:(long long)arg1 startDay:(long long)arg2 endDay:(long long)arg3 ;
-(id)initWithMonth:(long long)arg1 day:(long long)arg2 ;
-(id)initWithMonth:(long long)arg1 ;
-(BOOL)isTodayInEventPeriod;
-(long long)calculateStartYearForDate:(id)arg1 ;
-(void)setStartMonth:(long long)arg1 ;
-(void)setEndMonth:(long long)arg1 ;
-(void)setStartDay:(long long)arg1 ;
-(void)setEndDay:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end
