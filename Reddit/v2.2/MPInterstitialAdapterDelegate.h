/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPInterstitialAdapterDelegate
@required
-(void)adapter:(id)arg1 didFailToLoadAdWithError:(id)arg2;
-(id)interstitialAdController;
-(id)interstitialDelegate;
-(void)adapterDidFinishLoadingAd:(id)arg1;
-(void)interstitialWillAppearForAdapter:(id)arg1;
-(void)interstitialDidAppearForAdapter:(id)arg1;
-(void)interstitialWillDisappearForAdapter:(id)arg1;
-(void)interstitialDidDisappearForAdapter:(id)arg1;
-(void)interstitialDidExpireForAdapter:(id)arg1;
-(void)interstitialDidReceiveTapEventForAdapter:(id)arg1;
-(void)interstitialWillLeaveApplicationForAdapter:(id)arg1;
-(id)location;

@end
