/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>
#import <eBay/GADAdMediationDelegate.h>
#import <eBay/GADSlotAdEventDelegate.h>
#import <eBay/GADSlotAdLoadDelegate.h>
#import <eBay/GADSlotDelegate.h>
#import <eBay/GADSlotAdKeyDelegate.h>
#import <eBay/GADSlotAdResponseDelegate.h>

@protocol OS_dispatch_queue, GADBannerViewDelegate, GADInAppPurchaseDelegate, GADAdSizeDelegate;
@class NSDictionary, NSObject, UIViewController, UIView, GADSlot, NSString, GADVideoController, GADAdView;

@interface GADBannerView : UIView <GADAdMediationDelegate, GADSlotAdEventDelegate, GADSlotAdLoadDelegate, GADSlotDelegate, GADSlotAdKeyDelegate, GADSlotAdResponseDelegate> {

	BOOL _hasLoadedAd;
	BOOL _hasInitialized;
	NSDictionary* _viewHierarchy;
	NSObject*<OS_dispatch_queue> _lockQueue;
	BOOL _autoloadEnabled;
	UIViewController* _rootViewController;
	id<GADBannerViewDelegate> _delegate;
	id<GADInAppPurchaseDelegate> _inAppPurchaseDelegate;
	id<GADAdSizeDelegate> _adSizeDelegate;
	UIView* _rootAdView;
	GADSlot* _slot;

}

@property (nonatomic,copy) NSString * adUnitID; 
@property (assign,nonatomic,__weak) UIViewController * rootViewController;                           //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,nonatomic) GADAdSize adSize; 
@property (assign,nonatomic,__weak) id<GADBannerViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<GADInAppPurchaseDelegate> inAppPurchaseDelegate;              //@synthesize inAppPurchaseDelegate=_inAppPurchaseDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<GADAdSizeDelegate> adSizeDelegate;                            //@synthesize adSizeDelegate=_adSizeDelegate - In the implementation block
@property (assign,getter=isAutoloadEnabled,nonatomic) BOOL autoloadEnabled;                          //@synthesize autoloadEnabled=_autoloadEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * adNetworkClassName; 
@property (nonatomic,readonly) BOOL hasAutoRefreshed; 
@property (nonatomic,__weak,readonly) UIView * mediatedAdView; 
@property (nonatomic,readonly) GADVideoController * videoController; 
@property (nonatomic,__weak,readonly) GADAdView * adView; 
@property (nonatomic,retain) UIView * rootAdView;                                                    //@synthesize rootAdView=_rootAdView - In the implementation block
@property (nonatomic,retain) GADSlot * slot;                                                         //@synthesize slot=_slot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAdSize:(GADAdSize)arg1 ;
-(void)setAdUnitID:(NSString *)arg1 ;
-(void)setAdSizeDelegate:(id<GADAdSizeDelegate>)arg1 ;
-(GADAdSize)adSize;
-(void)setAdSize:(GADAdSize)arg1 ;
-(NSString *)adUnitID;
-(id<GADInAppPurchaseDelegate>)inAppPurchaseDelegate;
-(void)setInAppPurchaseDelegate:(id<GADInAppPurchaseDelegate>)arg1 ;
-(void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2 ;
-(void)slotFinishedLoadingAdContent:(id)arg1 ;
-(NSString *)adNetworkClassName;
-(Class)connectorClassForAd:(id)arg1 ;
-(void)slotWillPresentScreen:(id)arg1 ;
-(void)slotWillDismissScreen:(id)arg1 ;
-(void)slotDidDismissScreen:(id)arg1 ;
-(void)slotWillLeaveApplication:(id)arg1 ;
-(BOOL)slot:(id)arg1 shouldLoadRequest:(id)arg2 error:(id*)arg3 ;
-(BOOL)slotShouldReloadCurrentRequest:(id)arg1 ;
-(CGRect)frameInInterface;
-(void)slot:(id)arg1 didReceiveAdView:(id)arg2 ;
-(void)slot:(id)arg1 contentSizeDidChange:(CGSize)arg2 ;
-(void)setAdSize:(GADAdSize)arg1 andReload:(BOOL)arg2 ;
-(BOOL)slot:(id)arg1 shouldChangeAudioSessionCategoryTo:(id)arg2 ;
-(BOOL)slot:(id)arg1 shouldProcessAdResponse:(id)arg2 error:(id*)arg3 ;
-(BOOL)slot:(id)arg1 shouldProcessMediatedAdResponse:(id)arg2 error:(id*)arg3 ;
-(void)commonInitWithAdSize:(GADAdSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 adSize:(GADAdSize)arg2 ;
-(UIView *)rootAdView;
-(void)setAdSizeFromExternalCGSize:(CGSize)arg1 ;
-(BOOL)hasAutoRefreshed;
-(void)setRootAdView:(UIView *)arg1 ;
-(void)cacheViewHierarchyInformationForSlot:(id)arg1 ;
-(id)viewHierarchyInformationForSlot:(id)arg1 ;
-(id)initWithAdSize:(GADAdSize)arg1 origin:(CGPoint)arg2 ;
-(UIView *)mediatedAdView;
-(void)setAutoloadEnabled:(BOOL)arg1 ;
-(id)swipeToViewControllerView;
-(id<GADAdSizeDelegate>)adSizeDelegate;
-(BOOL)isAutoloadEnabled;
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
-(GADVideoController *)videoController;
-(void)setSlot:(GADSlot *)arg1 ;
-(GADAdView *)adView;
@end

