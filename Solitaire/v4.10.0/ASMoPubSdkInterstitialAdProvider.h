/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/ASCustomInterstitialAdProvider.h>
#import <SolitaireFree/MPInterstitialAdControllerDelegate.h>

@class NSString;

@interface ASMoPubSdkInterstitialAdProvider : ASCustomInterstitialAdProvider <MPInterstitialAdControllerDelegate> {

	BOOL _failedToReceiveAd;
	id _mpInterstitialAdController;

}

@property (nonatomic,retain) id mpInterstitialAdController;              //@synthesize mpInterstitialAdController=_mpInterstitialAdController - In the implementation block
@property (assign,nonatomic) BOOL failedToReceiveAd;                     //@synthesize failedToReceiveAd=_failedToReceiveAd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initializePartnerAd:(id)arg1 ;
-(BOOL)hasPartnerAdInitialized;
-(BOOL)hasPartnerAdFailedToLoad;
-(void)loadPartnerAd:(id)arg1 ;
-(BOOL)hasPartnerAdLoaded;
-(BOOL)hasPartnerAdFailedToInitialize;
-(BOOL)failedToReceiveAd;
-(void)setMpInterstitialAdController:(id)arg1 ;
-(id)mpInterstitialAdController;
-(void)interstitialDidLoadAd:(id)arg1 ;
-(void)interstitialDidFailToLoadAd:(id)arg1 ;
-(void)interstitialWillAppear:(id)arg1 ;
-(void)interstitialDidAppear:(id)arg1 ;
-(void)interstitialWillDisappear:(id)arg1 ;
-(void)interstitialDidDisappear:(id)arg1 ;
-(void)interstitialDidReceiveTapEvent:(id)arg1 ;
-(void)showPartnerAd:(id)arg1 ;
-(void)setFailedToReceiveAd:(BOOL)arg1 ;
-(id)init;
-(void)cancel;
@end
