/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/AdMarvelThirdPartySDKHandler.h>
#import <UIKit/UIWebViewDelegate.h>
#import <SportyTrader/AdMarvelAsynchronousImageViewDelegate.h>

@class UIView, AdMarvelWebView, MPMoviePlayerController, AdMarvelFullScreenWebViewController, NSTimer, AdMarvelCloseButtonProperties, NSMutableArray, AdMarvelCustomVideoAdHandler, AdMarvelAudioRecordingManager, AdMarvelEmbeddedVideoAdHandler, NSString;

@interface AdMarvelWebViewHandler : AdMarvelThirdPartySDKHandler <UIWebViewDelegate, AdMarvelAsynchronousImageViewDelegate> {

	BOOL _webViewLoading;
	BOOL _webViewLoadingCount;
	BOOL _autoDetectionBlocked;
	BOOL _enableLinksWhenAutoDetectionBlocked;
	BOOL _restoreAutoDetection;
	BOOL _specialURLHandled;
	BOOL _loadingExpandableSeparately;
	BOOL _delayWebViewAdDisplay;
	BOOL _javascriptRefreshing;
	BOOL _adViewClicked;
	BOOL _inFullScreenMode;
	BOOL _displayingInterstitial;
	BOOL _useExtraViewForMiscNavigation;
	BOOL _adDisabledRotations;
	BOOL _displayingFullScreenModalView;
	BOOL _imageViewAdClicked;
	BOOL _viewingVideo;
	BOOL _permittedToUseMicrophone;
	BOOL _restrictBaseURL;
	BOOL _loadingAd;
	int _redirectCount;
	int _toolBarStatus;
	int _lockedOrientation;
	UIView* _minimizedWebViewParentView;
	AdMarvelWebView* _admarvelWebView;
	AdMarvelWebView* _expandedView;
	MPMoviePlayerController* _currentMoviePlayer;
	AdMarvelFullScreenWebViewController* _admarvelFullScreenWebViewController;
	AdMarvelWebView* _adMarvelFullScreenWebView;
	NSTimer* _adViewVisibilityCheckTimer;
	AdMarvelCloseButtonProperties* _closeButtonProperties;
	NSMutableArray* _fileDownloaders;
	AdMarvelCustomVideoAdHandler* _adMarvelCustomVideoAdHandler;
	AdMarvelAudioRecordingManager* _audioRecordingManager;
	AdMarvelEmbeddedVideoAdHandler* _embeddedVideoHandler;

}

