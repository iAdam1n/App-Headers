/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/GADMRewardBasedVideoAdNetworkAdapter.h>
#import <SolitaireFree/GADRewardBasedVideoAdClickDelegate.h>
#import <SolitaireFree/GADRewardBasedVideoAdDelegate.h>
#import <SolitaireFree/GADMAdNetworkAdapter.h>
#import <SolitaireFree/GADBannerViewDelegate.h>
#import <SolitaireFree/GADInterstitialDelegate.h>
#import <SolitaireFree/GADInterstitialAdClickDelegate.h>
#import <SolitaireFree/GADNativeAppInstallAdLoaderDelegate.h>
#import <SolitaireFree/GADNativeContentAdLoaderDelegate.h>

@protocol GADMAdNetworkConnector, GADMRewardBasedVideoAdNetworkConnector;
@class GADBannerView, GADInterstitial, GADRewardBasedVideoAd, GADAdLoader, GADMAdNetworkConnector, NSString;

@interface GADMAdapterGoogleAdMobAds : NSObject <GADMRewardBasedVideoAdNetworkAdapter, GADRewardBasedVideoAdClickDelegate, GADRewardBasedVideoAdDelegate, GADMAdNetworkAdapter, GADBannerViewDelegate, GADInterstitialDelegate, GADInterstitialAdClickDelegate, GADNativeAppInstallAdLoaderDelegate, GADNativeContentAdLoaderDelegate> {

	GADBannerView* _bannerView;
	GADInterstitial* _interstitial;
	GADRewardBasedVideoAd* _rewardBasedVideoAd;
	GADAdLoader* _adLoader;
	GADMAdNetworkConnector*<GADMAdNetworkConnector> _connector;
	id<GADMRewardBasedVideoAdNetworkConnector> _rewardBasedVideoAdNetworkConnector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)adapterVersion;
+(Class)networkExtrasClass;
-(void)adViewDidReceiveAd:(id)arg1 ;
-(void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)adViewWillPresentScreen:(id)arg1 ;
-(void)adViewWillDismissScreen:(id)arg1 ;
-(void)adViewDidDismissScreen:(id)arg1 ;
-(void)adViewWillLeaveApplication:(id)arg1 ;
-(void)interstitialDidReceiveAd:(id)arg1 ;
-(void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)interstitialWillPresentScreen:(id)arg1 ;
-(void)interstitialWillDismissScreen:(id)arg1 ;
-(void)interstitialDidDismissScreen:(id)arg1 ;
-(void)interstitialWillLeaveApplication:(id)arg1 ;
-(id)initWithRewardBasedVideoAdNetworkConnector:(id)arg1 ;
-(void)requestRewardBasedVideoAd;
-(void)presentRewardBasedVideoAdWithRootViewController:(id)arg1 ;
-(void)rewardBasedVideoAd:(id)arg1 didRewardUserWithReward:(id)arg2 ;
-(void)rewardBasedVideoAdDidOpen:(id)arg1 ;
-(void)rewardBasedVideoAdDidStartPlaying:(id)arg1 ;
-(void)rewardBasedVideoAdDidClose:(id)arg1 ;
-(void)rewardBasedVideoAdWillLeaveApplication:(id)arg1 ;
-(void)rewardBasedVideoAdDidReceiveAd:(id)arg1 ;
-(void)rewardBasedVideoAd:(id)arg1 didFailToLoadWithError:(id)arg2 ;
-(void)adLoader:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)stopBeingDelegate;
-(id)initWithGADMAdNetworkConnector:(id)arg1 ;
-(void)getBannerWithSize:(GADAdSize)arg1 ;
-(void)getInterstitial;
-(BOOL)isBannerAnimationOK:(long long)arg1 ;
-(void)presentInterstitialFromRootViewController:(id)arg1 ;
-(void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2 ;
-(BOOL)handlesUserClicks;
-(BOOL)handlesUserImpressions;
-(void)changeAdSizeTo:(GADAdSize)arg1 ;
-(void)interstitialDidReceiveAdClick:(id)arg1 ;
-(void)adLoader:(id)arg1 didReceiveNativeAppInstallAd:(id)arg2 ;
-(void)rewardBasedVideoAdDidReceiveAdClick:(id)arg1 ;
-(void)adLoader:(id)arg1 didReceiveNativeContentAd:(id)arg2 ;
-(void)dealloc;
-(id)request;
-(void)setUp;
@end
