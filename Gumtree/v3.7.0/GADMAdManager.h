/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GADMDelegate;
@class NSMutableArray, GADMAdNetworkConnector, GADMConfig, GADAdType, NSDate, NSTimer;

@interface GADMAdManager : NSObject {

	NSMutableArray* _adNetworkConfigQueue;
	GADMAdNetworkConnector* _lastConnectorNotifiedForAClick;
	long long _pendingActionGroup;
	BOOL _requestInProgress;
	id<GADMDelegate> _delegate;
	GADMConfig* _config;
	GADAdType* _adType;
	GADMAdNetworkConnector* _requestingConnector;
	GADMAdNetworkConnector* _receivedConnector;
	NSDate* _lastRequestTime;
	NSTimer* _adNetworkTimeoutTimer;

}

@property (assign,nonatomic,__weak) id<GADMDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GADMConfig * config;                                       //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) GADAdType * adType;                                        //@synthesize adType=_adType - In the implementation block
@property (nonatomic,retain) GADMAdNetworkConnector * requestingConnector;              //@synthesize requestingConnector=_requestingConnector - In the implementation block
@property (nonatomic,retain) GADMAdNetworkConnector * receivedConnector;                //@synthesize receivedConnector=_receivedConnector - In the implementation block
@property (nonatomic,retain) NSDate * lastRequestTime;                                  //@synthesize lastRequestTime=_lastRequestTime - In the implementation block
@property (assign,nonatomic) BOOL requestInProgress;                                    //@synthesize requestInProgress=_requestInProgress - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * adNetworkTimeoutTimer;                    //@synthesize adNetworkTimeoutTimer=_adNetworkTimeoutTimer - In the implementation block
-(void)setAdType:(GADAdType *)arg1 ;
-(void)presentInterstitialFromRootViewController:(id)arg1 ;
-(void)cancelPendingActions;
-(GADMAdNetworkConnector *)receivedConnector;
-(BOOL)changeAdTypeTo:(id)arg1 ;
-(GADMAdNetworkConnector *)requestingConnector;
-(BOOL)requestInProgress;
-(void)makeAdRequest;
-(NSTimer *)adNetworkTimeoutTimer;
-(void)setAdNetworkTimeoutTimer:(NSTimer *)arg1 ;
-(void)setRequestingConnector:(GADMAdNetworkConnector *)arg1 ;
-(void)setReceivedConnector:(GADMAdNetworkConnector *)arg1 ;
-(void)resetRequestingState;
-(id)dequeueAdNetworkConfig;
-(void)reportNoFill;
-(void)notifyDelegateOfFailureToReceiveWithError:(id)arg1 ;
-(void)setRequestInProgress:(BOOL)arg1 ;
-(void)setLastRequestTime:(NSDate *)arg1 ;
-(void)adNetworkTimeoutHandler:(id)arg1 ;
-(void)requestNextAdNetwork;
-(BOOL)shouldProcessResponseFromConnector:(id)arg1 ;
-(void)updateAdapterTimingsForError:(id)arg1 ;
-(void)mediateForAdType:(id)arg1 config:(id)arg2 ;
-(void)adRequestReturnsFromConnector:(id)arg1 withView:(id)arg2 ;
-(void)adRequestReturnsFromConnector:(id)arg1 withInterstitial:(id)arg2 ;
-(void)adRequestFailedFromConnector:(id)arg1 withError:(id)arg2 ;
-(NSDate *)lastRequestTime;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<GADMDelegate>)arg1 ;
-(id<GADMDelegate>)delegate;
-(GADMConfig *)config;
-(void)setConfig:(GADMConfig *)arg1 ;
-(GADAdType *)adType;
@end
