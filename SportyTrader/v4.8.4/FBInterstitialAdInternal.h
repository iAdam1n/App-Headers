/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FBInterstitialAd.h>
#import <SportyTrader/FBAdViewInternalDelegate.h>
#import <SportyTrader/FBAdViewDelegate.h>

@class NSString, NSDate, FBAdViewInternal;

@interface FBInterstitialAdInternal : FBInterstitialAd <FBAdViewInternalDelegate, FBAdViewDelegate> {

	BOOL _isStatusBarHidden;
	NSString* _placementID;
	NSDate* _interstitialOpenedTime;
	FBAdViewInternal* _adView;

}

@property (nonatomic,retain) NSDate * interstitialOpenedTime;              //@synthesize interstitialOpenedTime=_interstitialOpenedTime - In the implementation block
@property (assign,nonatomic) BOOL isStatusBarHidden;                       //@synthesize isStatusBarHidden=_isStatusBarHidden - In the implementation block
@property (nonatomic,retain) FBAdViewInternal * adView;                    //@synthesize adView=_adView - In the implementation block
@property (nonatomic,copy) NSString * placementID;                         //@synthesize placementID=_placementID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)adViewDidLoad:(id)arg1 ;
-(void)setAdView:(FBAdViewInternal *)arg1 ;
-(void)loadAd;
-(FBAdViewInternal *)adView;
-(BOOL)showAdFromRootViewController:(id)arg1 ;
-(void)adViewDidClick:(id)arg1 ;
-(void)adView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)adViewWillLogImpression:(id)arg1 ;
-(void)setPlacementID:(NSString *)arg1 ;
-(NSString *)placementID;
-(void)loadAdFromMarkup:(id)arg1 activationCommand:(id)arg2 orientation:(long long)arg3 ;
-(BOOL)isAdValid;
-(BOOL)showAdFromRootViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIsStatusBarHidden:(BOOL)arg1 ;
-(void)setInterstitialOpenedTime:(NSDate *)arg1 ;
-(CGRect)frameForPresentationInWindow:(id)arg1 ;
-(void)exitInterstitial;
-(NSDate *)interstitialOpenedTime;
-(void)adViewWillClose:(id)arg1 ;
-(id)initWithPlacementID:(id)arg1 adData:(id)arg2 minViewability:(int)arg3 ;
-(void)dealloc;
-(BOOL)isStatusBarHidden;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end
