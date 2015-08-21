/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNViewController.h>
#import <Twitter/PKAddPassesViewControllerDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <Twitter/WKNavigationDelegate.h>
#import <Twitter/WKUIDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Twitter/TFNLayoutMetricsEnvironment.h>
#import <Twitter/TNLRequestDelegate.h>

@protocol TFNUnifiedWebView, TFNUnifiedWebViewConfiguration;
@class UIWindow, TFNKVODispatcher, UIBarButtonItem, UIView, NSString, UIProgressView, NSURLRequest, UIWebView, WKWebView, TNLRequestOperation, NSURL;

@interface TFNBasicWebViewController : TFNViewController <PKAddPassesViewControllerDelegate, UIWebViewDelegate, WKNavigationDelegate, WKUIDelegate, UIScrollViewDelegate, TFNLayoutMetricsEnvironment, TNLRequestDelegate> {

	UIWindow* _originalWindow;
	TFNKVODispatcher* _titleKVOer;
	TFNKVODispatcher* _URLKVOer;
	TFNKVODispatcher* _estimatedProgressKVOer;
	BOOL _silenceNetworkActivity;
	BOOL _showingAlertView;
	BOOL _dismissAfterAppleDeepLink;
	long long _activeRequests;
	double _lastWebPopoverPresentationTime;
	UIBarButtonItem* _legacyBackItem;
	UIBarButtonItem* _legacyForwardItem;
	UIBarButtonItem* _legacyActionItem;
	BOOL _hasWebViewStartedLoadingHTMLContent;
	BOOL _didLoadOnce;
	BOOL _forceReloadCurrentURLOnBecomeActive;
	UIView*<TFNUnifiedWebView> _webViewReference;
	id<TFNUnifiedWebViewConfiguration> _webViewConfigurationReference;
	NSString* _webViewHTMLTitle;
	unsigned long long _loadsMadeForCurrentNavigation;
	UIBarButtonItem* _backItem;
	UIBarButtonItem* _forwardItem;
	UIBarButtonItem* _actionItem;
	UIBarButtonItem* _closeItem;
	UIProgressView* _progressView;
	NSURLRequest* _rootURLRequest;
	NSURLRequest* _currentURLRequest;
	UIWebView* _UIWebView;
	WKWebView* _WKWebView;
	TNLRequestOperation* _passbookCheckOperation;

}

