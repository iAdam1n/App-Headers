/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/GADConfigurationDelegate.h>
#import <eBay/GADStatisticDictionaryDelegate.h>

@protocol NSObject, OS_dispatch_queue;
@class GADAd, GADContentQueue, GADScheduler, NSObject, NSArray, NSString, GADConfiguration, GADSession, GADStatisticDictionary, NSMutableSet;

@interface GADApplication : NSObject <GADConfigurationDelegate, GADStatisticDictionaryDelegate> {

	GADAd* _backgroundingAd;
	id<NSObject> _appBecameActiveObserver;
	id<NSObject> _appWillEnterForegroundObserver;
	GADContentQueue* _contentQueue;
	GADScheduler* _scheduler;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSArray* _availableAdapterNames;
	unsigned long long _activeViewID;
	NSString* _version;
	NSString* _mainBundleIdentifier;
	BOOL _appFinishedLaunching;
	BOOL _backgroundLoadingEnabled;
	BOOL _needsConfigurationUpdate;
	BOOL _isConfigurationUpdatePublisherInitiated;
	GADConfiguration* _configuration;
	GADSession* _currentSession;
	GADStatisticDictionary* _statistics;
	NSObject*<OS_dispatch_queue> _notificationSerialQueue;
	NSObject*<OS_dispatch_queue> _statisticsSerialQueue;
	unsigned long long _sequenceNumber;
	NSMutableSet* _adStatistics;

}

@property (copy,readonly) NSArray * availableAdapterNames; 
@property (nonatomic,readonly) GADConfiguration * configuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * version; 
@property (nonatomic,copy,readonly) NSString * mainBundleIdentifier; 
@property (nonatomic,readonly) GADSession * currentSession;                                     //@synthesize currentSession=_currentSession - In the implementation block
@property (nonatomic,readonly) GADStatisticDictionary * statistics;                             //@synthesize statistics=_statistics - In the implementation block
@property (nonatomic,readonly) BOOL backgroundLoadingEnabled; 
@property (nonatomic,readonly) BOOL backgroundReloadingEnabled; 
@property (nonatomic,readonly) BOOL active; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationSerialQueue;              //@synthesize notificationSerialQueue=_notificationSerialQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statisticsSerialQueue;                //@synthesize statisticsSerialQueue=_statisticsSerialQueue - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;                                 //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) NSMutableSet * adStatistics;                                     //@synthesize adStatistics=_adStatistics - In the implementation block
+(id)sharedInstance;
+(void)load;
-(id)nextSequenceNumberAsString;
-(void)didNotSendAdStatistics:(id)arg1 ;
-(void)incrementTotalAdClickCount;
-(id)nextRequestStatisticsDictionaryForSlot:(id)arg1 ;
-(void)willLeaveApplicationDueToClickOnAd:(id)arg1 ;
-(void)decrementTotalAdRequestCount;
-(void)incrementTotalAdRequestCount;
-(id)timeSinceFirstAdRequestInMilliseconds;
-(void)willEnterForeground;
-(void)incrementSequenceNumber;
-(void)didBecomeActive;
-(void)updateAvailableAdapterNamesWithPotentialAdapterNames:(id)arg1 ;
-(void)setAvailableAdapterNames:(NSArray *)arg1 ;
-(NSArray *)availableAdapterNames;
-(void)createConfiguration;
-(id)javaScriptForRequestingServerSideConfiguration;
-(void)configurationDidUpdate:(id)arg1 ;
-(void)loadServerSideConfigurationForPublisherApplicationID:(id)arg1 ;
-(void)loadServerSideConfigurationIfNeeded;
-(void)refreshServerSideConfiguration;
-(GADConfiguration *)configuration;
-(id)fingerprintWithServedPenaltyDeduction;
-(void)startContentHashing;
-(void)stopContentHashing;
-(void)appDidFinishLaunching;
-(void)enableBackgroundAdLoading;
-(BOOL)isSplitScreenEnabled;
-(BOOL)backgroundReloadingEnabled;
-(void)runEarlyActivities;
-(BOOL)backgroundLoadingEnabled;
-(id)pendingAdStatistics;
-(id)iTunesMetadataPath;
-(NSMutableSet *)adStatistics;
-(NSObject*<OS_dispatch_queue>)notificationSerialQueue;
-(void)GADLinkCategories;
-(unsigned long long)nextActiveViewID;
-(void)setNotificationSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)statisticsSerialQueue;
-(void)setStatisticsSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)notificationQueue;
-(void)didUpdateStatisticDictionary:(id)arg1 ;
-(long long)topViewControllerOrientation;
-(NSString *)mainBundleIdentifier;
-(id)placeholderWindow;
-(id)iTunesMetadata;
-(unsigned long long)mainWindowSupportedInterfaceOrientations;
-(void)dealloc;
-(id)init;
-(BOOL)active;
-(id)parameters;
-(NSString *)version;
-(unsigned long long)sequenceNumber;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(GADSession *)currentSession;
-(id)mainWindow;
-(GADStatisticDictionary *)statistics;
@end

