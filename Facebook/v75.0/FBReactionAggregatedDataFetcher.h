/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionDataFetcherListener.h>
#import <Facebook/FBReactionDataFetcherProtocol.h>

@class FBMemPlaceTipWelcomeHeader, NSDictionary, FBReactionDataFetcherListenerAnnouncer, NSMutableArray, FBReactionSessionInfo, FBUserSession, NSString;

@interface FBReactionAggregatedDataFetcher : NSObject <FBReactionDataFetcherListener, FBReactionDataFetcherProtocol> {

	FBReactionDataFetcherListenerAnnouncer* _announcer;
	int _currentDataFetcherIndex;
	BOOL _hasFinishedInitialLoad;
	BOOL _pauseReloading;
	BOOL _clcObserverAttached;
	NSMutableArray* _dataFetchers;
	unsigned long long _initialLoadNetworkTime;
	FBMemPlaceTipWelcomeHeader* _welcomeHeader;
	FBReactionSessionInfo* _reactionSessionInfo;
	FBUserSession* _session;

}

@property (nonatomic,copy) NSMutableArray * dataFetchers;                              //@synthesize dataFetchers=_dataFetchers - In the implementation block
@property (assign,nonatomic) unsigned long long initialLoadNetworkTime;                //@synthesize initialLoadNetworkTime=_initialLoadNetworkTime - In the implementation block
@property (assign,nonatomic) BOOL pauseReloading;                                      //@synthesize pauseReloading=_pauseReloading - In the implementation block
@property (nonatomic,retain) FBMemPlaceTipWelcomeHeader * welcomeHeader;               //@synthesize welcomeHeader=_welcomeHeader - In the implementation block
@property (nonatomic,retain) FBReactionSessionInfo * reactionSessionInfo;              //@synthesize reactionSessionInfo=_reactionSessionInfo - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                  //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL clcObserverAttached;                                 //@synthesize clcObserverAttached=_clcObserverAttached - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * loadResultUserData; 
-(void)replaceUnit:(id)arg1 withUnit:(id)arg2 ;
-(void)reloadUnit:(id)arg1 withLocation:(id)arg2 ;
-(void)reloadUnit:(id)arg1 withLocation:(id)arg2 userInfo:(id)arg3 ;
-(void)unitHidden:(id)arg1 ;
-(FBReactionSessionInfo *)reactionSessionInfo;
-(id)loadedUnits;
-(BOOL)canLoadMore;
-(void)startLoadingWithUserInfo:(id)arg1 ;
-(void)stopDownloadingAndClearLoadedData;
-(void)dataFetcherWillStartLoading:(id)arg1 userInfo:(id)arg2 ;
-(void)loadFailedForDataFetcher:(id)arg1 sessionId:(id)arg2 cancelled:(BOOL)arg3 error:(id)arg4 userInfo:(id)arg5 ;
-(void)dataFetcher:(id)arg1 didMoveUnit:(id)arg2 toPosition:(unsigned long long)arg3 ;
-(void)dataFetcher:(id)arg1 didAddUnit:(id)arg2 toPosition:(unsigned long long)arg3 ;
-(void)dataFetcher:(id)arg1 didReplaceUnit:(id)arg2 withUnit:(id)arg3 ;
-(void)dataFetcher:(id)arg1 didFailToReloadUnit:(id)arg2 withError:(id)arg3 ;
-(void)dataFetcher:(id)arg1 willAttemptToReloadUnit:(id)arg2 ;
-(void)dataFetcher:(id)arg1 didUpdateExpirationCondition:(id)arg2 ;
-(void)dataFetcher:(id)arg1 didReplaceUnits:(id)arg2 fromLoadedUnits:(id)arg3 withNewUnits:(id)arg4 loadedFromCache:(BOOL)arg5 sessionId:(id)arg6 networkTime:(unsigned long long)arg7 hasNextPage:(BOOL)arg8 userInfo:(id)arg9 ;
-(BOOL)loadingMore;
-(void)loadMoreWithUserInfo:(id)arg1 ;
-(id)initWithReactionDataFetchers:(id)arg1 session:(id)arg2 ;
-(FBMemPlaceTipWelcomeHeader *)welcomeHeader;
-(void)addReactionDataFetcher:(id)arg1 ;
-(void)setWelcomeHeader:(FBMemPlaceTipWelcomeHeader *)arg1 ;
-(void)setReactionSessionInfo:(FBReactionSessionInfo *)arg1 ;
-(void)_setupListeners;
-(void)_cleanupListeners;
-(id)_dataFetcherForUnit:(id)arg1 ;
-(void)reloadUnit:(id)arg1 ;
-(void)setPauseReloading:(BOOL)arg1 ;
-(BOOL)clcObserverAttached;
-(void)setClcObserverAttached:(BOOL)arg1 ;
-(void)_pageLikeFragmentUpdated:(id)arg1 ;
-(unsigned long long)initialLoadNetworkTime;
-(BOOL)pauseReloading;
-(NSMutableArray *)dataFetchers;
-(void)setDataFetchers:(NSMutableArray *)arg1 ;
-(void)setInitialLoadNetworkTime:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBUserSession *)session;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(BOOL)hasStartedLoading;
-(BOOL)hasFinishedInitialLoad;
@end
