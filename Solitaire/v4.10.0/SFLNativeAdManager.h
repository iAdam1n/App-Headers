/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/FBNativeAdDelegate.h>

@protocol SFLNativeAdManagerDelegate;
@class NSString, UIViewController, UIView, FBNativeAd;

@interface SFLNativeAdManager : NSObject <FBNativeAdDelegate> {

	BOOL _timeForAd;
	int _adRequestCount;
	NSString* _placementID;
	unsigned long long _frequency;
	UIViewController* _viewController;
	id<SFLNativeAdManagerDelegate> _delegate;
	long long _state;
	UIView* _nativeAdView;
	FBNativeAd* _nativeAd;
	long long _currentEventCount;

}

@property (assign,getter=isTimeForAd,nonatomic) BOOL timeForAd;                           //@synthesize timeForAd=_timeForAd - In the implementation block
@property (nonatomic,retain) UIView * nativeAdView;                                       //@synthesize nativeAdView=_nativeAdView - In the implementation block
@property (nonatomic,retain) FBNativeAd * nativeAd;                                       //@synthesize nativeAd=_nativeAd - In the implementation block
@property (assign,nonatomic) long long state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long currentEventCount;                                 //@synthesize currentEventCount=_currentEventCount - In the implementation block
@property (assign,nonatomic) int adRequestCount;                                          //@synthesize adRequestCount=_adRequestCount - In the implementation block
@property (nonatomic,copy) NSString * placementID;                                        //@synthesize placementID=_placementID - In the implementation block
@property (assign,nonatomic) unsigned long long frequency;                                //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                    //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<SFLNativeAdManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isTimeForAd;
-(UIView *)nativeAdView;
-(void)incrementEventCount;
-(void)setPlacementID:(NSString *)arg1 ;
-(void)loadNativeAdIfNeeded;
-(void)clearNativeAd;
-(int)adRequestCount;
-(void)setAdRequestCount:(int)arg1 ;
-(void)setNativeAdView:(UIView *)arg1 ;
-(NSString *)placementID;
-(void)setNativeAd:(FBNativeAd *)arg1 ;
-(FBNativeAd *)nativeAd;
-(void)clearNativeAdData;
-(void)setCurrentEventCount:(long long)arg1 ;
-(void)setTimeForAd:(BOOL)arg1 ;
-(long long)currentEventCount;
-(void)checkTimeForAd;
-(void)incompleteAd;
-(void)adIconReady:(id)arg1 forRequest:(int)arg2 ;
-(void)nativeAdDidLoad:(id)arg1 ;
-(void)nativeAdWillLogImpression:(id)arg1 ;
-(void)nativeAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)nativeAdDidClick:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<SFLNativeAdManagerDelegate>)arg1 ;
-(id<SFLNativeAdManagerDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(unsigned long long)frequency;
-(void)setFrequency:(unsigned long long)arg1 ;
@end
