/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/SLKFileDocumentViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, UIView, NSString;

@interface SLKFileDocumentWebViewController : SLKFileDocumentViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	UIView* _statusBarBackground;

}

@property (nonatomic,retain) UIWebView * webView;                       //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIView * statusBarBackground;              //@synthesize statusBarBackground=_statusBarBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateContentBodyIn;
-(void)animateContentBodyOut;
-(UIView *)statusBarBackground;
-(void)updateInsets;
-(void)setStatusBarBackground:(UIView *)arg1 ;
-(void)setupWebView;
-(id)stringWrapperWithHtml:(id)arg1 css:(id)arg2 ;
-(id)spacesCSS;
-(void)setupPost;
-(void)setupSpace;
-(void)setupPDF;
-(id)formattedPDFURL:(id)arg1 ;
-(void)handlePostLink:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setupData;
@end

