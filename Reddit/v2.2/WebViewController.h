/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/BaseWebViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class WKWebView, NSURL, NSString;

@interface WebViewController : BaseWebViewController <WKNavigationDelegate> {

	BOOL _observingProgress;
	WKWebView* _webView;
	NSURL* _webURL;

}

@property (nonatomic,retain) WKWebView * webView;                   //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSURL * webURL;                        //@synthesize webURL=_webURL - In the implementation block
@property (assign,nonatomic) BOOL observingProgress;                //@synthesize observingProgress=_observingProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutViewsForFrame:(CGRect)arg1 ;
-(id)currentURL;
-(void)loadHTMLString:(id)arg1 ;
-(void)fixNavbarLayout:(id)arg1 ;
-(id)originalRequestURL;
-(id)webPageTitle;
-(BOOL)observingProgress;
-(void)setObservingProgress:(BOOL)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(id)previewActionItems;
-(WKWebView *)webView;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadRequest:(id)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)goBack;
-(void)goForward;
-(void)refresh;
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
@end
