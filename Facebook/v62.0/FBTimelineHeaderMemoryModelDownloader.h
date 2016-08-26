/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBTimelineHeaderDownloader.h>

@protocol FBServiceTransactionMutating, FBTimelineHeaderDownloaderDelegate;
@class NSString, FBUserSession, FBMemPerson, FBScenePath, FBTimelineAnalytics;

@interface FBTimelineHeaderMemoryModelDownloader : NSObject <FBTimelineHeaderDownloader> {

	FBMemPerson* _person;
	FBMemPerson* _networkPerson;
	BOOL _receivedNetworkResponse;
	id<FBServiceTransactionMutating> _token;
	FBScenePath* _scenePath;
	unsigned long long _source;
	FBTimelineAnalytics* _timelineAnalytics;
	NSString* _targetFBID;
	FBUserSession* _session;
	NSString* _actorFBID;
	id<FBTimelineHeaderDownloaderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * targetFBID;                                        //@synthesize targetFBID=_targetFBID - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * actorFBID;                                         //@synthesize actorFBID=_actorFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsUUID; 
@property (assign,nonatomic,__weak) id<FBTimelineHeaderDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)targetFBID;
-(id)analyticsExtras;
-(NSString *)analyticsUUID;
-(void)_sendQueries:(id)arg1 withLogName:(id)arg2 cleanupBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 hasResponse:(BOOL)arg5 ;
-(id)_analyticsExtrasWithCacheDownloadDate:(id)arg1 startLookupDate:(id)arg2 ;
-(id)_mergeResponsePersonAndUpdateResponse:(id)arg1 preferResponse:(BOOL)arg2 ;
-(id)_processParsedTimelineDataResponse:(id)arg1 fullySynced:(BOOL)arg2 batchNumber:(unsigned long long)arg3 ;
-(void)_completeWithParsedResponse:(id)arg1 queries:(id)arg2 fullySynced:(BOOL)arg3 ;
-(void)_processTimelineHeaderResponse:(id)arg1 finalStatus:(id)arg2 queries:(id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(void)prepareAndDispatchDataDownloadRequestWithReason:(unsigned long long)arg1 ;
-(NSString *)actorFBID;
-(id)initWithTargetFBID:(id)arg1 session:(id)arg2 actorFBID:(id)arg3 timelineAnalytics:(id)arg4 scenePath:(id)arg5 initialPersonObject:(id)arg6 source:(unsigned long long)arg7 ;
-(void)setDelegate:(id<FBTimelineHeaderDownloaderDelegate>)arg1 ;
-(id<FBTimelineHeaderDownloaderDelegate>)delegate;
-(void)_cleanup;
-(FBUserSession *)session;
-(BOOL)isSyncing;
-(void)cancelDownloadRequest;
@end
