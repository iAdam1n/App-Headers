/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:47:05 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE1D7681-1F8E-4F70-B735-8E445CD8E257/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/NRDevicePropertyObserver.h>

@protocol OS_dispatch_queue;
@class OASNetworkManager, OASNanoAppInstallManager, OASNanoProfileInstallManager, OASObjectCache, OASMetrics, NSObject, NSMutableDictionary, NSString;

@interface OASNanoInstallManager : NSObject <NRDevicePropertyObserver> {

	BOOL _useNotificationsForActiveState;
	OASNetworkManager* _networkManager;
	OASNanoAppInstallManager* _appInstallManager;
	OASNanoProfileInstallManager* _profileInstallManager;
	OASObjectCache* _cache;
	OASMetrics* _metrics;
	NSObject*<OS_dispatch_queue> _managerQueue;
	NSMutableDictionary* _runners;
	NSMutableDictionary* _pendingRunners;
	unsigned long long _pendingBackgroundTaskID;

}

@property (nonatomic,retain) OASNetworkManager * networkManager;                                  //@synthesize networkManager=_networkManager - In the implementation block
@property (nonatomic,readonly) OASNanoAppInstallManager * appInstallManager;                      //@synthesize appInstallManager=_appInstallManager - In the implementation block
@property (nonatomic,readonly) OASNanoProfileInstallManager * profileInstallManager;              //@synthesize profileInstallManager=_profileInstallManager - In the implementation block
@property (nonatomic,readonly) OASObjectCache * cache;                                            //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) OASMetrics * metrics;                                              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> managerQueue;                         //@synthesize managerQueue=_managerQueue - In the implementation block
@property (nonatomic,readonly) BOOL useNotificationsForActiveState;                               //@synthesize useNotificationsForActiveState=_useNotificationsForActiveState - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * runners;                                     //@synthesize runners=_runners - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingRunners;                              //@synthesize pendingRunners=_pendingRunners - In the implementation block
@property (assign,nonatomic) unsigned long long pendingBackgroundTaskID;                          //@synthesize pendingBackgroundTaskID=_pendingBackgroundTaskID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(OASNetworkManager *)networkManager;
-(NSObject*<OS_dispatch_queue>)managerQueue;
-(OASNanoProfileInstallManager *)profileInstallManager;
-(void)setNetworkManager:(OASNetworkManager *)arg1 ;
-(id)pairedAndActiveNanoDevicesHeaderString;
-(id)pairedAndActiveNanoDevices;
-(id)pairedAndActiveNanoDevice;
-(void)uninstallSuperfluousPrereleaseNanoProfilesWithCompletionBlock:(/*^block*/id)arg1 ;
-(long long)nanoProfileStatusForBundleID:(id)arg1 ;
-(id)cachedNanoProfileForBundleID:(id)arg1 ;
-(id)initWithCache:(id)arg1 metrics:(id)arg2 ;
-(void)updateUponForegrounding;
-(OASNanoAppInstallManager *)appInstallManager;
-(id)pairedNanoDevices;
-(void)shouldInstallNanoAppsAutomatically:(/*^block*/id)arg1 ;
-(long long)installStatusForNanoAppWithBundleID:(id)arg1 ;
-(void)installNanoAppAndProfilesWithBundleID:(id)arg1 andAppID:(id)arg2 userInitiated:(BOOL)arg3 ;
-(void)nanoDevicePairedNotificationReceived:(id)arg1 ;
-(void)nanoDeviceUnpairedNotificationReceived:(id)arg1 ;
-(void)nanoDeviceBecameActiveNotificationReceived:(id)arg1 ;
-(void)nanoDeviceBecameInactiveNotificationReceived:(id)arg1 ;
-(NSMutableDictionary *)runners;
-(void)saveInstallStatusToCache:(long long)arg1 forBundleID:(id)arg2 timestamp:(id)arg3 ;
-(/*^block*/id)createTaskToSwitchAppInstallStatus:(long long)arg1 ;
-(void)addRunner:(id)arg1 ;
-(NSMutableDictionary *)pendingRunners;
-(void)runnerFailed:(id)arg1 ;
-(void)runnerCompleted:(id)arg1 ;
-(unsigned long long)pendingBackgroundTaskID;
-(void)setPendingBackgroundTaskID:(unsigned long long)arg1 ;
-(id)iosSpringBoardNameForiOSAppID:(id)arg1 ;
-(BOOL)useNotificationsForActiveState;
-(void)refreshObjectCacheForActiveNanoDevice;
-(void)installNanoAppAndProfilesForAppBuild:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)uninstallNanoAppWithBundleID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(OASMetrics *)metrics;
-(OASObjectCache *)cache;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
@end
