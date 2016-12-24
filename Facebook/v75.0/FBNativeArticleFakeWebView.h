/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBNativeArticleWebViewProtocol.h>

@protocol FBNativeArticleWebViewDelegate;
@class UIScrollView, UIView, NSURL;

@interface FBNativeArticleFakeWebView : NSObject <FBNativeArticleWebViewProtocol> {

	UIScrollView* _scrollView;
	id<FBNativeArticleWebViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNativeArticleWebViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) NSURL * URL; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
-(id)initWithFrame:(CGRect)arg1 scalesPageToFit:(BOOL)arg2 suppressesIncrementalRendering:(BOOL)arg3 userScriptsOnDocumentLoad:(id)arg4 allowsInlineMediaAutoplay:(BOOL)arg5 session:(id)arg6 ;
-(void)setDelegate:(id<FBNativeArticleWebViewDelegate>)arg1 ;
-(id<FBNativeArticleWebViewDelegate>)delegate;
-(UIView *)view;
-(NSURL *)URL;
-(UIScrollView *)scrollView;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)isLoading;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
