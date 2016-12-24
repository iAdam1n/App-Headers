/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol AMMPAdBrowserControllerDelegate;
@class UIWebView, UIToolbar, UIBarButtonItem, UIActivityIndicatorView, UIActionSheet, NSURL, AMALinkUtility, NSString;

@interface AMMPAdBrowserController : UIViewController <UIWebViewDelegate, UIActionSheetDelegate> {

	id<AMMPAdBrowserControllerDelegate> _delegate;
	UIWebView* _webView;
	UIToolbar* _toolbar;
	UIBarButtonItem* _backButton;
	UIBarButtonItem* _forwardButton;
	UIBarButtonItem* _refreshButton;
	UIBarButtonItem* _safariButton;
	UIBarButtonItem* _doneButton;
	UIActivityIndicatorView* _spinner;
	UIBarButtonItem* _spinnerItem;
	UIActionSheet* _actionSheet;
	BOOL _actionSheetIsShowing;
	NSURL* _URL;
	BOOL _openedSharedApplication;
	BOOL _allowOrientationChange;
	AMALinkUtility* _sharedLinkUtility;

}

@property (nonatomic,retain) UIWebView * webView;                                              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backButton;                                     //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * forwardButton;                                  //@synthesize forwardButton=_forwardButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * refreshButton;                                  //@synthesize refreshButton=_refreshButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * safariButton;                                   //@synthesize safariButton=_safariButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                     //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * spinnerItem;                                    //@synthesize spinnerItem=_spinnerItem - In the implementation block
@property (assign,nonatomic,__weak) id<AMMPAdBrowserControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) AMALinkUtility * sharedLinkUtility;                               //@synthesize sharedLinkUtility=_sharedLinkUtility - In the implementation block
@property (assign,nonatomic) BOOL allowOrientationChange;                                      //@synthesize allowOrientationChange=_allowOrientationChange - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                                      //@synthesize actionSheet=_actionSheet - In the implementation block
@property (assign,nonatomic) BOOL openedSharedApplication;                                     //@synthesize openedSharedApplication=_openedSharedApplication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)back;
-(void)setForwardButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)forwardButton;
-(void)dismissActionSheet;
-(UIActionSheet *)actionSheet;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
-(void)setSafariButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)safariButton;
-(BOOL)allowOrientationChange;
-(void)setAllowOrientationChange:(BOOL)arg1 ;
-(id)backArrowImage;
-(id)forwardArrowImage;
-(UIBarButtonItem *)spinnerItem;
-(void)safari;
-(void)setSpinnerItem:(UIBarButtonItem *)arg1 ;
-(AMALinkUtility *)sharedLinkUtility;
-(void)setSharedLinkUtility:(AMALinkUtility *)arg1 ;
-(BOOL)openedSharedApplication;
-(void)setAdIdCookie;
-(void)setOpenedSharedApplication:(BOOL)arg1 ;
-(void)setDelegate:(id<AMMPAdBrowserControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<AMMPAdBrowserControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)done;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)refresh;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)didPresentActionSheet:(id)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)applicationDidEnterBackground;
-(UIBarButtonItem *)backButton;
-(void)setRefreshButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)refreshButton;
-(CGContextRef)createContext;
-(void)setBackButton:(UIBarButtonItem *)arg1 ;
-(void)forward;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
@end
