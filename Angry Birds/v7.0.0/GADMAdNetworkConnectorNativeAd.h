/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:37 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/GADMAdNetworkConnector.h>

@class GADAdLoaderConfiguration;

@interface GADMAdNetworkConnectorNativeAd : GADMAdNetworkConnector {

	GADAdLoaderConfiguration* _adLoaderConfiguration;

}

@property (nonatomic,retain) GADAdLoaderConfiguration * adLoaderConfiguration;              //@synthesize adLoaderConfiguration=_adLoaderConfiguration - In the implementation block
-(void)adapterDidGetAdClick:(id)arg1 ;
-(void)adapterWillLeaveApplication:(id)arg1 ;
-(void)logIncorrectAdapterNotificationImplementation;
-(void)adapterWillPresentInterstitial:(id)arg1 ;
-(void)adapterWillDismissInterstitial:(id)arg1 ;
-(void)adapterDidDismissInterstitial:(id)arg1 ;
-(void)adapter:(id)arg1 didFailAd:(id)arg2 ;
-(void)setAdLoaderConfiguration:(GADAdLoaderConfiguration *)arg1 ;
-(void)getAdFromAdapterWithType:(id)arg1 ;
-(void)adapter:(id)arg1 didReceiveMediatedNativeAd:(id)arg2 ;
-(GADAdLoaderConfiguration *)adLoaderConfiguration;
-(void)adapterWillPresentFullScreenModal:(id)arg1 ;
-(void)adapterWillDismissFullScreenModal:(id)arg1 ;
-(void)adapterDidDismissFullScreenModal:(id)arg1 ;
@end
