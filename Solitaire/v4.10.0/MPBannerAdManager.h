/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MPAdServerCommunicatorDelegate.h>
#import <SolitaireFree/MPBannerAdapterDelegate.h>

@protocol MPBannerAdManagerDelegate;
@class MPAdServerCommunicator, MPBaseBannerAdapter, MPTimer, UIView, MPAdConfiguration, NSString;

@interface MPBannerAdManager : NSObject <MPAdServerCommunicatorDelegate, MPBannerAdapterDelegate> {

	BOOL _adActionInProgress;
	BOOL _automaticallyRefreshesContents;
	BOOL _hasRequestedAtLeastOneAd;
	id<MPBannerAdManagerDelegate> _delegate;
	MPAdServerCommunicator* _communicator;
	MPBaseBannerAdapter* _onscreenAdapter;
	MPBaseBannerAdapter* _requestingAdapter;
	MPTimer* _refreshTimer;
	long long _currentOrientation;
	UIView* _requestingAdapterAdContentView;
	MPAdConfiguration* _requestingConfiguration;

}

@property (nonatomic,retain) MPAdServerCommunicator * communicator;                      //@synthesize communicator=_communicator - In the implementation block
@property (nonatomic,retain) MPBaseBannerAdapter * onscreenAdapter;                      //@synthesize onscreenAdapter=_onscreenAdapter - In the implementation block
@property (nonatomic,retain) MPBaseBannerAdapter * requestingAdapter;                    //@synthesize requestingAdapter=_requestingAdapter - In the implementation block
@property (nonatomic,retain) UIView * requestingAdapterAdContentView;                    //@synthesize requestingAdapterAdContentView=_requestingAdapterAdContentView - In the implementation block
@property (nonatomic,retain) MPAdConfiguration * requestingConfiguration;                //@synthesize requestingConfiguration=_requestingConfiguration - In the implementation block
@property (nonatomic,retain) MPTimer * refreshTimer;                                     //@synthesize refreshTimer=_refreshTimer - In the implementation block
@property (assign,nonatomic) BOOL adActionInProgress;                                    //@synthesize adActionInProgress=_adActionInProgress - In the implementation block
@property (assign,nonatomic) BOOL automaticallyRefreshesContents;                        //@synthesize automaticallyRefreshesContents=_automaticallyRefreshesContents - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedAtLeastOneAd;                              //@synthesize hasRequestedAtLeastOneAd=_hasRequestedAtLeastOneAd - In the implementation block
@property (assign,nonatomic) long long currentOrientation;                               //@synthesize currentOrientation=_currentOrientation - In the implementation block
@property (assign,nonatomic,__weak) id<MPBannerAdManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadAd;
-(id)viewControllerForPresentingModalView;
-(void)refreshTimerDidFire;
-(void)forceRefreshAd;
-(void)stopAutomaticallyRefreshingContents;
-(void)startAutomaticallyRefreshingContents;
-(MPAdServerCommunicator *)communicator;
-(void)setCommunicator:(MPAdServerCommunicator *)arg1 ;
-(void)adapter:(id)arg1 didFailToLoadAdWithError:(id)arg2 ;
-(void)setAutomaticallyRefreshesContents:(BOOL)arg1 ;
-(void)setCurrentOrientation:(long long)arg1 ;
-(MPBaseBannerAdapter *)onscreenAdapter;
-(MPBaseBannerAdapter *)requestingAdapter;
-(BOOL)hasRequestedAtLeastOneAd;
-(void)setHasRequestedAtLeastOneAd:(BOOL)arg1 ;
-(void)loadAdWithURL:(id)arg1 ;
-(BOOL)automaticallyRefreshesContents;
-(void)pauseRefreshTimer;
-(void)scheduleRefreshTimer;
-(void)setRequestingConfiguration:(MPAdConfiguration *)arg1 ;
-(void)setRequestingAdapter:(MPBaseBannerAdapter *)arg1 ;
-(void)setRequestingAdapterAdContentView:(UIView *)arg1 ;
-(MPAdConfiguration *)requestingConfiguration;
-(void)didFailToLoadAdapterWithError:(id)arg1 ;
-(int)allowedNativeAdsOrientation;
-(UIView *)requestingAdapterAdContentView;
-(BOOL)adActionInProgress;
-(BOOL)requestingAdapterIsReadyToBePresented;
-(void)setOnscreenAdapter:(MPBaseBannerAdapter *)arg1 ;
-(long long)currentOrientation;
-(void)presentRequestingAdapter;
-(void)setAdActionInProgress:(BOOL)arg1 ;
-(void)communicatorDidReceiveAdConfiguration:(id)arg1 ;
-(void)communicatorDidFailWithError:(id)arg1 ;
-(id)bannerDelegate;
-(void)adapter:(id)arg1 didFinishLoadingAd:(id)arg2 ;
-(void)userActionWillBeginForAdapter:(id)arg1 ;
-(void)userActionDidFinishForAdapter:(id)arg1 ;
-(void)userWillLeaveApplicationFromAdapter:(id)arg1 ;
-(void)setDelegate:(id<MPBannerAdManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<MPBannerAdManagerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)rotateToOrientation:(long long)arg1 ;
-(id)location;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(BOOL)loading;
-(id)banner;
-(MPTimer *)refreshTimer;
-(void)setRefreshTimer:(MPTimer *)arg1 ;
@end
