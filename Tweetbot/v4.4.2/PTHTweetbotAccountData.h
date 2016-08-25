/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHSQLiteDatabase2.h>

@protocol OS_dispatch_source;
@class NSObject, NSMutableArray, PTHTweetbotAccountDataBlocksLoader, PTHTweetbotAccountDataFriendsLoader, PTHTweetbotAccountDataFollowersLoader, PTHTweetbotAccountDataMutesLoader, PTHTweetbotAccountDataNoRetweetsLoader, PTHTweetbotAccountDataUserLoader, PTHTweetbotAccountDataHashtagFinder, PTHTweetbotAccountDataInteractionsLoader, PTHTweetbotAccountDataStatisticsMonitor, PTHTweetbotAccountDataActivityMonitor, PTHTweetbotAccount;

@interface PTHTweetbotAccountData : PTHSQLiteDatabase2 {

	NSObject*<OS_dispatch_source> _updateTimer;
	NSMutableArray* _loaders;
	PTHTweetbotAccountDataBlocksLoader* _blocksLoader;
	PTHTweetbotAccountDataFriendsLoader* _friendsLoader;
	PTHTweetbotAccountDataFollowersLoader* _followersLoader;
	PTHTweetbotAccountDataMutesLoader* _mutesLoader;
	PTHTweetbotAccountDataNoRetweetsLoader* _noRetweetsLoader;
	PTHTweetbotAccountDataUserLoader* _userLoader;
	PTHTweetbotAccountDataHashtagFinder* _hashtagFinder;
	PTHTweetbotAccountDataInteractionsLoader* _interactionsLoader;
	PTHTweetbotAccountDataStatisticsMonitor* _statisticsMonitor;
	PTHTweetbotAccountDataActivityMonitor* _recentInteractionsMonitor;
	PTHTweetbotAccount* _account;

}

@property (nonatomic,__weak,readonly) PTHTweetbotAccount * account;                                            //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) PTHTweetbotAccountDataStatisticsMonitor * statisticsMonitor;                    //@synthesize statisticsMonitor=_statisticsMonitor - In the implementation block
@property (nonatomic,readonly) PTHTweetbotAccountDataActivityMonitor * recentInteractionsMonitor;              //@synthesize recentInteractionsMonitor=_recentInteractionsMonitor - In the implementation block
-(void)dispatchFindFriendsThatFollow:(id)arg1 limit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)dispatchFindUsers:(id)arg1 options:(unsigned long long)arg2 limit:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(PTHTweetbotAccountDataActivityMonitor *)recentInteractionsMonitor;
-(PTHTweetbotAccountDataStatisticsMonitor *)statisticsMonitor;
-(void)dispatchFindHashtags:(id)arg1 limit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)isProbablyFriend:(id)arg1 ;
-(void)dispatchFindInteractionsSinceDate:(id)arg1 limit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)dispatchFindQuoteTIDsSinceTID:(long long)arg1 maxTID:(long long)arg2 limit:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(void)dispatchFindInteractionsForStatusTID:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchFindInteractionCountsForStatusTID:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchFindInteractionsForStatusTID:(long long)arg1 type:(unsigned char)arg2 limit:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(void)dispatchFindRecentStatusesWithInteractions:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchFindRecentInteractions:(unsigned char)arg1 limit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)dispatchFindDailyInteractionCounts:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)isProbablyBlocked:(id)arg1 connection:(id)arg2 ;
-(BOOL)isProbablyNoRetweet:(id)arg1 connection:(id)arg2 ;
-(BOOL)isProbablyServerMuted:(id)arg1 connection:(id)arg2 ;
-(void)didAddTIDs:(unsigned long long)arg1 loader:(id)arg2 ;
-(BOOL)isProbablyFollower:(id)arg1 connection:(id)arg2 ;
-(BOOL)isProbablyFriend:(id)arg1 connection:(id)arg2 ;
-(void)verify:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setup:(id)arg1 userVersion:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)reset;
-(id)initWithPath:(id)arg1 ;
-(void)delete;
-(void)_forceUpdate;
-(id)initWithAccount:(id)arg1 ;
-(void)log:(/*^block*/id)arg1 ;
-(PTHTweetbotAccount *)account;
-(void)updateIfNeeded;
@end

