/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@class NSDictionary, NSArray;

@interface BubbleLeaderboard : ModelObject {

	NSDictionary* fbuidNameMapping;
	NSDictionary* imageURLMapping;
	NSDictionary* leaderData;
	double creationTime;
	NSArray* friendsStarsCount;

}

@property (nonatomic,retain) NSArray * friendsStarsCount; 
@property (nonatomic,retain) NSDictionary * leaderData; 
@property (nonatomic,retain) NSDictionary * fbuidNameMapping; 
@property (nonatomic,retain) NSDictionary * imageURLMapping; 
@property (assign,nonatomic) double creationTime; 
+(id)mutableDictionaryTypes;
+(void)load;
-(id)leaderboardDataForIsland:(int)arg1 ;
-(id)nameForFbuid:(id)arg1 ;
-(id)imageURLforFbuid:(id)arg1 ;
-(NSDictionary *)imageURLMapping;
-(NSDictionary *)fbuidNameMapping;
-(void)setFbuidNameMapping:(NSDictionary *)arg1 ;
-(void)setImageURLMapping:(NSDictionary *)arg1 ;
-(NSDictionary *)leaderData;
-(void)setLeaderData:(NSDictionary *)arg1 ;
-(NSArray *)friendsStarsCount;
-(void)setFriendsStarsCount:(NSArray *)arg1 ;
-(void)dealloc;
-(double)creationTime;
-(void)setCreationTime:(double)arg1 ;
@end

