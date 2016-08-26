/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol FBAdSafariViewControllerDelegate;
@class UIWebView, UIBarButtonItem, UIToolbar, NSObject, NSString;

@interface FBAdBrowserController : UIViewController <UIWebViewDelegate> {

	BOOL _statusBarHidden;
	UIWebView* _webView;
	UIBarButtonItem* _backButton;
	UIBarButtonItem* _forwardButton;
	UIBarButtonItem* _refreshButton;
	UIBarButtonItem* _spinnerButton;
	UIToolbar* _toolBar;
	NSObject*<FBAdSafariViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIWebView * webView;                                                      //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backButton;                                             //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * forwardButton;                                          //@synthesize forwardButton=_forwardButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * refreshButton;                                          //@synthesize refreshButton=_refreshButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * spinnerButton;                                          //@synthesize spinnerButton=_spinnerButton - In the implementation block
@property (nonatomic,retain) UIToolbar * toolBar;                                                      //@synthesize toolBar=_toolBar - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<FBAdSafariViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isStatusBarHidden,nonatomic) BOOL statusBarHidden;                            //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setToolBar:(UIToolbar *)arg1 ;
-(UIToolbar *)toolBar;
-(void)backButtonClicked:(id)arg1 ;
-(void)forwardButtonClicked:(id)arg1 ;
-(void)setForwardButton:(UIBarButtonItem *)arg1 ;
-(void)refreshButtonClicked:(id)arg1 ;
-(void)setSpinnerButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)forwardButton;
-(UIBarButtonItem *)spinnerButton;
-(void)setDelegate:(NSObject*<FBAdSafariViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<FBAdSafariViewControllerDelegate>)delegate;
-(BOOL)isStatusBarHidden;
-(BOOL)prefersStatusBarHidden;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)updateButtons;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(UIBarButtonItem *)backButton;
-(void)clearContent;
-(void)loadURL:(id)arg1 ;
-(void)setRefreshButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)refreshButton;
-(void)doneButtonClicked:(id)arg1 ;
-(void)setBackButton:(UIBarButtonItem *)arg1 ;
@end
