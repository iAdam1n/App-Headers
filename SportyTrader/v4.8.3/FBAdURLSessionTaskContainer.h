/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSessionTask, NSDate;

@interface FBAdURLSessionTaskContainer : NSObject {

	NSURLSessionTask* _task;
	NSDate* _requestStart;

}

@property (nonatomic,retain) NSURLSessionTask * task;              //@synthesize task=_task - In the implementation block
@property (readonly) long long state; 
@property (nonatomic,retain) NSDate * requestStart;                //@synthesize requestStart=_requestStart - In the implementation block
-(void)cancel;
-(id)init;
-(long long)state;
-(NSURLSessionTask *)task;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(void)setRequestStart:(NSDate *)arg1 ;
-(NSDate *)requestStart;
@end

