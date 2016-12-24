/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/GADMRewardBasedVideoAdConnectorDelegate.h>
#import <SolitaireFree/GADSDKCoreControllerDelegate.h>
#import <SolitaireFree/GADAdFetcherDelegate.h>
#import <SolitaireFree/GADInterstitialDelegate.h>
#import <SolitaireFree/GADInterstitialAdClickDelegate.h>
#import <SolitaireFree/GADInterstitialRewardBasedVideoAdDelegate.h>

@protocol GADRewardBasedVideoAdDelegate;
@class GADInterstitial, NSString, GADRequest, GADAdFetcher, GADMConfig, NSMutableArray, GADMRewardBasedVideoAdNetworkConnector, NSMutableDictionary, GADAd, GADSlotStatistics;

@interface GADRewardBasedVideoAd : NSObject <GADMRewardBasedVideoAdConnectorDelegate, GADSDKCoreControllerDelegate, GADAdFetcherDelegate, GADInterstitialDelegate, GADInterstitialAdClickDelegate, GADInterstitialRewardBasedVideoAdDelegate> {

	GADInterstitial* _interstitial;
	id _configurationObserver;
	BOOL _ready;
	BOOL _requestInProgress;
	id<GADRewardBasedVideoAdDelegate> _delegate;
	NSString* _adNetworkClassName;
	GADRequest* _request;
	NSString* _adUnitID;
	NSString* _requestID;
	GADAdFetcher* _adFetcher;
	GADMConfig* _mediationConfig;
	NSMutableArray* _pendingAdRequestConnectors;
	NSMutableArray* _allocationIDs;
	GADMRewardBasedVideoAdNetworkConnector* _requestingConnector;
	GADMRewardBasedVideoAdNetworkConnector* _receivedConnector;
	NSMutableDictionary* _pendingSetUpConnectorsTimestamp;
	NSMutableDictionary* _connectors;
	GADAd* _ad;
	GADSlotStatistics* _adStatistics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GADRequest * request;                                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSString * adUnitID;                                                         //@synthesize adUnitID=_adUnitID - In the implementation block
@property (nonatomic,copy) NSString * requestID;                                                        //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) GADAdFetcher * adFetcher;                                                  //@synthesize adFetcher=_adFetcher - In the implementation block
@property (assign,nonatomic) BOOL requestInProgress;                                                    //@synthesize requestInProgress=_requestInProgress - In the implementation block
@property (nonatomic,retain) GADMConfig * mediationConfig;                                              //@synthesize mediationConfig=_mediationConfig - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingAdRequestConnectors;                               //@synthesize pendingAdRequestConnectors=_pendingAdRequestConnectors - In the implementation block
@property (nonatomic,retain) NSMutableArray * allocationIDs;                                            //@synthesize allocationIDs=_allocationIDs - In the implementation block
@property (nonatomic,retain) GADMRewardBasedVideoAdNetworkConnector * requestingConnector;              //@synthesize requestingConnector=_requestingConnector - In the implementation block
@property (nonatomic,retain) GADMRewardBasedVideoAdNetworkConnector * receivedConnector;                //@synthesize receivedConnector=_receivedConnector - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingSetUpConnectorsTimestamp;                     //@synthesize pendingSetUpConnectorsTimestamp=_pendingSetUpConnectorsTimestamp - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectors;                                          //@synthesize connectors=_connectors - In the implementation block
@property (nonatomic,retain) GADAd * ad;                                                                //@synthesize ad=_ad - In the implementation block
@property (nonatomic,readonly) GADSlotStatistics * adStatistics;                                        //@synthesize adStatistics=_adStatistics - In the implementation block
@property (nonatomic,copy) NSString * adNetworkClassName;                                               //@synthesize adNetworkClassName=_adNetworkClassName - In the implementation block
@property (assign,nonatomic,__weak) id<GADRewardBasedVideoAdDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (getter=isReady,nonatomic,readonly) BOOL ready;                                               //@synthesize ready=_ready - In the implementation block
+(id)sharedInstance;
-(void)setAdUnitID:(NSString *)arg1 ;
-(void)presentFromRootViewController:(id)arg1 ;
-(void)interstitialDidReceiveAd:(id)arg1 ;
-(void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)interstitialWillPresentScreen:(id)arg1 ;
-(void)interstitialWillDismissScreen:(id)arg1 ;
-(void)interstitialDidDismissScreen:(id)arg1 ;
-(void)interstitialWillLeaveApplication:(id)arg1 ;
-(void)setAd:(GADAd *)arg1 ;
-(void)connector:(id)arg1 didFailToSetUpRewardBasedVideoAdWithError:(id)arg2 ;
-(void)connectorDidSetUpRewardBasedVideoAd:(id)arg1 ;
-(void)connectorDidReceiveRewardBasedVideoAd:(id)arg1 ;
-(void)connector:(id)arg1 didFailToReceiveRewardBasedVideoAdWithError:(id)arg2 ;
-(void)connectorDidReceiveClick:(id)arg1 ;
-(void)connector:(id)arg1 didRewardUserWithReward:(id)arg2 ;
-(void)connectorDidOpenRewardBasedVideoAd:(id)arg1 ;
-(void)connectorDidStartPlayingRewardBasedVideoAd:(id)arg1 ;
-(void)connectorDidCloseRewardBasedVideoAd:(id)arg1 ;
-(void)connectorWillLeaveApplication:(id)arg1 ;
-(id)decodedJSONResponseFromAd:(id)arg1 error:(id*)arg2 ;
-(void)setUpAdaptersForAdNetworkConfigs:(id)arg1 ;
-(void)buildPendingAdRequestConnectorsList;
-(void)makeNextAdRequest;
-(void)pingNoFillURLs;
-(void)mediation_connectorWillStartRequestingAd;
-(void)requestAdFromConnector:(id)arg1 ;
-(void)removeStaleConnectors;
-(void)mediation_adapterDidFailToSetUpWithNetworkConfig:(id)arg1 ;
-(void)mediation_connectorDidReceiveAd:(id)arg1 ;
-(void)mediation_connectorDidFailToReceiveAd:(id)arg1 withError:(id)arg2 ;
-(id)adLoadActionTimeRecorder;
-(void)failedJavaScriptFile;
-(void)loadAdURLWithParameters:(id)arg1 ;
-(long long)requestedAdType;
-(void)loadAd:(id)arg1 headers:(id)arg2 ;
-(void)invalidJavaScriptRequest;
-(void)startObservingApplicationConfiguration;
-(void)stopObservingApplicationConfiguration;
-(void)fetchAdForRequest:(id)arg1 withAdUnitID:(id)arg2 ;
-(void)presentMediatedRewardBasedVideoAdFromViewController:(id)arg1 ;
-(void)loadInterstitialWithAd:(id)arg1 ;
-(void)processMediationAd:(id)arg1 ;
-(void)failedToLoadAdWithError:(id)arg1 ;
-(void)loadRequest:(id)arg1 withAdUnitID:(id)arg2 ;
-(void)adLoadedSuccessfully;
-(NSString *)adNetworkClassName;
-(void)setAdNetworkClassName:(NSString *)arg1 ;
-(NSString *)adUnitID;
-(GADAdFetcher *)adFetcher;
-(void)setAdFetcher:(GADAdFetcher *)arg1 ;
-(BOOL)requestInProgress;
-(void)setRequestInProgress:(BOOL)arg1 ;
-(GADMConfig *)mediationConfig;
-(void)setMediationConfig:(GADMConfig *)arg1 ;
-(NSMutableArray *)pendingAdRequestConnectors;
-(void)setPendingAdRequestConnectors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)allocationIDs;
-(void)setAllocationIDs:(NSMutableArray *)arg1 ;
-(GADMRewardBasedVideoAdNetworkConnector *)requestingConnector;
-(void)setRequestingConnector:(GADMRewardBasedVideoAdNetworkConnector *)arg1 ;
-(GADMRewardBasedVideoAdNetworkConnector *)receivedConnector;
-(void)setReceivedConnector:(GADMRewardBasedVideoAdNetworkConnector *)arg1 ;
-(NSMutableDictionary *)pendingSetUpConnectorsTimestamp;
-(void)setPendingSetUpConnectorsTimestamp:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)connectors;
-(void)setConnectors:(NSMutableDictionary *)arg1 ;
-(GADSlotStatistics *)adStatistics;
-(void)interstitialDidReceiveAdClick:(id)arg1 ;
-(void)adFetcher:(id)arg1 didFetchAd:(id)arg2 ;
-(void)adFetcher:(id)arg1 didFailToFetchAd:(id)arg2 withError:(id)arg3 responseCode:(unsigned long long)arg4 ;
-(void)interstitialDidStartPlayingRewardBasedVideoAd:(id)arg1 ;
-(void)interstitial:(id)arg1 didRewardUserWithReward:(id)arg2 ;
-(void)setUpAdaptersFromApplicationConfiguration;
-(void)resetFillStatus;
-(void)loadInterstitialWithAdRequest:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<GADRewardBasedVideoAdDelegate>)arg1 ;
-(void)dealloc;
-(id<GADRewardBasedVideoAdDelegate>)delegate;
-(GADRequest *)request;
-(void)setRequest:(GADRequest *)arg1 ;
-(GADAd *)ad;
-(id)requestParameters;
-(NSString *)requestID;
-(void)loadAd:(id)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(BOOL)isReady;
@end
