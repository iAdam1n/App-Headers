/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@class NSMutableDictionary;

@interface MPInstanceProvider : NSObject {

	NSMutableDictionary* _singletons;

}

@property (nonatomic,retain) NSMutableDictionary * singletons;              //@synthesize singletons=_singletons - In the implementation block
+(id)sharedProvider;
-(id)buildFBAdViewWithPlacementID:(id)arg1 size:(FBAdSize)arg2 rootViewController:(id)arg3 delegate:(id)arg4 ;
-(id)buildGADBannerViewWithFrame:(CGRect)arg1 ;
-(id)buildGADBannerRequest;
-(id)buildRewardedVideoCustomEventFromCustomClass:(Class)arg1 delegate:(id)arg2 ;
-(id)buildMPMRAIDInterstitialViewControllerWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(id)buildMRImageDownloaderWithDelegate:(id)arg1 ;
-(id)buildStreamAdPlacerWithViewController:(id)arg1 adPositioning:(id)arg2 rendererConfigurations:(id)arg3 ;
-(id)buildMPAdWebViewAgentWithAdWebViewFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(id)buildInterstitialMRControllerWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(id)buildBannerAdapterForConfiguration:(id)arg1 delegate:(id)arg2 ;
-(id)buildEKEventEditViewControllerWithEditViewDelegate:(id)arg1 ;
-(id)buildBannerCustomEventFromCustomClass:(Class)arg1 delegate:(id)arg2 ;
-(id)buildMRCalendarManagerWithDelegate:(id)arg1 ;
-(id)buildMRPictureManagerWithDelegate:(id)arg1 ;
-(id)buildMRVideoPlayerManagerWithDelegate:(id)arg1 ;
-(id)buildMPBannerAdManagerWithDelegate:(id)arg1 ;
-(void)setSingletons:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)singletons;
-(id)singletonForClass:(Class)arg1 provider:(/*^block*/id)arg2 ;
-(id)buildInterstitialCustomEventFromCustomClass:(Class)arg1 delegate:(id)arg2 ;
-(id)buildRewardedVideoAdapterWithDelegate:(id)arg1 ;
-(id)buildBannerMRControllerWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(id)buildNativeCustomEventFromCustomClass:(Class)arg1 delegate:(id)arg2 ;
-(id)singletonForClass:(Class)arg1 provider:(/*^block*/id)arg2 context:(id)arg3 ;
-(id)buildMRControllerWithFrame:(CGRect)arg1 placementType:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)buildEKEventStore;
-(id)buildMPInterstitialAdManagerWithDelegate:(id)arg1 ;
-(id)buildInterstitialAdapterForConfiguration:(id)arg1 delegate:(id)arg2 ;
-(id)buildMPHTMLInterstitialViewControllerWithDelegate:(id)arg1 orientationType:(unsigned long long)arg2 ;
-(id)buildRewardedVideoAdManagerWithAdUnitID:(id)arg1 delegate:(id)arg2 ;
-(id)buildMPAdWebViewWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(id)buildMRAIDMPClosableViewWithFrame:(CGRect)arg1 webView:(id)arg2 delegate:(id)arg3 ;
-(id)buildMRBundleManager;
-(id)buildMRBridgeWithWebView:(id)arg1 delegate:(id)arg2 ;
-(id)buildUIWebViewWithFrame:(CGRect)arg1 ;
-(id)buildMPMoviePlayerViewControllerWithURL:(id)arg1 ;
-(id)buildMRNativeCommandHandlerWithDelegate:(id)arg1 ;
-(id)buildNativeAdSourceWithDelegate:(id)arg1 ;
-(id)buildNativePositioningSource;
-(id)buildStreamAdPlacementDataWithPositioning:(id)arg1 ;
-(id)init;
@end

