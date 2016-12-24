/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SolvedDailyResult : NSObject {

	BOOL _beatArchive;
	BOOL _incremetedStreak;
	BOOL _incremetedLongestStreak;
	BOOL _beatArchiveOnTime;

}

@property (assign) BOOL beatArchive;                          //@synthesize beatArchive=_beatArchive - In the implementation block
@property (assign) BOOL incremetedStreak;                     //@synthesize incremetedStreak=_incremetedStreak - In the implementation block
@property (assign) BOOL incremetedLongestStreak;              //@synthesize incremetedLongestStreak=_incremetedLongestStreak - In the implementation block
@property (assign) BOOL beatArchiveOnTime;                    //@synthesize beatArchiveOnTime=_beatArchiveOnTime - In the implementation block
-(BOOL)beatArchive;
-(BOOL)beatArchiveOnTime;
-(BOOL)incremetedStreak;
-(BOOL)incremetedLongestStreak;
-(void)setBeatArchive:(BOOL)arg1 ;
-(void)setBeatArchiveOnTime:(BOOL)arg1 ;
-(void)setIncremetedStreak:(BOOL)arg1 ;
-(void)setIncremetedLongestStreak:(BOOL)arg1 ;
-(id)init;
-(void)reset;
-(id)initWithResult:(id)arg1 ;
@end
