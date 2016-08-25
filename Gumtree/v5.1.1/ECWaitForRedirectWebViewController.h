/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString, UIWebView;

@interface ECWaitForRedirectWebViewController : ECBaseViewController <UIWebViewDelegate> {

	BOOL _completionHandlerDidFire;
	BOOL _userDidCancelAfterError;
	BOOL _userDidCancelModal;
	NSString* _startUrl;
	NSString* _confirmUrl;
	NSString* _cancelUrl;
	/*^block*/id _onCompletion;
	UIWebView* _webView;

}

@property (assign) BOOL userDidCancelAfterError;                      //@synthesize userDidCancelAfterError=_userDidCancelAfterError - In the implementation block
@property (assign) BOOL userDidCancelModal;                           //@synthesize userDidCancelModal=_userDidCancelModal - In the implementation block
@property (copy) NSString * startUrl;                                 //@synthesize startUrl=_startUrl - In the implementation block
@property (copy) NSString * confirmUrl;                               //@synthesize confirmUrl=_confirmUrl - In the implementation block
@property (copy) NSString * cancelUrl;                                //@synthesize cancelUrl=_cancelUrl - In the implementation block
@property (copy) id onCompletion;                                     //@synthesize onCompletion=_onCompletion - In the implementation block
@property (assign,nonatomic,__weak) UIWebView * webView;              //@synthesize webView=_webView - In the implementation block
@property (assign) BOOL completionHandlerDidFire;                     //@synthesize completionHandlerDidFire=_completionHandlerDidFire - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)trackPageView;
-(void)loadStartUrl;
-(NSString *)startUrl;
-(BOOL)userDidCancelAfterError;
-(BOOL)userDidCancelModal;
-(id)onCompletion;
-(BOOL)completionHandlerDidFire;
-(void)setCompletionHandlerDidFire:(BOOL)arg1 ;
-(void)setUserDidCancelModal:(BOOL)arg1 ;
-(NSString *)confirmUrl;
-(NSString *)cancelUrl;
-(BOOL)isConfirmURL:(id)arg1 ;
-(void)callCompletionHandlerWithState:(long long)arg1 andURL:(id)arg2 ;
-(BOOL)isCancelURL:(id)arg1 ;
-(void)setUserDidCancelAfterError:(BOOL)arg1 ;
-(void)cancelModal;
-(void)setStartUrl:(NSString *)arg1 ;
-(void)setConfirmUrl:(NSString *)arg1 ;
-(void)setCancelUrl:(NSString *)arg1 ;
-(void)setOnCompletion:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end

