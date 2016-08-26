/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebViewDelegate.h>

@class NSString, UIWebView, NSTimer, NSURLConnection, NSMutableData, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface BRAd : NSObject <UIWebViewDelegate> {

	id delegate;
	NSString* siteId;
	NSString* adId;
	BOOL prefetchesResources;
	UIWebView* view;
	BOOL webViewLoaded;
	NSTimer* fetchTimer;
	NSURLConnection* adConnection;
	NSMutableData* adData;
	NSDictionary* settings;
	NSMutableArray* resources;
	NSMutableArray* allowedWebViewMessages;
	NSString* unit;
	NSString* host;
	NSString* version;
	BOOL sendsMacAddress;
	BOOL preloadsMedia;
	BOOL canShow;
	BOOL isFetching;
	NSString* videoUrl;
	NSString* advertiserUrl;
	NSString* endpointUrl;
	NSMutableDictionary* additionalParameters;

}

@property (assign) BOOL sendsMacAddress; 
@property (assign) BOOL preloadsMedia; 
@property (assign) id delegate; 
@property (assign) BOOL prefetchesResources; 
@property (retain) NSString * siteId; 
@property (retain) NSString * adId; 
@property (retain) UIWebView * view; 
@property (retain) NSTimer * fetchTimer; 
@property (retain) NSURLConnection * adConnection; 
@property (retain) NSMutableData * adData; 
@property (retain) NSDictionary * settings; 
@property (retain) NSMutableArray * resources; 
@property (retain) NSMutableArray * allowedWebViewMessages; 
@property (retain) NSString * unit; 
@property (retain) NSString * host; 
@property (retain) NSString * version; 
@property (retain) NSString * videoUrl; 
@property (retain) NSString * advertiserUrl; 
@property (retain) NSString * endpointUrl; 
@property (retain) NSMutableDictionary * additionalParameters; 
@property (assign,nonatomic) BOOL isFetching; 
@property (assign) BOOL canShow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchWithDelegate:(id)arg1 ;
-(BOOL)canShow;
-(void)loadWebView;
-(NSString *)adId;
-(void)setAdId:(NSString *)arg1 ;
-(void)setAdditionalParameters:(NSMutableDictionary *)arg1 ;
-(NSURLConnection *)adConnection;
-(void)setAdConnection:(NSURLConnection *)arg1 ;
-(NSMutableDictionary *)additionalParameters;
-(void)createCalendarEvent:(id)arg1 ;
-(void)storePicture:(id)arg1 ;
-(void)setPreloadsMedia:(BOOL)arg1 ;
-(void)setSiteId:(NSString *)arg1 ;
-(void)setFetchTimer:(NSTimer *)arg1 ;
-(void)setAllowedWebViewMessages:(NSMutableArray *)arg1 ;
-(void)setEndpointUrl:(NSString *)arg1 ;
-(void)setVideoUrl:(NSString *)arg1 ;
-(void)setAdvertiserUrl:(NSString *)arg1 ;
-(void)setSendsMacAddress:(BOOL)arg1 ;
-(id)defaultVersion;
-(BOOL)preloadsMedia;
-(BOOL)prefetchesResources;
-(id)selectorPrefix;
-(SEL)prefixedSelector:(id)arg1 ;
-(SEL)fetchTimeoutSelector;
-(double)delegateFetchTimeout;
-(void)delegatePerform:(id)arg1 ;
-(NSString *)endpointUrl;
-(id)defaultEndpointUrl;
-(double)fetchTimeout;
-(void)fetchTimerFired:(id)arg1 ;
-(void)applicationBecameActive:(id)arg1 ;
-(void)fetched;
-(void)setCanShow:(BOOL)arg1 ;
-(id)adHtml;
-(BOOL)appShouldOpenScheme:(id)arg1 ;
-(void)justCreateCalendarEvent:(id)arg1 withStore:(id)arg2 ;
-(id)defaultTemplateUrl;
-(BOOL)isFetchingForDelegate:(id)arg1 ;
-(void)brResourceFetched:(id)arg1 ;
-(void)brResourceFetchFailed:(id)arg1 ;
-(void)didImpression:(id)arg1 ;
-(void)didFirstQuartile:(id)arg1 ;
-(void)didMidpoint:(id)arg1 ;
-(void)didThirdQuartile:(id)arg1 ;
-(void)didCompletion:(id)arg1 ;
-(BOOL)sendsMacAddress;
-(NSString *)siteId;
-(void)setPrefetchesResources:(BOOL)arg1 ;
-(NSTimer *)fetchTimer;
-(NSMutableArray *)allowedWebViewMessages;
-(NSString *)videoUrl;
-(NSString *)advertiserUrl;
-(void)cancel;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(UIWebView *)view;
-(NSDictionary *)settings;
-(void)setView:(UIWebView *)arg1 ;
-(NSString *)host;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setSettings:(NSDictionary *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(void)setHost:(NSString *)arg1 ;
-(NSMutableArray *)resources;
-(void)setResources:(NSMutableArray *)arg1 ;
-(void)fail;
-(BOOL)isFetching;
-(void)setIsFetching:(BOOL)arg1 ;
-(void)fetch;
-(void)log:(id)arg1 ;
-(void)play;
-(void)setAdData:(NSMutableData *)arg1 ;
-(NSMutableData *)adData;
-(NSString *)unit;
-(void)setUnit:(NSString *)arg1 ;
@end
