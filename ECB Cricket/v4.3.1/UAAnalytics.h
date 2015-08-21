/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDictionary, UAConfig, UAPreferenceDataStore, NSOperationQueue;

@interface UAAnalytics : NSObject {

	BOOL _isSending;
	BOOL _isEnteringForeground;
	NSString* _conversionSendId;
	NSString* _conversionRichPushId;
	NSString* _sessionId;
	double _oldestEventTime;
	NSDictionary* _notificationUserInfo;
	unsigned long long _maxTotalDBSize;
	unsigned long long _maxBatchSize;
	unsigned long long _maxWait;
	unsigned long long _minBatchInterval;
	unsigned long long _databaseSize;
	UAConfig* _config;
	UAPreferenceDataStore* _dataStore;
	NSOperationQueue* _queue;

}

@property (nonatomic,copy) NSString * conversionSendId;                        //@synthesize conversionSendId=_conversionSendId - In the implementation block
@property (nonatomic,copy) NSString * conversionRichPushId;                    //@synthesize conversionRichPushId=_conversionRichPushId - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                               //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) double oldestEventTime;                           //@synthesize oldestEventTime=_oldestEventTime - In the implementation block
@property (nonatomic,retain) NSDictionary * notificationUserInfo;              //@synthesize notificationUserInfo=_notificationUserInfo - In the implementation block
@property (assign,nonatomic) unsigned long long maxTotalDBSize;                //@synthesize maxTotalDBSize=_maxTotalDBSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxBatchSize;                  //@synthesize maxBatchSize=_maxBatchSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxWait;                       //@synthesize maxWait=_maxWait - In the implementation block
@property (assign,nonatomic) unsigned long long minBatchInterval;              //@synthesize minBatchInterval=_minBatchInterval - In the implementation block
@property (assign,nonatomic) unsigned long long databaseSize;                  //@synthesize databaseSize=_databaseSize - In the implementation block
@property (nonatomic,retain) UAConfig * config;                                //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) UAPreferenceDataStore * dataStore;                //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL isSending;                                             //@synthesize isSending=_isSending - In the implementation block
@property (assign,nonatomic) BOOL isEnteringForeground;                        //@synthesize isEnteringForeground=_isEnteringForeground - In the implementation block
-(void)launchedFromNotification:(id)arg1 ;
-(NSString *)conversionSendId;
-(NSString *)conversionRichPushId;
-(void)setConversionSendId:(NSString *)arg1 ;
-(id)initWithConfig:(id)arg1 dataStore:(id)arg2 ;
-(void)delayNextSend:(double)arg1 ;
-(void)resetEventsDatabaseStatus;
-(void)restoreSavedUploadEventSettings;
-(void)saveUploadEventSettings;
-(void)enterForeground;
-(void)setIsEnteringForeground:(BOOL)arg1 ;
-(void)setNotificationUserInfo:(NSDictionary *)arg1 ;
-(BOOL)isEnteringForeground;
-(void)setMaxTotalDBSize:(unsigned long long)arg1 ;
-(void)setMaxBatchSize:(unsigned long long)arg1 ;
-(void)setMinBatchInterval:(unsigned long long)arg1 ;
-(unsigned long long)maxTotalDBSize;
-(unsigned long long)minBatchInterval;
-(double)oldestEventTime;
-(void)setOldestEventTime:(double)arg1 ;
-(id)lastSendTime;
-(void)pruneEvents;
-(BOOL)hasEventsToSend;
-(BOOL)isEventValid:(id)arg1 ;
-(id)analyticsRequest;
-(void)setLastSendTime:(id)arg1 ;
-(void)updateAnalyticsParametersWithHeaderValues:(id)arg1 ;
-(id)prepareEventsForUpload;
-(id)sendOperationWithEvents:(id)arg1 ;
-(void)batchAndSendEventsWithCompletionBlock:(/*^block*/id)arg1 ;
-(double)timeToWaitBeforeSendingNextBatch;
-(id)batchOperationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setIsSending:(BOOL)arg1 ;
-(void)setConversionRichPushId:(NSString *)arg1 ;
-(void)handleNotification:(id)arg1 inApplicationState:(long long)arg2 ;
-(void)addEvent:(id)arg1 ;
-(void)enterBackground;
-(void)dealloc;
-(void)send;
-(NSOperationQueue *)queue;
-(unsigned long long)maxWait;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)setMaxWait:(unsigned long long)arg1 ;
-(UAConfig *)config;
-(void)setConfig:(UAConfig *)arg1 ;
-(unsigned long long)maxBatchSize;
-(void)didBecomeActive;
-(unsigned long long)databaseSize;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(void)setDatabaseSize:(unsigned long long)arg1 ;
-(BOOL)isSending;
-(void)startSession;
-(NSDictionary *)notificationUserInfo;
-(void)clearSession;
-(void)setDataStore:(UAPreferenceDataStore *)arg1 ;
-(UAPreferenceDataStore *)dataStore;
@end
