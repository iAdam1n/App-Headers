/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/GADMAdNetworkConnector.h>

@class GADMAdNetworkConnectorNativeAd, GADAdType, GADAdLoaderConfiguration;

@interface GADMAdNetworkConnectorNativeExpressAd : GADMAdNetworkConnector {

	GADMAdNetworkConnectorNativeAd* _nativeAdConnector;
	GADAdType* _adType;
	GADAdLoaderConfiguration* _adLoaderConfiguration;

}

@property (nonatomic,retain) GADAdLoaderConfiguration * adLoaderConfiguration;              //@synthesize adLoaderConfiguration=_adLoaderConfiguration - In the implementation block
+(id)JSONAssetsFromMediatedNativeAppInstallAd:(id)arg1 ;
+(id)JSONAssetsFromMediatedNativeContentAd:(id)arg1 ;
-(void)setUpAdapter;
-(GADAdLoaderConfiguration *)adLoaderConfiguration;
-(void)getAdFromAdapterWithType:(id)arg1 ;
-(void)setAdLoaderConfiguration:(GADAdLoaderConfiguration *)arg1 ;
-(id)initWithConfig:(id)arg1 networkConfig:(id)arg2 ;
-(void)setAdManager:(id)arg1 ;
-(id)assetsFromMediatedNativeAd:(id)arg1 ;
-(void)loadNativeExpressHTMLTemplateForMediatedNativeAd:(id)arg1 ;
-(void)adapter:(id)arg1 didFailAd:(id)arg2 ;
-(void)adapter:(id)arg1 didReceiveMediatedNativeAd:(id)arg2 ;
@end

