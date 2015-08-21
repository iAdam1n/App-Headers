/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GADStatisticDictionaryDelegate.h>

@protocol NSObject, OS_dispatch_queue;
@class GADAd, GADContentQueue, GADScheduler, NSObject, NSArray, GADSession, GADStatisticDictionary, NSMutableSet, NSMutableDictionary, NSString;

@interface GADApplication : NSObject <GADStatisticDictionaryDelegate> {

	GADAd* _backgroundingAd;
	id<NSObject> _appBecameActiveObserver;
	GADContentQueue* _contentQueue;
	GADScheduler* _scheduler;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSArray* _availableAdapterNames;
	unsigned long long _activeViewID;
	BOOL _appFinishedLaunching;
	GADSession* _currentSession;
	GADStatisticDictionary* _statistics;
	NSObject*<OS_dispatch_queue> _notificationSerialQueue;
	NSObject*<OS_dispatch_queue> _statisticsSerialQueue;
	unsigned long long _sequenceNumber;
	NSMutableSet* _adStatistics;
	NSMutableDictionary* _slotStatistics;

}

@property (copy,readonly) NSArray * availableAdapterNames; 
@property (nonatomic,readonly) GADSession * currentSession;                                     //@synthesize currentSession=_currentSession - In the implementation block
@property (nonatomic,readonly) GADStatisticDictionary * statistics;                             //@synthesize statistics=_statistics - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationSerialQueue;              //@synthesize notificationSerialQueue=_notificationSerialQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statisticsSerialQueue;                //@synthesize statisticsSerialQueue=_statisticsSerialQueue - In the implementation block
@property (assign,nonatomic) BOOL appFinishedLaunching;                                         //@synthesize appFinishedLaunching=_appFinishedLaunching - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;                                 //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) NSMutableSet * adStatistics;                                     //@synthesize adStatistics=_adStatistics - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * slotStatistics;                            //@synthesize slotStatistics=_slotStatistics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedApplication;
+(void)load;
-(id)nextSequenceNumberAsString;
-(void)didNotSendAdStatistics:(id)arg1 ;
-(id)slotStatisticsDictionary;
-(void)incrementTotalAdClickCount;
-(void)willLeaveApplicationDueToClickOnAd:(id)arg1 ;
-(id)nextRequestStatisticsDictionaryForSlot:(id)arg1 ;
-(void)incrementSequenceNumber;
-(void)decrementTotalAdRequestCount;
-(void)incrementTotalAdRequestCount;
-(id)slotStatisticsForSlotID:(id)arg1 ;
-(id)timeSinceFirstAdRequestInMilliseconds;
-(void)didBecomeActive;
-(void)updateAvailableAdapterNamesWithPotentialAdapterNames:(id)arg1 ;
-(void)setAvailableAdapterNames:(NSArray *)arg1 ;
-(NSArray *)availableAdapterNames;
-(id)fingerprintWithServedPenaltyDeduction;
-(void)startContentHashing;
-(void)stopContentHashing;
-(unsigned long long)nextActiveViewID;
-(id)iTunesMetadata;
-(void)runEarlyActivities;
-(BOOL)isAppActive;
-(id)pendingAdStatistics;
-(void)setAppFinishedLaunching:(BOOL)arg1 ;
-(BOOL)appFinishedLaunching;
-(id)iTunesMetadataPath;
-(NSMutableSet *)adStatistics;
-(NSObject*<OS_dispatch_queue>)notificationSerialQueue;
-(void)didUpdateStatisticDictionary:(id)arg1 ;
-(void)GADLinkCategories;
-(void)setNotificationSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)statisticsSerialQueue;
-(void)setStatisticsSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)slotStatistics;
-(void)dealloc;
-(id)init;
-(GADStatisticDictionary *)statistics;
-(GADSession *)currentSession;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(id)notificationQueue;
@end

