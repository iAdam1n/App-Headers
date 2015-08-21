/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBAnimatedProgressBarViewDelegate.h>
#import <Messenger/FBFullScreenErrorViewDelegate.h>
#import <Messenger/FBMobileCanvasDialog.h>
#import <Messenger/FBNuxBannerControllerDelegate.h>
#import <Messenger/FBPresentableViewController.h>
#import <Messenger/FBWebAppLinkBannerViewControllerDelegate.h>
#import <Messenger/FBWebNativeThirdPartyURLControllerDelegate.h>
#import <Messenger/FBWebToolbarViewDelegate.h>
#import <Messenger/NJKWebViewProgressDelegate.h>
#import <Messenger/NSURLConnectionDelegate.h>
#import <Messenger/NSUserActivityDelegate.h>
#import <Messenger/PKAddPassesViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/ZRTariffedUxSentryDelegate.h>

@protocol FBWebViewControllerDelegate, FBModalWebFlowDelegate, FBWebView, FBWebViewLinkHandler, FBNuxBannerViewController;
@class NSURLRequest, NSTimer, UIBarButtonItem, UIActionSheet, FBInsetWrappingView, UIView, FBWebToolbarView, NSURL, FBWebRedirectTracker, FBSystemMoviePlayerAudioSessionAdaptor, FBWebViewRequestLoader, FBWebAppLinkBannerViewController, FBScenePath, FBUserSession, FBWebAppLink, NSString, FBAnimatedProgressBarView, UIColor, UIToolbar, FBWebNativeThirdPartyURLController, FBExceptionHandler, FBBrowserAnalytics, PKPass, NSURLConnection, NSMutableData, FBPopoverInfo, FBExperimentManager, FBContentInsetTracker, NJKWebViewProgress, FBMobileCanvasWilde, UIViewController;

@interface FBWebViewController : UIViewController <FBAnimatedProgressBarViewDelegate, FBFullScreenErrorViewDelegate, FBMobileCanvasDialog, FBNuxBannerControllerDelegate, FBPresentableViewController, FBWebAppLinkBannerViewControllerDelegate, FBWebNativeThirdPartyURLControllerDelegate, FBWebToolbarViewDelegate, NJKWebViewProgressDelegate, NSURLConnectionDelegate, NSUserActivityDelegate, PKAddPassesViewControllerDelegate, UIActionSheetDelegate, UIScrollViewDelegate, ZRTariffedUxSentryDelegate> {

