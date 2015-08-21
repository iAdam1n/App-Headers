/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/MNGBaseBannerAdapter.h>
#import <SportyTrader/MNGPrivateBannerCustomEventDelegate.h>

@class MNGBannerCustomEvent, MNGAdConfiguration, NSString;

@interface MNGBannerCustomEventAdapter : MNGBaseBannerAdapter <MNGPrivateBannerCustomEventDelegate> {

	BOOL _hasTrackedImpression;
	BOOL _hasTrackedClick;
	MNGBannerCustomEvent* _bannerCustomEvent;
	MNGAdConfiguration* _configuration;

}

@property (nonatomic,retain) MNGBannerCustomEvent * bannerCustomEvent;              //@synthesize bannerCustomEvent=_bannerCustomEvent - In the implementation block
@property (nonatomic,retain) MNGAdConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL hasTrackedImpression;                             //@synthesize hasTrackedImpression=_hasTrackedImpression - In the implementation block
@property (assign,nonatomic) BOOL hasTrackedClick;                                  //@synthesize hasTrackedClick=_hasTrackedClick - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForPresentingModalView;
-(id)bannerDelegate;
-(void)unregisterDelegate;
-(id)adUnitId;
-(void)didDisplayAd;
-(MNGBannerCustomEvent *)bannerCustomEvent;
-(void)setBannerCustomEvent:(MNGBannerCustomEvent *)arg1 ;
-(BOOL)hasTrackedImpression;
-(void)setHasTrackedImpression:(BOOL)arg1 ;
-(void)trackClickOnce;
-(BOOL)hasTrackedClick;
-(void)setHasTrackedClick:(BOOL)arg1 ;
-(void)bannerCustomEvent:(id)arg1 didLoadAd:(id)arg2 ;
-(void)bannerCustomEvent:(id)arg1 didFailToLoadAdWithError:(id)arg2 ;
-(void)bannerCustomEventWillBeginAction:(id)arg1 ;
-(void)bannerCustomEventDidFinishAction:(id)arg1 ;
-(void)bannerCustomEventWillLeaveApplication:(id)arg1 ;
-(void)getAdWithConfiguration:(id)arg1 containerSize:(CGSize)arg2 ;
-(void)dealloc;
-(void)setConfiguration:(MNGAdConfiguration *)arg1 ;
-(void)rotateToOrientation:(long long)arg1 ;
-(id)location;
-(MNGAdConfiguration *)configuration;
@end

