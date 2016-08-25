/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/GADImpressionMonitorDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol GADNativeAdViewPolicyDelegate, GADNativeAdSourceAttributingGADOverlayViewSource;
@class GADNativeAdAttributionView, UIView, GADOverlayView, NSMapTable, NSString, GADImpressionMonitor, GADDebugOptionsMenuSheet, GADNativeAd;

@interface GADNativeAdViewPolicy : NSObject <GADImpressionMonitorDelegate, UIGestureRecognizerDelegate> {

	GADNativeAdAttributionView* _attributionView;
	UIView* _adView;
	GADOverlayView* _overlayView;
	NSMapTable* _assetViewAssetNames;
	NSString* _attributionIconAssetName;
	NSString* _attributionTextAssetName;
	NSString* _backgroundAssetName;
	GADImpressionMonitor* _impressionMonitor;
	GADDebugOptionsMenuSheet* _debugOptionsMenuSheet;
	id<GADNativeAdViewPolicyDelegate> _delegate;
	GADNativeAd*<GADNativeAdSourceAttributing>*<GADOverlayViewSource> _nativeAd;

}

@property (assign,nonatomic,__weak) id<GADNativeAdViewPolicyDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GADNativeAd*<GADNativeAdSourceAttributing>*<GADOverlayViewSource> nativeAd;              //@synthesize nativeAd=_nativeAd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GADNativeAd*<GADNativeAdSourceAttributing>*<GADOverlayViewSource>)nativeAd;
-(void)impressionMonitorDidMonitorImpression:(id)arg1 ;
-(void)recordImpression;
-(void)addAttributionViewAndUserInteractionToAdView;
-(void)handleDebugGesture:(id)arg1 ;
-(BOOL)nativeAdHasVideo;
-(id)tapHandlingEnvironmentWithTapLocation:(CGPoint)arg1 ;
-(void)updateAttributionView;
-(void)beginObservingVideoClickNotifications;
-(void)orderViews;
-(void)checkForImpression;
-(void)startImpressionMonitoring;
-(void)stopImpressionMonitoring;
-(void)handleVideoClickNotification:(id)arg1 ;
-(id)initWithAdView:(id)arg1 attributionIconAssetName:(id)arg2 attributionTextAssetName:(id)arg3 backgroundAssetName:(id)arg4 ;
-(void)setNativeAd:(GADNativeAd*<GADNativeAdSourceAttributing>*<GADOverlayViewSource>)arg1 ;
-(void)replaceAssetWithName:(id)arg1 withAssetView:(id)arg2 weakReferencePointer:(id*)arg3 ;
-(void)adViewDidLayoutSubviews;
-(void)adViewDidMoveToSuperview;
-(void)updateOverlay;
-(void)setDelegate:(id<GADNativeAdViewPolicyDelegate>)arg1 ;
-(void)dealloc;
-(id<GADNativeAdViewPolicyDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)handleTap:(id)arg1 ;
@end

