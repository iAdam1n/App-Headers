/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/GADGMSGHandler.h>

@protocol GADDelayLoadDelegate;
@interface GADDelayPageLoadGMSGHandler : GADGMSGHandler {

	long long _delayCount;
	id<GADDelayLoadDelegate> _delegate;

}
+(id)actionBlockDictionary;
-(void)delayPageLoadWithArguments:(id)arg1 ;
-(void)handleDelayLoadWithParameters:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg1 ;
@end

