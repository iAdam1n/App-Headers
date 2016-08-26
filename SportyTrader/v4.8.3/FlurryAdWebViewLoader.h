/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebViewDelegate.h>
#import <SportyTrader/FlurryHttpAsyncTaskDelegate.h>

@protocol IFlurryAdWebViewLoaderConnector;
@class UIWebView, NSURL, NSTimer, NSString;

@interface FlurryAdWebViewLoader : NSObject <UIWebViewDelegate, FlurryHttpAsyncTaskDelegate> {

	BOOL _supportMRAID;
	BOOL windowOnLoadCalled;
	BOOL mraidStatusChecked;
	BOOL mraidAdLoaded;
	BOOL mraidAdListenerAlreadyAdded;
	BOOL _disablePreRendering;
	int webViewLoading;
	UIWebView* _webView;
	id<IFlurryAdWebViewLoaderConnector> ad;
	/*^block*/id renderFailedErrorHandler;
	/*^block*/id externalRequestHandler;
	/*^block*/id adLoadCompleteHandler;
	/*^block*/id MRAIDWindowLoadCompleteHandler;
	NSURL* adURL;
	/*^block*/id _loadCachedHTMLCompletionHandler;
	NSTimer* _mraidLoadTimeoutTimer;
	NSTimer* _webLoadTimeoutTimer;
	NSString* _html;

}

@property (assign,getter=isMraidStatusChecked,nonatomic) BOOL mraidStatusChecked; 
@property (assign,nonatomic) BOOL mraidAdListenerAlreadyAdded; 
@property (assign,getter=isMraidAdLoaded,nonatomic) BOOL mraidAdLoaded; 
@property (nonatomic,retain) UIWebView * webView;                                              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) id renderFailedErrorHandler; 
@property (nonatomic,copy) id externalRequestHandler; 
@property (nonatomic,copy) id adLoadCompleteHandler; 
@property (nonatomic,copy) id MRAIDWindowLoadCompleteHandler; 
@property (nonatomic,copy) id loadCachedHTMLCompletionHandler;                                 //@synthesize loadCachedHTMLCompletionHandler=_loadCachedHTMLCompletionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<IFlurryAdWebViewLoaderConnector> ad; 
@property (nonatomic,retain) NSURL * adURL; 
@property (assign,nonatomic) int webViewLoading; 
@property (nonatomic,retain) NSTimer * mraidLoadTimeoutTimer;                                  //@synthesize mraidLoadTimeoutTimer=_mraidLoadTimeoutTimer - In the implementation block
@property (assign,nonatomic) BOOL windowOnLoadCalled; 
@property (nonatomic,retain) NSTimer * webLoadTimeoutTimer;                                    //@synthesize webLoadTimeoutTimer=_webLoadTimeoutTimer - In the implementation block
@property (nonatomic,retain) NSString * html;                                                  //@synthesize html=_html - In the implementation block
@property (assign,nonatomic) BOOL disablePreRendering;                                         //@synthesize disablePreRendering=_disablePreRendering - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAd:(id<IFlurryAdWebViewLoaderConnector>)arg1 ;
-(id)initWithAd:(id)arg1 ;
-(void)requestDidFail:(id)arg1 withResponse:(id)arg2 ;
-(void)requestDidCancel:(id)arg1 withResponse:(id)arg2 ;
-(void)requestSuccessful:(id)arg1 withResponse:(id)arg2 ;
-(void)setRenderFailedErrorHandler:(id)arg1 ;
-(void)setExternalRequestHandler:(id)arg1 ;
-(void)setAdLoadCompleteHandler:(id)arg1 ;
-(void)setMRAIDWindowLoadCompleteHandler:(id)arg1 ;
-(BOOL)isMraidStatusChecked;
-(BOOL)disablePreRendering;
-(void)setMraidAdLoaded:(BOOL)arg1 ;
-(BOOL)isMraidAdLoaded;
-(void)loadURL:(id)arg1 disablePreRendering:(BOOL)arg2 ;
-(void)loadHTML:(id)arg1 disablePreRendering:(BOOL)arg2 ;
-(void)setLoadCachedHTMLCompletionHandler:(id)arg1 ;
-(void)loadCachedHTML;
-(void)loadExternalURL:(id)arg1 ;
-(void)finalizeWindowOnLoadCalledAction;
-(void)stopMraidLoading;
-(void)resetMraidStatus;
-(void)setMraidAdListenerAlreadyAdded:(BOOL)arg1 ;
-(void)setAdURL:(NSURL *)arg1 ;
-(void)setDisablePreRendering:(BOOL)arg1 ;
-(id)adLoadCompleteHandler;
-(void)setMraidStatusChecked:(BOOL)arg1 ;
-(NSTimer *)mraidLoadTimeoutTimer;
-(void)setMraidLoadTimeoutTimer:(NSTimer *)arg1 ;
-(BOOL)processFlurryCallRequest:(id)arg1 ;
-(NSURL *)adURL;
-(int)webViewLoading;
-(id)externalRequestHandler;
-(void)logMraidErrors:(id)arg1 ;
-(id)renderFailedErrorHandler;
-(BOOL)mraidAdListenerAlreadyAdded;
-(void)webViewTimeout;
-(void)setWebLoadTimeoutTimer:(NSTimer *)arg1 ;
-(void)setWebViewLoading:(int)arg1 ;
-(char*)getHoganBytes;
-(unsigned long long)getHoganLength;
-(NSTimer *)webLoadTimeoutTimer;
-(void)retryUpdateBodyWithCompiledHoganInWebView:(id)arg1 ;
-(void)postHoganCompleteWebViewDidFinishLoad:(id)arg1 ;
-(id)loadCachedHTMLCompletionHandler;
-(void)setWindowOnLoadCalled:(BOOL)arg1 ;
-(void)setMraidStatus;
-(id)MRAIDWindowLoadCompleteHandler;
-(char*)getFlurryBridgeBytes;
-(unsigned long long)getFlurryBridgeLength;
-(BOOL)windowOnLoadCalled;
-(void)dealloc;
-(void)invalidate;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
-(id<IFlurryAdWebViewLoaderConnector>)ad;
-(void)loadURL:(id)arg1 ;
@end
