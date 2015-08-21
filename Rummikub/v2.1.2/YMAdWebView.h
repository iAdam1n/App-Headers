/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Rummikub/Rummikub-Structs.h>
#import <Rummikub/YMAdDialogView.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UIWebView, UIToolbar, UIView, UIActionSheet, UIBarButtonItem, NSString, NSURLRequest;

@interface YMAdWebView : YMAdDialogView <UIWebViewDelegate, UIActionSheetDelegate> {

	UIWebView* _webView;
	UIToolbar* _toolbar;
	UIView* _loadingbar;
	UIView* _promptView;
	UIActionSheet* _operationActionSheet;
	UIBarButtonItem* _titleItem;
	UIBarButtonItem* _goBackItem;
	UIBarButtonItem* _goForwardItem;
	UIBarButtonItem* _refreshItem;
	UIBarButtonItem* _stopRefreshItem;
	UIBarButtonItem* _operationItem;
	UIBarButtonItem* _closeItem;
	NSString* _propmt;

}

@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=canGoBack,nonatomic,readonly) char canGoBack; 
@property (getter=canGoForward,nonatomic,readonly) char canGoForward; 
@property (getter=isLoading,nonatomic,readonly) char loading; 
@property (assign,nonatomic) char scalesPageToFit; 
-(void)addObservers;
-(void)removeObservers;
-(void)hideWithAnimation:(int)arg1 ;
-(void)showWithAnimation:(int)arg1 ;
-(CGRect)frameForWebView;
-(char)shouldRotateToOrientation:(int)arg1 ;
-(void)sizeToFitOrientation:(char)arg1 ;
-(void)didShowInView:(id)arg1 ;
-(void)didDismissFromView:(id)arg1 ;
-(void)updateToolbarState;
-(void)goBackAction:(id)arg1 ;
-(void)goForwardAction:(id)arg1 ;
-(void)refreshAction:(id)arg1 ;
-(void)stopRefreshAction:(id)arg1 ;
-(void)operationAction:(id)arg1 ;
-(void)closeAction:(id)arg1 ;
-(CGSize)sizeForTitle;
-(CGRect)frameForLoadingBar;
-(CGRect)frameForToolbar;
-(void)updateToolbarTitle;
-(void)setContentIsLoading:(char)arg1 ;
-(id)loadingbar;
-(CGRect)frameForPromptView:(id)arg1 ;
-(void)copyLinkOperation;
-(void)openLinkWithSafariOperation;
-(void)setupByWebView;
-(void)showInView:(id)arg1 animated:(char)arg2 ;
-(void)showInView:(id)arg1 withAnimation:(int)arg2 ;
-(void)setPromptHidden:(char)arg1 ;
-(void)showOperation;
-(void)finishOperation:(int)arg1 ;
-(void)startLoadRequest;
-(void)finishLoadReqest:(char)arg1 ;
-(void)setLoadingbar:(char)arg1 ;
-(void)showPrompt:(id)arg1 duration:(double)arg2 ;
-(void)hidePromptView;
-(void)deviceOrientationDidChange:(id)arg1 ;
-(void)show:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)reload;
-(NSURLRequest *)request;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setPrompt:(id)arg1 ;
-(id)promptView;
-(id)toolbar;
-(void)setToolbar:(char)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(char)scalesPageToFit;
-(char)isLoading;
-(void)setScalesPageToFit:(char)arg1 ;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(char)canGoBack;
-(char)canGoForward;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)hide:(char)arg1 ;
@end

