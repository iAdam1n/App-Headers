/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 1, 2016 at 6:29:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/97A55C60-C4F1-459B-870D-76E85F65D812/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/RFMBaseMediator.h>
#import <Gumtree/RFMPartnerBannerDelegate.h>
#import <Gumtree/RFMPartnerInterstitialDelegate.h>

@protocol RFMPartnerBannerDelegateRFMPartnerInterstitialDelegate;
@class RFMDispatchTimer, NSString;

@interface RFMPartnerMediator : RFMBaseMediator <RFMPartnerBannerDelegate, RFMPartnerInterstitialDelegate> {

	id<RFMPartnerBannerDelegate><RFMPartnerInterstitialDelegate> _delegate;
	unsigned long long _state;
	RFMDispatchTimer* _timer;

}

@property (assign,nonatomic,__weak) id<RFMPartnerBannerDelegate><RFMPartnerInterstitialDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) RFMDispatchTimer * timer;                                                                  //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) BOOL isInterstitial; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPredefined;
-(void)didDisplayAd:(id)arg1 ;
-(void)didDismissInterstitial;
-(void)didLoadAd:(id)arg1 webViewContent:(id)arg2 time:(id)arg3 ;
-(void)didFailToLoadAd:(id)arg1 errorMsg:(id)arg2 time:(id)arg3 ;
-(void)loadAdWithParams:(id)arg1 ;
-(void)stopLoadingAd;
-(void)requestAdWithSize:(CGSize)arg1 adInfo:(id)arg2 ;
-(void)didFailToLoadAdWithReason:(id)arg1 ;
-(void)willPresentFullScreenModal;
-(void)didPresentFullScreenModal;
-(void)willDismissFullScreenModal;
-(void)didDismissFullScreenModal;
-(void)didFinishLoadingAd:(id)arg1 ;
-(void)willDismissInterstitial;
-(void)didFailToDisplayAdWithReason:(id)arg1 ;
-(BOOL)isInterstitial;
-(id)viewControllerForPresentingModalView;
-(void)setDelegate:(id<RFMPartnerBannerDelegate><RFMPartnerInterstitialDelegate>)arg1 ;
-(void)dealloc;
-(id<RFMPartnerBannerDelegate><RFMPartnerInterstitialDelegate>)delegate;
-(unsigned long long)state;
-(void)setTimer:(RFMDispatchTimer *)arg1 ;
-(RFMDispatchTimer *)timer;
-(void)cancelRequest;
-(id)adView;
@end
