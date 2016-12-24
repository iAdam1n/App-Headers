/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/AdMarvelThirdPartySDKHandler.h>

@class AdMarvelMovieView, AdMarvelWebViewHandler, NSMutableDictionary;

@interface AdMarvelCustomVideoAdHandler : AdMarvelThirdPartySDKHandler {

	BOOL _adMarvelWebViewHandlerRetainedBySelf;
	AdMarvelMovieView* _adMarvelMovieView;
	AdMarvelWebViewHandler* _adMarvelWebViewHandler;
	NSMutableDictionary* _customAd;

}

@property (nonatomic,retain) AdMarvelMovieView * adMarvelMovieView;                        //@synthesize adMarvelMovieView=_adMarvelMovieView - In the implementation block
@property (assign,nonatomic) AdMarvelWebViewHandler * adMarvelWebViewHandler;              //@synthesize adMarvelWebViewHandler=_adMarvelWebViewHandler - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customAd;                               //@synthesize customAd=_customAd - In the implementation block
@property (assign,nonatomic) BOOL adMarvelWebViewHandlerRetainedBySelf;                    //@synthesize adMarvelWebViewHandlerRetainedBySelf=_adMarvelWebViewHandlerRetainedBySelf - In the implementation block
-(BOOL)requestBannerAd;
-(BOOL)requestInterstitialAd;
-(void)closeInterstitial;
-(id)getBannerAdView;
-(int)openFullScreenViewWithClickURL:(id)arg1 disableAnimations:(BOOL)arg2 ;
-(void)setCustomAd:(NSMutableDictionary *)arg1 ;
-(BOOL)displayInterstitialAd;
-(void)closeInterstitialWithAnimations:(BOOL)arg1 ;
-(void)closeFullScreenMode;
-(void)handleFullScreenModalViewClosedNotification;
-(void)openFullScreenVideoOnLoadComplete;
-(void)closeFullScreenVideo;
-(void)handleFullScreenModalViewActivatedNotification;
-(void)displayFullScreenVideoPlayerWithToolbar:(id)arg1 ;
-(BOOL)inAppBrowserIsOpen;
-(void)removeAllTrackersAndResetMoviePlayerForForceFullClose;
-(AdMarvelMovieView *)adMarvelMovieView;
-(void)setAdMarvelWebViewHandler:(AdMarvelWebViewHandler *)arg1 ;
-(AdMarvelWebViewHandler *)adMarvelWebViewHandler;
-(void)cleanupMoviewView;
-(void)setAdMarvelMovieView:(AdMarvelMovieView *)arg1 ;
-(BOOL)createAdMarvelCustomMovieView;
-(BOOL)adMarvelWebViewHandlerRetainedBySelf;
-(void)setAdMarvelWebViewHandlerRetainedBySelf:(BOOL)arg1 ;
-(NSMutableDictionary *)customAd;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)getDescription;
@end
