/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/MPBaseBannerAdapter.h>
#import <SolitaireFree/MPPrivateBannerCustomEventDelegate.h>

@class MPBannerCustomEvent, MPAdConfiguration, NSString;

@interface MPBannerCustomEventAdapter : MPBaseBannerAdapter <MPPrivateBannerCustomEventDelegate> {

	BOOL _hasTrackedImpression;
	BOOL _hasTrackedClick;
	MPBannerCustomEvent* _bannerCustomEvent;
	MPAdConfiguration* _configuration;

}

@property (nonatomic,retain) MPBannerCustomEvent * bannerCustomEvent;              //@synthesize bannerCustomEvent=_bannerCustomEvent - In the implementation block
@property (nonatomic,retain) MPAdConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL hasTrackedImpression;                            //@synthesize hasTrackedImpression=_hasTrackedImpression - In the implementation block
@property (assign,nonatomic) BOOL hasTrackedClick;                                 //@synthesize hasTrackedClick=_hasTrackedClick - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForPresentingModalView;
-(void)unregisterDelegate;
-(id)adUnitId;
-(BOOL)hasTrackedImpression;
-(void)setHasTrackedImpression:(BOOL)arg1 ;
-(BOOL)hasTrackedClick;
-(void)setHasTrackedClick:(BOOL)arg1 ;
-(void)bannerCustomEvent:(id)arg1 didLoadAd:(id)arg2 ;
-(void)bannerCustomEvent:(id)arg1 didFailToLoadAdWithError:(id)arg2 ;
-(void)bannerCustomEventWillBeginAction:(id)arg1 ;
-(void)bannerCustomEventDidFinishAction:(id)arg1 ;
-(void)bannerCustomEventWillLeaveApplication:(id)arg1 ;
-(void)didDisplayAd;
-(MPBannerCustomEvent *)bannerCustomEvent;
-(void)setBannerCustomEvent:(MPBannerCustomEvent *)arg1 ;
-(id)bannerDelegate;
-(void)trackClickOnce;
-(void)getAdWithConfiguration:(id)arg1 containerSize:(CGSize)arg2 ;
-(void)setConfiguration:(MPAdConfiguration *)arg1 ;
-(void)rotateToOrientation:(long long)arg1 ;
-(id)location;
-(MPAdConfiguration *)configuration;
@end
