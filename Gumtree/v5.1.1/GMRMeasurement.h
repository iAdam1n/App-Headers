/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GMRNetworkReachabilityDelegate.h>

@class GMRConfiguration, GGLConfiguration, NSString, GMRAlarm, GMRAudience, GMRDatabase, GMRIdentity, GMRNetwork, GMRPersistedConfig, GMRRemoteConfig, GMRScheduler, GMRSessionReporter, NSArray;

@interface GMRMeasurement : NSObject <GMRNetworkReachabilityDelegate> {

	GMRConfiguration* _configuration;
	GGLConfiguration* _serviceInfo;
	NSString* _databaseName;
	long long _initializeComponentsOnce;
	GMRAlarm* _alarm;
	GMRAudience* _audience;
	GMRDatabase* _database;
	GMRIdentity* _identity;
	GMRNetwork* _network;
	GMRPersistedConfig* _persistedConfig;
	GMRRemoteConfig* _remoteConfig;
	GMRScheduler* _scheduler;
	GMRSessionReporter* _sessionReporter;
	NSArray* _uploadingBundleIDs;
	BOOL _isEnabled;

}

@property (assign,nonatomic) BOOL isEnabled;              //@synthesize isEnabled=_isEnabled - In the implementation block
+(void)initializeSharedInstanceWithConfiguration:(id)arg1 serviceInfo:(id)arg2 ;
+(id)remoteConfig;
+(id)sharedInstance;
+(id)monitor;
-(void)setUserAttribute:(id)arg1 ;
-(void)removeUserAttribute:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 serviceInfo:(id)arg2 ;
-(id)initWithDatabaseName:(id)arg1 persistedConfigName:(id)arg2 network:(id)arg3 scheduler:(id)arg4 alarm:(id)arg5 configuration:(id)arg6 serviceInfo:(id)arg7 ;
-(void)registerToObserveConfiguration:(id)arg1 ;
-(void)setIsEnabledOnWorkerQueue:(BOOL)arg1 ;
-(BOOL)startMeasurement;
-(void)reportFirstOpenOnWorkerQueue;
-(void)reportAppUpdateOnWorkerQueue;
-(void)reportOSUpdateOnWorkerQueue;
-(void)updateSchedule;
-(void)unregisterToObserveConfiguration:(id)arg1 ;
-(long long)timestampMillisRoundedUpToNextHour:(long long)arg1 ;
-(void)setUserAttributeOnWorkerQueue:(id)arg1 ;
-(void)logEventOnWorkerQueue:(id)arg1 ;
-(BOOL)hasDataToUpload;
-(double)nextUploadingTime;
-(BOOL)isUploadInProgress;
-(BOOL)bundleRawEvents;
-(void)fetchRemoteConfig;
-(id)filteredBundlesWithCompatibleAppID:(id)arg1 resettableDeviceID:(id)arg2 vendorDeviceID:(id)arg3 bundlesToUpload:(id)arg4 ;
-(void)setUploadInProgressWithBundleIDs:(id)arg1 ;
-(void)networkUploadCompletionHandlerWithResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)removeBundlesFromDatabaseWithIDs:(id)arg1 ;
-(id)createRawEventMetadataWithUserAttributes:(id)arg1 ;
-(void)removeUserAttributeOnWorkerQueue:(id)arg1 ;
-(void)networkRemoteConfigFetchCompletionHandler:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)uploadDataOrRegisterAlarm;
-(void)reachabilityDidChange;
-(double)firstOpenTimestamp;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)logEvent:(id)arg1 ;
-(void)uploadData;
@end

