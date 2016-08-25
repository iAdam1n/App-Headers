/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <SolitaireFree/SourceKitBrowserControlsViewDelegate.h>

@protocol SKBrowserDelegate;
@class SKBrowserControlsView, NSURLRequest, UIViewController, NSArray, UIWebView, UIActivityIndicatorView, NSString;

@interface SKBrowser : UIViewController <UIWebViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, SourceKitBrowserControlsViewDelegate> {

	SKBrowserControlsView* browserControlsView;
	NSURLRequest* currrentRequest;
	UIViewController* currentViewController;
	NSArray* sourceKitBrowserFeatures;
	UIWebView* browserWebView;
	UIActivityIndicatorView* loadingIndicator;
	BOOL disableStatusBar;
	BOOL scalePagesToFit;
	BOOL statusBarHidden;
	BOOL supportInlineMediaPlayback;
	id<SKBrowserDelegate> _delegate;

}

@property (assign,nonatomic) id<SKBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)back;
-(void)getTelPermission:(id)arg1 ;
-(void)launchSafari;
-(id)initWithDelegate:(id)arg1 withFeatures:(id)arg2 ;
-(void)setDelegate:(id<SKBrowserDelegate>)arg1 ;
-(id)init;
-(id<SKBrowserDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dismiss;
-(void)loadRequest:(id)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)refresh;
-(void)forward;
@end

