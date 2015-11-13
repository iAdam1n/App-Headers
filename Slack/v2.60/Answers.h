/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/FABKit.h>

@class CLSAnalyticsController, NSString;

@interface Answers : NSObject <FABKit> {

	CLSAnalyticsController* _analyticsController;

}

@property (nonatomic,retain) CLSAnalyticsController * analyticsController;              //@synthesize analyticsController=_analyticsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)kitDisplayVersion;
+(id)kitBuildVersion;
+(void)initializeIfNeeded;
+(void)startWithBetaToken:(id)arg1 ;
+(void)logCustomEventWithName:(id)arg1 customAttributes:(id)arg2 ;
+(void)logPredefinedEvent:(id)arg1 ;
+(void)logPreviousSessionCrashedOnDate:(id)arg1 ;
+(void)logInviteWithMethod:(id)arg1 customAttributes:(id)arg2 ;
+(void)logSignUpWithMethod:(id)arg1 success:(id)arg2 customAttributes:(id)arg3 ;
+(void)logLoginWithMethod:(id)arg1 success:(id)arg2 customAttributes:(id)arg3 ;
+(void)logShareWithMethod:(id)arg1 contentName:(id)arg2 contentType:(id)arg3 contentId:(id)arg4 customAttributes:(id)arg5 ;
+(void)logPurchaseWithPrice:(id)arg1 currency:(id)arg2 success:(id)arg3 itemName:(id)arg4 itemType:(id)arg5 itemId:(id)arg6 customAttributes:(id)arg7 ;
+(void)logLevelStart:(id)arg1 customAttributes:(id)arg2 ;
+(void)logLevelEnd:(id)arg1 score:(id)arg2 success:(id)arg3 customAttributes:(id)arg4 ;
+(void)logAddToCartWithPrice:(id)arg1 currency:(id)arg2 itemName:(id)arg3 itemType:(id)arg4 itemId:(id)arg5 customAttributes:(id)arg6 ;
+(void)logStartCheckoutWithPrice:(id)arg1 currency:(id)arg2 itemCount:(id)arg3 customAttributes:(id)arg4 ;
+(void)logRating:(id)arg1 contentName:(id)arg2 contentType:(id)arg3 contentId:(id)arg4 customAttributes:(id)arg5 ;
+(void)logContentViewWithName:(id)arg1 contentType:(id)arg2 contentId:(id)arg3 customAttributes:(id)arg4 ;
+(void)logSearchWithQuery:(id)arg1 customAttributes:(id)arg2 ;
+(id)sharedInstance;
+(id)bundleIdentifier;
-(void)startWithBetaToken:(id)arg1 ;
-(CLSAnalyticsController *)analyticsController;
-(void)setAnalyticsController:(CLSAnalyticsController *)arg1 ;
@end

