/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GADMWebViewRenderedCheckerDelegate;
@class UIWebView;

@interface GADMWebViewRenderedChecker : NSObject {

	UIWebView* _webView;
	id<GADMWebViewRenderedCheckerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) UIWebView * webView;                                          //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<GADMWebViewRenderedCheckerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(double)percentOfImage:(id)arg1 ofColor:(id)arg2 ;
-(void)checkIsContentRenderedInWebView;
-(void)setDelegate:(id<GADMWebViewRenderedCheckerDelegate>)arg1 ;
-(id)init;
-(id<GADMWebViewRenderedCheckerDelegate>)delegate;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(id)initWithWebView:(id)arg1 delegate:(id)arg2 ;
@end
