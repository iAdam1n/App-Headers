/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <SportyTrader/IFlurryAdNetworkConnector.h>
#import <SportyTrader/IFlurryAdWebViewLoaderConnector.h>
#import <SportyTrader/IFlurryAdVideoPlayerConnector.h>
#import <SportyTrader/IFlurryEventControllerHandler.h>
#import <UIKit/UIWebViewDelegate.h>
#import <SportyTrader/FlurryActionDelegate.h>
#import <SportyTrader/IFlurryAdViewabilityTrackerConnector.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, UIView, NSString, NSMutableArray, FlurryAdFrame, FlurryVideoPlayer, FlurryAdNetworkBasePlugin, UIActivityIndicatorView, UITextView, NSDictionary, UIViewController, FlurryAdViewState, FlurryAdWebViewLoader, NSTimer, NSURL, FlurryCachedAsset, FlurryAdManager, UIWebView;

@interface FlurryAd : UIView <SKStoreProductViewControllerDelegate, IFlurryAdNetworkConnector, IFlurryAdWebViewLoaderConnector, IFlurryAdVideoPlayerConnector, IFlurryEventControllerHandler, UIWebViewDelegate, FlurryActionDelegate, IFlurryAdViewabilityTrackerConnector, UIAlertViewDelegate> {

	UIView* _parentView;
	NSString* _space;
	NSMutableArray* _activeAdUnitsList;
	NSString* _webViewGuid;
	NSString* _currentOrientation;
	FlurryAdFrame* _adFrame;
	FlurryVideoPlayer* _videoPlayer;
	FlurryAdNetworkBasePlugin* _networkPlugin;
	UIAlertView* _alertView;
	UIView* _loadingView;
	UIActivityIndicatorView* _spinner;
	UITextView* _loadingTextView;
	NSDictionary* _nextAdFrameWithDelayParams;
	BOOL _refreshTimerPaused;
	long long _notificationFlag;
	BOOL _webViewPrepared;
	BOOL _readyForDisplay;
	BOOL _displayWhenReady;
	BOOL _adRendered;
	long long _initialOrientation;
	BOOL _isLoadingAdComponents;
	BOOL _appStoreInvoked;
	BOOL _activelyRespondingToAction;
	BOOL _tracked;
	BOOL _invalidated;
	int _clickActionState;
	UIViewController* _parentViewController;
	FlurryAdViewState* _adViewState;
	FlurryAdWebViewLoader* _webViewLoader;
	NSTimer* _loadingViewTimer;
	NSURL* _itunesURL;
	FlurryCachedAsset* _cachedAsset;
	UIViewController* _presentingViewController;
	FlurryAdManager* _adManager;
	FlurryAdWebViewLoader* _previousWebViewLoader;

}

