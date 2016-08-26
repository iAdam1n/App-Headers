/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MWAdNetAdapter.h>
#import <SolitaireFree/MNGInterstitialAdDelegate.h>

@class MNGInterstitialAd, NSString;

@interface MWManageAdapter : MWAdNetAdapter <MNGInterstitialAdDelegate> {

	MNGInterstitialAd* ad;

}

@property (retain) MNGInterstitialAd * ad; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getSDKVersion;
-(void)setAd:(MNGInterstitialAd *)arg1 ;
-(void)popoverWillAppear;
-(void)popoverWillDisappear:(id)arg1 ;
-(void)onRewardedAdFinished;
-(void)didCacheInterstitial;
-(void)popoverDidFailToLoadWithError:(id)arg1 ;
-(void)adapterInit:(id)arg1 ;
-(void)localClear;
-(unsigned char)startNet;
-(unsigned char)isAdReady;
-(unsigned char)display;
-(unsigned char)request;
-(MNGInterstitialAd *)ad;
@end
