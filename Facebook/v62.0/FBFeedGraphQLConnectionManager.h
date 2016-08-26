/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBUserSession, NSMapTable, FBFeedGraphQLConnectionManagerListenerAnnouncer, NSMutableArray, NSObject, NSMutableSet, FBMutableScenePathProvider;

@interface FBFeedGraphQLConnectionManager : NSObject {

	FBUserSession* _session;
	double _persistenceDelay;
	NSMapTable* _infoToConnectionMap;
	NSMapTable* _connectionToStoreDebuggingLoggerMap;
	NSMapTable* _connectionToNetworkDebuggingLoggerMap;
	NSMapTable* _connectionToUnexpectedResponseDebuggingLoggerMap;
	FBFeedGraphQLConnectionManagerListenerAnnouncer* _announcer;
	NSMutableArray* _edgeFilters;
	NSObject*<OS_dispatch_queue> _edgeFilterPersistenceQueue;
	NSMutableSet* _subscribers;
	FBMutableScenePathProvider* _scenePathProvider;

}

@property (nonatomic,readonly) FBMutableScenePathProvider * scenePathProvider;              //@synthesize scenePathProvider=_scenePathProvider - In the implementation block
+(void)initializeCustomPersistedEdgeCountLimit:(unsigned long long)arg1 ;
-(id)connectionWithTargetID:(id)arg1 feedType:(long long)arg2 ;
-(id)defaultFeedPersistenceCoordinatorWithStoreInfo:(id)arg1 ;
-(id)retrieveConnectionWithTargetID:(id)arg1 feedType:(long long)arg2 ;
-(FBMutableScenePathProvider *)scenePathProvider;
-(void)registerConnection:(id)arg1 forTargetID:(id)arg2 feedType:(long long)arg3 persistenceCoordinator:(id)arg4 ;
-(void)applyEdgeFilterToAllFeeds:(id)arg1 ;
-(id)feedConnectionInfoToConnectionDictionary;
-(void)applyEdgeFilter:(id)arg1 toFeedsOfType:(id)arg2 ;
-(id)_createConnectionWithInfo:(id)arg1 idleDetector:(id)arg2 ;
-(void)_registerConnection:(id)arg1 forConnectionInfo:(id)arg2 ;
-(void)_setUpConnection:(id)arg1 feedType:(long long)arg2 persistenceCoordinator:(id)arg3 ;
-(void)_evaluatePotentialListeners;
-(id)initWithSession:(id)arg1 persistenceDelay:(double)arg2 ;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
