/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKNavigationDelegate <NSObject>
@optional
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
-(void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)webViewWebContentProcessDidTerminate:(id)arg1;

@end

