/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol AFAppBoosterNotificationsManagerDelegate;
#import <SportyTrader/SportyTrader-Structs.h>
@class AFAdUnitHTTPRequestOperation, NSMutableArray, NSDate, AFSDKWeakTimer, NSNumber, NSString;

@interface AFAppBoosterNotificationsManager : NSObject {

	BOOL _isRefreshing;
	id<AFAppBoosterNotificationsManagerDelegate> _delegate;
	AFAdUnitHTTPRequestOperation* _lastWebServiceOperation;
	NSMutableArray* _notifications;
	NSMutableArray* _notificationsPrinted;
	NSMutableArray* _notificationsRecalled;
	NSDate* _utcDateMemory;
	AFSDKWeakTimer* _timerRefreshNotificationsTimeout;
	AFSDKWeakTimer* _timerUpdateNotificationsToDisk;
	AFSDKWeakTimer* _timerDownloadNotificationsNextTime;
	NSNumber* _isAutoRefresh;
	NSString* _sessionID;
	dispatch_queue_sRef _queueDownload;
	dispatch_queue_sRef _queueAnalysis;

}

@property (assign,nonatomic,__weak) id<AFAppBoosterNotificationsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isRefreshing;                                                         //@synthesize isRefreshing=_isRefreshing - In the implementation block
@property (nonatomic,retain) AFAdUnitHTTPRequestOperation * lastWebServiceOperation;                    //@synthesize lastWebServiceOperation=_lastWebServiceOperation - In the implementation block
@property (nonatomic,retain) NSMutableArray * notifications;                                            //@synthesize notifications=_notifications - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationsPrinted;                                     //@synthesize notificationsPrinted=_notificationsPrinted - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationsRecalled;                                    //@synthesize notificationsRecalled=_notificationsRecalled - In the implementation block
@property (nonatomic,retain) NSDate * utcDateMemory;                                                    //@synthesize utcDateMemory=_utcDateMemory - In the implementation block
@property (retain) AFSDKWeakTimer * timerRefreshNotificationsTimeout;                                   //@synthesize timerRefreshNotificationsTimeout=_timerRefreshNotificationsTimeout - In the implementation block
@property (retain) AFSDKWeakTimer * timerUpdateNotificationsToDisk;                                     //@synthesize timerUpdateNotificationsToDisk=_timerUpdateNotificationsToDisk - In the implementation block
@property (retain) AFSDKWeakTimer * timerDownloadNotificationsNextTime;                                 //@synthesize timerDownloadNotificationsNextTime=_timerDownloadNotificationsNextTime - In the implementation block
@property (nonatomic,retain) NSNumber * isAutoRefresh;                                                  //@synthesize isAutoRefresh=_isAutoRefresh - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                                                      //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) dispatch_queue_sRef queueDownload;                                         //@synthesize queueDownload=_queueDownload - In the implementation block
@property (assign,nonatomic) dispatch_queue_sRef queueAnalysis;                                         //@synthesize queueAnalysis=_queueAnalysis - In the implementation block
+(void)forceDownloadNotifications;
+(void)saveReadTimeForNotificationID:(id)arg1 ;
+(void)saveNotificationsThatHaveBeenRead;
+(unsigned long long)numberOfItemsInNotifications;
+(void)updateAndSetPrinted:(id)arg1 ;
+(unsigned long long)numberOfPendingNotifications;
+(unsigned long long)numberOfRecoOrAdsNotifications;
+(id)sharedInstance;
-(AFAdUnitHTTPRequestOperation *)lastWebServiceOperation;
-(void)setLastWebServiceOperation:(AFAdUnitHTTPRequestOperation *)arg1 ;
-(void)removeAllNotificationsDisplayed;
-(void)removeAllNotificationsMarkedAsPrinted;
-(unsigned long long)countAndMarkReadUnreadNotifications;
-(BOOL)isThereAnyUnreadNotification;
-(id)positionOfNotificationForID:(id)arg1 ;
-(id)notificationAtIndex:(long long)arg1 ;
-(void)_saveNotificationsMetadatasToDisk;
-(unsigned long long)_numberOfItemsInNotifications;
-(unsigned long long)_numOfPendingNotifications;
-(unsigned long long)_numberOfRecoOrAdsNotifications;
-(void)_forceDownloadNotifications;
-(void)_downloadNotifications;
-(AFSDKWeakTimer *)timerDownloadNotificationsNextTime;
-(void)setTimerDownloadNotificationsNextTime:(AFSDKWeakTimer *)arg1 ;
-(AFSDKWeakTimer *)timerRefreshNotificationsTimeout;
-(void)setTimerRefreshNotificationsTimeout:(AFSDKWeakTimer *)arg1 ;
-(dispatch_queue_sRef)queueAnalysis;
-(void)_handleNotificationsContentWithObject:(id)arg1 ;
-(void)_downloadNotificationsTimeout;
-(void)_launchTimerForNotificationsAutorefresh;
-(void)_updateTypeLimitDefinitions:(id)arg1 ;
-(id)_mergeCacheAndWebServiceNotificationsWithCache:(id)arg1 andWebService:(id)arg2 ;
-(void)_updateAndSetPrinted:(id)arg1 ;
-(id)getSessionID;
-(AFSDKWeakTimer *)timerUpdateNotificationsToDisk;
-(void)setTimerUpdateNotificationsToDisk:(AFSDKWeakTimer *)arg1 ;
-(id)_fileTypesFromCacheOrHard;
-(id)sessionDate;
-(BOOL)_isAppInstalledWithHandler:(id)arg1 ;
-(void)_makeNotificationsDisappearWithContent:(id)arg1 ;
-(void)_saveNotificationsThatHaveBeenRead;
-(void)_saveReadTimeForNotificationID:(id)arg1 ;
-(id)notificationForID:(id)arg1 ;
-(void)resetSessionID;
-(NSMutableArray *)notificationsPrinted;
-(void)setNotificationsPrinted:(NSMutableArray *)arg1 ;
-(NSMutableArray *)notificationsRecalled;
-(void)setNotificationsRecalled:(NSMutableArray *)arg1 ;
-(NSDate *)utcDateMemory;
-(void)setUtcDateMemory:(NSDate *)arg1 ;
-(NSNumber *)isAutoRefresh;
-(void)setIsAutoRefresh:(NSNumber *)arg1 ;
-(dispatch_queue_sRef)queueDownload;
-(void)setQueueDownload:(dispatch_queue_sRef)arg1 ;
-(void)setQueueAnalysis:(dispatch_queue_sRef)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AFAppBoosterNotificationsManagerDelegate>)arg1 ;
-(id)init;
-(id<AFAppBoosterNotificationsManagerDelegate>)delegate;
-(NSMutableArray *)notifications;
-(void)setNotifications:(NSMutableArray *)arg1 ;
-(BOOL)isRefreshing;
-(void)setIsRefreshing:(BOOL)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
@end

