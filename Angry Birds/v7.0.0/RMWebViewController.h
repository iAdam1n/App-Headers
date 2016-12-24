/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface RMWebViewController : UIViewController <UIWebViewDelegate> {

	UIWebView* webView;
	CGRect viewRect;
	WebViewListener* webViewObserver;
	BOOL createWithTransparentBackground;

}

@property (nonatomic,retain) UIWebView * webView; 
@property (assign,nonatomic) CGRect viewRect; 
@property (assign,nonatomic) BOOL createWithTransparentBackground; 
@property (assign,nonatomic) WebViewListener* webViewObserver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewRect:(CGRect)arg1 ;
-(void)setCreateWithTransparentBackground:(BOOL)arg1 ;
-(void)injectJSToLuaInterface;
-(void)injectJSToNativeInterface;
-(void)dispatchCallFromJavaScript:(id)arg1 ;
-(BOOL)createWithTransparentBackground;
-(void)loadLocalUrl:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(void)onVisibilityChanged:(BOOL)arg1 ;
-(id)executeJavaScript:(id)arg1 ;
-(void)asyncExecuteJavaScript:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andTransparentBackground:(BOOL)arg2 ;
-(void)loadUrl:(id)arg1 ;
-(void)loadLocalUrl:(id)arg1 ;
-(void)relocateWithPoint:(CGPoint)arg1 ;
-(void)resizeWithFrame:(CGRect)arg1 andAnimationDuration:(double)arg2 ;
-(CGRect)viewRect;
-(WebViewListener*)webViewObserver;
-(void)setWebViewObserver:(WebViewListener*)arg1 ;
-(void)hide;
-(void)show;
-(void)dealloc;
-(void)reload;
-(void)loadView;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)resize:(CGSize)arg1 ;
@end
