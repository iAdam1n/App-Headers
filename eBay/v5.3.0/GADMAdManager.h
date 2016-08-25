/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/GADMSlotDelegate.h>
#import <eBay/GADMConnectorDelegate.h>

@class NSMutableArray, GADMAdNetworkConnector, GADMConfig, GADAdType, GADSlot, NSTimer, NSString;

@interface GADMAdManager : NSObject <GADMSlotDelegate, GADMConnectorDelegate> {

	NSMutableArray* _adNetworkConfigQueue;
	GADMAdNetworkConnector* _lastConnectorNotifiedForAClick;
	id _lastMediatedInterstitial;
	long long _pendingActionGroup;
	NSMutableArray* _failedAdapterNamesAndDurations;
	BOOL _requestInProgress;
	GADMConfig* _config;
	GADAdType* _adType;
	GADMAdNetworkConnector* _requestingConnector;
	GADMAdNetworkConnector* _receivedConnector;
	GADSlot* _slot;
	NSTimer* _adNetworkTimeoutTimer;

}

@property (nonatomic,retain) GADMConfig * config;                                       //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) GADAdType * adType;                                        //@synthesize adType=_adType - In the implementation block
@property (nonatomic,retain) GADMAdNetworkConnector * requestingConnector;              //@synthesize requestingConnector=_requestingConnector - In the implementation block
@property (nonatomic,retain) GADMAdNetworkConnector * receivedConnector;                //@synthesize receivedConnector=_receivedConnector - In the implementation block
@property (assign,nonatomic,__weak) GADSlot * slot;                                     //@synthesize slot=_slot - In the implementation block
@property (assign,nonatomic) BOOL requestInProgress;                                    //@synthesize requestInProgress=_requestInProgress - In the implementation block
@property (nonatomic,retain) NSTimer * adNetworkTimeoutTimer;                           //@synthesize adNetworkTimeoutTimer=_adNetworkTimeoutTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdType:(GADAdType *)arg1 ;
-(void)adRequestReturnsFromConnector:(id)arg1 withMediatedAd:(id)arg2 ;
-(BOOL)requestInProgress;
-(void)setRequestInProgress:(BOOL)arg1 ;
-(GADMAdNetworkConnector *)requestingConnector;
-(void)setRequestingConnector:(GADMAdNetworkConnector *)arg1 ;
-(GADMAdNetworkConnector *)receivedConnector;
-(void)setReceivedConnector:(GADMAdNetworkConnector *)arg1 ;
-(void)presentInterstitialFromRootViewController:(id)arg1 ;
-(BOOL)changeAdTypeTo:(id)arg1 ;
-(void)cancelPendingActions;
-(void)resetRequestingState;
-(void)setAdNetworkTimeoutTimer:(NSTimer *)arg1 ;
-(void)makeAdRequest;
-(void)reportNoFill;
-(void)notifyDelegateOfFailureToReceiveWithError:(id)arg1 ;
-(id)dequeueAdNetworkConfig;
-(NSTimer *)adNetworkTimeoutTimer;
-(void)adNetworkTimeoutHandler:(id)arg1 ;
-(void)startCSITiming;
-(void)endCSITimingWithFailedAdapter:(id)arg1 ;
-(BOOL)shouldProcessResponseFromConnector:(id)arg1 ;
-(void)endCSITimingWithSucceededAdapter:(id)arg1 ;
-(void)updateAdapterTimingsForConnector:(id)arg1 error:(id)arg2 ;
-(id)mediationTimeRecorder;
-(void)mediateForAdType:(id)arg1 config:(id)arg2 ;
-(void)adRequestFailedFromConnector:(id)arg1 withError:(id)arg2 ;
-(void)adRequestReturnsFromConnector:(id)arg1 withView:(id)arg2 ;
-(void)adRequestReturnsFromConnector:(id)arg1 withInterstitial:(id)arg2 ;
-(GADSlot *)slot;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(GADMConfig *)config;
-(void)setConfig:(GADMConfig *)arg1 ;
-(GADAdType *)adType;
-(void)setSlot:(GADSlot *)arg1 ;
@end

