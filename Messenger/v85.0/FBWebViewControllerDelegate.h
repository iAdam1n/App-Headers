/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebViewControllerDelegate <UIScrollViewDelegate>
@optional
-(void)webViewController:(id)arg1 webViewTitleChanged:(id)arg2;
-(void)webViewController:(id)arg1 webViewURLChanged:(id)arg2;
-(void)webViewController:(id)arg1 webViewNavigationHistoryChangedCanGoBack:(BOOL)arg2 canGoForward:(BOOL)arg3;
-(void)webViewController:(id)arg1 loadingChanged:(BOOL)arg2;
-(void)webViewController:(id)arg1 didUpdateProgress:(double)arg2;
-(void)webViewController:(id)arg1 playingMediaChanged:(BOOL)arg2;
-(void)webViewController:(id)arg1 didLoadHostString:(id)arg2;
-(BOOL)webViewController:(id)arg1 shouldStartLoadURL:(id)arg2 navigationType:(long long)arg3;
-(void)webViewController:(id)arg1 didStartLoadURL:(id)arg2;
-(void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2;
-(void)webViewControllerWillPushNavigationState:(id)arg1;
-(void)webViewControllerWillPopNavigationState:(id)arg1;
-(void)webViewController:(id)arg1 handleNativeURL:(id)arg2;
-(void)webViewController:(id)arg1 userCanceledLoadURL:(id)arg2;
-(void)webViewControllerHistoryChanged:(id)arg1;
-(void)webViewController:(id)arg1 currentRequestPrefetchedChangedTo:(BOOL)arg2;
-(void)webViewControllerSelectionChanged:(id)arg1;

@end
