/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/FlurryAdNetworkBasePlugin.h>
#import <libobjc.A.dylib/ADInterstitialAdDelegate.h>
#import <libobjc.A.dylib/ADBannerViewDelegate.h>

@class NSString;

@interface FlurryAdNetworkIAdPlugin : FlurryAdNetworkBasePlugin <ADInterstitialAdDelegate, ADBannerViewDelegate> {

	BOOL adRendered;

}

@property (assign,getter=isAdRendered,nonatomic) BOOL adRendered; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)getBannerDimensions:(id)arg1 ;
-(void)setAdRendered:(BOOL)arg1 ;
-(BOOL)getAdView:(id)arg1 parentView:(id)arg2 showTakeover:(BOOL)arg3 adContainer:(id)arg4 ;
-(void)adjustAdBannerFrame;
-(void)cleanupAdView:(id)arg1 ;
-(void)removeBanner:(id)arg1 ;
-(BOOL)isAdRendered;
-(id)currentBanner;
-(BOOL)adIsAvailable:(id)arg1 parentView:(id)arg2 orientation:(long long)arg3 ;
-(void)renderAdView:(id)arg1 parentView:(id)arg2 showTakeover:(BOOL)arg3 adContainer:(id)arg4 ;
-(BOOL)viewIsBanner:(id)arg1 withHook:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)interstitialAdDidUnload:(id)arg1 ;
-(void)interstitialAdDidLoad:(id)arg1 ;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)interstitialAdActionDidFinish:(id)arg1 ;
-(BOOL)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2 ;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2 ;
-(void)bannerViewActionDidFinish:(id)arg1 ;
@end

