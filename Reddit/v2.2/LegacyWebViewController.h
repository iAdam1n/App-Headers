/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/BaseWebViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSURLRequest, NSString;

@interface LegacyWebViewController : BaseWebViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	NSURLRequest* _initialRequest;

}

@property (nonatomic,retain) UIWebView * webView;                      //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSURLRequest * initialRequest;              //@synthesize initialRequest=_initialRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)currentURL;
-(void)loadHTMLString:(id)arg1 ;
-(id)originalRequestURL;
-(id)webPageTitle;
-(void)viewDidLoad;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)goBack;
-(void)goForward;
-(void)refresh;
-(NSURLRequest *)initialRequest;
-(void)setInitialRequest:(NSURLRequest *)arg1 ;
@end
