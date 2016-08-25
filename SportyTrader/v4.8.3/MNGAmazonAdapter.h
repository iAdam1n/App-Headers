/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/MNGAdsAdapter.h>
#import <SportyTrader/AmazonAdInterstitialDelegate.h>
#import <SportyTrader/AmazonAdViewDelegate.h>

@class AmazonAdView, AmazonAdInterstitial, NSString;

@interface MNGAmazonAdapter : MNGAdsAdapter <AmazonAdInterstitialDelegate, AmazonAdViewDelegate> {

	long long type;
	CGRect _bannerFrame;
	AmazonAdView* _bannerView;
	AmazonAdInterstitial* _interstitial;
	BOOL _isInterstitialReady;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)displayInterstitial;
-(void)releaseMemory;
-(void)adViewDidLoad:(id)arg1 ;
-(void)failWithTimeOut;
-(BOOL)isInterstitialReady;
-(BOOL)createBannerInFrame:(CGRect)arg1 withPreferences:(id)arg2 ;
-(BOOL)createInterstitialWithPreferences:(id)arg1 autoDisplayed:(BOOL)arg2 ;
-(id)viewControllerForPresentingModalView;
-(void)interstitialDidLoad:(id)arg1 ;
-(void)interstitialDidFailToLoad:(id)arg1 withError:(id)arg2 ;
-(void)interstitialWillDismiss:(id)arg1 ;
-(void)adViewDidFailToLoad:(id)arg1 withError:(id)arg2 ;
-(id)initWithParameters:(id)arg1 ;
@end

