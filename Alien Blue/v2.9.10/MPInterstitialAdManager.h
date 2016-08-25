/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/MPAdServerCommunicatorDelegate.h>
#import <AlienBlue/MPInterstitialAdapterDelegate.h>

@protocol MPInterstitialAdManagerDelegate;
@class MPAdServerCommunicator, MPBaseInterstitialAdapter, MPAdConfiguration, NSString;

@interface MPInterstitialAdManager : NSObject <MPAdServerCommunicatorDelegate, MPInterstitialAdapterDelegate> {

	BOOL _loading;
	BOOL _ready;
	id<MPInterstitialAdManagerDelegate> _delegate;
	MPAdServerCommunicator* _communicator;
	MPBaseInterstitialAdapter* _adapter;
	MPAdConfiguration* _configuration;

}

@property (assign,nonatomic,__weak) id<MPInterstitialAdManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL ready;                                                       //@synthesize ready=_ready - In the implementation block
@property (assign,nonatomic) BOOL loading;                                                     //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) MPBaseInterstitialAdapter * adapter;                              //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) MPAdServerCommunicator * communicator;                            //@synthesize communicator=_communicator - In the implementation block
@property (nonatomic,retain) MPAdConfiguration * configuration;                                //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)communicatorDidFailWithError:(id)arg1 ;
-(void)communicatorDidReceiveAdConfiguration:(id)arg1 ;
-(void)customEventDidLoadAd;
-(void)customEventDidFailToLoadAd;
-(void)customEventActionWillBegin;
-(void)setCommunicator:(MPAdServerCommunicator *)arg1 ;
-(MPAdServerCommunicator *)communicator;
-(void)loadAdWithURL:(id)arg1 ;
-(void)adapter:(id)arg1 didFailToLoadAdWithError:(id)arg2 ;
-(id)interstitialDelegate;
-(void)presentInterstitialFromViewController:(id)arg1 ;
-(void)loadInterstitialWithAdUnitID:(id)arg1 keywords:(id)arg2 location:(id)arg3 testing:(BOOL)arg4 ;
-(id)interstitialAdController;
-(void)setAdapter:(MPBaseInterstitialAdapter *)arg1 ;
-(void)setUpAdapterWithConfiguration:(id)arg1 ;
-(void)adapterDidFinishLoadingAd:(id)arg1 ;
-(void)interstitialWillAppearForAdapter:(id)arg1 ;
-(void)interstitialDidAppearForAdapter:(id)arg1 ;
-(void)interstitialWillDisappearForAdapter:(id)arg1 ;
-(void)interstitialDidDisappearForAdapter:(id)arg1 ;
-(void)interstitialDidExpireForAdapter:(id)arg1 ;
-(void)interstitialDidReceiveTapEventForAdapter:(id)arg1 ;
-(void)interstitialWillLeaveApplicationForAdapter:(id)arg1 ;
-(MPBaseInterstitialAdapter *)adapter;
-(void)setDelegate:(id<MPInterstitialAdManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<MPInterstitialAdManagerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setConfiguration:(MPAdConfiguration *)arg1 ;
-(id)location;
-(MPAdConfiguration *)configuration;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(void)setReady:(BOOL)arg1 ;
-(BOOL)ready;
@end

