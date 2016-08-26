/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/Match.h>

@interface MatchBaseball : Match {

	BOOL hitsAvailable;
	unsigned long long team1Hits;
	unsigned long long team2Hits;
	BOOL errorsAvailable;
	unsigned long long team1Errors;
	unsigned long long team2Errors;
	unsigned short nbManches;

}

@property (assign,nonatomic) BOOL hitsAvailable; 
@property (assign,nonatomic) unsigned long long team1Hits; 
@property (assign,nonatomic) unsigned long long team2Hits; 
@property (assign,nonatomic) BOOL errorsAvailable; 
@property (assign,nonatomic) unsigned long long team1Errors; 
@property (assign,nonatomic) unsigned long long team2Errors; 
@property (assign,nonatomic) unsigned short nbManches; 
-(BOOL)hitsAvailable;
-(unsigned long long)team1Hits;
-(unsigned long long)team2Hits;
-(BOOL)errorsAvailable;
-(unsigned long long)team1Errors;
-(unsigned long long)team2Errors;
-(unsigned short)nbManches;
-(void)setHitsAvailable:(BOOL)arg1 ;
-(void)setTeam1Hits:(unsigned long long)arg1 ;
-(void)setTeam2Hits:(unsigned long long)arg1 ;
-(void)setErrorsAvailable:(BOOL)arg1 ;
-(void)setTeam1Errors:(unsigned long long)arg1 ;
-(void)setTeam2Errors:(unsigned long long)arg1 ;
-(void)setNbManches:(unsigned short)arg1 ;
-(id)init;
@end
