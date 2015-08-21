/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/ZRTariffedUxSentryDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol WebViewControllerDelegate, FBUserAgentFormatting;
@class UIWebView, MNLoadingView, FBFullscreenErrorView, NSTimer, FBMWebViewRequestKey, ZRTariffedUxSentry, UIActionSheet, UIBarButtonItem, NSString;

@interface FBMWebViewController : UIViewController <ZRTariffedUxSentryDelegate, UIActionSheetDelegate, UIWebViewDelegate> {

	UIWebView* _webView;
	MNLoadingView* _loadingView;
	FBFullscreenErrorView* _errorView;
	NSTimer* _showErrorViewTimer;
	double _loadingStartedTime;
	FBMWebViewRequestKey* _requestKey;
	BOOL _hideActionBarButton;
	id<WebViewControllerDelegate> _delegate;
	ZRTariffedUxSentry* _nonZeroRatedUxSentry;
	long long _userDidCancelFenceCount;
	UIActionSheet* _actionSheet;
	UIBarButtonItem* _actionBarButton;
	id<FBUserAgentFormatting> _userAgentFormatter;

}

@property (assign,nonatomic) id<WebViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) ZRTariffedUxSentry * nonZeroRatedUxSentry;                   //@synthesize nonZeroRatedUxSentry=_nonZeroRatedUxSentry - In the implementation block
@property (assign,nonatomic) long long userDidCancelFenceCount;                         //@synthesize userDidCancelFenceCount=_userDidCancelFenceCount - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                               //@synthesize actionSheet=_actionSheet - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * actionBarButton;                         //@synthesize actionBarButton=_actionBarButton - In the implementation block
@property (nonatomic,retain) id<FBUserAgentFormatting> userAgentFormatter;              //@synthesize userAgentFormatter=_userAgentFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBUserAgentFormatting>)userAgentFormatter;
-(void)setUserAgentFormatter:(id<FBUserAgentFormatting>)arg1 ;
-(id)analyticsModule;
-(void)nonZeroRatedSessionDidFailToStart:(id)arg1 ;
-(void)nonZeroRatedSessionUxMayActivate:(id)arg1 ;
-(void)nonZeroRatedSessionUxMustDeactivate:(id)arg1 ;
-(void)_loadWebPage;
-(id)initWithURL:(id)arg1 nonZeroRatedUxSentry:(id)arg2 ;
-(id)initWithZeroRatedURL:(id)arg1 filter:(id)arg2 hideActionBarButton:(BOOL)arg3 ;
-(id)_initWithURL:(id)arg1 request:(id)arg2 nonZeroRatedUxSentry:(id)arg3 hideActionBarButton:(BOOL)arg4 ;
-(void)setNonZeroRatedUxSentry:(ZRTariffedUxSentry *)arg1 ;
-(void)_showActionBarButton;
-(void)_reloadWebPageWithURL:(id)arg1 ;
-(void)_reloadWebPageWithRequest:(id)arg1 ;
-(void)_buildAndSetUserAgent;
-(void)_actionPressed:(id)arg1 ;
-(void)setActionBarButton:(UIBarButtonItem *)arg1 ;
-(void)reloadPressed;
-(void)_showErrorView;
-(id)initWithZeroRatedURL:(id)arg1 filter:(id)arg2 ;
-(ZRTariffedUxSentry *)nonZeroRatedUxSentry;
-(long long)userDidCancelFenceCount;
-(void)setUserDidCancelFenceCount:(long long)arg1 ;
-(UIBarButtonItem *)actionBarButton;
-(void)dealloc;
-(void)setDelegate:(id<WebViewControllerDelegate>)arg1 ;
-(id<WebViewControllerDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(unsigned long long)supportedInterfaceOrientations;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(UIActionSheet *)actionSheet;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
@end

