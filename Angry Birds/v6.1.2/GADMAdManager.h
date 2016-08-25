/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/GADMSlotDelegate.h>
#import <AngryBirdsClassic/GADMConnectorDelegate.h>

@class NSMutableArray, GADMAdNetworkConnector, GADMConfig, GADAdType, GADSlot, NSTimer, NSString;

@interface GADMAdManager : NSObject <GADMSlotDelegate, GADMConnectorDelegate> {

	NSMutableArray* _adNetworkConfigQueue;
	GADMAdNetworkConnector* _lastConnectorNotifiedForAClick;
	id _lastMediatedInterstitial;
	long long _pendingActionGroup;
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
-(void)presentInterstitialFromRootViewController:(id)arg1 ;
-(void)adRequestReturnsFromConnector:(id)arg1 withMediatedAd:(id)arg2 ;
-(void)adRequestFailedFromConnector:(id)arg1 withError:(id)arg2 ;
-(BOOL)requestInProgress;
-(void)setRequestInProgress:(BOOL)arg1 ;
-(GADMAdNetworkConnector *)requestingConnector;
-(void)setRequestingConnector:(GADMAdNetworkConnector *)arg1 ;
-(GADMAdNetworkConnector *)receivedConnector;
-(void)setReceivedConnector:(GADMAdNetworkConnector *)arg1 ;
-(BOOL)changeAdTypeTo:(id)arg1 ;
-(void)cancelPendingActions;
-(void)setAdType:(GADAdType *)arg1 ;
-(void)resetRequestingState;
-(void)setAdNetworkTimeoutTimer:(NSTimer *)arg1 ;
-(void)makeAdRequest;
-(void)reportNoFill;
-(void)notifyDelegateOfFailureToReceiveWithError:(id)arg1 ;
-(id)dequeueAdNetworkConfig;
-(NSTimer *)adNetworkTimeoutTimer;
-(void)adNetworkTimeoutHandler:(id)arg1 ;
-(BOOL)shouldProcessResponseFromConnector:(id)arg1 ;
-(void)updateAdapterTimingsForError:(id)arg1 ;
-(void)mediateForAdType:(id)arg1 config:(id)arg2 ;
-(void)adRequestReturnsFromConnector:(id)arg1 withView:(id)arg2 ;
-(void)adRequestReturnsFromConnector:(id)arg1 withInterstitial:(id)arg2 ;
-(GADSlot *)slot;
-(void)cancel;
-(void)dealloc;
-(GADMConfig *)config;
-(void)setConfig:(GADMConfig *)arg1 ;
-(GADAdType *)adType;
-(void)setSlot:(GADSlot *)arg1 ;
@end

