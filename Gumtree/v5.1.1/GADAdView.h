/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>
#import <Gumtree/GADVideoPlayerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol GADAdViewDelegate, GADRewardBasedVideoAdGMSGHandlerDelegate;
@class UIWebView, NSURL, GADAdViewState, NSOperationQueue, UIGestureRecognizer, GADWiggleGestureRecognizer, GADDebugOptionsMenuSheet, UIViewController, NSString, GADAdViewActiveViewReporter, AVPlayerLayer, GADVideoPlayer, GADVideoController, UIScrollView, NSURLRequest;

@interface GADAdView : UIView <GADVideoPlayerDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate, UIWebViewDelegate> {

	UIWebView* _webView;
	NSURL* _URL;
	GADAdViewState* _savedState;
	NSOperationQueue* _eventQueue;
	UIGestureRecognizer* _touchGestureRecognizer;
	GADWiggleGestureRecognizer* _debugGestureRecognizer;
	BOOL _useAutoLayoutForResizingAdView;
	GADDebugOptionsMenuSheet* _debugOptionsMenuSheet;
	BOOL _touched;
	BOOL _showDebug;
	UIViewController* _viewController;
	NSString* _adDebugDialogString;
	long long _orientation;
	GADAdViewActiveViewReporter* _activeViewReporter;
	id<GADAdViewDelegate> _delegate;
	AVPlayerLayer* _videoPlayerLayer;
	GADVideoPlayer* _videoPlayer;
	GADVideoController* _videoController;
	id<GADRewardBasedVideoAdGMSGHandlerDelegate> _rewardBasedVideoAdGMSGHandlerDelegate;
	CGRect _cachedVideoPlayerFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController * viewController;                                                               //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) BOOL touched;                                                                                           //@synthesize touched=_touched - In the implementation block
@property (nonatomic,copy) NSString * adDebugDialogString;                                                                           //@synthesize adDebugDialogString=_adDebugDialogString - In the implementation block
@property (assign,nonatomic) BOOL showDebug;                                                                                         //@synthesize showDebug=_showDebug - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                  //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) GADAdViewActiveViewReporter * activeViewReporter;                                                       //@synthesize activeViewReporter=_activeViewReporter - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                                                          //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (assign,nonatomic,__weak) id<GADAdViewDelegate> delegate;                                                                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=canGoBack,nonatomic,readonly) BOOL canGoBack; 
@property (getter=canGoForward,nonatomic,readonly) BOOL canGoForward; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) NSURLRequest * request; 
@property (nonatomic,retain) AVPlayerLayer * videoPlayerLayer;                                                                       //@synthesize videoPlayerLayer=_videoPlayerLayer - In the implementation block
@property (assign,nonatomic) CGRect cachedVideoPlayerFrame;                                                                          //@synthesize cachedVideoPlayerFrame=_cachedVideoPlayerFrame - In the implementation block
@property (nonatomic,retain) GADVideoPlayer * videoPlayer;                                                                           //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) GADVideoController * videoController;                                                                   //@synthesize videoController=_videoController - In the implementation block
@property (assign,nonatomic,__weak) id<GADRewardBasedVideoAdGMSGHandlerDelegate> rewardBasedVideoAdGMSGHandlerDelegate;              //@synthesize rewardBasedVideoAdGMSGHandlerDelegate=_rewardBasedVideoAdGMSGHandlerDelegate - In the implementation block
+(id)webViewCache;
+(id)cachedWebView;
+(void)cacheWebView:(id)arg1 ;
+(id)JSCommandForNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)player:(id)arg1 didCacheFileAtURL:(id)arg2 ;
-(void)rotateVideoToDegrees:(double)arg1 ;
-(void)setUpVideoPlayerWithURL:(id)arg1 ;
-(void)hideVideo;
-(void)showVideo;
-(void)player:(id)arg1 didCreateAVPlayer:(id)arg2 ;
-(void)setVideoPlayerFrame:(CGRect)arg1 ;
-(void)pauseVideo;
-(GADAdViewActiveViewReporter *)activeViewReporter;
-(void)setShowDebug:(BOOL)arg1 ;
-(void)didRotateToOrientation:(long long)arg1 ;
-(void)configureAsInterstitialAdView;
-(void)setRewardBasedVideoAdGMSGHandlerDelegate:(id<GADRewardBasedVideoAdGMSGHandlerDelegate>)arg1 ;
-(void)configureAsBannerAdView;
-(void)didMoveToPlacement:(id)arg1 ;
-(void)setAdDebugDialogString:(NSString *)arg1 ;
-(void)dispatchSDKEvent:(id)arg1 parameters:(id)arg2 ;
-(void)addGestureRecognizers;
-(void)willLoadHTML;
-(void)handleGesture:(id)arg1 ;
-(void)executeJavaScriptAsynchronouslyFromString:(id)arg1 ;
-(void)setHTMLWindowOrientation:(long long)arg1 shouldDispatchOrientationChangeEvent:(BOOL)arg2 ;
-(NSString *)adDebugDialogString;
-(BOOL)showDebug;
-(void)setActiveViewReporter:(GADAdViewActiveViewReporter *)arg1 ;
-(AVPlayerLayer *)videoPlayerLayer;
-(void)setVideoPlayerLayer:(AVPlayerLayer *)arg1 ;
-(CGRect)cachedVideoPlayerFrame;
-(void)setCachedVideoPlayerFrame:(CGRect)arg1 ;
-(id<GADRewardBasedVideoAdGMSGHandlerDelegate>)rewardBasedVideoAdGMSGHandlerDelegate;
-(void)postJSNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)setURL:(id)arg1 forView:(id)arg2 ;
-(void)forceRotateHTMLToOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<GADAdViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reload;
-(id<GADAdViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)contentSize;
-(BOOL)touched;
-(void)setTouched:(BOOL)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(NSURLRequest *)request;
-(void)reset;
-(UIScrollView *)scrollView;
-(BOOL)isOpaque;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(NSURL *)URL;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)isLoading;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(GADVideoController *)videoController;
-(void)setVideoController:(GADVideoController *)arg1 ;
-(GADVideoPlayer *)videoPlayer;
-(void)setVideoPlayer:(GADVideoPlayer *)arg1 ;
-(void)saveState;
-(void)restoreState;
@end
