/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ChangeEvent.h>

@interface PuzzleTournamentCollectPrizeChangeEvent : ChangeEvent {

	int _tournamentInstanceId;
	int _tournamentRank;

}

@property (assign,nonatomic) int tournamentInstanceId;              //@synthesize tournamentInstanceId=_tournamentInstanceId - In the implementation block
@property (assign,nonatomic) int tournamentRank;                    //@synthesize tournamentRank=_tournamentRank - In the implementation block
+(id)mutableDictionaryTypes;
+(void)load;
-(int)tournamentInstanceId;
-(void)setTournamentInstanceId:(int)arg1 ;
-(id)csv;
-(int)tournamentRank;
-(void)setTournamentRank:(int)arg1 ;
@end

