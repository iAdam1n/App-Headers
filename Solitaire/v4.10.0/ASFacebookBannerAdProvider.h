/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/ASCustomBannerAdProvider.h>
#import <SolitaireFree/FBAdViewDelegate.h>

@class NSString;

@interface ASFacebookBannerAdProvider : ASCustomBannerAdProvider <FBAdViewDelegate> {

	BOOL _adLoaded;
	BOOL _adFailed;
	id _adView;

}

@property (nonatomic,retain) id adView;                             //@synthesize adView=_adView - In the implementation block
@property (assign,nonatomic) BOOL adLoaded;                         //@synthesize adLoaded=_adLoaded - In the implementation block
@property (assign,nonatomic) BOOL adFailed;                         //@synthesize adFailed=_adFailed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)partnerAdView;
-(void)showPartnerAd;
-(void)initializePartnerAd:(id)arg1 ;
-(BOOL)hasPartnerAdInitialized;
-(BOOL)hasPartnerAdFailedToLoad;
-(void)loadPartnerAd:(id)arg1 ;
-(BOOL)hasPartnerAdLoaded;
-(BOOL)hasPartnerAdFailedToInitialize;
-(id)adView;
-(void)setAdView:(id)arg1 ;
-(void)adViewDidClick:(id)arg1 ;
-(void)adViewDidFinishHandlingClick:(id)arg1 ;
-(void)adViewDidLoad:(id)arg1 ;
-(void)adView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)adViewWillLogImpression:(id)arg1 ;
-(void)setAdLoaded:(BOOL)arg1 ;
-(void)setAdFailed:(BOOL)arg1 ;
-(BOOL)adLoaded;
-(BOOL)adFailed;
-(id)init;
-(void)dealloc;
@end
