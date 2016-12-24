/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MWAdNetAdapter.h>
#import <SolitaireFree/FlurryAdInterstitialDelegate.h>

@class FlurryAdInterstitial, NSString;

@interface MWFlurryAdapter : MWAdNetAdapter <FlurryAdInterstitialDelegate> {

	FlurryAdInterstitial* ad;

}

@property (retain) FlurryAdInterstitial * ad; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned char)isAdReady;
-(void)adInterstitialDidFetchAd:(id)arg1 ;
-(void)adInterstitialDidRender:(id)arg1 ;
-(void)adInterstitialWillPresent:(id)arg1 ;
-(void)adInterstitialWillLeaveApplication:(id)arg1 ;
-(void)adInterstitialWillDismiss:(id)arg1 ;
-(void)adInterstitialDidDismiss:(id)arg1 ;
-(void)adInterstitialDidReceiveClick:(id)arg1 ;
-(void)adInterstitialVideoDidFinish:(id)arg1 ;
-(void)adInterstitial:(id)arg1 adError:(int)arg2 errorDescription:(id)arg3 ;
-(void)setAd:(FlurryAdInterstitial *)arg1 ;
-(id)getSDKVersion;
-(void)adapterInit:(id)arg1 ;
-(unsigned char)startNet;
-(unsigned char)request;
-(unsigned char)display;
-(FlurryAdInterstitial *)ad;
@end
