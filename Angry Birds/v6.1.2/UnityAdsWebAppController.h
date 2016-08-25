/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol UnityAdsWebAppControllerDelegate;
@class UIWebView, NSDictionary, NSString;

@interface UnityAdsWebAppController : NSObject <UIWebViewDelegate, UIScrollViewDelegate> {

	BOOL _webViewLoaded;
	BOOL _webViewInitialized;
	UIWebView* _webView;
	id<UnityAdsWebAppControllerDelegate> _delegate;
	NSDictionary* _webAppInitalizationParams;

}

@property (nonatomic,retain) UIWebView * webView;                                               //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) BOOL webViewLoaded;                                                //@synthesize webViewLoaded=_webViewLoaded - In the implementation block
@property (assign,nonatomic) BOOL webViewInitialized;                                           //@synthesize webViewInitialized=_webViewInitialized - In the implementation block
@property (assign,nonatomic,__weak) id<UnityAdsWebAppControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * webAppInitalizationParams;                          //@synthesize webAppInitalizationParams=_webAppInitalizationParams - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)handleWebEvent:(id)arg1 data:(id)arg2 ;
-(void)setWebViewInitialized:(BOOL)arg1 ;
-(void)setWebViewLoaded:(BOOL)arg1 ;
-(void)runJavascriptDependingOnPlatform:(id)arg1 ;
-(void)_selectCampaignWithID:(id)arg1 ;
-(void)openExternalUrl:(id)arg1 ;
-(void)runJavascript:(id)arg1 ;
-(void)setupWebApp:(CGRect)arg1 ;
-(void)loadWebApp:(id)arg1 ;
-(BOOL)webViewInitialized;
-(void)initWebAppWithValues:(id)arg1 ;
-(void)setWebViewCurrentView:(id)arg1 data:(id)arg2 ;
-(void)sendNativeEventToWebApp:(id)arg1 data:(id)arg2 ;
-(void)initWebApp;
-(BOOL)webViewLoaded;
-(NSDictionary *)webAppInitalizationParams;
-(void)setWebAppInitalizationParams:(NSDictionary *)arg1 ;
-(void)setDelegate:(id<UnityAdsWebAppControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<UnityAdsWebAppControllerDelegate>)delegate;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end