@property (nonatomic,retain) NSMutableArray * activeAdUnitsList;                         //@synthesize activeAdUnitsList=_activeAdUnitsList - In the implementation block
@property (nonatomic,retain) NSString * webviewGuid;                                     //@synthesize webViewGuid=_webViewGuid - In the implementation block
@property (nonatomic,retain) NSString * currentOrientation;                              //@synthesize currentOrientation=_currentOrientation - In the implementation block
@property (nonatomic,retain) FlurryVideoPlayer * videoPlayer;                            //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) FlurryAdNetworkBasePlugin * networkPlugin;                  //@synthesize networkPlugin=_networkPlugin - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                                       //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                          //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UITextView * loadingTextView;                               //@synthesize loadingTextView=_loadingTextView - In the implementation block
@property (nonatomic,retain) NSDictionary * nextAdFrameWithDelayParams;                  //@synthesize nextAdFrameWithDelayParams=_nextAdFrameWithDelayParams - In the implementation block
@property (assign,nonatomic) BOOL refreshTimerPaused;                                    //@synthesize refreshTimerPaused=_refreshTimerPaused - In the implementation block
@property (assign,nonatomic) BOOL readyForDisplay;                                       //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (assign,nonatomic) BOOL webViewPrepared;                                       //@synthesize webViewPrepared=_webViewPrepared - In the implementation block
@property (nonatomic,retain) UIViewController * parentViewController;                    //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) UIView * parentView;                                        //@synthesize parentView=_parentView - In the implementation block
@property (nonatomic,retain) FlurryAdWebViewLoader * webViewLoader;                      //@synthesize webViewLoader=_webViewLoader - In the implementation block
@property (nonatomic,retain) FlurryAdWebViewLoader * previousWebViewLoader;              //@synthesize previousWebViewLoader=_previousWebViewLoader - In the implementation block
@property (nonatomic,retain) FlurryAdViewState * adViewState;                            //@synthesize adViewState=_adViewState - In the implementation block
@property (nonatomic,retain) NSTimer * loadingViewTimer;                                 //@synthesize loadingViewTimer=_loadingViewTimer - In the implementation block
@property (nonatomic,retain) NSURL * itunesURL;                                          //@synthesize itunesURL=_itunesURL - In the implementation block
@property (nonatomic,retain) FlurryCachedAsset * cachedAsset;                            //@synthesize cachedAsset=_cachedAsset - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                           //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic) int clickActionState;                                       //@synthesize clickActionState=_clickActionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) UIWebView * webView; 
@property (assign,nonatomic) UIViewController * presentingViewController;                //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) BOOL adRendered;                                            //@synthesize adRendered=_adRendered - In the implementation block
@property (assign,nonatomic) BOOL displayWhenReady;                                      //@synthesize displayWhenReady=_displayWhenReady - In the implementation block
@property (assign,nonatomic) long long notificationFlag;                                 //@synthesize notificationFlag=_notificationFlag - In the implementation block
@property (assign,nonatomic) BOOL isLoadingAdComponents;                                 //@synthesize isLoadingAdComponents=_isLoadingAdComponents - In the implementation block
@property (nonatomic,retain) NSString * space;                                           //@synthesize space=_space - In the implementation block
@property (nonatomic,retain) FlurryAdFrame * adFrame;                                    //@synthesize adFrame=_adFrame - In the implementation block
@property (assign,nonatomic) BOOL mraidAdLoaded; 
@property (assign,nonatomic) BOOL appStoreInvoked;                                       //@synthesize appStoreInvoked=_appStoreInvoked - In the implementation block
@property (assign,nonatomic) BOOL activelyRespondingToAction;                            //@synthesize activelyRespondingToAction=_activelyRespondingToAction - In the implementation block
@property (assign,nonatomic) long long initialOrientation;                               //@synthesize initialOrientation=_initialOrientation - In the implementation block
@property (assign,nonatomic) FlurryAdManager * adManager;                                //@synthesize adManager=_adManager - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                                    //@synthesize alertView=_alertView - In the implementation block
@property (assign,nonatomic) BOOL tracked;                                               //@synthesize tracked=_tracked - In the implementation block
+(int)getAdType:(id)arg1 ;
+(BOOL)isAdTypeBanner:(id)arg1 ;
-(FlurryAdManager *)adManager;
-(void)setAdManager:(FlurryAdManager *)arg1 ;
-(id)initWithViewContainer:(id)arg1 adSpace:(id)arg2 adManager:(id)arg3 ;
-(void)addAdUnit:(id)arg1 ;
-(void)setNotificationFlag:(long long)arg1 ;
-(void)setDisplayWhenReady:(BOOL)arg1 ;
-(BOOL)prepareAdForDisplay:(id*)arg1 ;
-(long long)notificationFlag;
-(BOOL)adRendered;
-(BOOL)displayWhenReady;
-(id)activeAdUnit;
-(BOOL)canBeRefreshed;
-(FlurryAdFrame *)adFrame;
-(BOOL)activeFrameTakeover;
-(UIView *)parentView;
-(id)parentViewContainersView;
-(BOOL)isGuidActive:(id)arg1 ;
-(void)updateViewContainer:(id)arg1 ;
-(void)removeAd;
-(void)viewIsNowVisibleForDuration:(double)arg1 ;
-(void)processClick;
-(void)setAdRendered:(BOOL)arg1 ;
-(void)processRendered;
-(BOOL)processRenderFailure:(id)arg1 sendReport:(BOOL)arg2 ;
-(BOOL)processAdNetworkErrorAfterAdRendered;
-(void)externalAdDidClose;
-(void)setParentView:(UIView *)arg1 ;
-(void)reportCurrentViewStateToAdAsExpanded;
-(void)reportCurrentViewStateToAdAsDefault;
-(void)videoDidFinish:(id)arg1 ;
-(void)videoDidNotFinish:(id)arg1 ;
-(void)removeLoadingView;
-(UITextView *)loadingTextView;
-(void)setLoadingTextView:(UITextView *)arg1 ;
-(void)reportCurrentViewStateToAd;
-(void)alwaysSetFrame:(CGRect)arg1 ;
-(BOOL)processCollapseAction;
-(BOOL)processExpandAction:(id)arg1 ;
-(void)setActivelyRespondingToAction:(BOOL)arg1 ;
-(void)externalAdViewDidCloseDismissAd:(BOOL)arg1 ;
-(BOOL)openAppUrl:(id)arg1 fromExWebView:(BOOL)arg2 ;
-(void)externalAdViewDidFinishLoad;
-(void)externalAdViewDidFailLoadWithError:(id)arg1 ;
-(BOOL)isShownModallyForViewController;
-(BOOL)mraidAdLoaded;
-(NSTimer *)loadingViewTimer;
-(void)setLoadingViewTimer:(NSTimer *)arg1 ;
-(void)linkProcessed:(id)arg1 forAdAction:(id)arg2 sendYCookies:(BOOL)arg3 ;
-(void)linkNotProcessed:(id)arg1 forAdAction:(id)arg2 ;
-(void)setAdFrame:(FlurryAdFrame *)arg1 ;
-(void)setTracked:(BOOL)arg1 ;
-(BOOL)getFrameViewedAndTrackedForVideoPlay;
-(void)viewPartiallyOutOfView;
-(void)setFrameViewedAndTrackedForVideoPlay:(BOOL)arg1 ;
-(void)endTrackingForVideoPlay;
-(BOOL)processMRAIDCloseEvent;
-(void)removeTakeoverWindows;
-(void)updateToOrientationOnRotation;
-(void)processAdEvent:(int)arg1 ;
-(void)presentAlertViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)openUrlInNativeBrowser:(id)arg1 params:(id)arg2 ;
-(void)loadAdFrameWithDelay:(id)arg1 frameOffset:(id)arg2 ;
-(void)resumeFrame;
-(BOOL)loadAdFrame:(id)arg1 error:(id*)arg2 ;
-(id)parentViewContainer;
-(void)setIsLoadingAdComponents:(BOOL)arg1 ;
-(id)appendAdUnits:(int)arg1 maximum:(int)arg2 ;
-(void)windowOnLoadCalledAction;
-(void)openSKAppstore:(id)arg1 ;
-(FlurryAdWebViewLoader *)previousWebViewLoader;
-(void)setPreviousWebViewLoader:(FlurryAdWebViewLoader *)arg1 ;
-(void)setCurrentOrientation:(NSString *)arg1 ;
-(void)setNextAdFrameWithDelayParams:(NSDictionary *)arg1 ;
-(void)setAdViewState:(FlurryAdViewState *)arg1 ;
-(void)setWebviewGuid:(NSString *)arg1 ;
-(void)setActiveAdUnitsList:(NSMutableArray *)arg1 ;
-(FlurryAdWebViewLoader *)webViewLoader;
-(void)setWebViewLoader:(FlurryAdWebViewLoader *)arg1 ;
-(void)handleHeartBeat;
-(void)setRefreshTimerPaused:(BOOL)arg1 ;
-(void)setClickActionState:(int)arg1 ;
-(void)setItunesURL:(NSURL *)arg1 ;
-(void)checkAdLocation;
-(FlurryAdViewState *)adViewState;
-(BOOL)isLoadingAdComponents;
-(NSString *)webviewGuid;
-(BOOL)processVerificationFailure:(id)arg1 ;
-(BOOL)loadNativeAdFrame:(id)arg1 error:(id*)arg2 ;
-(void)setWebViewPrepared:(BOOL)arg1 ;
-(void)cleanPreviousView;
-(BOOL)processRenderFailedError:(id)arg1 ;
-(void)openUrlInExternalWebView:(id)arg1 ;
-(void)processWebViewFullLoadComplete;
-(BOOL)displayAdFrame:(id*)arg1 ;
-(BOOL)webViewPrepared;
-(BOOL)disablePreRendering;
-(void)notifyReadyForDisplay;
-(void)setMraidAdLoaded:(BOOL)arg1 ;
-(void)adjustAdFrame;
-(void)setNetworkPlugin:(FlurryAdNetworkBasePlugin *)arg1 ;
-(FlurryAdNetworkBasePlugin *)networkPlugin;
-(void)prepareWebView;
-(void)prepareVideoView;
-(void)prepareNetworkView;
-(void)renderWebView;
-(void)renderVideoView;
-(void)renderNetworkView;
-(void)renderNonPreRenderedWebView;
-(void)renderPreRenderedWebview;
-(void)setCachedAsset:(FlurryCachedAsset *)arg1 ;
-(FlurryCachedAsset *)cachedAsset;
-(void)preLoadSKAppStore:(id)arg1 ;
-(void)reportClick;
-(void)nextAdFrameWithDelay:(id)arg1 ;
-(NSDictionary *)nextAdFrameWithDelayParams;
-(BOOL)refreshTimerPaused;
-(void)reportSpaceDidFailToExpandWithError:(id)arg1 ;
-(void)showAdAlert:(id)arg1 ;
-(void)reportClickFailedWithError:(id)arg1 ;
-(void)reportSpaceWillCollapse;
-(void)reportSpaceDidCollapse;
-(void)externalAdDidCloseForceDismissUI:(BOOL)arg1 ;
-(id)parseAppIdFromItunesUrl:(id)arg1 ;
-(BOOL)activelyRespondingToAction;
-(NSMutableArray *)activeAdUnitsList;
-(BOOL)processWebLoaderEvent:(id)arg1 paramsString:(id)arg2 params:(id)arg3 ;
-(id)allAdUnitsList;
-(void)reportSpaceWillLeaveApplication;
-(void)applyProcessedParams:(id)arg1 forEvent:(id)arg2 ;
-(void)processAdWillClose;
-(void)desubscribeFromSKAppStoreFlurryNotifications;
-(void)setAppStoreInvoked:(BOOL)arg1 ;
-(NSURL *)itunesURL;
-(void)skAppStoreWillDismiss;
-(void)skAppStoreDidDismiss;
-(void)skAppStoreDidLoad;
-(void)skAppStoreDidFailToLoad;
-(void)subscribeToSKAppStoreFlurryNotifications;
-(void)reportSpaceWillExpand;
-(int)clickActionState;
-(BOOL)appStoreInvoked;
-(BOOL)setActiveAdUnit:(id)arg1 ;
-(BOOL)isWebViewNewAdRequest:(BOOL)arg1 ;
-(void)videoDidFailToLoad:(id)arg1 ;
-(void)setReadyForDisplay:(BOOL)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)invalidate;
-(UIViewController *)presentingViewController;
-(UIViewController *)parentViewController;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(UIWebView *)webView;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)prepareView;
-(BOOL)readyForDisplay;
-(UIView *)loadingView;
-(long long)initialOrientation;
-(void)setInitialOrientation:(long long)arg1 ;
-(FlurryVideoPlayer *)videoPlayer;
-(void)setVideoPlayer:(FlurryVideoPlayer *)arg1 ;
-(void)showLoadingView;
-(NSString *)currentOrientation;
-(void)resumeSession;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
-(BOOL)tracked;
-(void)renderView;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(BOOL)isExpired;
-(void)setLoadingView:(UIView *)arg1 ;
-(void)setSpace:(NSString *)arg1 ;
-(NSString *)space;
@end

