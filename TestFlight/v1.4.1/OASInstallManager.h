/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class OASNetworkManager, OASObjectCache, OASAppInstallManager, OASProfileInstallManager, OASMetrics, NSMutableDictionary, NSObject;

@interface OASInstallManager : NSObject {

	OASNetworkManager* _networkManager;
	OASObjectCache* _cache;
	OASAppInstallManager* _appInstallManager;
	OASProfileInstallManager* _profileInstallManager;
	OASMetrics* _metrics;
	NSMutableDictionary* _bestProfileObservers;
	NSMutableDictionary* _bestProfiles;
	NSObject*<OS_dispatch_queue> _observerQueue;

}

@property (nonatomic,retain) OASNetworkManager * networkManager;                              //@synthesize networkManager=_networkManager - In the implementation block
@property (nonatomic,readonly) OASObjectCache * cache;                                        //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) OASAppInstallManager * appInstallManager;                      //@synthesize appInstallManager=_appInstallManager - In the implementation block
@property (nonatomic,readonly) OASProfileInstallManager * profileInstallManager;              //@synthesize profileInstallManager=_profileInstallManager - In the implementation block
@property (nonatomic,readonly) OASMetrics * metrics;                                          //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bestProfileObservers;                      //@synthesize bestProfileObservers=_bestProfileObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bestProfiles;                              //@synthesize bestProfiles=_bestProfiles - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerQueue;                      //@synthesize observerQueue=_observerQueue - In the implementation block
-(OASNetworkManager *)networkManager;
-(long long)appInstallStatus:(id)arg1 forBuild:(id)arg2 ;
-(id)cachedAppForApp:(id)arg1 ;
-(long long)appInstallStatus:(id)arg1 ;
-(id)installedAppBuildBundleVersion:(id)arg1 ;
-(id)installedAppBuildShortVersion:(id)arg1 ;
-(OASProfileInstallManager *)profileInstallManager;
-(void)installAppBuild:(id)arg1 forApp:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)cancelInstallForApp:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isAppAnUpdate:(id)arg1 forBuild:(id)arg2 ;
-(void)setNetworkManager:(OASNetworkManager *)arg1 ;
-(id)initWithCache:(id)arg1 metrics:(id)arg2 ;
-(void)profileStatusChanged:(id)arg1 ;
-(void)addObserver:(id)arg1 forObjectClass:(Class)arg2 propertyName:(id)arg3 bundleID:(id)arg4 selector:(SEL)arg5 ;
-(void)updateUponForegrounding;
-(OASAppInstallManager *)appInstallManager;
-(void)removeObserver:(id)arg1 forObjectClass:(Class)arg2 propertyName:(id)arg3 bundleID:(id)arg4 ;
-(void)_installAppBuild:(id)arg1 forApp:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)launchAppWithBundleID:(id)arg1 ;
-(long long)profileStatusForBundleID:(id)arg1 ;
-(id)cachedProfileForBundleID:(id)arg1 ;
-(void)removeObserver:(id)arg1 forObjectClass:(Class)arg2 ;
-(NSMutableDictionary *)bestProfileObservers;
-(NSMutableDictionary *)bestProfiles;
-(void)_dispatchBestProfileObserversForProfile:(id)arg1 ;
-(void)_dispatchObserver:(id)arg1 withCachedProfile:(id)arg2 selector:(SEL)arg3 ;
-(void)cleanupOutstandingAppInstalls;
-(void)installLatestAppBuild:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)launchAppBuild:(id)arg1 forApp:(id)arg2 ;
-(BOOL)isAppAvailable:(id)arg1 ;
-(double)installProgressForApp:(id)arg1 ;
-(id)appIDForBundleID:(id)arg1 ;
-(id)springBoardNameForBundleID:(id)arg1 ;
-(id)installedPrereleaseApps;
-(id)installedPrereleaseProfiles;
-(/*^block*/id)alertizeCompletionBlock:(/*^block*/id)arg1 ;
-(void)addObserverForBestProfile:(id)arg1 forBundleID:(id)arg2 selector:(SEL)arg3 ;
-(void)removeObserverForBestProfile:(id)arg1 forBundleID:(id)arg2 ;
-(void)removeObserverForBestProfile:(id)arg1 ;
-(void)setBestProfileObservers:(NSMutableDictionary *)arg1 ;
-(void)setBestProfiles:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(OASMetrics *)metrics;
-(OASObjectCache *)cache;
-(id)installedApps;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

