/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/GADMInternalAdNetworkConnector.h>
#import <eBay/GADMediationAdRequestInternal.h>

@protocol GADMAdNetworkAdapter;
@class GADMAdNetworkConfig, NSDictionary, GADMAdManager, GADMConfig, NSString;

@interface GADMAdNetworkConnector : NSObject <GADMInternalAdNetworkConnector, GADMediationAdRequestInternal> {

	NSDictionary* _strippedCredentials;
	BOOL _isLocationShared;
	BOOL _didNetworkRefresh;
	BOOL _clicked;
	GADMAdNetworkConfig* _networkConfig;
	GADMAdManager* _adManager;
	GADMConfig* _mediationConfig;
	id<GADMAdNetworkAdapter> _adapter;

}

@property (assign,nonatomic,__weak) GADMAdManager * adManager;                 //@synthesize adManager=_adManager - In the implementation block
@property (nonatomic,retain) GADMConfig * mediationConfig;                     //@synthesize mediationConfig=_mediationConfig - In the implementation block
@property (nonatomic,retain) id<GADMAdNetworkAdapter> adapter;                 //@synthesize adapter=_adapter - In the implementation block
@property (assign,nonatomic) BOOL didNetworkRefresh;                           //@synthesize didNetworkRefresh=_didNetworkRefresh - In the implementation block
@property (assign,getter=isClicked,nonatomic) BOOL clicked;                    //@synthesize clicked=_clicked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GADMAdNetworkConfig * networkConfig;              //@synthesize networkConfig=_networkConfig - In the implementation block
-(void)setAdapter:(id<GADMAdNetworkAdapter>)arg1 ;
-(CGSize)adSize;
-(id)extras;
-(BOOL)userHasLocation;
-(void)adapterDidGetAdClick:(id)arg1 ;
-(void)adapterWillLeaveApplication:(id)arg1 ;
-(id)publisherId;
-(id)networkExtras;
-(long long)userGender;
-(id)userBirthday;
-(double)userLatitude;
-(double)userLongitude;
-(double)userLocationAccuracyInMeters;
-(id)userLocationDescription;
-(id)userKeywords;
-(id)inlineAd;
-(id)adapterNames;
-(id)currentAdapterName;
-(id)userRequestAgent;
-(void)askAdapterToStopBeingDelegate;
-(void)setUpAdapter;
-(GADMConfig *)mediationConfig;
-(void)setMediationConfig:(GADMConfig *)arg1 ;
-(id)childDirectedTreatment;
-(void)adapterDidReceiveInterstitial:(id)arg1 ;
-(void)adapterWillPresentInterstitial:(id)arg1 ;
-(void)adapterWillDismissInterstitial:(id)arg1 ;
-(void)adapterDidDismissInterstitial:(id)arg1 ;
-(void)adapter:(id)arg1 didFailAd:(id)arg2 ;
-(id)adapterVersion;
-(double)croppedContentThreshold;
-(void)reportClick;
-(void)reportImpression;
-(id)networkExtrasForClass:(Class)arg1 ;
-(BOOL)didNetworkRefresh;
-(void)pingMediationURLs:(id)arg1 defaultURL:(id)arg2 durations:(id)arg3 exitCodes:(id)arg4 fillStatus:(id)arg5 ;
-(void)reportFill;
-(BOOL)isClicked;
-(id)initWithConfig:(id)arg1 networkConfig:(id)arg2 ;
-(void)setAdManager:(GADMAdManager *)arg1 ;
-(void)getAdFromAdapterWithType:(id)arg1 ;
-(GADMAdManager *)adManager;
-(GADMAdNetworkConfig *)networkConfig;
-(void)adapter:(id)arg1 didReceiveMediatedNativeAd:(id)arg2 ;
-(id)viewControllerForPresentingModalView;
-(void)adapter:(id)arg1 didReceiveAdView:(id)arg2 ;
-(void)adapterWillPresentFullScreenModal:(id)arg1 ;
-(void)adapterWillDismissFullScreenModal:(id)arg1 ;
-(void)adapterDidDismissFullScreenModal:(id)arg1 ;
-(void)setDidNetworkRefresh:(BOOL)arg1 ;
-(void)setClicked:(BOOL)arg1 ;
-(void)adapter:(id)arg1 didFailInterstitial:(id)arg2 ;
-(void)adapter:(id)arg1 clickDidOccurInBanner:(id)arg2 ;
-(void)adapter:(id)arg1 didReceiveInterstitial:(id)arg2 ;
-(BOOL)autoClickProtectionEnabled;
-(void)setNetworkConfig:(GADMAdNetworkConfig *)arg1 ;
-(id)slot;
-(id<GADMAdNetworkAdapter>)adapter;
-(void)dealloc;
-(id)init;
-(id)userLocation;
-(id)credentials;
-(BOOL)testMode;
@end

