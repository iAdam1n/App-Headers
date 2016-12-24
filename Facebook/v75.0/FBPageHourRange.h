/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSMutableArray;

@interface FBPageHourRange : NSObject {

	NSNumber* _day;
	NSMutableArray* _startTimes;
	NSMutableArray* _endTimes;

}

@property (nonatomic,retain) NSNumber * day;                           //@synthesize day=_day - In the implementation block
@property (nonatomic,retain) NSMutableArray * startTimes;              //@synthesize startTimes=_startTimes - In the implementation block
@property (nonatomic,retain) NSMutableArray * endTimes;                //@synthesize endTimes=_endTimes - In the implementation block
-(void)addStartTime:(id)arg1 withEndTime:(id)arg2 ;
-(void)setStartTimes:(NSMutableArray *)arg1 ;
-(void)setEndTimes:(NSMutableArray *)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setDay:(NSNumber *)arg1 ;
-(NSNumber *)day;
-(NSMutableArray *)startTimes;
-(NSMutableArray *)endTimes;
-(id)initWithDay:(id)arg1 ;
@end
