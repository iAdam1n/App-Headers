/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol UIWebViewDelegate;
@class UIBarButtonItem, UIWebView, NSURLRequest, NSString;

@interface MNGSVWebViewController : UIViewController <UIWebViewDelegate> {

	id<UIWebViewDelegate> _delegate;
	UIBarButtonItem* _backBarButtonItem;
	UIBarButtonItem* _forwardBarButtonItem;
	UIBarButtonItem* _refreshBarButtonItem;
	UIBarButtonItem* _stopBarButtonItem;
	UIBarButtonItem* _actionBarButtonItem;
	UIWebView* _webView;
	NSURLRequest* _request;

}

@property (assign,nonatomic,__weak) id<UIWebViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backBarButtonItem;                 //@synthesize backBarButtonItem=_backBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * forwardBarButtonItem;              //@synthesize forwardBarButtonItem=_forwardBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * refreshBarButtonItem;              //@synthesize refreshBarButtonItem=_refreshBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * stopBarButtonItem;                 //@synthesize stopBarButtonItem=_stopBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * actionBarButtonItem;               //@synthesize actionBarButtonItem=_actionBarButtonItem - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                 //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateToolbarItems;
-(void)goBackTapped:(id)arg1 ;
-(void)goForwardTapped:(id)arg1 ;
-(void)reloadTapped:(id)arg1 ;
-(void)stopTapped:(id)arg1 ;
-(UIBarButtonItem *)stopBarButtonItem;
-(UIBarButtonItem *)refreshBarButtonItem;
-(UIBarButtonItem *)actionBarButtonItem;
-(void)setForwardBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setRefreshBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setStopBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setActionBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setDelegate:(id<UIWebViewDelegate>)arg1 ;
-(void)dealloc;
-(id<UIWebViewDelegate>)delegate;
-(NSURLRequest *)request;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setBackBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)backBarButtonItem;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(UIBarButtonItem *)forwardBarButtonItem;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)actionButtonTapped:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(id)initWithAddress:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
@end
