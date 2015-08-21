/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)closeInterstitial;
-(id)getBannerAdView;
-(int)openFullScreenViewWithClickURL:(id)arg1 disableAnimations:(BOOL)arg2 ;
-(BOOL)requestInterstitialAd;
-(BOOL)requestBannerAd;
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
-(id)getDescription;
-(AdMarvelWebViewHandler *)adMarvelWebViewHandler;
-(void)cleanupMoviewView;
-(void)setAdMarvelMovieView:(AdMarvelMovieView *)arg1 ;
-(BOOL)createAdMarvelCustomMovieView;
-(BOOL)adMarvelWebViewHandlerRetainedBySelf;
-(void)setAdMarvelWebViewHandlerRetainedBySelf:(BOOL)arg1 ;
-(NSMutableDictionary *)customAd;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
@end