	NSURLRequest* _request;
	NSTimer* _errorTimer;
	NSTimer* _enforceMinViewTimeTimer;
	BOOL _shouldSwitchToWebView;
	double _lastViewSwitchTime;
	BOOL _isViewVisible;
	UIBarButtonItem* _actionItem;
	UIActionSheet* _actionSheet;
	NSTimer* _loadingTimer;
	NSTimer* _OOMCrashDetectionTimer;
	FBInsetWrappingView* _wrappingView;
	UIView* _wrappedView;
	FBWebToolbarView* _toolbar;
	UIBarButtonItem* _toolbarItem;
	NSURL* _originalURL;
	FBWebRedirectTracker* _redirectTracker;
	struct {
		unsigned barsLoaded : 1;
		unsigned didAppearOnce : 1;
		unsigned didFinishLoadOnce : 1;
		unsigned didLoadTitleOnce : 1;
		unsigned forwardOrientation : 1;
		unsigned isModal : 1;
		unsigned loading : 1;
		unsigned didFirstScroll : 1;
	}  _flags;
	unsigned long long _alertViewToken;
	UIBarButtonItem* _forcedLeftBarButtonItem;
	UIBarButtonItem* _forcedRightBarButtonItem;
	FBSystemMoviePlayerAudioSessionAdaptor* _audioSessionAdaptor;
	FBWebViewRequestLoader* _requestLoader;
	FBWebAppLinkBannerViewController* _appLinkBanner;
	FBScenePath* _scenePath;
	BOOL _revertWebViewLoadTimeLoggingBehavior;
	UIView* _progressBarSuperView;
	BOOL _preventAccessToLoginPage;
	BOOL _disableJewels;
	BOOL _disablePullToRefresh;
	BOOL _disableSendAsMessageAction;
	BOOL _disableShareLinkAction;
	BOOL _shouldSupportLandscapeOrientation;
	BOOL _isTabBarVisible;
	BOOL _hasToolbar;
	BOOL _enableQuickPromotion;
	BOOL _isModalFlow;
	BOOL _disableDismissModalFlowAutomatically;
	BOOL _cancelButtonReplaced;
	BOOL _progressBarEnabled;
	BOOL _showingExternalContent;
	BOOL _useWKWebView;
	BOOL _enableOOMDetection;
	int _policy;
	int _parentApp;
	int _usePrefetchPolicy;
	FBUserSession* _session;
	double _timeoutInterval;
	FBWebAppLink* _appLink;
	NSString* _shareLinkLabelString;
	/*^block*/id _contentInsetsProvider;
	FBAnimatedProgressBarView* _progressBar;
	UIColor* _webToolbarColor;
	UIColor* _webToolbarItemsColor;
	UIColor* _progressBarColor;
	UIToolbar* _customToolBar;
	unsigned long long _titleSource;
	FBWebNativeThirdPartyURLController* _nativeURLController;
	NSString* _modalCancelButtonTitle;
	id<FBWebViewControllerDelegate> _delegate;
	id<FBModalWebFlowDelegate> _modalFlowDelegate;
	FBExceptionHandler* _exceptionHandler;
	FBBrowserAnalytics* _browserAnalytics;
	UIView*<FBWebView> _fbWebView;
	long long _openInSafariButtonIndex;
	long long _openInAppButtonIndex;
	long long _shareLinkButtonIndex;
	long long _appLinkButtonIndex;
	long long _copyLinkButtonIndex;
	long long _sendAsMessageButtonIndex;
	PKPass* _pass;
	NSURLConnection* _passbookConnection;
	NSMutableData* _passbookConnectionData;
	FBPopoverInfo* _popoverInfo;
	FBExperimentManager* _experimentManager;
	FBContentInsetTracker* _contentInsetTracker;
	UIBarButtonItem* _shareButtonItem;
	NJKWebViewProgress* _webViewProgressManager;
	FBMobileCanvasWilde* _canvas;
	id<FBWebViewLinkHandler> _linkHandler;
	UIViewController*<FBNuxBannerViewController> _bannerViewController;
	FBWebAppLinkBannerViewController* _appLinkBannerViewController;

}

