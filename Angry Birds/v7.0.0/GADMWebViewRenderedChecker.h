/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:37 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
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
-(id)init;
-(void)setDelegate:(id<GADMWebViewRenderedCheckerDelegate>)arg1 ;
-(id<GADMWebViewRenderedCheckerDelegate>)delegate;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(id)initWithWebView:(id)arg1 delegate:(id)arg2 ;
@end
