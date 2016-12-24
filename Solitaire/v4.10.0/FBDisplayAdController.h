/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/FBDisplayAdAdapterDelegate.h>
#import <SolitaireFree/FBAdProviderDelegate.h>
#import <SolitaireFree/FBAdViewabilityValidatorDelegate.h>

@protocol FBDisplayAdControllerDelegate;
@class FBDisplayAdAdapter, FBAdProvider, FBAdEnvironmentData, FBAdViewabilityValidator, FBAdPlacementDefinition, FBAdCandidate, FBAdTimer, NSString, NSArray;

@interface FBDisplayAdController : NSObject <FBDisplayAdAdapterDelegate, FBAdProviderDelegate, FBAdViewabilityValidatorDelegate> {

	BOOL _flexibleAdSize;
	BOOL _initialized;
	BOOL _loaded;
	BOOL _started;
	BOOL _adapterHadImpression;
	BOOL _controllerHadImpression;
	id<FBDisplayAdControllerDelegate> _delegate;
	FBDisplayAdAdapter* _currentAdapter;
	FBAdProvider* _adProvider;
	FBAdEnvironmentData* _environment;
	long long _currentAdMinViewabilityPercentage;
	FBAdViewabilityValidator* _currentViewabilityValidator;
	FBAdPlacementDefinition* _currentPlacementDefinition;
	FBAdCandidate* _currentAdCandidate;
	FBDisplayAdAdapter* _nextAdapter;
	FBAdTimer* _nextAdapterTimeoutTimer;
	NSString* _nextAdapterName;
	NSArray* _nextAdsData;
	long long _nextAdsDataCurrentPos;
	long long _nextAdMinViewabilityPercentage;
	long long _placementType;
	long long _templateID;
	NSString* _placementID;
	long long _refreshInterval;
	FBAdTimer* _refreshTimer;
	long long _retryCount;
	double _adapterLoadTime;
	FBAdSize _adSizeType;
	CGSize _actualAdSize;

}