@property (nonatomic,copy) NSURL * rootURL; 
@property (nonatomic,copy) NSURL * currentURL; 
@property (nonatomic,copy) NSString * webViewHTMLTitle;                                                                              //@synthesize webViewHTMLTitle=_webViewHTMLTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long loadsMadeForCurrentNavigation;                                                     //@synthesize loadsMadeForCurrentNavigation=_loadsMadeForCurrentNavigation - In the implementation block
@property (nonatomic,readonly) BOOL hasWebViewStartedLoadingHTMLContent;                                                             //@synthesize hasWebViewStartedLoadingHTMLContent=_hasWebViewStartedLoadingHTMLContent - In the implementation block
@property (nonatomic,readonly) BOOL didLoadOnce;                                                                                     //@synthesize didLoadOnce=_didLoadOnce - In the implementation block
@property (nonatomic,retain) id webViewDelegate; 
@property (nonatomic,readonly) UIView*<TFNUnifiedWebView> webView;                                                                   //@synthesize webViewReference=_webViewReference - In the implementation block
@property (nonatomic,readonly) id<TFNUnifiedWebViewConfiguration> webViewConfiguration;                                              //@synthesize webViewConfigurationReference=_webViewConfigurationReference - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backItem;                                                                             //@synthesize backItem=_backItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * forwardItem;                                                                          //@synthesize forwardItem=_forwardItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * actionItem;                                                                           //@synthesize actionItem=_actionItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * closeItem;                                                                            //@synthesize closeItem=_closeItem - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                                                          //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,copy) NSURLRequest * rootURLRequest;                                                                            //@synthesize rootURLRequest=_rootURLRequest - In the implementation block
@property (nonatomic,copy) NSURLRequest * currentURLRequest;                                                                         //@synthesize currentURLRequest=_currentURLRequest - In the implementation block
@property (nonatomic,readonly) UIWebView * UIWebView;                                                                                //@synthesize UIWebView=_UIWebView - In the implementation block
@property (nonatomic,readonly) WKWebView * WKWebView;                                                                                //@synthesize WKWebView=_WKWebView - In the implementation block
@property (nonatomic,retain) TNLRequestOperation * passbookCheckOperation;                                                           //@synthesize passbookCheckOperation=_passbookCheckOperation - In the implementation block
@property (assign,getter=shouldForceReloadCurrentURLOnBecomeActive,nonatomic) BOOL forceReloadCurrentURLOnBecomeActive;              //@synthesize forceReloadCurrentURLOnBecomeActive=_forceReloadCurrentURLOnBecomeActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutMetricsDidChange:(id)arg1 ;
-(void)setActionItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)actionItem;
-(void)requestOperation:(id)arg1 didCompleteWithResponse:(id)arg2 ;
-(NSURL *)currentURL;
-(BOOL)shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2 ;
-(void)didFinishLoadingWithError:(id)arg1 ;
-(NSString *)webViewHTMLTitle;
-(void)setWebViewDelegate:(id)arg1 ;
-(void)setRootURLRequest:(NSURLRequest *)arg1 ;
-(BOOL)didLoadOnce;
-(void)loadInitialURL;
-(BOOL)hasWebViewStartedLoadingHTMLContent;
-(void)didReceiveNavigationRequestOfType:(long long)arg1 ;
-(void)willStartLoadingNavigationRequestOfType:(long long)arg1 ;
-(unsigned long long)loadsMadeForCurrentNavigation;
-(void)load:(id)arg1 sender:(id)arg2 ;
-(void)setWebViewHTMLTitle:(NSString *)arg1 ;
-(BOOL)supportsWebKitWebView;
-(void)setCurrentURL:(NSURL *)arg1 ;
-(void)logWebViewProgressWithEstimatedProgressValue:(double)arg1 ;
-(void)setBackItem:(UIBarButtonItem *)arg1 ;
-(void)forward:(id)arg1 ;
-(void)setForwardItem:(UIBarButtonItem *)arg1 ;
-(id<TFNUnifiedWebViewConfiguration>)webViewConfiguration;
-(UIBarButtonItem *)closeItem;
-(NSURLRequest *)rootURLRequest;
-(void)setCurrentURLRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)currentURLRequest;
-(void)_layoutProgressView;
-(void)_updateWebNavigation;
-(void)setForceReloadCurrentURLOnBecomeActive:(BOOL)arg1 ;
-(BOOL)shouldForceReloadCurrentURLOnBecomeActive;
-(void)_resetCurrentNavigationLoadState;
-(BOOL)unifiedWebView:(id)arg1 shouldStartLoadingRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)unifiedWebViewDidStartLoading:(id)arg1 ;
-(long long)unifiedWebView:(id)arg1 handleFinishingLoadWithError:(id)arg2 ;
-(void)setPassbookCheckOperation:(TNLRequestOperation *)arg1 ;
-(BOOL)_installPassbookPassFromData:(id)arg1 ;
-(BOOL)_loadPassbookPassWithResponse:(id)arg1 data:(id)arg2 ;
-(TNLRequestOperation *)passbookCheckOperation;
-(void)_checkURLForPassbookContent:(id)arg1 sourceError:(id)arg2 ;
-(void)didStartLoading;
-(id)webViewDelegate;
-(void)setCloseItem:(UIBarButtonItem *)arg1 ;
-(UIWebView *)UIWebView;
-(WKWebView *)WKWebView;
-(void)refresh:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(UIBarButtonItem *)backItem;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(UIView*<TFNUnifiedWebView>)webView;
-(void)reload:(id)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(NSURL *)rootURL;
-(id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 ;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UIBarButtonItem *)forwardItem;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)close:(id)arg1 ;
-(void)action:(id)arg1 ;
-(void)back:(id)arg1 ;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
-(void)setRootURL:(NSURL *)arg1 ;
-(void)openExternalURL:(id)arg1 ;
@end

