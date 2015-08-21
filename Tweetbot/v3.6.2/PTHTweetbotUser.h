/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotObject.h>
#import <Tweetbot/NSCoding.h>

@class NSString, NSDictionary, NSMutableArray, NSDate, NSAttributedString, PTHTweetbotCursor, PTHTweetbotListsCursor, NSURL;

@interface PTHTweetbotUser : PTHTweetbotObject <NSCoding> {

	NSString* _screenName;
	NSDictionary* _userDescriptionEntityDictionary;
	BOOL _isRefreshing;
	NSMutableArray* _refreshBlocks;
	BOOL _protected;
	BOOL _verified;
	BOOL _geoEnabled;
	NSDate* _createdAt;
	NSDate* _updatedAt;
	NSString* _name;
	NSString* _location;
	NSString* _userDescription;
	NSString* _profileImageURLString;
	NSString* _profileBannerImageURLString;
	NSString* _urlString;
	long long _favoritesCount;
	long long _followersCount;
	long long _followingCount;
	long long _statusesCount;
	long long _listedCount;
	NSDate* _lastStatusCreatedAt;

}

@property (nonatomic,retain) NSDate * createdAt;                                                         //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,retain) NSDate * updatedAt;                                                         //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,copy) NSString * name;                                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * screenName;                                                        //@synthesize screenName=_screenName - In the implementation block
@property (nonatomic,__weak,readonly) NSString * displayName; 
@property (nonatomic,__weak,readonly) NSString * formattedName; 
@property (nonatomic,copy) NSString * location;                                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * userDescription;                                                   //@synthesize userDescription=_userDescription - In the implementation block
@property (nonatomic,__weak,readonly) NSAttributedString * attributedUserDescription; 
@property (nonatomic,__weak,readonly) NSString * decodedUserDescription; 
@property (nonatomic,copy) NSString * profileImageURLString;                                             //@synthesize profileImageURLString=_profileImageURLString - In the implementation block
@property (nonatomic,copy) NSString * profileBannerImageURLString;                                       //@synthesize profileBannerImageURLString=_profileBannerImageURLString - In the implementation block
@property (nonatomic,copy) NSString * urlString;                                                         //@synthesize urlString=_urlString - In the implementation block
@property (assign,nonatomic) long long favoritesCount;                                                   //@synthesize favoritesCount=_favoritesCount - In the implementation block
@property (assign,nonatomic) long long followersCount;                                                   //@synthesize followersCount=_followersCount - In the implementation block
@property (assign,nonatomic) long long followingCount;                                                   //@synthesize followingCount=_followingCount - In the implementation block
@property (assign,nonatomic) long long statusesCount;                                                    //@synthesize statusesCount=_statusesCount - In the implementation block
@property (assign,nonatomic) long long listedCount;                                                      //@synthesize listedCount=_listedCount - In the implementation block
@property (assign,getter=isProtected,nonatomic) BOOL protected;                                          //@synthesize protected=_protected - In the implementation block
@property (assign,getter=isVerified,nonatomic) BOOL verified;                                            //@synthesize verified=_verified - In the implementation block
@property (assign,getter=isGeoEnabled,nonatomic) BOOL geoEnabled;                                        //@synthesize geoEnabled=_geoEnabled - In the implementation block
@property (nonatomic,retain) NSDate * lastStatusCreatedAt;                                               //@synthesize lastStatusCreatedAt=_lastStatusCreatedAt - In the implementation block
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * userTimelineCursor; 
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * mentionsCursor; 
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * favoritesCursor; 
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * followingCursor; 
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * followersCursor; 
@property (nonatomic,__weak,readonly) PTHTweetbotListsCursor * listsCursor; 
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * listMembershipsCursor; 
@property (nonatomic,__weak,readonly) PTHTweetbotCursor * currentUserListMembershipsCursor; 
@property (nonatomic,__weak,readonly) NSURL * favstarURL; 
@property (nonatomic,__weak,readonly) NSURL * twitterURL; 
@property (nonatomic,readonly) BOOL isCurrentUser; 
@property (nonatomic,readonly) BOOL isTapbot; 
+(BOOL)isValidScreenName:(id)arg1 ;
+(id)newWithAccount:(id)arg1 dictionary:(id)arg2 ;
+(id)newWithAccount:(id)arg1 tid:(long long)arg2 ;
+(id)profileImageURLFromString:(id)arg1 forSize:(unsigned long long)arg2 ;
-(PTHTweetbotCursor *)userTimelineCursor;
-(PTHTweetbotCursor *)mentionsCursor;
-(PTHTweetbotCursor *)favoritesCursor;
-(NSString *)formattedName;
-(NSAttributedString *)attributedUserDescription;
-(NSString *)profileBannerImageURLString;
-(id)profileBannerURLForWidth:(unsigned long long)arg1 ;
-(long long)statusesCount;
-(long long)followingCount;
-(long long)listedCount;
-(BOOL)isTapbot;
-(BOOL)isVerified;
-(NSDate *)lastStatusCreatedAt;
-(id)profileImageURLForSize:(unsigned long long)arg1 ;
-(NSURL *)favstarURL;
-(NSDate *)updatedAt;
-(PTHTweetbotListsCursor *)listsCursor;
-(PTHTweetbotCursor *)followersCursor;
-(PTHTweetbotCursor *)followingCursor;
-(BOOL)hasString:(id)arg1 ;
-(NSString *)userDescription;
-(PTHTweetbotCursor *)listMembershipsCursor;
-(PTHTweetbotCursor *)currentUserListMembershipsCursor;
-(void)updateFromDictionary:(id)arg1 ;
-(void)setUpdatedAt:(NSDate *)arg1 ;
-(void)addUserQueryKey:(id)arg1 ;
-(NSString *)profileImageURLString;
-(void)setProfileImageURLString:(NSString *)arg1 ;
-(void)setUserDescription:(NSString *)arg1 ;
-(void)setProfileBannerImageURLString:(NSString *)arg1 ;
-(void)setFollowingCount:(long long)arg1 ;
-(void)setStatusesCount:(long long)arg1 ;
-(void)setListedCount:(long long)arg1 ;
-(void)setGeoEnabled:(BOOL)arg1 ;
-(void)setLastStatusCreatedAt:(NSDate *)arg1 ;
-(NSString *)decodedUserDescription;
-(BOOL)isGeoEnabled;
-(BOOL)isCurrentUser;
-(void)refresh:(/*^block*/id)arg1 ;
-(NSURL *)twitterURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(NSString *)location;
-(NSString *)displayName;
-(void)setUrlString:(NSString *)arg1 ;
-(NSString *)urlString;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(void)setVerified:(BOOL)arg1 ;
-(void)setProtected:(BOOL)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(NSDate *)createdAt;
-(long long)followersCount;
-(void)setFollowersCount:(long long)arg1 ;
-(NSString *)screenName;
-(void)setScreenName:(NSString *)arg1 ;
-(long long)favoritesCount;
-(void)setFavoritesCount:(long long)arg1 ;
-(BOOL)isProtected;
@end

