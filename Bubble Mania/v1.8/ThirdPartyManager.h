/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface ThirdPartyManager : NSObject

@property (nonatomic,readonly) BOOL isLoggedIn; 
@property (nonatomic,readonly) NSString * thirdPartyId; 
@property (nonatomic,readonly) NSDictionary * profile; 
@property (nonatomic,readonly) NSDictionary * friends; 
@property (nonatomic,readonly) NSDictionary * gameFriends; 
@property (nonatomic,readonly) NSDictionary * nonGameFriends; 
+(id)profileDictionaryWithDisplayName:(id)arg1 thirdPartyId:(id)arg2 pictureUrl:(id)arg3 ;
+(id)instance;
-(BOOL)isLoggedIn;
-(void)fetchNonGameFriendsWithDelegatePair:(id)arg1 ;
-(void)fetchGameFriendsWithDelegatePair:(id)arg1 ;
-(void)fetchFriendsWithDelegatePair:(id)arg1 ;
-(NSDictionary *)gameFriends;
-(BOOL)canRequestGiftFromUser:(id)arg1 ;
-(BOOL)canSendGiftToUser:(id)arg1 ;
-(long long)compareByName:(id)arg1 :(id)arg2 ;
-(NSDictionary *)nonGameFriends;
-(id)getNonGameFriendKeys;
-(BOOL)canSendInviteToUser:(id)arg1 ;
-(NSString *)thirdPartyId;
-(void)fetchFriends;
-(id)friendsWithDelegatePair:(id)arg1 ;
-(unsigned long long)getFriendsInviteLimit;
-(unsigned long long)getGameFriendsLimit;
-(unsigned long long)getNonGameFriendsLimit;
-(void)fetchGameFriends;
-(id)gameFriendsWithDelegatePair:(id)arg1 ;
-(id)gameFriendsByGiftRequests:(BOOL)arg1 ;
-(void)fetchNonGameFriends;
-(id)nonGameFriendsWithDelegatePair:(id)arg1 ;
-(id)gameFriendsSortedByGiftSends;
-(id)nonGameFriendsSortedByName:(BOOL)arg1 includeInvites:(BOOL)arg2 ;
-(id)profileWithDelegatePair:(id)arg1 ;
-(id)friendProfile:(id)arg1 ;
-(id)friendProfile:(id)arg1 delegatePair:(id)arg2 ;
-(id)gameFriendProfile:(id)arg1 ;
-(id)gameFriendProfile:(id)arg1 delegatePair:(id)arg2 ;
-(id)nonGameFriendProfile:(id)arg1 ;
-(id)nonGameFriendProfile:(id)arg1 delegatePair:(id)arg2 ;
-(int)remainingGiftSendTimeForUser:(id)arg1 ;
-(void)sendGiftToUsers:(id)arg1 ;
-(void)sendGiftToUsers:(id)arg1 withParams:(id)arg2 ;
-(void)sendGiftToUsers:(id)arg1 withParams:(id)arg2 withTimestamp:(int)arg3 ;
-(void)sendGiftToUsers:(id)arg1 withParams:(id)arg2 withTimestamp:(int)arg3 delegatePair:(id)arg4 ;
-(int)remainingGiftRequestTimeForUser:(id)arg1 ;
-(void)sendGiftRequestToUsers:(id)arg1 ;
-(void)sendGiftRequestToUsers:(id)arg1 withParams:(id)arg2 ;
-(void)sendItemRequest:(int)arg1 toUsers:(id)arg2 withParams:(id)arg3 ;
-(id)getThirdPartyGiftsAndRequests;
-(int)remainingInviteSendTimeForUser:(id)arg1 ;
-(void)sendInviteToUsers:(id)arg1 ;
-(void)sendInviteToUsers:(id)arg1 withParams:(id)arg2 ;
-(void)sendTauntToUsers:(id)arg1 level:(int)arg2 ;
-(void)setCachedGiftSendTime:(int)arg1 toUsers:(id)arg2 ;
-(id)imageUrlFromThirdPartyId:(id)arg1 ;
-(BOOL)isThirdPartyIdMyThirdPartyId:(id)arg1 ;
-(void)unregisterForNotifications:(id)arg1 ;
-(void)cacheString:(id)arg1 withKey:(id)arg2 ;
-(void)cacheBool:(BOOL)arg1 withKey:(id)arg2 ;
-(void)cacheInt:(int)arg1 withKey:(id)arg2 ;
-(void)cacheDictionary:(id)arg1 withKey:(id)arg2 ;
-(id)getCachedStringForKey:(id)arg1 ;
-(BOOL)getCachedBoolForKey:(id)arg1 ;
-(int)getCachedIntForKey:(id)arg1 ;
-(id)getCachedDictionaryForKey:(id)arg1 ;
-(BOOL)didCallbackSucceed:(id)arg1 ;
-(BOOL)didCallbackFail:(id)arg1 ;
-(void)clearCache;
-(NSDictionary *)profile;
-(NSDictionary *)friends;
-(void)registerForNotifications:(id)arg1 ;
@end
