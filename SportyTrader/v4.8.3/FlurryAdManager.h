/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FlurryAdManagerDelegate.h>
#import <SportyTrader/FlurryPreCachingDelegate.h>

@protocol FlurryAdDelegate;
@class NSMutableDictionary, NSMutableArray, NSArray, UIView, FlurryAdTargeting, UIViewController, FlurryAdCache, NSMutableSet, NSString;

@interface FlurryAdManager : NSObject <FlurryAdManagerDelegate, FlurryPreCachingDelegate> {

	NSMutableDictionary* _adSpaceToAdMap;
	NSMutableDictionary* _adSpaceToTimerMap;
	NSMutableArray* _pendingAdArray;
	NSMutableDictionary* _pendingAssetsToAdPrepareRequests;
	int _adViewType;
	NSMutableArray* _cachePendingAdUnitArray;
	NSArray* _supportedAssetsList;
	UIView* _stubView;
	FlurryAdTargeting* _targeting;
	NSMutableArray* _timers;
	UIViewController* _rvc;
	id<FlurryAdDelegate> _adDelegate;
	Class _cacheKeyFactory;
	FlurryAdCache* _adCache;
	NSMutableDictionary* _viewabilityPending;
	NSMutableSet* _myAdSpaces;

}

@property (assign,nonatomic,__weak) UIViewController * rvc;                         //@synthesize rvc=_rvc - In the implementation block
@property (__weak) id<FlurryAdDelegate> adDelegate;                                 //@synthesize adDelegate=_adDelegate - In the implementation block
@property (assign,nonatomic,__weak) Class cacheKeyFactory;                          //@synthesize cacheKeyFactory=_cacheKeyFactory - In the implementation block
@property (nonatomic,retain) NSArray * supportedAssetsList;                         //@synthesize supportedAssetsList=_supportedAssetsList - In the implementation block
@property (nonatomic,retain) FlurryAdTargeting * targeting;                         //@synthesize targeting=_targeting - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * adSpaceToAdMap;                  //@synthesize adSpaceToAdMap=_adSpaceToAdMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * adSpaceToTimerMap;               //@synthesize adSpaceToTimerMap=_adSpaceToTimerMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingAdArray;                       //@synthesize pendingAdArray=_pendingAdArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachePendingAdUnitArray;              //@synthesize cachePendingAdUnitArray=_cachePendingAdUnitArray - In the implementation block
@property (nonatomic,retain) FlurryAdCache * adCache;                               //@synthesize adCache=_adCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * viewabilityPending;              //@synthesize viewabilityPending=_viewabilityPending - In the implementation block
@property (nonatomic,retain) UIView * stubView;                                     //@synthesize stubView=_stubView - In the implementation block
@property (assign,nonatomic) int adViewType;                                        //@synthesize adViewType=_adViewType - In the implementation block
@property (nonatomic,retain) NSMutableArray * timers;                               //@synthesize timers=_timers - In the implementation block
@property (nonatomic,retain) NSMutableSet * myAdSpaces;                             //@synthesize myAdSpaces=_myAdSpaces - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)adCachesArray;
+(id)allPendingAds;
+(id)getCacheableAssetsFromAdUnit:(id)arg1 restrictCacheOnly:(BOOL)arg2 ;
+(id)backgroundWorkerThread;
+(BOOL)isGuidActive:(id)arg1 ;
+(id)adSpaceToAdsMap;
+(id)getMediaAssetUrlFromAdFrame:(id)arg1 ;
+(id)getMediaAssetUrlFromAdUnit:(id)arg1 ;
+(void)backgroundWorkerThreadEntryPoint:(id)arg1 ;
+(id)cacheableAssetsForAd:(id)arg1 ;
+(BOOL)isGuidInAnyCache:(id)arg1 ;
+(BOOL)isPendingAdAsset:(id)arg1 ;
+(void)setBackGroundThreadShouldKeepRunningState:(BOOL)arg1 ;
+(id)instance;
-(void)setAdCache:(FlurryAdCache *)arg1 ;
-(void)setCacheKeyFactory:(Class)arg1 ;
-(FlurryAdCache *)adCache;
-(Class)cacheKeyFactory;
-(void)setAdViewType:(int)arg1 ;
-(void)setViewabilityPending:(NSMutableDictionary *)arg1 ;
-(void)setTargeting:(FlurryAdTargeting *)arg1 ;
-(void)setSupportedAssetsList:(NSArray *)arg1 ;
-(id)initWithAdViewType:(int)arg1 adTargeting:(id)arg2 supportedAssetsList:(id)arg3 ;
-(id)initWithAdViewType:(int)arg1 adTargeting:(id)arg2 ;
-(void)setRvc:(UIViewController *)arg1 ;
-(NSMutableArray *)cachePendingAdUnitArray;
-(void)assetDownloadTimeoutForAsset:(id)arg1 ;
-(void)armTimer:(id)arg1 ;
-(void)downloadCacheableNonStreamableAssetsForAdUnit:(id)arg1 ;
-(NSArray *)supportedAssetsList;
-(FlurryAdTargeting *)targeting;
-(NSMutableSet *)myAdSpaces;
-(id)fetchPendingAdForSpace:(id)arg1 ;
-(void)adReadyForDisplay:(id)arg1 ;
-(void)primeAssetCacheForSpace:(id)arg1 ;
-(BOOL)hasNonExpiredCacheCompleteAdUnitForCacheKey:(id)arg1 ;
-(id)getNonExpiredCachePendingAdUnitForCacheKey:(id)arg1 ;
-(BOOL)hasNonExpiredCachePendingAdUnitForCacheKey:(id)arg1 ;
-(id)fetchCachedAdUnitForKey:(id)arg1 viewType:(int)arg2 viewContainer:(id)arg3 viewController:(id)arg4 timeout:(long long)arg5 waitingOnAdUnit:(BOOL*)arg6 ;
-(void)notifySpaceDidFailToReceiveAdOnMainThreadWithParams:(id)arg1 ;
-(NSMutableArray *)pendingAdArray;
-(id)adForSpace:(id)arg1 ;
-(id<FlurryAdDelegate>)adDelegate;
-(int)adViewType;
-(BOOL)displayAd:(id)arg1 ;
-(NSMutableDictionary *)adSpaceToAdMap;
-(void)deRegisterAdForSpace:(id)arg1 ;
-(BOOL)registerAd:(id)arg1 adSpaceName:(id)arg2 ;
-(NSMutableDictionary *)viewabilityPending;
-(void)refreshIfEmptyAdSpace:(id)arg1 viewType:(int)arg2 viewContainer:(id)arg3 viewController:(id)arg4 ;
-(void)setStubView:(UIView *)arg1 ;
-(UIView *)stubView;
-(NSMutableDictionary *)adSpaceToTimerMap;
-(void)refreshActiveAdSpace:(id)arg1 ;
-(id)showNewAdForSpace:(id)arg1 viewType:(int)arg2 viewContainer:(id)arg3 viewController:(id)arg4 timeout:(long long)arg5 ;
-(BOOL)timerStartedForSpace:(id)arg1 ;
-(void)adsAvailableForSpace:(id)arg1 viewType:(int)arg2 viewContainer:(id)arg3 viewController:(id)arg4 timeout:(long long)arg5 ;
-(void)adsNotAvailableForSpace:(id)arg1 viewContainer:(id)arg2 viewController:(id)arg3 timeout:(long long)arg4 error:(id)arg5 ;
-(void)adsNotAvailableForSpaceOnMainThreadWithParams:(id)arg1 ;
-(id)prepareAdForSpace:(id)arg1 viewType:(int)arg2 viewContainer:(id)arg3 viewController:(id)arg4 notification:(long long)arg5 ;
-(id)adSpaceDefaultConfigMap;
-(BOOL)isTestAdSpace:(id)arg1 ;
-(void)removeAdUnitsForGroupID:(id)arg1 withSpace:(id)arg2 ;
-(void)removeAdUnitsForSpace:(id)arg1 ;
-(void)removeExpiredCachePendingAdUnits;
-(void)downloadAssetForURLString:(id)arg1 withExpirationTime:(double)arg2 ;
-(BOOL)areAllAssetsCachedForAdUnit:(id)arg1 ;
-(void)removeInvalidTImers;
-(BOOL)isFailedAssetInAdunit:(id)arg1 forAsset:(id)arg2 ;
-(void)adsAvailableForSpaceWithParams:(id)arg1 ;
-(void)csrtbAdsNotAvailableForSpace:(id)arg1 viewContainer:(id)arg2 viewController:(id)arg3 timeout:(long long)arg4 stubAd:(id)arg5 ;
-(void)assetPreCachingDone:(id)arg1 ;
-(void)assetPreCachingFailed:(id)arg1 ;
-(void)assetPreCachingCancelled:(id)arg1 ;
-(void)adInView:(id)arg1 ;
-(void)adPartiallyOutOfView:(id)arg1 ;
-(void)adOutOfView:(id)arg1 ;
-(void)delayNewAdForSpace:(id)arg1 guid:(id)arg2 viewContainer:(id)arg3 viewController:(id)arg4 delay:(long long)arg5 ;
-(id)fetchAdUnitsForSpace:(id)arg1 viewType:(int)arg2 viewController:(id)arg3 minimum:(int)arg4 maximum:(int)arg5 ;
-(unsigned long long)adUnitCountForSpace:(id)arg1 ;
-(id)adNativeForSpace:(id)arg1 ;
-(void)adsNotAvailableForSpaceWithParams:(id)arg1 ;
-(void)setupDefaultsForAdSpace:(id)arg1 size:(int)arg2 ;
-(int)adSizeForTestAdSpace:(id)arg1 ;
-(void)updateViewContainer:(id)arg1 forAdSpace:(id)arg2 ;
-(void)removeAdUnitForGuid:(id)arg1 ;
-(BOOL)trackViewabilityForAdSpace:(id)arg1 withView:(id)arg2 ;
-(void)untrackViewabilityForAdSpace:(id)arg1 ;
-(void)processClickForAdSpace:(id)arg1 ;
-(void)notifySpaceDidFailToRenderOnMainThreadWithAdSpace:(id)arg1 ;
-(void)removePendingAd:(id)arg1 ;
-(void)purgeExpiredAds;
-(void)setAdSpaceToAdMap:(NSMutableDictionary *)arg1 ;
-(void)setAdSpaceToTimerMap:(NSMutableDictionary *)arg1 ;
-(void)setPendingAdArray:(NSMutableArray *)arg1 ;
-(void)setCachePendingAdUnitArray:(NSMutableArray *)arg1 ;
-(UIViewController *)rvc;
-(void)setAdDelegate:(id<FlurryAdDelegate>)arg1 ;
-(void)setMyAdSpaces:(NSMutableSet *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clearCache;
-(NSMutableArray *)timers;
-(void)setTimers:(NSMutableArray *)arg1 ;
-(void)initialize:(id)arg1 ;
@end

