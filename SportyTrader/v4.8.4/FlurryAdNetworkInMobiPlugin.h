/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FlurryAdNetworkBasePlugin.h>
#import <SportyTrader/IMBannerDelegate.h>
#import <SportyTrader/IMInterstitialDelegate.h>

@class IMBanner, IMInterstitial, NSString;

@interface FlurryAdNetworkInMobiPlugin : FlurryAdNetworkBasePlugin <IMBannerDelegate, IMInterstitialDelegate> {

	BOOL internetAvailable;
	IMBanner* currentBanner;
	IMInterstitial* currentInterstitial;
	BOOL _adReady;
	BOOL _adRendered;

}

@property (assign,nonatomic) BOOL internetAvailable; 
@property (nonatomic,retain) IMBanner * currentBanner; 
@property (nonatomic,retain) IMInterstitial * currentInterstitial; 
@property (assign,getter=isAdRendered,nonatomic) BOOL adRendered;               //@synthesize adRendered=_adRendered - In the implementation block
@property (assign,nonatomic) BOOL adReady;                                      //@synthesize adReady=_adReady - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)viewIsBanner:(id)arg1 withAdSpaceName:(id)arg2 ;
+(void)removeBanner:(id)arg1 ;
+(void)setADViewDelegate:(id)arg1 ;
+(id)getADBannerViewClass;
+(id)getADInterstitialViewClass;
+(BOOL)inMobiEnabled;
-(void)adViewWillPresentScreen:(id)arg1 ;
-(void)adViewWillDismissScreen:(id)arg1 ;
-(void)adViewDidDismissScreen:(id)arg1 ;
-(void)interstitialDidReceiveAd:(id)arg1 ;
-(void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)interstitialWillPresentScreen:(id)arg1 ;
-(void)interstitialWillDismissScreen:(id)arg1 ;
-(void)interstitialDidDismissScreen:(id)arg1 ;
-(void)interstitialWillLeaveApplication:(id)arg1 ;
-(CGSize)getBannerDimensions:(id)arg1 ;
-(void)setAdRendered:(BOOL)arg1 ;
-(BOOL)getAdView:(id)arg1 parentView:(id)arg2 showTakeover:(BOOL)arg3 adContainer:(id)arg4 ;
-(void)cleanupAdView:(id)arg1 ;
-(void)removeBanner:(id)arg1 ;
-(BOOL)isAdRendered;
-(IMBanner *)currentBanner;
-(BOOL)adIsAvailable:(id)arg1 parentView:(id)arg2 orientation:(long long)arg3 ;
-(void)renderAdView:(id)arg1 parentView:(id)arg2 showTakeover:(BOOL)arg3 adContainer:(id)arg4 ;
-(BOOL)viewIsBanner:(id)arg1 withHook:(id)arg2 ;
-(IMInterstitial *)currentInterstitial;
-(void)setInternetAvailable:(BOOL)arg1 ;
-(id)supportedAdSizes;
-(BOOL)internetAvailable;
-(void)setCurrentBanner:(IMBanner *)arg1 ;
-(void)setCurrentInterstitial:(IMInterstitial *)arg1 ;
-(BOOL)adReady;
-(int)getBannerSizeId:(id)arg1 ;
-(void)setAdReady:(BOOL)arg1 ;
-(void)bannerDidReceiveAd:(id)arg1 ;
-(void)banner:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)bannerDidInteract:(id)arg1 withParams:(id)arg2 ;
-(void)bannerWillLeaveApplication:(id)arg1 ;
-(void)interstitialDidInteract:(id)arg1 withParams:(id)arg2 ;
-(void)interstitial:(id)arg1 didFailToPresentScreenWithError:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end
