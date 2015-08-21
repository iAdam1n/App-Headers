/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>
#import <Gumtree/GADSlotAdEventDelegate.h>
#import <Gumtree/GADSlotDelegate.h>

@protocol GADBannerViewDelegate, GADInAppPurchaseDelegate;
@class UIViewController, UIView, GADSlot, NSString, GADAdView;

@interface GADBannerView : UIView <GADSlotAdEventDelegate, GADSlotDelegate> {

	BOOL _hasLoadedAd;
	BOOL _hasInitialized;
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
@property (nonatomic,__weak,readonly) NSString * adNetworkClassName; 
@property (nonatomic,readonly) BOOL hasAutoRefreshed; 
@property (nonatomic,__weak,readonly) UIView * mediatedAdView; 
@property (nonatomic,__weak,readonly) GADAdView * adView; 
@property (nonatomic,retain) UIView * rootAdView;                                                    //@synthesize rootAdView=_rootAdView - In the implementation block
@property (nonatomic,retain) GADSlot * slot;                                                         //@synthesize slot=_slot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAdSize:(GADAdSize)arg1 origin:(CGPoint)arg2 ;
-(void)setAdUnitID:(NSString *)arg1 ;
-(NSString *)adUnitID;
-(void)slotFinishedLoadingAdContent:(id)arg1 ;
-(void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2 ;
-(void)slotWillPresentScreen:(id)arg1 ;
-(void)slotWillDismissScreen:(id)arg1 ;
-(void)slotDidDismissScreen:(id)arg1 ;
-(void)slotWillLeaveApplication:(id)arg1 ;
-(id<GADInAppPurchaseDelegate>)inAppPurchaseDelegate;
-(NSString *)adNetworkClassName;
-(BOOL)slot:(id)arg1 shouldLoadRequest:(id)arg2 ;
-(BOOL)slotShouldReloadCurrentRequest:(id)arg1 ;
-(CGRect)frameInInterface;
-(id)coordinatesOfContentInScreen:(id)arg1 ;
-(id)swipeToViewControllerView;
-(void)slot:(id)arg1 didReceiveAdView:(id)arg2 ;
-(void)setAdSize:(GADAdSize)arg1 andReload:(BOOL)arg2 ;
-(void)setInAppPurchaseDelegate:(id<GADInAppPurchaseDelegate>)arg1 ;
-(void)commonInitWithAdSize:(GADAdSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 adSize:(GADAdSize)arg2 ;
-(id)initWithAdSize:(GADAdSize)arg1 ;
-(GADAdSize)adSize;
-(void)setAdSize:(GADAdSize)arg1 ;
-(BOOL)hasAutoRefreshed;
-(void)setRootAdView:(UIView *)arg1 ;
-(UIView *)mediatedAdView;
-(void)setAutoloadEnabled:(BOOL)arg1 ;
-(BOOL)isAutoloadEnabled;
-(UIView *)rootAdView;
-(GADSlot *)slot;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<GADBannerViewDelegate>)arg1 ;
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
-(GADAdView *)adView;
-(void)setSlot:(GADSlot *)arg1 ;
@end

