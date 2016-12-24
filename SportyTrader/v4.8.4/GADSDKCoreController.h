/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/GADSDKCoreWebViewNotification.h>
#import <SportyTrader/GADSDKCoreGMSGHandlerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, GADSDKCoreWebView, NSArray, NSMutableDictionary;

@interface GADSDKCoreController : NSObject <GADSDKCoreWebViewNotification, GADSDKCoreGMSGHandlerDelegate> {

	NSObject*<OS_dispatch_queue> _lockQueue;
	NSObject*<OS_dispatch_queue> _requestURLQueue;
	NSMutableArray* _pendingActiveWebViewLoadDelegates;
	NSMutableArray* _activeViewSDKCoreWebViews;
	unsigned long long _lastWebViewRefreshTimestamp;
	unsigned long long _requestID;
	unsigned long long _activeViewUnloadCacheMaxSize;
	BOOL _SDKCoreUpdateHandled;
	GADSDKCoreWebView* _activeViewSDKCoreWebView;
	BOOL _useNewWebViewsForActiveViewProcessing;
	double _activeViewSamplingInterval;
	double _swipeToViewSamplingInterval;
	BOOL _SDKConstantsNeedReload;
	NSArray* _activeViewMonitorRefreshIntervals;
	GADSDKCoreWebView* _activeSDKCoreWebView;
	NSMutableDictionary* _pendingBuildAdURLDelegates;

}

@property (copy) NSArray * activeViewMonitorRefreshIntervals;                               //@synthesize activeViewMonitorRefreshIntervals=_activeViewMonitorRefreshIntervals - In the implementation block
@property (assign) double activeViewSamplingInterval; 
@property (assign) double swipeToViewSamplingInterval; 
@property (nonatomic,retain) GADSDKCoreWebView * activeSDKCoreWebView;                      //@synthesize activeSDKCoreWebView=_activeSDKCoreWebView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingBuildAdURLDelegates;              //@synthesize pendingBuildAdURLDelegates=_pendingBuildAdURLDelegates - In the implementation block
+(id)sharedInstance;
-(void)removeFinishedActiveViewWebViews;
-(void)cacheRunningActiveViewWebView:(id)arg1 ;
-(double)activeViewSamplingInterval;
-(void)attemptToRefreshActiveWebViewSDKCore;
-(GADSDKCoreWebView *)activeSDKCoreWebView;
-(void)refreshActiveWebViewSDKCore;
-(void)observeSDKCoreWebViewForSDKCoreLoadRequestCompleted;
-(id)adRequestParameterJSONFromParameters:(id)arg1 ;
-(NSMutableDictionary *)pendingBuildAdURLDelegates;
-(void)asynchronouslyRequestURLForDelegate:(id)arg1 ;
-(void)setActiveViewSamplingInterval:(double)arg1 ;
-(void)setSwipeToViewSamplingInterval:(double)arg1 ;
-(void)didFinishLoadingSDKCoreInSDKCoreWebView:(id)arg1 ;
-(void)SDKCoreGMSGHandler:(id)arg1 loadAdURLWithRequestID:(id)arg2 parameters:(id)arg3 ;
-(void)SDKCoreGMSGHandler:(id)arg1 loadAdWithRequestID:(id)arg2 parameters:(id)arg3 ;
-(void)SDKCoreGMSGHandler:(id)arg1 didReceiveInvalidAdWithRequestID:(id)arg2 parameters:(id)arg3 ;
-(void)SDKCoreGMSGHandler:(id)arg1 didLoadSDKConstants:(id)arg2 ;
-(void)SDKCoreGMSGHandlerDidReceiveSDKCoreUpdateNotification:(id)arg1 ;
-(id)SDKCoreWebViewForActiveViewProcessing;
-(void)finishedUsingSDKCoreWebViewForActiveViewProcessing:(id)arg1 ;
-(void)buildAdURL:(id)arg1 ;
-(double)swipeToViewSamplingInterval;
-(NSArray *)activeViewMonitorRefreshIntervals;
-(void)setActiveViewMonitorRefreshIntervals:(NSArray *)arg1 ;
-(void)setActiveSDKCoreWebView:(GADSDKCoreWebView *)arg1 ;
-(void)setPendingBuildAdURLDelegates:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
@end
