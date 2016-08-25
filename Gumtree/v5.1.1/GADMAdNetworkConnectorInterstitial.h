/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GADMAdNetworkConnector.h>

@interface GADMAdNetworkConnectorInterstitial : GADMAdNetworkConnector {

	BOOL _calledWillDismissInterstitial;

}

@property (assign,nonatomic) BOOL calledWillDismissInterstitial;              //@synthesize calledWillDismissInterstitial=_calledWillDismissInterstitial - In the implementation block
-(void)adapterWillLeaveApplication:(id)arg1 ;
-(void)adapterDidReceiveInterstitial:(id)arg1 ;
-(void)adapterWillPresentInterstitial:(id)arg1 ;
-(void)adapterWillDismissInterstitial:(id)arg1 ;
-(void)adapterDidDismissInterstitial:(id)arg1 ;
-(void)adapter:(id)arg1 didFailAd:(id)arg2 ;
-(void)getAdFromAdapterWithType:(id)arg1 ;
-(void)adapter:(id)arg1 didReceiveAdView:(id)arg2 ;
-(void)adapterWillPresentFullScreenModal:(id)arg1 ;
-(void)adapterWillDismissFullScreenModal:(id)arg1 ;
-(void)adapterDidDismissFullScreenModal:(id)arg1 ;
-(void)adapter:(id)arg1 didFailInterstitial:(id)arg2 ;
-(void)setCalledWillDismissInterstitial:(BOOL)arg1 ;
-(BOOL)calledWillDismissInterstitial;
-(void)adapter:(id)arg1 clickDidOccurInBanner:(id)arg2 ;
-(void)adapter:(id)arg1 didReceiveInterstitial:(id)arg2 ;
@end

