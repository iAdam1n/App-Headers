/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/GADGMSGHandler.h>

@protocol GADDelayLoadDelegate;
@interface GADDelayPageLoadGMSGHandler : GADGMSGHandler {

	long long _delayCount;
	id<GADDelayLoadDelegate> _delegate;

}
+(id)actionBlockDictionary;
-(void)adView:(id)arg1 delayPageLoadWithArguments:(id)arg2 ;
-(void)handleDelayLoadWithParameters:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg1 ;
@end

