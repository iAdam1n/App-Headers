/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/UnityAdsInitializer.h>
#import <AngryBirdsClassic/UnityAdsCampaignManagerDelegate.h>
#import <AngryBirdsClassic/UnityAdsWebAppControllerDelegate.h>

@class NSString;

@interface UnityAdsDefaultInitializer : UnityAdsInitializer <UnityAdsCampaignManagerDelegate, UnityAdsWebAppControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)campaignManagerCampaignDataFailed;
-(void)campaignManagerCampaignDataReceived;
-(void)campaignManager:(id)arg1 updatedWithCampaigns:(id)arg2 gamerID:(id)arg3 ;
-(void)initAds:(id)arg1 ;
-(BOOL)initWasSuccessfull;
-(void)reInitialize;
-(void)webAppReady;
-(void)initCampaignManager;
@end

