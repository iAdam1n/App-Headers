/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAdvertisingProvider.h>
#import <Gumtree/GADBannerViewDelegate.h>

@class ECAd, UIViewController, ECAppConfig, ECAdManager, ECSearchParameters, ECObserverSet, NSString;

@interface ECAdDetailsAdvertisingProvider : ECAdvertisingProvider <GADBannerViewDelegate> {

	BOOL _adSenseExternalRequested;
	BOOL _dfpExternalAdsRequested;
	BOOL _bingExternalAdsRequested;
	BOOL _forceNextSetAdToLoadBanner;
	ECAd* _ad;
	UIViewController* _controller;
	ECAppConfig* _appConfig;
	ECAdManager* _adManager;
	ECSearchParameters* _searchParameters;
	ECObserverSet* _adChangedObservers;

}

@property (assign,nonatomic,__weak) UIViewController * controller;               //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) ECAppConfig * appConfig;                            //@synthesize appConfig=_appConfig - In the implementation block
@property (nonatomic,retain) ECAdManager * adManager;                            //@synthesize adManager=_adManager - In the implementation block
@property (nonatomic,retain) ECSearchParameters * searchParameters;              //@synthesize searchParameters=_searchParameters - In the implementation block
@property (assign,nonatomic) BOOL adSenseExternalRequested;                      //@synthesize adSenseExternalRequested=_adSenseExternalRequested - In the implementation block
@property (assign,nonatomic) BOOL dfpExternalAdsRequested;                       //@synthesize dfpExternalAdsRequested=_dfpExternalAdsRequested - In the implementation block
@property (assign,nonatomic) BOOL bingExternalAdsRequested;                      //@synthesize bingExternalAdsRequested=_bingExternalAdsRequested - In the implementation block
@property (assign,nonatomic) BOOL forceNextSetAdToLoadBanner;                    //@synthesize forceNextSetAdToLoadBanner=_forceNextSetAdToLoadBanner - In the implementation block
@property (nonatomic,retain) ECObserverSet * adChangedObservers;                 //@synthesize adChangedObservers=_adChangedObservers - In the implementation block
@property (nonatomic,retain) ECAd * ad;                                          //@synthesize ad=_ad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAd:(ECAd *)arg1 ;
-(void)adViewWillPresentScreen:(id)arg1 ;
-(void)adViewWillLeaveApplication:(id)arg1 ;
-(void)setAdManager:(ECAdManager *)arg1 ;
-(ECAdManager *)adManager;
-(void)configureAdChangedObservers;
-(void)resetBannerStatesIfNeededWithPreviousAd:(id)arg1 ;
-(void)requestBannersForAd:(id)arg1 ;
-(BOOL)dfpExternalAdsRequested;
-(void)setDfpExternalAdsRequested:(BOOL)arg1 ;
-(void)loadAdForBannerType:(unsigned long long)arg1 atPosition:(unsigned long long)arg2 withSearchParameters:(id)arg3 ;
-(BOOL)adSenseExternalRequested;
-(void)setAdSenseExternalRequested:(BOOL)arg1 ;
-(id)dataProviderForSearchOptions:(id)arg1 inAd:(id)arg2 adManager:(id)arg3 ;
-(void)loadAdForBannerType:(unsigned long long)arg1 atPosition:(unsigned long long)arg2 withPreferredWidth:(double)arg3 withDataProvider:(id)arg4 ;
-(BOOL)bingExternalAdsRequested;
-(void)setBingExternalAdsRequested:(BOOL)arg1 ;
-(ECObserverSet *)adChangedObservers;
-(BOOL)forceNextSetAdToLoadBanner;
-(void)setForceNextSetAdToLoadBanner:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 appConfig:(id)arg2 adManager:(id)arg3 searchparameters:(id)arg4 ;
-(void)loadAdForBannerType:(unsigned long long)arg1 atPosition:(unsigned long long)arg2 withDataProvider:(id)arg3 ;
-(void)requestAdTabBanner;
-(void)setAdChangedObservers:(ECObserverSet *)arg1 ;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
-(ECSearchParameters *)searchParameters;
-(void)setSearchParameters:(ECSearchParameters *)arg1 ;
-(ECAppConfig *)appConfig;
-(void)setAppConfig:(ECAppConfig *)arg1 ;
-(ECAd *)ad;
@end