@property (nonatomic,retain) AdMarvelWebView * admarvelWebView;                                                      //@synthesize admarvelWebView=_admarvelWebView - In the implementation block
@property (nonatomic,retain) AdMarvelWebView * expandedView;                                                         //@synthesize expandedView=_expandedView - In the implementation block
@property (nonatomic,retain) AdMarvelFullScreenWebViewController * admarvelFullScreenWebViewController;              //@synthesize admarvelFullScreenWebViewController=_admarvelFullScreenWebViewController - In the implementation block
@property (nonatomic,retain) AdMarvelWebView * adMarvelFullScreenWebView;                                            //@synthesize adMarvelFullScreenWebView=_adMarvelFullScreenWebView - In the implementation block
@property (nonatomic,retain) MPMoviePlayerController * currentMoviePlayer;                                           //@synthesize currentMoviePlayer=_currentMoviePlayer - In the implementation block
@property (nonatomic,retain) NSTimer * adViewVisibilityCheckTimer;                                                   //@synthesize adViewVisibilityCheckTimer=_adViewVisibilityCheckTimer - In the implementation block
@property (nonatomic,retain) AdMarvelCloseButtonProperties * closeButtonProperties;                                  //@synthesize closeButtonProperties=_closeButtonProperties - In the implementation block
@property (nonatomic,retain) NSMutableArray * fileDownloaders;                                                       //@synthesize fileDownloaders=_fileDownloaders - In the implementation block
@property (nonatomic,retain) AdMarvelAudioRecordingManager * audioRecordingManager;                                  //@synthesize audioRecordingManager=_audioRecordingManager - In the implementation block
@property (assign,nonatomic) BOOL loadingAd;                                                                         //@synthesize loadingAd=_loadingAd - In the implementation block
@property (assign,nonatomic) BOOL webViewLoading;                                                                    //@synthesize webViewLoading=_webViewLoading - In the implementation block
@property (assign,nonatomic) BOOL webViewLoadingCount;                                                               //@synthesize webViewLoadingCount=_webViewLoadingCount - In the implementation block
@property (assign,nonatomic) BOOL autoDetectionBlocked;                                                              //@synthesize autoDetectionBlocked=_autoDetectionBlocked - In the implementation block
@property (assign,nonatomic) BOOL enableLinksWhenAutoDetectionBlocked;                                               //@synthesize enableLinksWhenAutoDetectionBlocked=_enableLinksWhenAutoDetectionBlocked - In the implementation block
@property (assign,nonatomic) BOOL restoreAutoDetection;                                                              //@synthesize restoreAutoDetection=_restoreAutoDetection - In the implementation block
@property (assign,nonatomic) BOOL specialURLHandled;                                                                 //@synthesize specialURLHandled=_specialURLHandled - In the implementation block
@property (assign,nonatomic) BOOL loadingExpandableSeparately;                                                       //@synthesize loadingExpandableSeparately=_loadingExpandableSeparately - In the implementation block
@property (assign,nonatomic) BOOL permittedToUseMicrophone;                                                          //@synthesize permittedToUseMicrophone=_permittedToUseMicrophone - In the implementation block
@property (assign,nonatomic) BOOL delayWebViewAdDisplay;                                                             //@synthesize delayWebViewAdDisplay=_delayWebViewAdDisplay - In the implementation block
@property (assign,nonatomic) BOOL javascriptRefreshing;                                                              //@synthesize javascriptRefreshing=_javascriptRefreshing - In the implementation block
@property (assign,nonatomic) BOOL adViewClicked;                                                                     //@synthesize adViewClicked=_adViewClicked - In the implementation block
@property (assign,nonatomic) int redirectCount;                                                                      //@synthesize redirectCount=_redirectCount - In the implementation block
@property (assign,nonatomic) BOOL inFullScreenMode;                                                                  //@synthesize inFullScreenMode=_inFullScreenMode - In the implementation block
@property (assign,nonatomic) BOOL displayingInterstitial;                                                            //@synthesize displayingInterstitial=_displayingInterstitial - In the implementation block
@property (assign,nonatomic) BOOL useExtraViewForMiscNavigation;                                                     //@synthesize useExtraViewForMiscNavigation=_useExtraViewForMiscNavigation - In the implementation block
@property (assign,nonatomic) BOOL adDisabledRotations;                                                               //@synthesize adDisabledRotations=_adDisabledRotations - In the implementation block
@property (assign,nonatomic) BOOL displayingFullScreenModalView;                                                     //@synthesize displayingFullScreenModalView=_displayingFullScreenModalView - In the implementation block
@property (assign,nonatomic) BOOL imageViewAdClicked;                                                                //@synthesize imageViewAdClicked=_imageViewAdClicked - In the implementation block
@property (assign,nonatomic) BOOL viewingVideo;                                                                      //@synthesize viewingVideo=_viewingVideo - In the implementation block
@property (assign,nonatomic) BOOL restrictBaseURL;                                                                   //@synthesize restrictBaseURL=_restrictBaseURL - In the implementation block
@property (assign,nonatomic) int lockedOrientation;                                                                  //@synthesize lockedOrientation=_lockedOrientation - In the implementation block
@property (assign,nonatomic) int toolBarStatus;                                                                      //@synthesize toolBarStatus=_toolBarStatus - In the implementation block
@property (nonatomic,retain) AdMarvelCustomVideoAdHandler * adMarvelCustomVideoAdHandler;                            //@synthesize adMarvelCustomVideoAdHandler=_adMarvelCustomVideoAdHandler - In the implementation block
@property (nonatomic,retain) AdMarvelEmbeddedVideoAdHandler * embeddedVideoHandler;                                  //@synthesize embeddedVideoHandler=_embeddedVideoHandler - In the implementation block
@property (nonatomic,retain) UIView * minimizedWebViewParentView;                                                    //@synthesize minimizedWebViewParentView=_minimizedWebViewParentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAdExpanded;
-(void)collapseAd;
-(void)moviePlaybackDidFinish:(id)arg1 ;
-(BOOL)webViewLoading;
-(void)setWebViewLoading:(BOOL)arg1 ;
-(void)addCloseButton;
-(BOOL)requestBannerAd;
-(BOOL)requestInterstitialAd;
-(void)loadVideo;
-(void)setAdViewHidden:(BOOL)arg1 ;
-(void)setLoadingAd:(BOOL)arg1 ;
-(BOOL)loadingAd;
-(BOOL)isInFullScreenMode;
-(void)closeInterstitial;
-(void)expandAd;
-(void)handleImageViewAdViewClicked;
-(void)handleAdViewClicked;
-(void)openFullScreenView;
-(void)cleanupPreviousAdState;
-(void)collapseExpandedAd;
-(id)getBannerAdView;
-(void)setAdMarvelDelegate:(id)arg1 ;
-(void)performCleanup;
-(void)openFullScreenViewWithClickURL:(id)arg1 ;
-(int)openFullScreenViewWithClickURL:(id)arg1 disableAnimations:(BOOL)arg2 ;
-(id)initWithConfig:(id)arg1 delegate:(id)arg2 fullscreenDelegate:(id)arg3 ;
-(void)setDelayWebViewAdDisplay:(BOOL)arg1 ;
-(void)notifyDelegateOfAdClickOptionalEvent;
-(void)handleFullScreenWebViewClosedNotification;
-(void)handleInterstitialClosedNotification;
-(BOOL)displayInterstitialAd;
-(void)closeInterstitialWithAnimations:(BOOL)arg1 ;
-(void)closeFullScreenMode;
-(void)closeFullScreenViewAnimated:(BOOL)arg1 ;
-(void)handleAdDidExpandNotification;
-(void)handleAdDidCollapseNotification;
-(void)setImageViewAdClicked:(BOOL)arg1 ;
-(void)setViewingVideo:(BOOL)arg1 ;
-(void)handleInterstitialActivatedNotification;
-(void)checkAndTriggerClickToInstallEvent;
-(void)handleFullScreenMoviewViewActivatedNotification;
-(void)handleFullScreenMoviewViewClosedNotification;
-(void)handleFullScreenModalViewClosedNotification;
-(void)closeFullScreenView;
-(void)closeFullScreenViewFinished;
-(void)setInFullScreenMode:(BOOL)arg1 ;
-(void)handleFullScreenModalViewActivatedNotification;
-(void)handleSpecialURLhandledNotificationWithStatus:(int)arg1 ;
-(void)removeCloseButton;
-(void)updateCloseButtonLocation:(id)arg1 ;
-(BOOL)isCloseButtonPropertiesExists;
-(void)configureSDKCloseButton:(id)arg1 areaRequired:(BOOL)arg2 showButtonImage:(BOOL)arg3 forAdMarvelWebView:(id)arg4 ;
-(void)notifyErrorCallbackWithErrorMessage:(id)arg1 andErrorAction:(id)arg2 ;
-(void)notifyCreateCalendarEventCallbackWithAction:(int)arg1 ;
-(void)displayFullScreenVideoPlayerWithToolbar:(id)arg1 ;
-(BOOL)inAppBrowserIsOpen;
-(void)createFileDownloaderWithExternalURL:(id)arg1 targetFile:(id)arg2 identifier:(id)arg3 ;
-(void)createFileDownloaderWithExternalURL:(id)arg1 targetFile:(id)arg2 identifier:(id)arg3 timeToLive:(id)arg4 ;
-(void)permissionDeniedForRecordingWithError:(id)arg1 webView:(id)arg2 ;
-(void)permissionGrantedForRecordingWithParams:(id)arg1 andWebView:(id)arg2 ;
-(void)cleanupAudioRecordingManager;
-(BOOL)adDisabledRotations;
-(void)setAdDisabledRotations:(BOOL)arg1 ;
-(int)lockedOrientation;
-(void)setLockedOrientation:(int)arg1 ;
-(BOOL)displayingInterstitial;
-(void)setDisplayingInterstitial:(BOOL)arg1 ;
-(BOOL)viewingVideo;
-(BOOL)inFullScreenMode;
-(BOOL)adViewClicked;
-(BOOL)displayingFullScreenModalView;
-(void)setMinimizedWebViewParentView:(UIView *)arg1 ;
-(void)cleanupMinimizedWebView;
-(void)cleanupFullScreenWebView;
-(void)cleanupExpandedWebView;
-(void)setAdMarvelCustomVideoAdHandler:(AdMarvelCustomVideoAdHandler *)arg1 ;
-(void)setAdmarvelFullScreenWebViewController:(AdMarvelFullScreenWebViewController *)arg1 ;
-(NSMutableArray *)fileDownloaders;
-(void)setFileDownloaders:(NSMutableArray *)arg1 ;
-(void)setAdmarvelWebView:(AdMarvelWebView *)arg1 ;
-(void)setWebViewLoadingCount:(BOOL)arg1 ;
-(void)setJavascriptRefreshing:(BOOL)arg1 ;
-(void)setAdViewClicked:(BOOL)arg1 ;
-(void)setExpandedView:(AdMarvelWebView *)arg1 ;
-(void)setCloseButtonProperties:(AdMarvelCloseButtonProperties *)arg1 ;
-(void)setLoadingExpandableSeparately:(BOOL)arg1 ;
-(void)setAdMarvelFullScreenWebView:(AdMarvelWebView *)arg1 ;
-(void)setDisplayingFullScreenModalView:(BOOL)arg1 ;
-(void)setPermittedToUseMicrophone:(BOOL)arg1 ;
-(void)setAudioRecordingManager:(AdMarvelAudioRecordingManager *)arg1 ;
-(void)setEmbeddedVideoHandler:(AdMarvelEmbeddedVideoAdHandler *)arg1 ;
-(AdMarvelWebView *)adMarvelFullScreenWebView;
-(BOOL)createAndLoadAdMarvelWebView;
-(BOOL)useExtraViewForMiscNavigation;
-(BOOL)enableLinksWhenAutoDetectionBlocked;
-(AdMarvelCustomVideoAdHandler *)adMarvelCustomVideoAdHandler;
-(MPMoviePlayerController *)currentMoviePlayer;
-(BOOL)restoreAutoDetection;
-(id)preProcessAdHTML:(id)arg1 ;
-(void)setCurrentMoviePlayer:(MPMoviePlayerController *)arg1 ;
-(void)movieWillExitFullscreen:(id)arg1 ;
-(void)removeMovieNotifications:(id)arg1 ;
-(BOOL)restrictBaseURL;
-(void)restoreAutoDetectionFlag;
-(void)setSpecialURLHandled:(BOOL)arg1 ;
-(void)setupMovieNotifications:(id)arg1 ;
-(BOOL)javascriptRefreshing;
-(BOOL)imageViewAdClicked;
-(BOOL)loadingExpandableSeparately;
-(BOOL)webViewLoadingCount;
-(UIView *)minimizedWebViewParentView;
-(AdMarvelCloseButtonProperties *)closeButtonProperties;
-(void)notifyCollapseEvent:(id)arg1 webView:(id)arg2 ;
-(BOOL)specialURLHandled;
-(void)sendInAppBrowserCloseActionNotification;
-(BOOL)hasAppAllowedAdsToAutoExpandOrOpen;
-(void)updateCloseButtonWithTarget:(id)arg1 closeAction:(SEL)arg2 relativeToWebView:(id)arg3 ;
-(void)sendStorePictureCallbackToCreative:(id)arg1 ;
-(void)setMicrophonePermission:(BOOL)arg1 forAdType:(int)arg2 ;
-(void)fileDownloadFailed:(id)arg1 ;
-(void)fileDownloadFinished:(id)arg1 ;
-(void)asyncImageViewLoaded:(id)arg1 ;
-(void)asyncImageViewFailed:(id)arg1 ;
-(void)setUseExtraViewForMiscNavigation:(BOOL)arg1 ;
-(void)setAutoDetectionBlocked:(BOOL)arg1 ;
-(void)setEnableLinksWhenAutoDetectionBlocked:(BOOL)arg1 ;
-(NSTimer *)adViewVisibilityCheckTimer;
-(void)setAdViewVisibilityCheckTimer:(NSTimer *)arg1 ;
-(void)setToolBarStatus:(int)arg1 ;
-(int)toolBarStatus;
-(BOOL)shouldAllowAdToOpenOrExpand;
-(BOOL)autoDetectionBlocked;
-(void)setRestoreAutoDetection:(BOOL)arg1 ;
-(void)setRestrictBaseURL:(BOOL)arg1 ;
-(BOOL)permittedToUseMicrophone;
-(AdMarvelAudioRecordingManager *)audioRecordingManager;
-(void)handleMaximizeForWebView:(id)arg1 withParameters:(id)arg2 ;
-(void)expandWebView:(id)arg1 withParameters:(id)arg2 ;
-(AdMarvelWebView *)admarvelWebView;
-(void)collapseExpandedAd:(id)arg1 forceClosed:(BOOL)arg2 ;
-(AdMarvelFullScreenWebViewController *)admarvelFullScreenWebViewController;
-(void)updateCustomClickRegionsOnWebView:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)delayWebViewAdDisplay;
-(void)webViewAdFinishedLoading:(id)arg1 ;
-(AdMarvelWebView *)expandedView;
-(AdMarvelEmbeddedVideoAdHandler *)embeddedVideoHandler;
-(void)dealloc;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)setRedirectCount:(int)arg1 ;
-(int)redirectCount;
-(void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(id)getDescription;
@end

