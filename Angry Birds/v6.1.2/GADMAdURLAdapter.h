/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <AngryBirdsClassic/GADSDKCoreControllerDelegate.h>
#import <AngryBirdsClassic/GADBannerViewDelegate.h>
#import <AngryBirdsClassic/GADInterstitialDelegate.h>
#import <AngryBirdsClassic/GADInterstitialAdClickDelegate.h>
#import <AngryBirdsClassic/GADMAdNetworkAdapter.h>

@protocol GADMAdNetworkConnector;
@class GADBannerView, GADInterstitial, NSString;

@interface GADMAdURLAdapter : NSObject <GADSDKCoreControllerDelegate, GADBannerViewDelegate, GADInterstitialDelegate, GADInterstitialAdClickDelegate, GADMAdNetworkAdapter> {

	BOOL _shouldRespondToSDKCore;
	GADBannerView* _banner;
	GADInterstitial* _interstitial;
	id<GADMAdNetworkConnector> _connector;
	NSString* _requestID;

}

@property (nonatomic,retain) GADBannerView * banner;                                   //@synthesize banner=_banner - In the implementation block
@property (nonatomic,retain) GADInterstitial * interstitial;                           //@synthesize interstitial=_interstitial - In the implementation block
@property (assign,nonatomic,__weak) id<GADMAdNetworkConnector> connector;              //@synthesize connector=_connector - In the implementation block
@property (nonatomic,copy) NSString * requestID;                                       //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL shouldRespondToSDKCore;                              //@synthesize shouldRespondToSDKCore=_shouldRespondToSDKCore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long CSIIdentifier; 
+(id)adapterVersion;
+(Class)networkExtrasClass;
-(void)stopBeingDelegate;
-(id<GADMAdNetworkConnector>)connector;
-(id)initWithGADMAdNetworkConnector:(id)arg1 ;
-(void)getBannerWithSize:(GADAdSize)arg1 ;
-(void)getInterstitial;
-(BOOL)isBannerAnimationOK:(long long)arg1 ;
-(void)presentInterstitialFromRootViewController:(id)arg1 ;
-(void)changeAdSizeTo:(GADAdSize)arg1 ;
-(void)setConnector:(id<GADMAdNetworkConnector>)arg1 ;
-(void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2 ;
-(long long)CSIIdentifier;
-(void)failedJavaScriptFile;
-(void)loadAdURLWithParameters:(id)arg1 ;
-(long long)requestedAdType;
-(void)loadAd:(id)arg1 headers:(id)arg2 ;
-(void)invalidJavaScriptRequest;
-(void)adViewDidReceiveAd:(id)arg1 ;
-(void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)adViewWillPresentScreen:(id)arg1 ;
-(void)adViewWillDismissScreen:(id)arg1 ;
-(void)adViewDidDismissScreen:(id)arg1 ;
-(void)adViewWillLeaveApplication:(id)arg1 ;
-(GADInterstitial *)interstitial;
-(void)setInterstitial:(GADInterstitial *)arg1 ;
-(void)reportBannerLoadFailureWithCode:(long long)arg1 errorMessage:(id)arg2 ;
-(void)loadRequest;
-(void)reportInterstitialLoadFailureWithCode:(long long)arg1 errorMessage:(id)arg2 ;
-(void)reportAdLoadFailureWithCode:(long long)arg1 errorMessage:(id)arg2 ;
-(void)interstitialDidReceiveAd:(id)arg1 ;
-(void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)interstitialWillPresentScreen:(id)arg1 ;
-(void)interstitialWillDismissScreen:(id)arg1 ;
-(void)interstitialDidDismissScreen:(id)arg1 ;
-(void)interstitialWillLeaveApplication:(id)arg1 ;
-(void)interstitialDidReceiveAdClick:(id)arg1 ;
-(void)setBanner:(GADBannerView *)arg1 ;
-(BOOL)shouldRespondToSDKCore;
-(void)setShouldRespondToSDKCore:(BOOL)arg1 ;
-(id)init;
-(void)setRequestID:(NSString *)arg1 ;
-(id)requestParameters;
-(GADBannerView *)banner;
-(NSString *)requestID;
@end

