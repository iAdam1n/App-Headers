/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionDataFetcherListener.h>

@protocol FBReactionDataFetcherProtocol;
@class FBComponentTableViewDataSource, FBUserSession, NSMutableDictionary, FBReactionUnitModelLoadingIndicator, FBReactionContext, FBReactionComponentKitCardAdapterDelegate, NSString;

@interface FBReactionComponentsUpdater : NSObject <FBReactionDataFetcherListener> {

	FBComponentTableViewDataSource* _componentDataSource;
	FBUserSession* _session;
	NSMutableDictionary* _graphQLIDToAdapterCacheId;
	FBReactionUnitModelLoadingIndicator* _loadingMoreSpinnerModel;
	BOOL _hasLoadingMoreSpinner;
	unsigned long long _numberOfStoriesInTableView;
	FBReactionContext* _reactionContext;
	FBReactionComponentKitCardAdapterDelegate* _adapterDelegate;
	BOOL _useComponents;
	id<FBReactionDataFetcherProtocol> _dataFetcher;

}

@property (nonatomic,retain) id<FBReactionDataFetcherProtocol> dataFetcher;              //@synthesize dataFetcher=_dataFetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBReactionDataFetcherProtocol>)dataFetcher;
-(void)_dataFetcher:(id)arg1 didRemoveUnits:(id)arg2 fromLoadedUnits:(id)arg3 ;
-(void)_dataFetcher:(id)arg1 didLoadUnits:(id)arg2 sessionId:(id)arg3 networkTime:(unsigned long long)arg4 hasNextPage:(BOOL)arg5 ;
-(void)dataFetcherWillStartLoading:(id)arg1 ;
-(void)loadFailedForDataFetcher:(id)arg1 sessionId:(id)arg2 cancelled:(BOOL)arg3 error:(id)arg4 ;
-(void)dataFetcher:(id)arg1 didMoveUnit:(id)arg2 toPosition:(unsigned long long)arg3 ;
-(void)dataFetcher:(id)arg1 didAddUnit:(id)arg2 toPosition:(unsigned long long)arg3 ;
-(void)dataFetcher:(id)arg1 didReplaceUnit:(id)arg2 withUnit:(id)arg3 ;
-(void)dataFetcher:(id)arg1 didFailToReloadUnit:(id)arg2 withError:(id)arg3 ;
-(void)dataFetcher:(id)arg1 willAttemptToReloadUnit:(id)arg2 ;
-(void)dataFetcher:(id)arg1 didUpdateExpirationCondition:(id)arg2 ;
-(void)dataFetcher:(id)arg1 didReplaceUnits:(id)arg2 fromLoadedUnits:(id)arg3 withNewUnits:(id)arg4 loadedFromCache:(BOOL)arg5 sessionId:(id)arg6 networkTime:(unsigned long long)arg7 hasNextPage:(BOOL)arg8 ;
-(BOOL)_shouldUseComponents;
-(void)_batchEnqueue:(id)arg1 ;
-(id)_indexPathsForNewUnits:(id)arg1 ;
-(void)_enqueueUnitsInRange:(NSRange)arg1 fromSet:(id)arg2 allIndexPaths:(id)arg3 ;
-(void)_enqueueChangesetForLoadedUnits:(id)arg1 atIndexPaths:(id)arg2 wasUpdated:(BOOL)arg3 ;
-(void)_consistentFieldDidUpdate:(id)arg1 observationHandle:(id)arg2 ;
-(id)_indexPathForUnitWithGraphQLID:(id)arg1 ;
-(void)_updateLoadMoreSpinnerWithNewIndexPathsLoaded:(id)arg1 items:(Items*)arg2 ;
-(void)_startObservingUnit:(id)arg1 ;
-(void)setDataFetcher:(id<FBReactionDataFetcherProtocol>)arg1 ;
-(id)initWithSession:(id)arg1 reactionContext:(id)arg2 componentDataSource:(id)arg3 dataFetcher:(id)arg4 componentDelegate:(id)arg5 ;
@end
