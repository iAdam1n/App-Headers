/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:37 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
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
