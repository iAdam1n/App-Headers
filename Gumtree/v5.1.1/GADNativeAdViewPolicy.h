/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/GADActiveViewMonitorDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol GADNativeAdViewPolicyDelegate, GADNativeAdSourceAttributingGADOverlayViewSource;
@class GADNativeAdAttributionView, UIView, GADOverlayView, NSMapTable, NSString, GADActiveViewMonitor, GADDebugOptionsMenuSheet, GADNativeAd;

@interface GADNativeAdViewPolicy : NSObject <GADActiveViewMonitorDelegate, UIGestureRecognizerDelegate> {

	GADNativeAdAttributionView* _attributionView;
	UIView* _adView;
	GADOverlayView* _overlayView;
	NSMapTable* _assetViewAssetNames;
	NSString* _attributionIconAssetName;
	NSString* _attributionTextAssetName;
	NSString* _backgroundAssetName;
	GADActiveViewMonitor* _impressionMonitor;
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
-(void)activeViewMonitorDidRefresh:(id)arg1 ;
-(void)recordImpression;
-(void)startImpressionMonitoring;
-(id)initWithAdView:(id)arg1 attributionIconAssetName:(id)arg2 attributionTextAssetName:(id)arg3 backgroundAssetName:(id)arg4 ;
-(void)setNativeAd:(GADNativeAd*<GADNativeAdSourceAttributing>*<GADOverlayViewSource>)arg1 ;
-(GADNativeAd*<GADNativeAdSourceAttributing>*<GADOverlayViewSource>)nativeAd;
-(void)adViewDidLayoutSubviews;
-(void)adViewDidMoveToSuperview;
-(void)replaceAssetWithName:(id)arg1 withAssetView:(id)arg2 weakReferencePointer:(id*)arg3 ;
-(void)addAttributionViewAndUserInteractionToAdView;
-(void)stopImpressionMonitoring;
-(void)handleDebugGesture:(id)arg1 ;
-(id)tapHandlingEnvironmentWithTapLocation:(CGPoint)arg1 ;
-(void)updateAttributionView;
-(void)updateOverlay;
-(void)orderViews;
-(void)checkForImpression;
-(void)setDelegate:(id<GADNativeAdViewPolicyDelegate>)arg1 ;
-(void)dealloc;
-(id<GADNativeAdViewPolicyDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)handleTap:(id)arg1 ;
@end
