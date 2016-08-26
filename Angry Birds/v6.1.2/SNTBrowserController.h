/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UIView, UIWebView, UIButton, UIActionSheet, UIAlertView, UIActivityIndicatorView, NSString;

@interface SNTBrowserController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate, UIActionSheetDelegate> {

	UIView* _toolbar;
	UIWebView* _webView;
	UIButton* _closeButton;
	UIButton* _refreshButton;
	UIButton* _backButton;
	UIButton* _fwdButton;
	UIButton* _actionButton;
	UIActionSheet* _actionSheet;
	UIAlertView* _errorView;
	UIActivityIndicatorView* _spinner;
	function<void ()>* _onHidden;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _url;
	int _pendingLoads;
	BOOL _isBeingPresentedOrDismissed;
	BOOL _dismissWhenVisible;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)closeTapped:(id)arg1 ;
-(void)refreshTapped:(id)arg1 ;
-(void)backTapped:(id)arg1 ;
-(void)fwdTapped:(id)arg1 ;
-(void)doLayout;
-(void)updateToolbar;
-(void)load:(const char*)arg1 ;
-(id)initWithCallback:(const function<void ()>*)arg1 ;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismiss;
-(void)present;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)actionTapped:(id)arg1 ;
@end
