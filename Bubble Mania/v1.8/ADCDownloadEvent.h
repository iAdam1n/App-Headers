/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface ADCDownloadEvent : NSObject {

	int bytes;
	NSDate* time;

}

@property (assign,nonatomic) int bytes; 
@property (nonatomic,retain) NSDate * time; 
-(void)setBytes:(int)arg1 ;
-(id)init:(int)arg1 ;
-(int)bytes;
-(void)setTime:(NSDate *)arg1 ;
-(NSDate *)time;
@end

