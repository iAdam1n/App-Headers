/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
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