@property (nonatomic,retain) FBAdProvider * adProvider;                                           //@synthesize adProvider=_adProvider - In the implementation block
@property (nonatomic,retain) FBAdEnvironmentData * environment;                                   //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) FBDisplayAdAdapter * currentAdapter;                                 //@synthesize currentAdapter=_currentAdapter - In the implementation block
@property (assign,nonatomic) long long currentAdMinViewabilityPercentage;                         //@synthesize currentAdMinViewabilityPercentage=_currentAdMinViewabilityPercentage - In the implementation block
@property (nonatomic,retain) FBAdViewabilityValidator * currentViewabilityValidator;              //@synthesize currentViewabilityValidator=_currentViewabilityValidator - In the implementation block
@property (nonatomic,retain) FBAdPlacementDefinition * currentPlacementDefinition;                //@synthesize currentPlacementDefinition=_currentPlacementDefinition - In the implementation block
@property (nonatomic,retain) FBAdCandidate * currentAdCandidate;                                  //@synthesize currentAdCandidate=_currentAdCandidate - In the implementation block
@property (nonatomic,retain) FBDisplayAdAdapter * nextAdapter;                                    //@synthesize nextAdapter=_nextAdapter - In the implementation block
@property (nonatomic,retain) FBAdTimer * nextAdapterTimeoutTimer;                                 //@synthesize nextAdapterTimeoutTimer=_nextAdapterTimeoutTimer - In the implementation block
@property (nonatomic,copy) NSString * nextAdapterName;                                            //@synthesize nextAdapterName=_nextAdapterName - In the implementation block
@property (nonatomic,copy) NSArray * nextAdsData;                                                 //@synthesize nextAdsData=_nextAdsData - In the implementation block
@property (assign,nonatomic) long long nextAdsDataCurrentPos;                                     //@synthesize nextAdsDataCurrentPos=_nextAdsDataCurrentPos - In the implementation block
@property (assign,nonatomic) long long nextAdMinViewabilityPercentage;                            //@synthesize nextAdMinViewabilityPercentage=_nextAdMinViewabilityPercentage - In the implementation block
@property (assign,nonatomic) FBAdSize adSizeType;                                                 //@synthesize adSizeType=_adSizeType - In the implementation block
@property (assign,nonatomic) CGSize actualAdSize;                                                 //@synthesize actualAdSize=_actualAdSize - In the implementation block
@property (assign,getter=isFlexibleAdSize,nonatomic) BOOL flexibleAdSize;                         //@synthesize flexibleAdSize=_flexibleAdSize - In the implementation block
@property (assign,nonatomic) BOOL initialized;                                                    //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) BOOL loaded;                                                         //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic) BOOL started;                                                        //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL adapterHadImpression;                                           //@synthesize adapterHadImpression=_adapterHadImpression - In the implementation block
@property (assign,nonatomic) BOOL controllerHadImpression;                                        //@synthesize controllerHadImpression=_controllerHadImpression - In the implementation block
@property (assign,nonatomic) long long placementType;                                             //@synthesize placementType=_placementType - In the implementation block
@property (assign,nonatomic) long long templateID;                                                //@synthesize templateID=_templateID - In the implementation block
@property (nonatomic,copy) NSString * placementID;                                                //@synthesize placementID=_placementID - In the implementation block
@property (assign,nonatomic) long long refreshInterval;                                           //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (nonatomic,retain) FBAdTimer * refreshTimer;                                            //@synthesize refreshTimer=_refreshTimer - In the implementation block
@property (assign,nonatomic) long long retryCount;                                                //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) double adapterLoadTime;                                              //@synthesize adapterLoadTime=_adapterLoadTime - In the implementation block
@property (assign,nonatomic,__weak) id<FBDisplayAdControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long minViewabilityPercentage; 
@property (nonatomic,readonly) BOOL startAd; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlacementID:(NSString *)arg1 ;
-(NSString *)placementID;
-(void)loadAd;
-(BOOL)startAd;
-(void)setPlacementType:(long long)arg1 ;
-(long long)templateID;
-(void)setTemplateID:(long long)arg1 ;
-(void)disableAutoRefresh;
-(long long)placementType;
-(void)setCurrentAdapter:(FBDisplayAdAdapter *)arg1 ;
-(FBDisplayAdAdapter *)currentAdapter;
-(void)adapterDidFinishHandlingClick:(id)arg1 ;
-(void)adapter:(id)arg1 didFailWithError:(id)arg2 ;
-(void)adapterDidClick:(id)arg1 url:(id)arg2 playerHandles:(BOOL)arg3 ;
-(void)adapterDidUnload:(id)arg1 ;
-(void)adapterWillUnload:(id)arg1 ;
-(void)adapterDidLoad:(id)arg1 ;
-(void)adapterWillLogImpression:(id)arg1 ;
-(BOOL)startAdFromRootViewController:(id)arg1 ;
-(CGSize)actualAdSize;
-(void)setActualAdSize:(CGSize)arg1 ;
-(FBAdSize)adSizeType;
-(void)setAdSizeType:(FBAdSize)arg1 ;
-(long long)minViewabilityPercentage;
-(BOOL)viewabilityValidator:(id)arg1 checkedWithStatus:(long long)arg2 ;
-(void)checkInitialization;
-(void)initialLoadAd;
-(void)invalidateCurrentAd;
-(void)invalidateInProgressAd;
-(void)notifyAdViewPresented;
-(void)notifyAdError:(id)arg1 ;
-(void)updateRefreshInterval:(long long)arg1 ;
-(void)invalidateRefreshTimer;
-(long long)currentAdMinViewabilityPercentage;
-(BOOL)adapterHadImpression;
-(BOOL)controllerHadImpression;
-(void)setAdapterHadImpression:(BOOL)arg1 ;
-(void)setControllerHadImpression:(BOOL)arg1 ;
-(void)notifyAdImpression;
-(FBAdCandidate *)currentAdCandidate;
-(void)notifyAdClickThruWithURL:(id)arg1 playerHandles:(BOOL)arg2 ;
-(void)notifyAdUserClose;
-(void)notifyAdStopped;
-(void)logImpressionFromSource:(long long)arg1 ;
-(void)setCurrentViewabilityValidator:(FBAdViewabilityValidator *)arg1 ;
-(FBAdViewabilityValidator *)currentViewabilityValidator;
-(FBDisplayAdAdapter *)nextAdapter;
-(double)adapterLoadTime;
-(void)setAdapterLoadTime:(double)arg1 ;
-(long long)nextAdMinViewabilityPercentage;
-(void)setCurrentAdMinViewabilityPercentage:(long long)arg1 ;
-(void)ensureViewabilityValidator;
-(void)setNextAdapter:(FBDisplayAdAdapter *)arg1 ;
-(FBAdTimer *)nextAdapterTimeoutTimer;
-(void)setNextAdapterTimeoutTimer:(FBAdTimer *)arg1 ;
-(void)setNextAdsData:(NSArray *)arg1 ;
-(void)setNextAdsDataCurrentPos:(long long)arg1 ;
-(void)setNextAdapterName:(NSString *)arg1 ;
-(void)notifyAdLoaded;
-(BOOL)tryNextAdFromList;
-(FBAdPlacementDefinition *)currentPlacementDefinition;
-(void)scheduleRefreshIn:(long long)arg1 ;
-(NSString *)nextAdapterName;
-(void)setInitialAdViewSize:(FBAdSize)arg1 ;
-(void)setFlexibleAdSize:(BOOL)arg1 ;
-(BOOL)isFlexibleAdSize;
-(void)setCurrentPlacementDefinition:(FBAdPlacementDefinition *)arg1 ;
-(void)setNextAdMinViewabilityPercentage:(long long)arg1 ;
-(long long)nextAdsDataCurrentPos;
-(NSArray *)nextAdsData;
-(void)setCurrentAdCandidate:(FBAdCandidate *)arg1 ;
-(void)scheduleTimeout:(long long)arg1 ;
-(void)stopObservingNotifications;
-(void)onApplicationBackgrounded;
-(void)onApplicationForegrounded;
-(void)loadAdWithPlacementId:(id)arg1 withPlacementType:(long long)arg2 withTemplateID:(long long)arg3 withAdSize:(FBAdSize)arg4 ;
-(void)onAdRequestSuccess:(id)arg1 ;
-(void)setAdProvider:(FBAdProvider *)arg1 ;
-(FBAdProvider *)adProvider;
-(void)loadAdWithPlacementId:(id)arg1 withPlacementType:(long long)arg2 withTemplateID:(long long)arg3 withAdSize:(FBAdSize)arg4 withAdProvider:(id)arg5 ;
-(void)disableViewabilityValidator;
-(void)onAdRequestError:(id)arg1 ;
-(void)loadAdWithPlacementId:(id)arg1 withPlacementType:(long long)arg2 withTemplateID:(long long)arg3 ;
-(void)setDelegate:(id<FBDisplayAdControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBDisplayAdControllerDelegate>)delegate;
-(FBAdEnvironmentData *)environment;
-(void)refresh;
-(void)setEnvironment:(FBAdEnvironmentData *)arg1 ;
-(void)setRetryCount:(long long)arg1 ;
-(long long)retryCount;
-(void)scheduleRefresh;
-(BOOL)initialized;
-(void)startObservingNotifications;
-(long long)refreshInterval;
-(void)setLoaded:(BOOL)arg1 ;
-(BOOL)loaded;
-(void)setRefreshInterval:(long long)arg1 ;
-(void)invalidateTimeoutTimer;
-(void)setStarted:(BOOL)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(BOOL)started;
-(FBAdTimer *)refreshTimer;
-(void)setRefreshTimer:(FBAdTimer *)arg1 ;
-(void)retry;
@end
