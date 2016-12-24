/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBAnalyticsReferrerPerformanceLogger : NSObject {

	NSString* _analyticsModule;
	NSDictionary* _referralInfo;
	NSString* _logSessionID;

}
+(id)URLParametersWithReferrerType:(id)arg1 referrerID:(id)arg2 ;
+(void)configureViewControllerIfApplicable:(id)arg1 withURL:(id)arg2 ;
+(id)parametersDictionaryFromURL:(id)arg1 ;
-(id)initWithReferralInfo:(id)arg1 module:(id)arg2 ;
-(void)logEvent:(id)arg1 ;
@end
