/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GADMAdNetworkAdapter <NSObject>
@optional
-(void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2;
-(BOOL)handlesUserClicks;
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

