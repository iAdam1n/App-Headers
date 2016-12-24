/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:16 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/GADInterstitial.h>
#import <eBay/DFPCustomRenderedAdEventHandler.h>

@protocol GADAppEventDelegate, DFPCustomRenderedInterstitialDelegate;
@class NSString, GADCorrelator;

@interface DFPInterstitial : GADInterstitial <DFPCustomRenderedAdEventHandler> {

	unsigned _previousCorrelationID;
	BOOL _customAdRenderingEnabled;
	id<GADAppEventDelegate> _appEventDelegate;
	id<DFPCustomRenderedInterstitialDelegate> _customRenderedInterstitialDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * adUnitID; 
@property (nonatomic,retain) GADCorrelator * correlator; 
@property (assign,nonatomic,__weak) id<GADAppEventDelegate> appEventDelegate;                                                  //@synthesize appEventDelegate=_appEventDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<DFPCustomRenderedInterstitialDelegate> customRenderedInterstitialDelegate;              //@synthesize customRenderedInterstitialDelegate=_customRenderedInterstitialDelegate - In the implementation block
@property (assign,getter=isCustomAdRenderingEnabled,nonatomic) BOOL customAdRenderingEnabled;                                  //@synthesize customAdRenderingEnabled=_customAdRenderingEnabled - In the implementation block
-(void)recordClick;
-(void)recordCustomAdImpression;
-(void)finishedRenderingAdView:(id)arg1 ;
-(void)presentFromRootViewController:(id)arg1 ;
-(BOOL)slotShouldPreemptInProgressRequest:(id)arg1 ;
-(void)slot:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3 ;
-(BOOL)slot:(id)arg1 notifyPublisherToRenderCustomRenderingAd:(id)arg2 error:(id*)arg3 ;
-(void)slot:(id)arg1 willLoadAdWithRequest:(id)arg2 ;
-(GADCorrelator *)correlator;
-(void)setCorrelator:(GADCorrelator *)arg1 ;
-(void)setCustomAdRenderingEnabled:(BOOL)arg1 ;
-(id<DFPCustomRenderedInterstitialDelegate>)customRenderedInterstitialDelegate;
-(BOOL)isCustomAdRenderingEnabled;
-(void)setCustomRenderedInterstitialDelegate:(id<DFPCustomRenderedInterstitialDelegate>)arg1 ;
-(id<GADAppEventDelegate>)appEventDelegate;
-(void)setAppEventDelegate:(id<GADAppEventDelegate>)arg1 ;
@end
