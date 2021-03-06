/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/FABKit.h>

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
+(void)logCustomEventWithName:(id)arg1 customAttributes:(id)arg2 ;
+(void)startWithBetaToken:(id)arg1 ;
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

