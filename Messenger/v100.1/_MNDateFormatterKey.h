/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _MNDateFormatterKey : NSObject {

	NSDate* _date;
	long long _dateType;

}

@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long dateType;              //@synthesize dateType=_dateType - In the implementation block
-(id)initWithDate:(id)arg1 andFormat:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(long long)dateType;
-(void)setDateType:(long long)arg1 ;
@end
