/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/GADMAdNetworkConnector.h>

@interface GADMAdNetworkConnectorInterstitial : GADMAdNetworkConnector {

	BOOL _calledWillDismissInterstitial;

}

@property (assign,nonatomic) BOOL calledWillDismissInterstitial;              //@synthesize calledWillDismissInterstitial=_calledWillDismissInterstitial - In the implementation block
-(void)adapterWillLeaveApplication:(id)arg1 ;
-(void)adapter:(id)arg1 didFailAd:(id)arg2 ;
-(void)getAdFromAdapterWithType:(id)arg1 ;
-(void)adapter:(id)arg1 didReceiveAdView:(id)arg2 ;
-(void)adapterWillPresentFullScreenModal:(id)arg1 ;
-(void)adapterWillDismissFullScreenModal:(id)arg1 ;
-(void)adapterDidDismissFullScreenModal:(id)arg1 ;
-(void)adapterDidReceiveInterstitial:(id)arg1 ;
-(void)adapterWillPresentInterstitial:(id)arg1 ;
-(void)adapterWillDismissInterstitial:(id)arg1 ;
-(void)adapterDidDismissInterstitial:(id)arg1 ;
-(void)adapter:(id)arg1 didFailInterstitial:(id)arg2 ;
-(void)setCalledWillDismissInterstitial:(BOOL)arg1 ;
-(BOOL)calledWillDismissInterstitial;
-(void)adapter:(id)arg1 clickDidOccurInBanner:(id)arg2 ;
-(void)adapter:(id)arg1 didReceiveInterstitial:(id)arg2 ;
@end
