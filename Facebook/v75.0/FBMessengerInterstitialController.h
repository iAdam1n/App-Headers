/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>

@protocol FBMessengerPromotionProperties, FBMessengerInterstitialViewConfiguration;
@class FBUserSession, FBSyncStore, FBMessengerInterstitialFacepileConfiguration, FBMessengerAppStoreRedirectionController, FBMessengerAccountSwitchingPolicyBridge, FBMessengerInboxCountsManager, FBMessengerDiodeBadgeableQPCountManager, NSString;

@interface FBMessengerInterstitialController : NSObject <FBViewerContextClassProvidable> {

	id<FBMessengerPromotionProperties> _appProperties;
	FBUserSession* _session;
	FBSyncStore* _syncStore;
	id<FBMessengerInterstitialViewConfiguration> _viewConfiguration;
	FBMessengerInterstitialFacepileConfiguration* _facepileConfiguration;
	FBMessengerAppStoreRedirectionController* _appStoreRedirectionController;
	FBMessengerAccountSwitchingPolicyBridge* _accountSwitchingPolicyBridge;
	FBMessengerInboxCountsManager* _messengerInboxCountsManager;
	FBMessengerDiodeBadgeableQPCountManager* _messengerDiodeBadgeableQPCountManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)hasMessengerInstalled;
-(void)interstitialViewDidAppear:(id)arg1 ;
-(void)interstitialViewDidSelectInstall:(id)arg1 ;
-(id)learnMoreViewController:(id)arg1 ;
-(void)interstitialViewDidSelectLearnMore:(id)arg1 ;
-(void)interstitialViewDidSelectRedirect:(id)arg1 ;
-(id)interstitialType;
-(void)configureInterstitialView:(id)arg1 withContext:(id)arg2 ;
-(void)didRedirectToMessengerFromLocation:(long long)arg1 ;
-(id)initWithAppProperties:(id)arg1 syncStore:(id)arg2 session:(id)arg3 viewConfiguration:(id)arg4 facepileConfiguration:(id)arg5 appStoreRedirectionController:(id)arg6 accountSwitchingPolicyBridge:(id)arg7 messengerInboxCountsManager:(id)arg8 messengerDiodeBadgeableQPCountManager:(id)arg9 ;
-(BOOL)isInDiode;
-(id)_interstitialTypeWhenIsNotInDiode;
-(id)_interstitialTypeWhenHasMessengerInstalled;
-(id)_interstitialTypeWhenNoMessengerInstalled;
-(BOOL)_mayRedirectToMessengerWithDifferentAccount;
-(id)_experimentAnalyticsInfoForView:(id)arg1 ;
-(id)_experimentAnalyticsInfoForLocation:(long long)arg1 ;
-(BOOL)shouldSuppressChatHeads;
@end
