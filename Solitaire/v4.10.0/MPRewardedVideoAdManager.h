/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MPAdServerCommunicatorDelegate.h>
#import <SolitaireFree/MPRewardedVideoAdapterDelegate.h>

@protocol MPRewardedVideoAdManagerDelegate;
@class NSString, NSArray, MPRewardedVideoAdapter, MPAdServerCommunicator, MPAdConfiguration;

@interface MPRewardedVideoAdManager : NSObject <MPAdServerCommunicatorDelegate, MPRewardedVideoAdapterDelegate> {

	BOOL _loading;
	BOOL _playedAd;
	BOOL _ready;
	id<MPRewardedVideoAdManagerDelegate> _delegate;
	NSString* _adUnitID;
	NSArray* _mediationSettings;
	MPRewardedVideoAdapter* _adapter;
	MPAdServerCommunicator* _communicator;
	MPAdConfiguration* _configuration;

}

@property (nonatomic,retain) MPRewardedVideoAdapter * adapter;                                  //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) MPAdServerCommunicator * communicator;                             //@synthesize communicator=_communicator - In the implementation block
@property (nonatomic,retain) MPAdConfiguration * configuration;                                 //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL loading;                                                      //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL playedAd;                                                     //@synthesize playedAd=_playedAd - In the implementation block
@property (assign,nonatomic) BOOL ready;                                                        //@synthesize ready=_ready - In the implementation block
@property (assign,nonatomic,__weak) id<MPRewardedVideoAdManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * adUnitID;                                             //@synthesize adUnitID=_adUnitID - In the implementation block
@property (nonatomic,retain) NSArray * mediationSettings;                                       //@synthesize mediationSettings=_mediationSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)adUnitID;
-(void)setAdapter:(MPRewardedVideoAdapter *)arg1 ;
-(Class)customEventClass;
-(void)rewardedVideoDidFailToLoadForAdapter:(id)arg1 error:(id)arg2 ;
-(BOOL)hasAdAvailable;
-(void)handleAdPlayedForCustomEventNetwork;
-(id)instanceMediationSettingsForClass:(Class)arg1 ;
-(void)rewardedVideoDidLoadForAdapter:(id)arg1 ;
-(void)rewardedVideoDidExpireForAdapter:(id)arg1 ;
-(void)rewardedVideoDidFailToPlayForAdapter:(id)arg1 error:(id)arg2 ;
-(void)rewardedVideoWillAppearForAdapter:(id)arg1 ;
-(void)rewardedVideoDidAppearForAdapter:(id)arg1 ;
-(void)rewardedVideoWillDisappearForAdapter:(id)arg1 ;
-(void)rewardedVideoDidDisappearForAdapter:(id)arg1 ;
-(void)rewardedVideoWillLeaveApplicationForAdapter:(id)arg1 ;
-(void)rewardedVideoDidReceiveTapEventForAdapter:(id)arg1 ;
-(void)rewardedVideoShouldRewardUserForAdapter:(id)arg1 reward:(id)arg2 ;
-(id)rewardedVideoAdUnitId;
-(MPAdServerCommunicator *)communicator;
-(void)setCommunicator:(MPAdServerCommunicator *)arg1 ;
-(void)loadAdWithURL:(id)arg1 ;
-(void)communicatorDidReceiveAdConfiguration:(id)arg1 ;
-(void)communicatorDidFailWithError:(id)arg1 ;
-(BOOL)playedAd;
-(void)setPlayedAd:(BOOL)arg1 ;
-(NSArray *)mediationSettings;
-(id)initWithAdUnitID:(id)arg1 delegate:(id)arg2 ;
-(void)setMediationSettings:(NSArray *)arg1 ;
-(void)loadRewardedVideoAdWithKeywords:(id)arg1 location:(id)arg2 ;
-(void)presentRewardedVideoAdFromViewController:(id)arg1 ;
-(MPRewardedVideoAdapter *)adapter;
-(void)setDelegate:(id<MPRewardedVideoAdManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<MPRewardedVideoAdManagerDelegate>)delegate;
-(void)setConfiguration:(MPAdConfiguration *)arg1 ;
-(MPAdConfiguration *)configuration;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)ready;
-(void)setReady:(BOOL)arg1 ;
@end
