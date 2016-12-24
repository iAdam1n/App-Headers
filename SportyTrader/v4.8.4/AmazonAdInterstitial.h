/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/AMAInterstitialAdManagerDelegate.h>

@protocol AmazonAdInterstitialDelegate, AmazonOOAdInterstitialDelegate;
@class AMAInterstitialAdManager, NSString;

@interface AmazonAdInterstitial : NSObject <AMAInterstitialAdManagerDelegate> {

	id<AmazonAdInterstitialDelegate> _delegate;
	id<AmazonOOAdInterstitialDelegate> _ooDelegate;
	AMAInterstitialAdManager* _interstitialAdManager;

}

@property (assign,nonatomic,__weak) id<AmazonAdInterstitialDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL isReady; 
@property (readonly) BOOL isShowing; 
@property (assign,nonatomic,__weak) id<AmazonOOAdInterstitialDelegate> ooDelegate;              //@synthesize ooDelegate=_ooDelegate - In the implementation block
@property (nonatomic,retain) AMAInterstitialAdManager * interstitialAdManager;                  //@synthesize interstitialAdManager=_interstitialAdManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)amazonAdInterstitial;
+(id)alloc;
-(void)submitMetricsOnFailure;
-(id)adErrorFromError:(id)arg1 ;
-(void)submitMetricsOnSuccess;
-(id<AmazonOOAdInterstitialDelegate>)ooDelegate;
-(void)setOoDelegate:(id<AmazonOOAdInterstitialDelegate>)arg1 ;
-(AMAInterstitialAdManager *)interstitialAdManager;
-(void)setInterstitialAdManager:(AMAInterstitialAdManager *)arg1 ;
-(void)interstitialAdManagerDidLoad;
-(void)interstitialAdManagerDidFailToLoadWithError:(id)arg1 ;
-(void)interstitialAdManagerWillPresent;
-(void)interstitialAdManagerDidPresent;
-(void)interstitialAdManagerWillDismiss;
-(void)interstitialAdManagerDidDismiss;
-(void)interstitialAdManagerWillDismissOnLeaveApplication;
-(void)interstitialAdManagerDidClickOnPrivateURL:(id)arg1 ;
-(void)load:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<AmazonAdInterstitialDelegate>)arg1 ;
-(id<AmazonAdInterstitialDelegate>)delegate;
-(BOOL)isShowing;
-(void)presentFromViewController:(id)arg1 ;
-(BOOL)isReady;
@end
