/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface CNMSPFriendlyTimer : NSObject {

	NSTimer* myTimer;
	/*function pointer*/void* expiredCb;
	long long myTimerID;

}
-(id)initTimer:(long long)arg1 expiration:(long long)arg2 callback:(const /*function pointer*/void*)arg3 ;
-(void)stopTimer;
-(id)init;
-(void)timerFire:(id)arg1 ;
@end

