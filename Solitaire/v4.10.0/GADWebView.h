/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>
#import <SolitaireFree/GADWebView.h>
@class UIScrollView, NSURLRequest;


@protocol GADWebView
@property (assign,nonatomic) BOOL scalesPageToFit; 
@property (assign,nonatomic) BOOL mediaPlaybackRequiresUserAction; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,readonly) NSURLRequest * request; 
@required
-(id)initWithFrame:(CGRect)arg1;
-(void)reload;
-(NSURLRequest *)request;
-(UIScrollView *)scrollView;
-(void)setDataDetectorTypes:(unsigned long long)arg1;
-(unsigned long long)dataDetectorTypes;
-(void)loadRequest:(id)arg1;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
-(BOOL)scalesPageToFit;
-(BOOL)isLoading;
-(void)setScalesPageToFit:(BOOL)arg1;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1;
-(void)setMediaPlaybackRequiresUserAction:(BOOL)arg1;
-(BOOL)mediaPlaybackRequiresUserAction;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;

@end


@protocol GADWebViewDelegate, GADWebViewContentSizeDelegate, GADWebView;
@class UIScrollView, NSURLRequest, UIView;

@interface GADWebView : UIView <GADWebView> {

	id<GADWebViewDelegate> _delegate;
	id<GADWebViewContentSizeDelegate> _contentSizeDelegate;
	UIView*<GADWebView> _webView;

}

@property (nonatomic,retain) UIView*<GADWebView> webView;                                               //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<GADWebViewDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<GADWebViewContentSizeDelegate> contentSizeDelegate;              //@synthesize contentSizeDelegate=_contentSizeDelegate - In the implementation block
@property (assign,nonatomic) BOOL scalesPageToFit; 
@property (assign,nonatomic) BOOL mediaPlaybackRequiresUserAction; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,readonly) NSURLRequest * request; 
-(id<GADWebViewContentSizeDelegate>)contentSizeDelegate;
-(void)setContentSizeDelegate:(id<GADWebViewContentSizeDelegate>)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<GADWebViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reload;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<GADWebViewDelegate>)delegate;
-(NSURLRequest *)request;
-(BOOL)isOpaque;
-(CGSize)intrinsicContentSize;
-(UIScrollView *)scrollView;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(UIView*<GADWebView>)webView;
-(void)setWebView:(UIView*<GADWebView>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)scalesPageToFit;
-(BOOL)isLoading;
-(void)setScalesPageToFit:(BOOL)arg1 ;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(void)setMediaPlaybackRequiresUserAction:(BOOL)arg1 ;
-(BOOL)mediaPlaybackRequiresUserAction;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
@end
