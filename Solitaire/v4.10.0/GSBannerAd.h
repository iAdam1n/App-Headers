/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/GSAdModel.h>

@class GSBannerAdView, GSExpandedViewController, NSString;

@interface GSBannerAd : GSAdModel {

	BOOL m_isResized;
	BOOL m_hasDisplayed;
	BOOL _statusBarWasOriginallyHidden;
	GSBannerAdView* m_bannerAdView;
	GSExpandedViewController* m_expandedViewController;
	NSString* m_onResizeAllowOrientationChange;
	NSString* m_onResizeForcedOrientation;

}

@property (assign,nonatomic) BOOL isResized; 
@property (nonatomic,retain) GSBannerAdView * bannerAdView; 
@property (assign,nonatomic) BOOL hasDisplayed; 
@property (assign,nonatomic) BOOL statusBarWasOriginallyHidden;                              //@synthesize statusBarWasOriginallyHidden=_statusBarWasOriginallyHidden - In the implementation block
@property (assign,nonatomic) GSExpandedViewController * expandedViewController; 
@property (nonatomic,retain) NSString * onResizeAllowOrientationChange; 
@property (nonatomic,retain) NSString * onResizeForcedOrientation; 
-(GSBannerAdView *)bannerAdView;
-(void)collapse;
-(id)initWithAdView:(id)arg1 ;
-(BOOL)sendFetchDidFailNotificationWithError:(int)arg1 ;
-(void)applicationDidLoadExternalAppURL;
-(BOOL)sendFetchDidSucceedNotification;
-(void)expandWithCustomClose:(id)arg1 toBrowser:(id)arg2 ;
-(BOOL)sendAdClickedThroughNotification;
-(void)clickthroughToBrowser:(id)arg1 ;
-(void)presentClickthroughViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissClickthroughViewController;
-(void)dismissSocialViewController;
-(void)dismissBrowserAnimated:(BOOL)arg1 ;
-(void)updateOrientationPropertiesWithAllowOrientationChange:(id)arg1 ForceOrientation:(id)arg2 ;
-(void)makeBackgroundTransparent;
-(void)setOnResizeAllowOrientationChange:(NSString *)arg1 ;
-(void)setOnResizeForcedOrientation:(NSString *)arg1 ;
-(BOOL)isResized;
-(void)setIsResized:(BOOL)arg1 ;
-(GSExpandedViewController *)expandedViewController;
-(void)validateDelegate;
-(void)setStatusBarWasOriginallyHidden:(BOOL)arg1 ;
-(void)adDidExpand;
-(void)setExpandedViewController:(GSExpandedViewController *)arg1 ;
-(double)correctYCoordinateForStatusBar:(double)arg1 ;
-(BOOL)statusBarWasOriginallyHidden;
-(void)adDidCollapse;
-(void)webViewDidDraw;
-(void)shiftAdToX:(id)arg1 Y:(id)arg2 Width:(id)arg3 Height:(id)arg4 ;
-(void)setBannerAdView:(GSBannerAdView *)arg1 ;
-(NSString *)onResizeAllowOrientationChange;
-(NSString *)onResizeForcedOrientation;
-(void)setThrottleTimeout:(long long)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)expand;
-(void)setHasDisplayed:(BOOL)arg1 ;
-(BOOL)hasDisplayed;
-(void)fetch;
-(void)playVideo:(id)arg1 ;
@end
