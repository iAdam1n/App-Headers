/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBFriendCenterAnalyticsLogger : NSObject
+(void)logFriendCenterOpenedWithInitialTab:(id)arg1 sourceRef:(id)arg2 ;
+(void)logFriendCenterTabSelectedWithTab:(id)arg1 ;
+(void)logNumberOfFriendsSeenInFriendsTab:(long long)arg1 ;
+(void)logNumberOfOutgoingRequestSeenInOutgoingTab:(long long)arg1 ;
+(void)logNumberOfSuggestionsSeenInSuggestionTab:(long long)arg1 ;
+(void)logNumberOfRequestSeenAndPYMKInRequestTabWithRequestCount:(long long)arg1 pymkCount:(long long)arg2 ;
+(void)logNumberOfSearches:(unsigned long long)arg1 ;
+(void)logNumberOfSuggestionsSeenPerSearch:(unsigned long long)arg1 ;
@end
