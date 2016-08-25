/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>
#import <SportyTrader/GADAdMediationDelegate.h>
#import <SportyTrader/GADSlotAdEventDelegate.h>
#import <SportyTrader/GADSlotAdLoadDelegate.h>
#import <SportyTrader/GADSlotDelegate.h>
#import <SportyTrader/GADSlotAdKeyDelegate.h>
#import <SportyTrader/GADSlotAdResponseDelegate.h>

@protocol OS_dispatch_queue, GADBannerViewDelegate, GADInAppPurchaseDelegate;
@class NSDictionary, NSObject, UIViewController, UIView, GADSlot, NSString, GADAdView;

@interface GADBannerView : UIView <GADAdMediationDelegate, GADSlotAdEventDelegate, GADSlotAdLoadDelegate, GADSlotDelegate, GADSlotAdKeyDelegate, GADSlotAdResponseDelegate> {

	BOOL _hasLoadedAd;
	BOOL _hasInitialized;
	NSDictionary* _viewHierarchy;
	NSObject*<OS_dispatch_queue> _lockQueue;
	BOOL _autoloadEnabled;
	UIViewController* _rootViewController;
	id<GADBannerViewDelegate> _delegate;
	id<GADInAppPurchaseDelegate> _inAppPurchaseDelegate;
	UIView* _rootAdView;
	GADSlot* _slot;

}

@property (nonatomic,copy) NSString * adUnitID; 
@property (assign,nonatomic,__weak) UIViewController * rootViewController;                           //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,nonatomic) GADAdSize adSize; 
@property (assign,nonatomic,__weak) id<GADBannerViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<GADInAppPurchaseDelegate> inAppPurchaseDelegate;              //@synthesize inAppPurchaseDelegate=_inAppPurchaseDelegate - In the implementation block
@property (assign,getter=isAutoloadEnabled,nonatomic) BOOL autoloadEnabled;                          //@synthesize autoloadEnabled=_autoloadEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * adNetworkClassName; 
@property (nonatomic,readonly) BOOL hasAutoRefreshed; 
@property (nonatomic,__weak,readonly) UIView * mediatedAdView; 
@property (nonatomic,__weak,readonly) GADAdView * adView; 
@property (nonatomic,retain) UIView * rootAdView;                                                    //@synthesize rootAdView=_rootAdView - In the implementation block
@property (nonatomic,retain) GADSlot * slot;                                                         //@synthesize slot=_slot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAdSize:(GADAdSize)arg1 ;
-(void)setAdUnitID:(NSString *)arg1 ;
-(GADAdSize)adSize;
-(void)setAdSize:(GADAdSize)arg1 ;
-(id<GADInAppPurchaseDelegate>)inAppPurchaseDelegate;
-(void)setInAppPurchaseDelegate:(id<GADInAppPurchaseDelegate>)arg1 ;
-(void)setAdSize:(GADAdSize)arg1 andReload:(BOOL)arg2 ;
-(void)commonInitWithAdSize:(GADAdSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 adSize:(GADAdSize)arg2 ;
-(void)setAdSizeFromExternalCGSize:(CGSize)arg1 ;
-(NSString *)adUnitID;
-(BOOL)hasAutoRefreshed;
-(NSString *)adNetworkClassName;
-(void)setRootAdView:(UIView *)arg1 ;
-(Class)connectorClassForAd:(id)arg1 ;
-(void)slotWillPresentScreen:(id)arg1 ;
-(void)slotWillDismissScreen:(id)arg1 ;
-(void)slotDidDismissScreen:(id)arg1 ;
-(void)slotWillLeaveApplication:(id)arg1 ;
-(void)slotFinishedLoadingAdContent:(id)arg1 ;
-(void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2 ;
-(BOOL)slot:(id)arg1 shouldLoadRequest:(id)arg2 ;
-(BOOL)slotShouldReloadCurrentRequest:(id)arg1 ;
-(CGRect)frameInInterface;
-(id)coordinatesOfContentInScreen:(id)arg1 ;
-(id)swipeToViewControllerView;
-(void)slot:(id)arg1 didReceiveAdView:(id)arg2 ;
-(void)slot:(id)arg1 contentSizeDidChange:(CGSize)arg2 ;
-(BOOL)slot:(id)arg1 shouldChangeAudioSessionCategoryTo:(id)arg2 ;
-(void)cacheViewHierarchyInformationForSlot:(id)arg1 ;
-(id)viewHierarchyInformationForSlot:(id)arg1 ;
-(BOOL)slot:(id)arg1 shouldProcessAdResponse:(id)arg2 error:(id*)arg3 ;
-(BOOL)slot:(id)arg1 shouldProcessMediatedAdResponse:(id)arg2 error:(id*)arg3 ;
-(id)initWithAdSize:(GADAdSize)arg1 origin:(CGPoint)arg2 ;
-(UIView *)mediatedAdView;
-(void)setAutoloadEnabled:(BOOL)arg1 ;
-(BOOL)isAutoloadEnabled;
-(UIView *)rootAdView;
-(GADSlot *)slot;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<GADBannerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setAlpha:(double)arg1 ;
-(void)didMoveToWindow;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<GADBannerViewDelegate>)delegate;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(CGSize)intrinsicContentSize;
-(void)loadRequest:(id)arg1 ;
-(void)setSlot:(GADSlot *)arg1 ;
-(GADAdView *)adView;
@end

