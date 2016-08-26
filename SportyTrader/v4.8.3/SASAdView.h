/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@protocol SASAdViewDelegate;
@class UIButton, SASAdViewController, SASLoaderView, UIViewController;

@interface SASAdView : UIView {

	BOOL _adViewHasBeenDisplayed;
	BOOL _portraitCreativeLoaded;
	BOOL _landscapeCreativeLoaded;
	BOOL _open;
	BOOL _cancelExpand;
	BOOL _pendingCollapseNotification;
	BOOL _playingFullscreen;
	BOOL _unlimited;
	BOOL _expandsFromTop;
	BOOL _adLoaded;
	UIButton* _skipButton;
	UIButton* _triggerButton;
	SASAdViewController* _parentAdViewController;
	SASLoaderView* _loaderView;
	SASAdViewController* _adViewController;
	long long _loadedOrientation;
	double _expandedHeight;
	double _userHeight;
	id<SASAdViewDelegate> _delegate;
	UIViewController* _modalParentViewController;
	/*^block*/id _dismissalAnimations;
	unsigned long long _lastCallTimestamp;

}

@property (assign,nonatomic,__weak) id<SASAdViewDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * modalParentViewController;                                //@synthesize modalParentViewController=_modalParentViewController - In the implementation block
@property (getter=isUnlimited) BOOL unlimited;                                                                   //@synthesize unlimited=_unlimited - In the implementation block
@property (assign,nonatomic) BOOL expandsFromTop;                                                                //@synthesize expandsFromTop=_expandsFromTop - In the implementation block
@property (nonatomic,copy) id dismissalAnimations;                                                               //@synthesize dismissalAnimations=_dismissalAnimations - In the implementation block
@property (assign,nonatomic) unsigned long long lastCallTimestamp;                                               //@synthesize lastCallTimestamp=_lastCallTimestamp - In the implementation block
@property (nonatomic,retain) SASAdViewController * parentAdViewController;                                       //@synthesize parentAdViewController=_parentAdViewController - In the implementation block
@property (nonatomic,retain) SASLoaderView * loaderView;                                                         //@synthesize loaderView=_loaderView - In the implementation block
@property (nonatomic,retain) SASAdViewController * adViewController;                                             //@synthesize adViewController=_adViewController - In the implementation block
@property (nonatomic,readonly) UIButton * skipButton;                                                            //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,readonly) UIButton * triggerButton;                                                         //@synthesize triggerButton=_triggerButton - In the implementation block
@property (assign) long long loadedOrientation;                                                                  //@synthesize loadedOrientation=_loadedOrientation - In the implementation block
@property (assign) double expandedHeight;                                                                        //@synthesize expandedHeight=_expandedHeight - In the implementation block
@property (assign) double userHeight;                                                                            //@synthesize userHeight=_userHeight - In the implementation block
@property (getter=isPortraitCreativeLoaded) BOOL portraitCreativeLoaded;                                         //@synthesize portraitCreativeLoaded=_portraitCreativeLoaded - In the implementation block
@property (getter=isLandscapeCreativeLoaded) BOOL landscapeCreativeLoaded;                                       //@synthesize landscapeCreativeLoaded=_landscapeCreativeLoaded - In the implementation block
@property (getter=isOpen,readonly) BOOL open;                                                                    //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) BOOL cancelExpand;                                                                  //@synthesize cancelExpand=_cancelExpand - In the implementation block
@property (assign,getter=isPendingCollapseNotification,nonatomic) BOOL pendingCollapseNotification;              //@synthesize pendingCollapseNotification=_pendingCollapseNotification - In the implementation block
@property (assign,getter=isPlayingFullscreen,nonatomic) BOOL playingFullscreen;                                  //@synthesize playingFullscreen=_playingFullscreen - In the implementation block
@property (assign,nonatomic) BOOL adLoaded;                                                                      //@synthesize adLoaded=_adLoaded - In the implementation block
+(void)setSiteID:(long long)arg1 baseURL:(id)arg2 ;
+(int)formatTypeFromInteger:(long long)arg1 ;
+(void)setCoordinate:(CGSize)arg1 accuracy:(double)arg2 ;
+(void)setTestModeEnabled:(BOOL)arg1 ;
+(void)enableIdentifierHashing;
+(long long)previewFormatTypeWithURL:(id)arg1 ;
+(void)clearPrefetchCache;
+(void)setLocation:(id)arg1 ;
+(void)setHeading:(double)arg1 ;
+(void)setBaseURL:(id)arg1 ;
+(void)setLoggingEnabled:(BOOL)arg1 ;
+(void)setCoordinate:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 loader:(long long)arg2 ;
-(void)setUnlimited:(BOOL)arg1 ;
-(void)loadFormatId:(long long)arg1 pageId:(id)arg2 master:(BOOL)arg3 target:(id)arg4 timeout:(float)arg5 ;
-(void)displayAd:(id)arg1 ;
-(void)setAd:(id)arg1 ;
-(SASAdViewController *)adViewController;
-(void)setAdViewController:(SASAdViewController *)arg1 ;
-(BOOL)shouldAutoRotate;
-(void)setModalParentViewController:(UIViewController *)arg1 ;
-(void)setExpandsFromTop:(BOOL)arg1 ;
-(void)loadFormatId:(long long)arg1 pageId:(id)arg2 master:(BOOL)arg3 target:(id)arg4 ;
-(void)setExpandedHeight:(double)arg1 ;
-(void)setLastCallTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)lastCallTimestamp;
-(void)SASRemoveFromSuperview;
-(BOOL)isUnlimited;
-(void)setPendingCollapseNotification:(BOOL)arg1 ;
-(void)switchToMode:(BOOL)arg1 ;
-(void)animateAdViewDismissal;
-(void)adViewDismissalDidFinish;
-(void)initializeAndConfigureLoaderView:(long long)arg1 ;
-(void)toggleExpand;
-(void)loadFormatId:(long long)arg1 pageId:(id)arg2 master:(BOOL)arg3 target:(id)arg4 timeout:(float)arg5 prefetch:(BOOL)arg6 ;
-(void)expandBeforeLoading;
-(BOOL)expandsFromTop;
-(void)loadAdPreviewWithURL:(id)arg1 formatSpecified:(BOOL)arg2 specifiedFormatType:(long long)arg3 ;
-(id)previewURLFromURL:(id)arg1 queryParams:(id)arg2 ;
-(void)loadAdPreviewWithURL:(id)arg1 formatType:(int)arg2 ;
-(void)loadAdPreviewURL:(id)arg1 ;
-(void)setPortraitCreativeLoaded:(BOOL)arg1 ;
-(void)setLandscapeCreativeLoaded:(BOOL)arg1 ;
-(void)displayAd;
-(CGRect)skipButtonFrameForPosition:(long long)arg1 originalFrame:(CGRect)arg2 triggerHeight:(double)arg3 ;
-(UIButton *)triggerButton;
-(CGRect)adFrameWithOriginalFrame:(CGRect)arg1 triggerHeight:(double)arg2 ;
-(void)configureTriggerButtonWithHeight:(double)arg1 ;
-(SASAdViewController *)parentAdViewController;
-(void)finalRemovalFromSuperview;
-(BOOL)isPendingCollapseNotification;
-(void)animateToasterFrame:(CGRect)arg1 ;
-(void)toasterAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)placeTriggerButton;
-(void)resizeCreativeForExpandInWebView:(id)arg1 ;
-(void)resizeCreativeForBannerInWebView:(id)arg1 ;
-(void)defineBackgroundColorForWebView:(id)arg1 ;
-(void)removeLoaderFromView;
-(void)resizeWindowIfCreativeTypeEqualImage:(id)arg1 ;
-(void)addHTMLTrigger;
-(void)placeSkipButton;
-(double)expandedHeight;
-(void)sendMessageToWebView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ad:(id)arg2 expandProperties:(id)arg3 orientationProperties:(id)arg4 URL:(id)arg5 ;
-(void)loadFormatId:(long long)arg1 pageId:(id)arg2 master:(BOOL)arg3 target:(id)arg4 prefetch:(BOOL)arg5 ;
-(void)loadAdPreviewWithURL:(id)arg1 specifiedFormatType:(long long)arg2 ;
-(void)loadAdPreviewWithURL:(id)arg1 ;
-(void)configureWebViewForImageCreativeType;
-(void)configureWebView:(id)arg1 ;
-(void)configureToasterForWebView:(id)arg1 ;
-(void)configureTriggerButtonForWebView:(id)arg1 ;
-(void)executeJavascript:(id)arg1 ;
-(void)setParentAdViewController:(SASAdViewController *)arg1 ;
-(SASLoaderView *)loaderView;
-(void)setLoaderView:(SASLoaderView *)arg1 ;
-(long long)loadedOrientation;
-(void)setLoadedOrientation:(long long)arg1 ;
-(double)userHeight;
-(void)setUserHeight:(double)arg1 ;
-(BOOL)isPortraitCreativeLoaded;
-(BOOL)isLandscapeCreativeLoaded;
-(BOOL)cancelExpand;
-(void)setCancelExpand:(BOOL)arg1 ;
-(BOOL)isPlayingFullscreen;
-(void)setPlayingFullscreen:(BOOL)arg1 ;
-(UIViewController *)modalParentViewController;
-(id)dismissalAnimations;
-(void)setDismissalAnimations:(id)arg1 ;
-(void)setAdLoaded:(BOOL)arg1 ;
-(BOOL)adLoaded;
-(long long)MRAIDState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SASAdViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(id<SASAdViewDelegate>)delegate;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)didMoveToSuperview;
-(BOOL)isVisible;
-(id)ad;
-(void)refresh;
-(UIButton *)skipButton;
-(BOOL)isOpen;
@end
