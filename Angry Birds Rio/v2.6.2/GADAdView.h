/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <UIKit/UIView.h>
#import <AngryBirdsRio/GADVideoPlayerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol GADAdViewDelegate;
@class UIWebView, NSURL, UIViewController, GADAdViewState, NSOperationQueue, UIGestureRecognizer, NSString, GADImpressionTicketGestureRecognizer, UIAlertView, AVPlayerLayer, GADVideoPlayer, UIScrollView, NSURLRequest;

@interface GADAdView : UIView <GADVideoPlayerDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate, UIWebViewDelegate> {

	UIWebView* _webView;
	NSURL* _URL;
	UIViewController* _viewControllerBeforeExpanded;
	GADAdViewState* _savedState;
	NSOperationQueue* _eventQueue;
	UIGestureRecognizer* _touchGestureRecognizer;
	BOOL _gestureRecognizersAdded;
	BOOL _touched;
	BOOL _showDebug;
	UIViewController* _viewController;
	NSString* _adDebugDialog;
	long long _orientation;
	GADImpressionTicketGestureRecognizer* _impressionTicketGestureRecognizer;
	UIAlertView* _alertView;
	id<GADAdViewDelegate> _delegate;
	AVPlayerLayer* _videoPlayerLayer;
	GADVideoPlayer* _videoPlayer;
	CGRect _cachedVideoPlayerFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController * viewController;                                              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) BOOL touched;                                                                          //@synthesize touched=_touched - In the implementation block
@property (nonatomic,copy) NSString * adDebugDialog;                                                                //@synthesize adDebugDialog=_adDebugDialog - In the implementation block
@property (assign,nonatomic) BOOL showDebug;                                                                        //@synthesize showDebug=_showDebug - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                 //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) GADImpressionTicketGestureRecognizer * impressionTicketGestureRecognizer;              //@synthesize impressionTicketGestureRecognizer=_impressionTicketGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                                                               //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                                         //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (assign,nonatomic,__weak) id<GADAdViewDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (getter=canGoBack,nonatomic,readonly) BOOL canGoBack; 
@property (getter=canGoForward,nonatomic,readonly) BOOL canGoForward; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) NSURLRequest * request; 
@property (nonatomic,retain) AVPlayerLayer * videoPlayerLayer;                                                      //@synthesize videoPlayerLayer=_videoPlayerLayer - In the implementation block
@property (assign,nonatomic) CGRect cachedVideoPlayerFrame;                                                         //@synthesize cachedVideoPlayerFrame=_cachedVideoPlayerFrame - In the implementation block
@property (nonatomic,retain) GADVideoPlayer * videoPlayer;                                                          //@synthesize videoPlayer=_videoPlayer - In the implementation block
+(id)webViewCache;
+(id)cachedWebView;
+(id)placeholderWindow;
+(void)cacheWebView:(id)arg1 ;
+(id)JSCommandForNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)player:(id)arg1 didCacheFileAtURL:(id)arg2 ;
-(void)setUpVideoPlayerWithURL:(id)arg1 ;
-(void)hideVideo;
-(void)showVideo;
-(void)player:(id)arg1 didCreateAVPlayer:(id)arg2 ;
-(void)setVideoPlayerFrame:(CGRect)arg1 ;
-(void)setShowDebug:(BOOL)arg1 ;
-(void)didRotateToOrientation:(long long)arg1 ;
-(NSString *)adDebugDialog;
-(void)postJSNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dispatchSDKEvent:(id)arg1 parameters:(id)arg2 ;
-(void)configureAsBannerAdView;
-(void)setAdDebugDialog:(NSString *)arg1 ;
-(void)executeJavaScriptAsynchronouslyFromString:(id)arg1 ;
-(void)handleGesture:(id)arg1 ;
-(void)setHTMLWindowOrientation:(long long)arg1 shouldDispatchOrientationChangeEvent:(BOOL)arg2 ;
-(BOOL)showDebug;
-(void)configureAsInterstitialAdView;
-(GADImpressionTicketGestureRecognizer *)impressionTicketGestureRecognizer;
-(void)setImpressionTicketGestureRecognizer:(GADImpressionTicketGestureRecognizer *)arg1 ;
-(AVPlayerLayer *)videoPlayerLayer;
-(void)setVideoPlayerLayer:(AVPlayerLayer *)arg1 ;
-(CGRect)cachedVideoPlayerFrame;
-(void)setCachedVideoPlayerFrame:(CGRect)arg1 ;
-(void)setURL:(id)arg1 forView:(id)arg2 ;
-(void)forceRotateToOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<GADAdViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reload;
-(id<GADAdViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)touched;
-(void)setTouched:(BOOL)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(NSURLRequest *)request;
-(void)reset;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
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
-(GADVideoPlayer *)videoPlayer;
-(void)setVideoPlayer:(GADVideoPlayer *)arg1 ;
-(void)saveState;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
-(void)restoreState;
@end

