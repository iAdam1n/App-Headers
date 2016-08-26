/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SimpleRankingsEntry : NSObject {

	unsigned short _rank;
	unsigned short _points;
	unsigned short _nbOfMatchesPlayed;
	unsigned short _nbOfVictories;
	unsigned short _nbOfDraws;
	unsigned short _nbOfLosses;
	unsigned short _nbOfGoalsScored;
	unsigned short _nbOfGoalsConceded;
	long long _teamID;
	NSString* _teamName;

}

@property (assign,nonatomic) long long teamID;                              //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,retain) NSString * teamName;                           //@synthesize teamName=_teamName - In the implementation block
@property (assign,nonatomic) unsigned short rank;                           //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) unsigned short points;                         //@synthesize points=_points - In the implementation block
@property (assign,nonatomic) unsigned short nbOfMatchesPlayed;              //@synthesize nbOfMatchesPlayed=_nbOfMatchesPlayed - In the implementation block
@property (assign,nonatomic) unsigned short nbOfVictories;                  //@synthesize nbOfVictories=_nbOfVictories - In the implementation block
@property (assign,nonatomic) unsigned short nbOfDraws;                      //@synthesize nbOfDraws=_nbOfDraws - In the implementation block
@property (assign,nonatomic) unsigned short nbOfLosses;                     //@synthesize nbOfLosses=_nbOfLosses - In the implementation block
@property (assign,nonatomic) unsigned short nbOfGoalsScored;                //@synthesize nbOfGoalsScored=_nbOfGoalsScored - In the implementation block
@property (assign,nonatomic) unsigned short nbOfGoalsConceded;              //@synthesize nbOfGoalsConceded=_nbOfGoalsConceded - In the implementation block
-(NSString *)teamName;
-(unsigned short)nbOfVictories;
-(void)setNbOfVictories:(unsigned short)arg1 ;
-(unsigned short)nbOfDraws;
-(void)setNbOfDraws:(unsigned short)arg1 ;
-(unsigned short)nbOfLosses;
-(void)setNbOfLosses:(unsigned short)arg1 ;
-(void)setTeamName:(NSString *)arg1 ;
-(void)setNbOfMatchesPlayed:(unsigned short)arg1 ;
-(void)setNbOfGoalsScored:(unsigned short)arg1 ;
-(void)setNbOfGoalsConceded:(unsigned short)arg1 ;
-(unsigned short)nbOfMatchesPlayed;
-(unsigned short)nbOfGoalsScored;
-(unsigned short)nbOfGoalsConceded;
-(long long)teamID;
-(unsigned short)points;
-(void)setPoints:(unsigned short)arg1 ;
-(void)setRank:(unsigned short)arg1 ;
-(unsigned short)rank;
-(void)setTeamID:(long long)arg1 ;
@end
