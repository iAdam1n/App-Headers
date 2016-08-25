/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/GADMAdNetworkConnector.h>

@class GADAdLoaderConfiguration;

@interface GADMAdNetworkConnectorNativeAd : GADMAdNetworkConnector {

	GADAdLoaderConfiguration* _adLoaderConfiguration;

}

@property (nonatomic,retain) GADAdLoaderConfiguration * adLoaderConfiguration;              //@synthesize adLoaderConfiguration=_adLoaderConfiguration - In the implementation block
-(void)adapter:(id)arg1 didFailAd:(id)arg2 ;
-(GADAdLoaderConfiguration *)adLoaderConfiguration;
-(void)getAdFromAdapterWithType:(id)arg1 ;
-(void)adapter:(id)arg1 didReceiveMediatedNativeAd:(id)arg2 ;
-(void)setAdLoaderConfiguration:(GADAdLoaderConfiguration *)arg1 ;
@end

