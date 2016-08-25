/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GADMAdNetworkAdapter <NSObject>
@optional
-(void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2;
-(BOOL)handlesUserClicks;
-(BOOL)handlesUserImpressions;
-(void)changeAdSizeTo:(GADAdSize)arg1;

@required
+(id)adapterVersion;
+(Class)networkExtrasClass;
-(void)stopBeingDelegate;
-(id)initWithGADMAdNetworkConnector:(id)arg1;
-(void)getBannerWithSize:(GADAdSize)arg1;
-(void)getInterstitial;
-(BOOL)isBannerAnimationOK:(long long)arg1;
-(void)presentInterstitialFromRootViewController:(id)arg1;

@end

