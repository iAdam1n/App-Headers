/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBAnalyticsReferrerPerformanceLogger : NSObject {

	NSString* _analyticsModule;
	NSDictionary* _referralInfo;
	NSString* _logSessionID;

}
+(void)configureViewControllerIfApplicable:(id)arg1 withURL:(id)arg2 ;
+(id)parametersDictionaryFromURL:(id)arg1 ;
+(id)URLParametersWithReferrerType:(id)arg1 referrerID:(id)arg2 ;
-(id)initWithReferralInfo:(id)arg1 module:(id)arg2 ;
-(void)logEvent:(id)arg1 ;
@end
