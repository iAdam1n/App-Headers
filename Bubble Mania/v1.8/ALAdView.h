/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <UIKit/UIView.h>
#import <BubbleMania/ALAdUpdateObserver.h>
#import <UIKit/UIWebViewDelegate.h>
#import <BubbleMania/ALAdLoadDelegate.h>

@protocol ALWebView, ALAdLoadDelegate, ALAdDisplayDelegate, ALAdVideoPlaybackDelegate;
@class ALAd, UIView, NSNumber, ALSdk, ALLogManager, UIViewController, ALAdSize, NSString;

@interface ALAdView : UIView <ALAdUpdateObserver, UIWebViewDelegate, ALAdLoadDelegate> {

	BOOL isFirstAdLoaded;
	BOOL hiddenByUser;
	ALAd* oldAd;
	ALAd* currentAd;
	UIView*<ALWebView> adWebView;
	NSNumber* autoloadInternal;
	ALSdk* sdk;
	ALLogManager* logger;
	UIViewController* parentController;
	id<ALAdLoadDelegate> adLoadDelegate;
	id<ALAdDisplayDelegate> adDisplayDelegate;
	id<ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate;
	ALAdSize* adSize;

}

@property (retain) id<ALAdLoadDelegate> adLoadDelegate; 
@property (retain) id<ALAdDisplayDelegate> adDisplayDelegate; 
@property (retain) id<ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate; 
@property (retain) ALAdSize * adSize; 
@property (setter=setAutoloadEnabled:,getter=isAutoloadEnabled) BOOL autoload; 
@property (setter=setAutoloadEnabled:,getter=isAutoloadEnabled) BOOL shouldAutoload; 
@property (retain) UIViewController * parentController; 
@property (getter=isReadyForDisplay,readonly) BOOL readyForDisplay; 
@property (nonatomic,retain) UIView*<ALWebView> adWebView; 
@property (nonatomic,retain) NSNumber * autoloadInternal; 
@property (nonatomic,retain) ALSdk * sdk; 
@property (nonatomic,retain) ALLogManager * logger; 
@property (assign) BOOL isFirstAdLoaded; 
@property (assign) BOOL hiddenByUser; 
@property (retain) ALAd * currentAd; 
@property (retain) ALAd * oldAd; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)visibleViewControllerFromRoot:(id)arg1 ;
-(void)setAdVideoPlaybackDelegate:(id<ALAdVideoPlaybackDelegate>)arg1 ;
-(void)setAdDisplayDelegate:(id<ALAdDisplayDelegate>)arg1 ;
-(void)showWebView;
-(ALSdk *)sdk;
-(void)adService:(id)arg1 didLoadAd:(id)arg2 ;
-(void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2 ;
-(NSNumber *)autoloadInternal;
-(void)setAutoloadInternal:(NSNumber *)arg1 ;
-(ALAd *)currentAd;
-(void)setOldAd:(ALAd *)arg1 ;
-(void)setCurrentAd:(ALAd *)arg1 ;
-(void)doRenderAd:(id)arg1 ;
-(void)hideTemporary;
-(ALAdSize *)adSize;
-(void)loadNextAd;
-(void)handleAdClick;
-(void)openSystemUrl:(id)arg1 ;
-(void)setTemporaryHidden:(BOOL)arg1 ;
-(ALAd *)oldAd;
-(void)hideWebView;
-(id<ALAdDisplayDelegate>)adDisplayDelegate;
-(id<ALAdVideoPlaybackDelegate>)adVideoPlaybackDelegate;
-(void)setAdLoadDelegate:(id<ALAdLoadDelegate>)arg1 ;
-(void)setAdSize:(ALAdSize *)arg1 ;
-(void)baseInitWithSize:(id)arg1 sdk:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 size:(id)arg2 sdk:(id)arg3 ;
-(id)initWithSdk:(id)arg1 size:(id)arg2 ;
-(BOOL)canAcceptUpdate;
-(id)initBannerAdWithSdk:(id)arg1 ;
-(id)initMRecAdWithSdk:(id)arg1 ;
-(id)initInterstitialAdWithSdk:(id)arg1 ;
-(void)adService:(id)arg1 didUpdateAd:(id)arg2 ;
-(BOOL)isAutoloadEnabled;
-(void)setAutoloadEnabled:(BOOL)arg1 ;
-(void)displayViewControllerDidFailToLoadUrl:(id)arg1 ;
-(void)displayViewControllerDidDismiss;
-(void)clearAds;
-(void)notifyClickDelegate:(id)arg1 ;
-(id)initBannerAd;
-(id)initMRecAd;
-(id)initInterstitialAd;
-(UIView*<ALWebView>)adWebView;
-(void)setAdWebView:(UIView*<ALWebView>)arg1 ;
-(void)setSdk:(ALSdk *)arg1 ;
-(BOOL)isFirstAdLoaded;
-(void)setIsFirstAdLoaded:(BOOL)arg1 ;
-(BOOL)hiddenByUser;
-(void)setHiddenByUser:(BOOL)arg1 ;
-(id<ALAdLoadDelegate>)adLoadDelegate;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(id)initWithSize:(id)arg1 ;
-(id)visibleViewController;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)applicationDidBecomeActive;
-(ALLogManager *)logger;
-(void)setLogger:(ALLogManager *)arg1 ;
-(void)setParentController:(UIViewController *)arg1 ;
-(UIViewController *)parentController;
-(BOOL)isReadyForDisplay;
-(void)render:(id)arg1 ;
@end
