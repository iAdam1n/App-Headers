/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface ADCDownloadEvent : NSObject {

	int _bytes;
	NSDate* _time;

}

@property (assign,nonatomic) int bytes;                  //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,retain) NSDate * time;              //@synthesize time=_time - In the implementation block
-(void)setBytes:(int)arg1 ;
-(id)init:(int)arg1 ;
-(int)bytes;
-(void)setTime:(NSDate *)arg1 ;
-(NSDate *)time;
@end

