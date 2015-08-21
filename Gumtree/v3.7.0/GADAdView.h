/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <Gumtree/GADVideoPlayerDelegate.h>

@protocol GADAdViewDelegate;
@class UIWebView, NSURL, UIViewController, GADAdViewState, NSOperationQueue, NSString, GADUIWebViewGestureDelegate, GADImpressionTicketGestureRecognizer, UIAlertView, AVPlayerLayer, GADVideoPlayer, UIScrollView, NSURLRequest;

@interface GADAdView : UIView <UIAlertViewDelegate, UIWebViewDelegate, GADVideoPlayerDelegate> {

	UIWebView* _webView;
	NSURL* _URL;
	UIViewController* _viewControllerBeforeExpanded;
	GADAdViewState* _savedState;
	NSOperationQueue* _eventQueue;
	BOOL _touched;
	BOOL _showDebug;
	UIViewController* _viewController;
	NSString* _adDebugDialog;
	long long _orientation;
	GADUIWebViewGestureDelegate* _gestureDelegate;
	GADImpressionTicketGestureRecognizer* _gesture;
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
@property (assign,nonatomic,__weak) UIViewController * viewController;                    //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) BOOL touched;                                                //@synthesize touched=_touched - In the implementation block
@property (nonatomic,copy) NSString * adDebugDialog;                                      //@synthesize adDebugDialog=_adDebugDialog - In the implementation block
@property (assign,nonatomic) BOOL showDebug;                                              //@synthesize showDebug=_showDebug - In the implementation block
@property (assign,nonatomic) long long orientation;                                       //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) GADUIWebViewGestureDelegate * gestureDelegate;               //@synthesize gestureDelegate=_gestureDelegate - In the implementation block
@property (nonatomic,retain) GADImpressionTicketGestureRecognizer * gesture;              //@synthesize gesture=_gesture - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                                     //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (assign,nonatomic,__weak) id<GADAdViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (getter=canGoBack,nonatomic,readonly) BOOL canGoBack; 
@property (getter=canGoForward,nonatomic,readonly) BOOL canGoForward; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) NSURLRequest * request; 
@property (nonatomic,retain) AVPlayerLayer * videoPlayerLayer;                            //@synthesize videoPlayerLayer=_videoPlayerLayer - In the implementation block
@property (assign,nonatomic) CGRect cachedVideoPlayerFrame;                               //@synthesize cachedVideoPlayerFrame=_cachedVideoPlayerFrame - In the implementation block
@property (nonatomic,retain) GADVideoPlayer * videoPlayer;                                //@synthesize videoPlayer=_videoPlayer - In the implementation block
+(id)webViewCache;
+(id)cachedWebView;
+(id)placeholderWindow;
+(void)cacheWebView:(id)arg1 ;
-(void)setUpVideoPlayerWithURL:(id)arg1 ;
-(void)setVideoPlayerFrame:(CGRect)arg1 ;
-(void)hideVideo;
-(void)showVideo;
-(void)player:(id)arg1 didCacheFileAtURL:(id)arg2 ;
-(void)player:(id)arg1 didCreateAVPlayer:(id)arg2 ;
-(void)setShowDebug:(BOOL)arg1 ;
-(void)didRotateToOrientation:(long long)arg1 ;
-(void)forceRotateToOrientation:(long long)arg1 ;
-(NSString *)adDebugDialog;
-(void)dispatchSDKEvent:(id)arg1 parameters:(id)arg2 ;
-(void)configureAsInterstitialAdView;
-(void)configureAsBannerAdView;
-(void)setAdDebugDialog:(NSString *)arg1 ;
-(GADVideoPlayer *)videoPlayer;
-(void)setVideoPlayer:(GADVideoPlayer *)arg1 ;
-(AVPlayerLayer *)videoPlayerLayer;
-(void)setVideoPlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)setCachedVideoPlayerFrame:(CGRect)arg1 ;
-(void)reportBadAd:(id)arg1 ;
-(void)setURL:(id)arg1 forView:(id)arg2 ;
-(void)createGestureRecognizer;
-(void)executeJavaScriptAsynchronouslyFromString:(id)arg1 ;
-(void)setHTMLWindowOrientation:(long long)arg1 shouldDispatchOrientationChangeEvent:(BOOL)arg2 ;
-(GADImpressionTicketGestureRecognizer *)gesture;
-(void)handleGesture:(id)arg1 ;
-(BOOL)showDebug;
-(void)setGesture:(GADImpressionTicketGestureRecognizer *)arg1 ;
-(CGRect)cachedVideoPlayerFrame;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
-(void)saveState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<GADAdViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reload;
-(id<GADAdViewDelegate>)delegate;
-(BOOL)touched;
-(void)setTouched:(BOOL)arg1 ;
-(long long)orientation;
-(NSURLRequest *)request;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)reset;
-(BOOL)isOpaque;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(UIScrollView *)scrollView;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(NSURL *)URL;
-(void)setGestureDelegate:(GADUIWebViewGestureDelegate *)arg1 ;
-(GADUIWebViewGestureDelegate *)gestureDelegate;
-(void)setOrientation:(long long)arg1 ;
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
-(void)restoreState;
@end
