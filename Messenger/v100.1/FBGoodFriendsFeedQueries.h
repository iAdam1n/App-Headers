/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBGoodFriendsFeedQueries : NSObject
+(void)fetchCachedGoodFriendsListWithSession:(id)arg1 messagePackCoder:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)cacheGoodFriendsList:(id)arg1 withSession:(id)arg2 ;
+(void)fetchGoodFriendsListWithSession:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)_parseGoodFriendsFriendListWithResponse:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)cachedGoodFriendsListWithSession:(id)arg1 ;
+(void)fetchFriendListWithMembersWithSession:(id)arg1 friendListID:(id)arg2 count:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(void)fetchTopFriendsWithSession:(id)arg1 count:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end
