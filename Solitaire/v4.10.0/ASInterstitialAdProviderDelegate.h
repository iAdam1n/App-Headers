/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ASInterstitialAdProviderDelegate <NSObject>
@property (nonatomic,copy) NSString * closeOffset; 
@required
-(void)setCloseOffset:(id)arg1;
-(NSString *)closeOffset;
-(void)interstitialAdProvider:(id)arg1 didPreloadAd:(id)arg2;
-(void)interstitialAdProvider:(id)arg1 didLoadAd:(id)arg2;
-(void)interstitialAdProvider:(id)arg1 didVirtualCurrencyLoad:(id)arg2;
-(void)interstitialAdProviderWillAppear:(id)arg1;
-(void)interstitialAdProviderDidAppear:(id)arg1;
-(void)interstitialAdProviderDidAdComplete:(id)arg1;
-(void)interstitialAdProvider:(id)arg1 didVirtualCurrencyReward:(id)arg2;
-(void)interstitialAdProviderWillDisappear:(id)arg1;
-(void)interstitialAdProviderDidDisappear:(id)arg1;
-(void)interstitialAdProviderAdWasTouched:(id)arg1;
-(void)interstitialAdProvider:(id)arg1 didFireAdvertiserEventWithMessage:(id)arg2;
-(id)getKeyWords;
-(id)getPubKeys;
-(void)interstitialAdProvider:(id)arg1 didFailToLoadAdWithError:(id)arg2;
-(void)AVPlayerCreated:(id)arg1;
-(BOOL)interstitialAdProviderIsPreload:(id)arg1;
-(void)interstitialAdProviderDidExpire:(id)arg1;

@end
