/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSOperationQueue;

@interface OfflineCacheManager : NSObject {

	BOOL _userCacheEnabled;
	BOOL _userReadyForCaching;
	BOOL _systemDataCorrupted;
	int _trackedErrorCount;
	NSString* _cachePathForUserData;
	NSString* _cachePathForSystemData;
	NSOperationQueue* _systemDataQueue;
	NSOperationQueue* _userDataQueue;
	NSString* _systemDataVersion;
	NSString* _systemDataPatchId;
	NSString* _lastError;

}

@property (assign,nonatomic) BOOL userCacheEnabled;                            //@synthesize userCacheEnabled=_userCacheEnabled - In the implementation block
@property (assign,nonatomic) BOOL userReadyForCaching;                         //@synthesize userReadyForCaching=_userReadyForCaching - In the implementation block
@property (nonatomic,readonly) NSString * cachePathForUserData;                //@synthesize cachePathForUserData=_cachePathForUserData - In the implementation block
@property (nonatomic,readonly) NSString * cachePathForSystemData;              //@synthesize cachePathForSystemData=_cachePathForSystemData - In the implementation block
@property (nonatomic,retain) NSOperationQueue * systemDataQueue;               //@synthesize systemDataQueue=_systemDataQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * userDataQueue;                 //@synthesize userDataQueue=_userDataQueue - In the implementation block
@property (nonatomic,readonly) NSString * offlineCacheVersion; 
@property (nonatomic,retain) NSString * systemDataVersion;                     //@synthesize systemDataVersion=_systemDataVersion - In the implementation block
@property (nonatomic,retain) NSString * systemDataPatchId;                     //@synthesize systemDataPatchId=_systemDataPatchId - In the implementation block
@property (assign,nonatomic) BOOL systemDataCorrupted;                         //@synthesize systemDataCorrupted=_systemDataCorrupted - In the implementation block
@property (nonatomic,retain) NSString * lastError;                             //@synthesize lastError=_lastError - In the implementation block
@property (assign,nonatomic) int trackedErrorCount;                            //@synthesize trackedErrorCount=_trackedErrorCount - In the implementation block
+(id)readDigestOfDataFilePath:(id)arg1 needVerification:(BOOL)arg2 ;
+(BOOL)writeDigestWithData:(id)arg1 verification:(BOOL)arg2 at:(id)arg3 ;
+(id)digestPathFromPath:(id)arg1 ;
+(id)instance;
-(NSString *)systemDataVersion;
-(NSString *)systemDataPatchId;
-(void)cacheUserData;
-(void)onGameDataReceivedNotification:(id)arg1 ;
-(void)setSystemDataVersion:(NSString *)arg1 ;
-(void)setSystemDataPatchId:(NSString *)arg1 ;
-(void)deleteOfflineCache;
-(void)setUserCacheEnabled:(BOOL)arg1 ;
-(BOOL)hasCachedUserData;
-(BOOL)hasCachedSystemData;
-(id)cachedSystemDataVersion;
-(void)setUserReadyForCaching:(BOOL)arg1 ;
-(void)loadSystemDataCache;
-(void)loadUserDataCache;
-(void)deleteUserCache;
-(void)setSystemDataQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)systemDataQueue;
-(void)setUserDataQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)userDataQueue;
-(void)setSystemDataCorrupted:(BOOL)arg1 ;
-(void)setTrackedErrorCount:(int)arg1 ;
-(NSString *)cachePathForUserData;
-(NSString *)cachePathForSystemData;
-(void)deleteSystemDataCache;
-(void)syncSystemDataVersion:(id)arg1 withSystemDataPatchId:(id)arg2 ;
-(NSString *)offlineCacheVersion;
-(id)cachedSystemData;
-(void)trackError;
-(int)trackedErrorCount;
-(void)sendSystemDataCacheLoadedNotification:(id)arg1 ;
-(void)loadSystemDataCacheInBackground;
-(id)cachedUserData;
-(void)sendUserDataCacheLoadedNotification:(id)arg1 ;
-(void)loadUserDataCacheInBackground;
-(void)cacheSystemData:(id)arg1 withSystemDataInfo:(id)arg2 ;
-(void)cacheSystemDataInBackground:(id)arg1 ;
-(BOOL)systemDataCorrupted;
-(void)cacheUserData:(BOOL)arg1 ;
-(void)cacheUserDataInBackground:(id)arg1 ;
-(id)cachedSystemDataPatchId;
-(void)waitUntilCacheFinished;
-(BOOL)userCacheEnabled;
-(BOOL)userReadyForCaching;
-(void)dealloc;
-(id)init;
-(void)synchronize;
-(NSString *)lastError;
-(void)setLastError:(NSString *)arg1 ;
@end

