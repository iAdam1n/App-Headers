/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/AbstractTournament.h>

@class NSString, NSMutableArray;

@interface TournamentWithMatches : AbstractTournament {

	long long idChampionnat;
	long long ordre;
	NSString* nomGroupe;
	NSString* nomGroupeFormate;
	NSMutableArray* matchsArray;
	NSString* _forme;

}

@property (assign,nonatomic) long long idChampionnat; 
@property (assign,nonatomic) long long ordre; 
@property (nonatomic,retain) NSString * nomGroupe; 
@property (nonatomic,retain) NSString * nomGroupeFormate; 
@property (nonatomic,retain) NSString * forme;                          //@synthesize forme=_forme - In the implementation block
@property (nonatomic,retain) NSMutableArray * matchsArray; 
+(id)championnatWithId:(long long)arg1 andIDCote:(long long)arg2 andOrdre:(long long)arg3 andPays:(id)arg4 andLabel:(id)arg5 andNomGroupe:(id)arg6 andNomGroupeFormate:(id)arg7 ;
-(NSMutableArray *)matchsArray;
-(NSString *)nomGroupe;
-(long long)idChampionnat;
-(void)setIdChampionnat:(long long)arg1 ;
-(void)setOrdre:(long long)arg1 ;
-(void)setNomGroupe:(NSString *)arg1 ;
-(void)setNomGroupeFormate:(NSString *)arg1 ;
-(void)setMatchsArray:(NSMutableArray *)arg1 ;
-(long long)ordre;
-(NSString *)nomGroupeFormate;
-(NSString *)forme;
-(void)setForme:(NSString *)arg1 ;
-(void)addMatch:(id)arg1 ;
-(void)removeMatch:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
