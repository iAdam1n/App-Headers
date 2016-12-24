/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/MNGAdsAdapter.h>
#import <SportyTrader/MNGInterstitialViewDelegate.h>
#import <SportyTrader/MNGBannerViewDelegate.h>

@class MNGBannerView, MNGInterstitialViewController, NSString;

@interface MNGMngPerfAdapter : MNGAdsAdapter <MNGInterstitialViewDelegate, MNGBannerViewDelegate> {

	MNGBannerView* _banner;
	MNGInterstitialViewController* _interstitial;
	long long type;
	BOOL _isInterstitialReady;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)displayInterstitial;
-(void)releaseMemory;
-(void)failWithTimeOut;
-(BOOL)isInterstitialReady;
-(BOOL)createBannerInFrame:(CGRect)arg1 withPreferences:(id)arg2 ;
-(BOOL)createInterstitialWithPreferences:(id)arg1 autoDisplayed:(BOOL)arg2 ;
-(void)intertitialDidLoad:(id)arg1 ;
-(void)intertitial:(id)arg1 didFailWithError:(id)arg2 ;
-(void)intertitialWillDisappear:(id)arg1 ;
-(void)intertitialDidClicked:(id)arg1 ;
-(void)bannerViewDidLoad:(id)arg1 ;
-(void)bannerViewDidClicked:(id)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailWithError:(id)arg2 ;
@end