@property (nonatomic,readonly) FBUserSession * session;                                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) int policy;                                                                   //@synthesize policy=_policy - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                                         //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) BOOL preventAccessToLoginPage;                                                  //@synthesize preventAccessToLoginPage=_preventAccessToLoginPage - In the implementation block
@property (assign,nonatomic) BOOL disableJewels;                                                             //@synthesize disableJewels=_disableJewels - In the implementation block
@property (assign,nonatomic) BOOL disablePullToRefresh;                                                      //@synthesize disablePullToRefresh=_disablePullToRefresh - In the implementation block
@property (assign,nonatomic) BOOL disableSendAsMessageAction;                                                //@synthesize disableSendAsMessageAction=_disableSendAsMessageAction - In the implementation block
@property (assign,nonatomic) BOOL disableShareLinkAction;                                                    //@synthesize disableShareLinkAction=_disableShareLinkAction - In the implementation block
@property (nonatomic,retain) FBWebAppLink * appLink;                                                         //@synthesize appLink=_appLink - In the implementation block
@property (nonatomic,retain) FBWebAppLinkBannerViewController * appLinkBanner;                               //@synthesize appLinkBanner=_appLinkBanner - In the implementation block
@property (nonatomic,copy) NSString * shareLinkLabelString;                                                  //@synthesize shareLinkLabelString=_shareLinkLabelString - In the implementation block
@property (assign,nonatomic) BOOL shouldSupportLandscapeOrientation;                                         //@synthesize shouldSupportLandscapeOrientation=_shouldSupportLandscapeOrientation - In the implementation block
@property (assign,nonatomic) int parentApp;                                                                  //@synthesize parentApp=_parentApp - In the implementation block
@property (assign,nonatomic) BOOL isTabBarVisible;                                                           //@synthesize isTabBarVisible=_isTabBarVisible - In the implementation block
@property (nonatomic,copy) id contentInsetsProvider;                                                         //@synthesize contentInsetsProvider=_contentInsetsProvider - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * forcedLeftBarButtonItem; 
@property (nonatomic,retain) UIBarButtonItem * forcedRightBarButtonItem; 
@property (nonatomic,retain) FBAnimatedProgressBarView * progressBar;                                        //@synthesize progressBar=_progressBar - In the implementation block
@property (assign,nonatomic) BOOL hasToolbar;                                                                //@synthesize hasToolbar=_hasToolbar - In the implementation block
@property (nonatomic,retain) UIColor * webToolbarColor;                                                      //@synthesize webToolbarColor=_webToolbarColor - In the implementation block
@property (nonatomic,retain) UIColor * webToolbarItemsColor;                                                 //@synthesize webToolbarItemsColor=_webToolbarItemsColor - In the implementation block
@property (nonatomic,retain) UIColor * progressBarColor;                                                     //@synthesize progressBarColor=_progressBarColor - In the implementation block
@property (nonatomic,retain) UIToolbar * customToolBar;                                                      //@synthesize customToolBar=_customToolBar - In the implementation block
@property (assign,nonatomic) unsigned long long titleSource;                                                 //@synthesize titleSource=_titleSource - In the implementation block
@property (assign,nonatomic) BOOL enableQuickPromotion;                                                      //@synthesize enableQuickPromotion=_enableQuickPromotion - In the implementation block
@property (nonatomic,retain) FBWebNativeThirdPartyURLController * nativeURLController;                       //@synthesize nativeURLController=_nativeURLController - In the implementation block
@property (assign,nonatomic) BOOL isModalFlow;                                                               //@synthesize isModalFlow=_isModalFlow - In the implementation block
@property (nonatomic,copy) NSString * modalCancelButtonTitle;                                                //@synthesize modalCancelButtonTitle=_modalCancelButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL disableDismissModalFlowAutomatically;                                      //@synthesize disableDismissModalFlowAutomatically=_disableDismissModalFlowAutomatically - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebViewControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBModalWebFlowDelegate> modalFlowDelegate;                            //@synthesize modalFlowDelegate=_modalFlowDelegate - In the implementation block
@property (assign,nonatomic,__weak) FBExceptionHandler * exceptionHandler;                                   //@synthesize exceptionHandler=_exceptionHandler - In the implementation block
@property (nonatomic,retain) FBBrowserAnalytics * browserAnalytics;                                          //@synthesize browserAnalytics=_browserAnalytics - In the implementation block
@property (assign,nonatomic) int usePrefetchPolicy;                                                          //@synthesize usePrefetchPolicy=_usePrefetchPolicy - In the implementation block
@property (nonatomic,retain) UIView*<FBWebView> fbWebView;                                                   //@synthesize fbWebView=_fbWebView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * actionItem;                                                   //@synthesize actionItem=_actionItem - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                                                    //@synthesize actionSheet=_actionSheet - In the implementation block
@property (assign,nonatomic) long long openInSafariButtonIndex;                                              //@synthesize openInSafariButtonIndex=_openInSafariButtonIndex - In the implementation block
@property (assign,nonatomic) long long openInAppButtonIndex;                                                 //@synthesize openInAppButtonIndex=_openInAppButtonIndex - In the implementation block
@property (assign,nonatomic) long long shareLinkButtonIndex;                                                 //@synthesize shareLinkButtonIndex=_shareLinkButtonIndex - In the implementation block
@property (assign,nonatomic) long long appLinkButtonIndex;                                                   //@synthesize appLinkButtonIndex=_appLinkButtonIndex - In the implementation block
@property (assign,nonatomic) long long copyLinkButtonIndex;                                                  //@synthesize copyLinkButtonIndex=_copyLinkButtonIndex - In the implementation block
@property (assign,nonatomic) long long sendAsMessageButtonIndex;                                             //@synthesize sendAsMessageButtonIndex=_sendAsMessageButtonIndex - In the implementation block
@property (nonatomic,copy) NSURLRequest * request;                                                           //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) PKPass * pass;                                                                  //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) NSURLConnection * passbookConnection;                                           //@synthesize passbookConnection=_passbookConnection - In the implementation block
@property (nonatomic,copy) NSMutableData * passbookConnectionData;                                           //@synthesize passbookConnectionData=_passbookConnectionData - In the implementation block
@property (nonatomic,retain) FBPopoverInfo * popoverInfo;                                                    //@synthesize popoverInfo=_popoverInfo - In the implementation block
@property (assign,nonatomic) BOOL cancelButtonReplaced;                                                      //@synthesize cancelButtonReplaced=_cancelButtonReplaced - In the implementation block
@property (nonatomic,retain) FBExperimentManager * experimentManager;                                        //@synthesize experimentManager=_experimentManager - In the implementation block
@property (nonatomic,retain) FBContentInsetTracker * contentInsetTracker;                                    //@synthesize contentInsetTracker=_contentInsetTracker - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareButtonItem;                                              //@synthesize shareButtonItem=_shareButtonItem - In the implementation block
@property (nonatomic,retain) NJKWebViewProgress * webViewProgressManager;                                    //@synthesize webViewProgressManager=_webViewProgressManager - In the implementation block
@property (assign,nonatomic) BOOL progressBarEnabled;                                                        //@synthesize progressBarEnabled=_progressBarEnabled - In the implementation block
@property (assign,nonatomic) BOOL showingExternalContent;                                                    //@synthesize showingExternalContent=_showingExternalContent - In the implementation block
@property (nonatomic,retain) FBMobileCanvasWilde * canvas;                                                   //@synthesize canvas=_canvas - In the implementation block
@property (nonatomic,retain) id<FBWebViewLinkHandler> linkHandler;                                           //@synthesize linkHandler=_linkHandler - In the implementation block
@property (nonatomic,retain) UIViewController*<FBNuxBannerViewController> bannerViewController;              //@synthesize bannerViewController=_bannerViewController - In the implementation block
@property (nonatomic,retain) FBWebAppLinkBannerViewController * appLinkBannerViewController;                 //@synthesize appLinkBannerViewController=_appLinkBannerViewController - In the implementation block
@property (assign,nonatomic) BOOL useWKWebView;                                                              //@synthesize useWKWebView=_useWKWebView - In the implementation block
@property (assign,nonatomic) BOOL enableOOMDetection;                                                        //@synthesize enableOOMDetection=_enableOOMDetection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
+(id)fb_webViewControllerConfiguredForSideFeedWithSession:(id)arg1 ;
+(BOOL)isSafeUserActivityURL:(id)arg1 ;
+(int)policyForURL:(id)arg1 ;
+(id)safeURLFromUserActivity:(id)arg1 inSession:(id)arg2 ;
-(void)configureForSideFeedWithSession:(id)arg1 ;
-(id)analyticsModule;
-(id)analyticsDestinationURL;
-(void)_didStartPlayingFullScreenVideo:(id)arg1 ;
-(void)_willEndPlayingFullScreenVideo:(id)arg1 ;
-(FBExperimentManager *)experimentManager;
-(void)setExperimentManager:(FBExperimentManager *)arg1 ;
-(BOOL)fb_showNavigationJewels;
-(BOOL)fb_touchShouldPreventSwipeToOpenLeftNav:(id)arg1 ;
-(BOOL)fb_showNavBarSearchField;
-(void)fullScreenErrorViewActionButtonTapped:(id)arg1 ;
-(void)setPopoverInfo:(FBPopoverInfo *)arg1 ;
-(FBPopoverInfo *)popoverInfo;
-(unsigned long long)preferredPresentationMethod;
-(void)setZeroRatingSentry:(id)arg1 ;
-(void)nonZeroRatedSessionDidFailToStart:(id)arg1 ;
-(void)nonZeroRatedSessionUxMayActivate:(id)arg1 ;
-(void)nonZeroRatedSessionUxMustDeactivate:(id)arg1 ;
-(void)webViewProgress:(id)arg1 didUpdateProgress:(double)arg2 ;
-(void)webView:(id)arg1 loadingStateChanged:(BOOL)arg2 ;
-(void)webView:(id)arg1 progressChanged:(double)arg2 ;
-(void)webView:(id)arg1 titleChanged:(id)arg2 ;
-(void)webView:(id)arg1 URLChanged:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webView:(id)arg1 didStartNavigationRequest:(id)arg2 ;
-(void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3 ;
-(id)openDialogWithURL:(id)arg1 ;
-(void)setCancelButtonTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)setActionButtonTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)closeDialog:(id)arg1 ;
-(void)dialogDidLoad:(id)arg1 ;
-(BOOL)disablePullToRefresh;
-(BOOL)enableOOMDetection;
-(void)webToolbar:(id)arg1 backButtonPressed:(id)arg2 ;
-(void)webToolbar:(id)arg1 forwardButtonPressed:(id)arg2 ;
-(void)webToolbar:(id)arg1 refreshButtonPressed:(id)arg2 ;
-(void)webToolbar:(id)arg1 actionButtonPressed:(id)arg2 ;
-(void)webToolbar:(id)arg1 appLinkOpenButtonPressed:(id)arg2 ;
-(void)webToolbar:(id)arg1 appLinkInstallButtonPressed:(id)arg2 ;
-(UIBarButtonItem *)actionItem;
-(BOOL)shouldAllowWKWebView;
-(void)setUseWKWebView:(BOOL)arg1 ;
-(void)setEnableOOMDetection:(BOOL)arg1 ;
-(id)initWithPolicy:(int)arg1 session:(id)arg2 scenePathContext:(id)arg3 ;
-(void)_resetActionSheetButtonIndices;
-(void)setNativeURLController:(FBWebNativeThirdPartyURLController *)arg1 ;
-(void)setLinkHandler:(id<FBWebViewLinkHandler>)arg1 ;
-(void)_ios8Initialize;
-(void)willBecomeActive:(id)arg1 ;
-(id)initWithPolicy:(int)arg1 session:(id)arg2 ;
-(FBBrowserAnalytics *)browserAnalytics;
-(void)notifyExternalContentDisplayChangeTo:(id)arg1 ;
-(void)setFbWebView:(UIView*<FBWebView>)arg1 ;
-(void)_updateLoadingState;
-(void)_updateBannerViewIfNeeded;
-(void)_updateToolbarAndIndicatorsForLoadingState;
-(void)_logNavigationStart:(id)arg1 ;
-(BOOL)isMobileAdsManagerURL:(id)arg1 ;
-(void)_loadRequestIfReady;
-(void)_WKWebViewOOMCrashDetector;
-(void)_initializeFBWKWebView;
-(void)_initializeFBWebView;
-(void)_initializeWebView;
-(UIColor *)webToolbarColor;
-(UIColor *)webToolbarItemsColor;
-(void)_setToolbarItems;
-(void)_configureToolbarAndIndicatorsForPolicy;
-(void)setLoadingTimer:(id)arg1 ;
-(void)_swapViewsAfterMinTimeHasPassed;
-(void)dismissActionSheet;
-(BOOL)shouldSupportLandscapeOrientation;
-(void)_updateSourceRectForPopover:(id)arg1 ;
-(void)updateUserActivityForRequest:(id)arg1 ;
-(unsigned long long)_loadRequestPolicy;
-(void)setBrowserAnalytics:(FBBrowserAnalytics *)arg1 ;
-(void)loadURL:(id)arg1 trackingCodes:(id)arg2 ;
-(BOOL)useWKWebView;
-(void)updateProgressBar:(double)arg1 ;
-(BOOL)_shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2 ;
-(void)request:(id)arg1 _didFailLoadWithError:(id)arg2 ;
-(void)_didFinishLoadRequest:(id)arg1 ;
-(BOOL)_shouldHandleInternalURL:(id)arg1 ;
-(BOOL)isModalFlow;
-(void)setIsModalFlow:(BOOL)arg1 ;
-(id)popoverInfoForRequest:(id)arg1 ;
-(void)setPassbookConnection:(NSURLConnection *)arg1 ;
-(void)_confirmExternalNavigationRequest:(id)arg1 ;
-(BOOL)_handleInternalURLRequest:(id)arg1 ;
-(BOOL)preventAccessToLoginPage;
-(void)showErrorPage:(id)arg1 ;
-(void)setNavigationItemTitle:(id)arg1 ;
-(void)_logWebNavigationFromURL:(id)arg1 toURL:(id)arg2 ;
-(void)_startLoadToCheckMIMEType:(id)arg1 ;
-(void)_FBLogWebViewError:(id)arg1 URLString:(id)arg2 ;
-(void)_handleSwitchingViewsForSuccess:(BOOL)arg1 ;
-(UIView*<FBWebView>)fbWebView;
-(void)setCancelButtonReplaced:(BOOL)arg1 ;
-(void)_setModalFlowToolbarItems;
-(void)setDisablePullToRefresh:(BOOL)arg1 ;
-(void)_createBannerForAppLinkIfNeeded;
-(BOOL)_isAppLinkEnabled;
-(void)setAppLinkBannerViewController:(FBWebAppLinkBannerViewController *)arg1 ;
-(void)_updateIPadToolbar;
-(void)showErrorPageForUnsupportedMimeType:(id)arg1 ;
-(void)_showPass;
-(void)showErrorPageWithMessage:(id)arg1 extraTextForEmployee:(id)arg2 ;
-(void)_switchToWeb;
-(void)_logTapEventFromActionSheet:(id)arg1 ;
-(void)_logTapEvent:(id)arg1 withSource:(id)arg2 ;
-(void)_shareLinkFromSource:(id)arg1 item:(id)arg2 ;
-(void)_sendLinkInMessageFromSource:(id)arg1 item:(id)arg2 ;
-(void)_appLinkTapped;
-(void)setActionItem:(UIBarButtonItem *)arg1 ;
-(void)setForcedRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_logTapEventFromChrome:(id)arg1 ;
-(id)_initiateOpenActionSheet;
-(id)_appLinkButtonTextFormatString;
-(void)setAppLinkButtonIndex:(long long)arg1 ;
-(BOOL)_isAutoplayableContent:(id)arg1 ;
-(void)cancelModal;
-(BOOL)disableShareLinkAction;
-(void)_didTapShareButtonItem;
-(void)setShareButtonItem:(UIBarButtonItem *)arg1 ;
-(void)configureActionButtonForAppLink;
-(void)setOpenInSafariButtonIndex:(long long)arg1 ;
-(void)_addShareActions:(id)arg1 ;
-(void)modalFlowCancel;
-(BOOL)_isModalFlowAtDoneState;
-(void)modalFlowDone;
-(void)_removeAppLinkBannerAndBannerController:(id)arg1 ;
-(void)_updatePullToRefresh;
-(void)_loadingTimerFired:(id)arg1 ;
-(BOOL)shouldAllowPullToRefreshForInternalPages;
-(void)setOpenInAppButtonIndex:(long long)arg1 ;
-(void)setShareLinkButtonIndex:(long long)arg1 ;
-(void)setCopyLinkButtonIndex:(long long)arg1 ;
-(BOOL)disableSendAsMessageAction;
-(void)setSendAsMessageButtonIndex:(long long)arg1 ;
-(id)initModalFullScreenWithPolicy:(int)arg1 session:(id)arg2 ;
-(id)initModalWithPolicy:(int)arg1 session:(id)arg2 ;
-(void)_startFinalProgressBarAnimation;
-(void)_removeBannerAndBannerController:(id)arg1 ;
-(BOOL)enableQuickPromotion;
-(void)_setBannerViewController:(id)arg1 ;
-(void)nuxBannerControllerDidDismissBanner:(id)arg1 ;
-(void)webAppLinkBannerViewController:(id)arg1 didTapDismissButton:(id)arg2 ;
-(void)webAppLinkBannerViewController:(id)arg1 didTapActionButton:(id)arg2 ;
-(void)webNativeThirdPartyURLController:(id)arg1 didUpdateAppLinkButtonEnabled:(BOOL)arg2 ;
-(void)webToolbar:(id)arg1 shareButtonPressed:(id)arg2 ;
-(void)setProgressBarColor:(UIColor *)arg1 ;
-(void)setContentInsetsProvider:(id)arg1 ;
-(id)pageTitleForWebPivots;
-(id)pageURLForWebPivots;
-(BOOL)fb_hidesTabBar;
-(BOOL)isPageSecure;
-(UIBarButtonItem *)forcedLeftBarButtonItem;
-(void)setForcedLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)forcedRightBarButtonItem;
-(double)progressBarHeight;
-(void)setPreventAccessToLoginPage:(BOOL)arg1 ;
-(BOOL)disableJewels;
-(void)setDisableJewels:(BOOL)arg1 ;
-(void)setDisableSendAsMessageAction:(BOOL)arg1 ;
-(void)setDisableShareLinkAction:(BOOL)arg1 ;
-(FBWebAppLink *)appLink;
-(void)setAppLink:(FBWebAppLink *)arg1 ;
-(FBWebAppLinkBannerViewController *)appLinkBanner;
-(void)setAppLinkBanner:(FBWebAppLinkBannerViewController *)arg1 ;
-(NSString *)shareLinkLabelString;
-(void)setShareLinkLabelString:(NSString *)arg1 ;
-(void)setShouldSupportLandscapeOrientation:(BOOL)arg1 ;
-(int)parentApp;
-(void)setParentApp:(int)arg1 ;
-(BOOL)isTabBarVisible;
-(void)setIsTabBarVisible:(BOOL)arg1 ;
-(id)contentInsetsProvider;
-(BOOL)hasToolbar;
-(void)setHasToolbar:(BOOL)arg1 ;
-(void)setWebToolbarColor:(UIColor *)arg1 ;
-(void)setWebToolbarItemsColor:(UIColor *)arg1 ;
-(UIColor *)progressBarColor;
-(UIToolbar *)customToolBar;
-(void)setCustomToolBar:(UIToolbar *)arg1 ;
-(unsigned long long)titleSource;
-(void)setTitleSource:(unsigned long long)arg1 ;
-(void)setEnableQuickPromotion:(BOOL)arg1 ;
-(FBWebNativeThirdPartyURLController *)nativeURLController;
-(NSString *)modalCancelButtonTitle;
-(void)setModalCancelButtonTitle:(NSString *)arg1 ;
-(BOOL)disableDismissModalFlowAutomatically;
-(void)setDisableDismissModalFlowAutomatically:(BOOL)arg1 ;
-(id<FBModalWebFlowDelegate>)modalFlowDelegate;
-(void)setModalFlowDelegate:(id<FBModalWebFlowDelegate>)arg1 ;
-(int)usePrefetchPolicy;
-(void)setUsePrefetchPolicy:(int)arg1 ;
-(long long)openInSafariButtonIndex;
-(long long)openInAppButtonIndex;
-(long long)shareLinkButtonIndex;
-(long long)appLinkButtonIndex;
-(long long)copyLinkButtonIndex;
-(long long)sendAsMessageButtonIndex;
-(NSURLConnection *)passbookConnection;
-(NSMutableData *)passbookConnectionData;
-(void)setPassbookConnectionData:(NSMutableData *)arg1 ;
-(BOOL)cancelButtonReplaced;
-(FBContentInsetTracker *)contentInsetTracker;
-(void)setContentInsetTracker:(FBContentInsetTracker *)arg1 ;
-(UIBarButtonItem *)shareButtonItem;
-(NJKWebViewProgress *)webViewProgressManager;
-(void)setWebViewProgressManager:(NJKWebViewProgress *)arg1 ;
-(BOOL)progressBarEnabled;
-(void)setProgressBarEnabled:(BOOL)arg1 ;
-(BOOL)showingExternalContent;
-(void)setShowingExternalContent:(BOOL)arg1 ;
-(id<FBWebViewLinkHandler>)linkHandler;
-(UIViewController*<FBNuxBannerViewController>)bannerViewController;
-(void)setBannerViewController:(UIViewController*<FBNuxBannerViewController>)arg1 ;
-(FBWebAppLinkBannerViewController *)appLinkBannerViewController;
-(unsigned long long)preferredPresentationOptions;
-(int)policy;
-(void)setExceptionHandler:(FBExceptionHandler *)arg1 ;
-(FBExceptionHandler *)exceptionHandler;
-(void)dealloc;
-(void)setDelegate:(id<FBWebViewControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)reload;
-(id<FBWebViewControllerDelegate>)delegate;
-(NSURLRequest *)request;
-(void)updateUserActivityState:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)userActivityWasContinued:(id)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)setLeftBarButtonItem:(id)arg1 ;
-(void)setRightBarButtonItem:(id)arg1 ;
-(void)setBackBarButtonItem:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)webView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)close;
-(void)loadRequest:(id)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)goBack;
-(void)goForward;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(FBAnimatedProgressBarView *)progressBar;
-(void)setProgressBar:(FBAnimatedProgressBarView *)arg1 ;
-(void)scrollToTop;
-(UIActionSheet *)actionSheet;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
-(FBUserSession *)session;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(void)loadURL:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
-(void)setCanvas:(FBMobileCanvasWilde *)arg1 ;
-(FBMobileCanvasWilde *)canvas;
-(void)setRequest:(NSURLRequest *)arg1 ;
@end

