/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FBSDKLoginCompleting.h>

@protocol NSObject;
@class FBSDKLoginCompletionParameters;

@interface FBSDKLoginURLCompleter : NSObject <FBSDKLoginCompleting> {

	FBSDKLoginCompletionParameters* _parameters;
	id<NSObject> _observer;
	BOOL _performExplicitFallback;

}
-(void)setParametersWithDictionary:(id)arg1 appID:(id)arg2 ;
-(void)setErrorWithDictionary:(id)arg1 ;
-(void)attemptBrowserLogIn:(id)arg1 ;
-(void)completeLogIn:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithURLParameters:(id)arg1 appID:(id)arg2 ;
-(id)init;
@end

