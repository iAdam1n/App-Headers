/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/MNGAdsAdapter.h>
#import <SportyTrader/GADBannerViewDelegate.h>
#import <SportyTrader/GADInterstitialDelegate.h>
#import <SportyTrader/GADNativeAppInstallAdLoaderDelegate.h>
#import <SportyTrader/GADNativeContentAdLoaderDelegate.h>

@class DFPBannerView, DFPInterstitial, GADAdLoader, NSString;

@interface MNGDFPAdapter : MNGAdsAdapter <GADBannerViewDelegate, GADInterstitialDelegate, GADNativeAppInstallAdLoaderDelegate, GADNativeContentAdLoaderDelegate> {

	DFPBannerView* _banner;
	DFPInterstitial* _interstitial;
	GADAdLoader* _adLoader;
	long long type;
	BOOL _isInterstitialReady;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)displayInterstitial;
-(void)releaseMemory;
-(void)adViewDidReceiveAd:(id)arg1 ;
-(void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)adViewWillPresentScreen:(id)arg1 ;
-(void)adViewWillLeaveApplication:(id)arg1 ;
-(void)interstitialDidReceiveAd:(id)arg1 ;
-(void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)interstitialWillPresentScreen:(id)arg1 ;
-(void)interstitialWillDismissScreen:(id)arg1 ;
-(void)interstitialWillLeaveApplication:(id)arg1 ;
-(id)setupAdRequestWithPreferences:(id)arg1 ;
-(void)failWithTimeOut;
-(BOOL)isInterstitialReady;
-(void)adLoader:(id)arg1 didReceiveNativeAppInstallAd:(id)arg2 ;
-(void)adLoader:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)adLoader:(id)arg1 didReceiveNativeContentAd:(id)arg2 ;
-(BOOL)createBannerInFrame:(CGRect)arg1 withPreferences:(id)arg2 ;
-(BOOL)createInterstitialWithPreferences:(id)arg1 autoDisplayed:(BOOL)arg2 ;
-(BOOL)createNativeWithPreferences:(id)arg1 ;
-(id)initWithParameters:(id)arg1 ;
@end
