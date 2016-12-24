/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionStoreSimpleListener.h>
#import <Facebook/FBGraphQLConnectionSyncStoreProtocol.h>

@protocol FBGraphQLConnectionSyncStoreRequestProvider;
@class FBGraphQLConnectionStoreSimple, FBGraphQLConnectionSyncStoreListenerAnnouncer, FBGraphQLMemResponseController, FBScenePath, NSString;

@interface FBGraphQLConnectionSyncStore : NSObject <FBGraphQLConnectionStoreSimpleListener, FBGraphQLConnectionSyncStoreProtocol> {

	FBGraphQLConnectionStoreSimple* _edgeStore;
	id<FBGraphQLConnectionSyncStoreRequestProvider> _requestProvider;
	int _networkRequestThresholdInSeconds;
	FBGraphQLConnectionSyncStoreListenerAnnouncer* _announcer;
	FBGraphQLMemResponseController* _memResponseController;
	BOOL _shouldDoFindRequest;
	BOOL _hasReachedEnd;
	BOOL _hasReachedBegin;
	BOOL _alwaysUseFirstCachedResponse;
	FBScenePath* _scenePath;
	id _requestID;

}

@property (nonatomic,retain) id requestID;                                   //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL alwaysUseFirstCachedResponse;              //@synthesize alwaysUseFirstCachedResponse=_alwaysUseFirstCachedResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBScenePath * scenePath;                        //@synthesize scenePath=_scenePath - In the implementation block
+(id)fbidForEdge:(id)arg1 ;
-(FBScenePath *)scenePath;
-(void)setScenePath:(FBScenePath *)arg1 ;
-(void)syncNext:(/*^block*/id)arg1 ;
-(void)forceRefresh:(/*^block*/id)arg1 ;
-(BOOL)canSyncMoreNext;
-(unsigned long long)countOfNodes;
-(unsigned long long)indexOfNode:(id)arg1 ;
-(void)applyFilter:(id)arg1 ;
-(id)initWithEdgeStore:(id)arg1 graphQLMemResponseController:(id)arg2 requestProvider:(id)arg3 networkRequestThresholdInSeconds:(int)arg4 alwaysUseFirstCachedResponse:(BOOL)arg5 ;
-(BOOL)nodeIsSynced:(id)arg1 ;
-(BOOL)canSyncMorePrevious;
-(void)syncPrevious:(/*^block*/id)arg1 ;
-(void)updateNodes:(id)arg1 ;
-(void)simpleConnectionStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2 ;
-(void)simpleConnectionStore:(id)arg1 didUpdateNodesAtIndexes:(id)arg2 ;
-(void)simpleConnectionStore:(id)arg1 didAddNodesAtIndexes:(id)arg2 ;
-(void)simpleConnectionStoreDidUpdatePageInfo:(id)arg1 ;
-(void)_find:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_performRequest:(id)arg1 insertLocation:(id)arg2 forceRefresh:(BOOL)arg3 requestType:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_announceDidReachEndOrStartIfNecessary;
-(void)_updateHasReachedEndOrBeginningWithConnectionPage:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)_deleteRemainingInitialNodesIfNecessary;
-(BOOL)alwaysUseFirstCachedResponse;
-(void)_handleResponse:(id)arg1 error:(id)arg2 requestFinished:(BOOL)arg3 location:(id)arg4 replaceEdgeStore:(BOOL)arg5 requestType:(unsigned long long)arg6 fromCache:(BOOL)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)setAlwaysUseFirstCachedResponse:(BOOL)arg1 ;
-(void)_handleCachedResponse:(id)arg1 willDownloadFreshResponse:(BOOL)arg2 location:(id)arg3 requestType:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)allNodes;
-(void)cancelSync;
-(BOOL)isSyncing;
-(id)requestID;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setRequestID:(id)arg1 ;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
@end
