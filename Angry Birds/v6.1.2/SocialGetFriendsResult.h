/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface SocialGetFriendsResult : NSObject {

	NSArray* _friends;
	NSString* _nextPage;

}

@property (nonatomic,retain) NSArray * friends;                //@synthesize friends=_friends - In the implementation block
@property (nonatomic,retain) NSString * nextPage;              //@synthesize nextPage=_nextPage - In the implementation block
-(NSString *)nextPage;
-(void)setNextPage:(NSString *)arg1 ;
-(void)dealloc;
-(void)setFriends:(NSArray *)arg1 ;
-(NSArray *)friends;
@end
