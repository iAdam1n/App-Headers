/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/MPInterstitialViewController.h>
#import <Reddit/MRControllerDelegate.h>
#import <Reddit/MPForceableOrientationProtocol.h>

@class MPAdConfiguration, MRController, UIView, NSString;

@interface MPMRAIDInterstitialViewController : MPInterstitialViewController <MRControllerDelegate, MPForceableOrientationProtocol> {

	MPAdConfiguration* _configuration;
	MRController* _mraidController;
	UIView* _interstitialView;
	unsigned long long _supportedOrientationMask;

}

@property (nonatomic,retain) MPAdConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) MRController * mraidController;                           //@synthesize mraidController=_mraidController - In the implementation block
@property (nonatomic,retain) UIView * interstitialView;                                //@synthesize interstitialView=_interstitialView - In the implementation block
@property (assign,nonatomic) unsigned long long supportedOrientationMask;              //@synthesize supportedOrientationMask=_supportedOrientationMask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForPresentingModalView;
-(id)initWithAdConfiguration:(id)arg1 ;
-(id)adUnitId;
-(unsigned long long)supportedOrientationMask;
-(void)setSupportedOrientationMask:(unsigned long long)arg1 ;
-(id)adConfiguration;
-(void)adDidClose:(id)arg1 ;
-(void)willPresentInterstitial;
-(void)didPresentInterstitial;
-(void)willDismissInterstitial;
-(void)didDismissInterstitial;
-(void)setMraidController:(MRController *)arg1 ;
-(MRController *)mraidController;
-(void)appShouldSuspendForAd:(id)arg1 ;
-(void)appShouldResumeFromAd:(id)arg1 ;
-(void)adDidLoad:(id)arg1 ;
-(void)adDidFailToLoad:(id)arg1 ;
-(void)adWillClose:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setConfiguration:(MPAdConfiguration *)arg1 ;
-(id)location;
-(MPAdConfiguration *)configuration;
-(void)startLoading;
-(UIView *)interstitialView;
-(void)setInterstitialView:(UIView *)arg1 ;
@end

