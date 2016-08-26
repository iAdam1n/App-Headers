/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ChangeEvent.h>

@class NSArray, NSString;

@interface ReplayEventProgressChangeEvent : ChangeEvent {

	int _eventId;
	int _startTime;
	int _progressGained;
	int _enterLevelTime;
	long long _level;
	NSArray* _rewardThreshold;
	NSString* _leaderboardTier;
	long long _userLevelStartOfWeek;

}

@property (assign,nonatomic) long long level;                             //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) int eventId;                                 //@synthesize eventId=_eventId - In the implementation block
@property (assign,nonatomic) int startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) int progressGained;                          //@synthesize progressGained=_progressGained - In the implementation block
@property (nonatomic,retain) NSArray * rewardThreshold;                   //@synthesize rewardThreshold=_rewardThreshold - In the implementation block
@property (assign,nonatomic) int enterLevelTime;                          //@synthesize enterLevelTime=_enterLevelTime - In the implementation block
@property (nonatomic,retain) NSString * leaderboardTier;                  //@synthesize leaderboardTier=_leaderboardTier - In the implementation block
@property (assign,nonatomic) long long userLevelStartOfWeek;              //@synthesize userLevelStartOfWeek=_userLevelStartOfWeek - In the implementation block
+(id)mutableDictionaryTypes;
+(void)load;
-(void)setEnterLevelTime:(int)arg1 ;
-(void)setProgressGained:(int)arg1 ;
-(void)setLeaderboardTier:(NSString *)arg1 ;
-(void)setUserLevelStartOfWeek:(long long)arg1 ;
-(int)progressGained;
-(void)setRewardThreshold:(NSArray *)arg1 ;
-(id)csv;
-(NSArray *)rewardThreshold;
-(int)enterLevelTime;
-(NSString *)leaderboardTier;
-(long long)userLevelStartOfWeek;
-(void)dealloc;
-(void)setStartTime:(int)arg1 ;
-(void)setLevel:(long long)arg1 ;
-(long long)level;
-(int)startTime;
-(int)eventId;
-(void)setEventId:(int)arg1 ;
@end
