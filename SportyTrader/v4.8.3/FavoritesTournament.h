/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FavoritesTournament : NSObject <NSCoding> {

	long long idTournament;
	NSString* tournamentLabel;
	NSString* countryLabel;
	BOOL deleteFlag;

}

@property (assign,nonatomic) long long idTournament; 
@property (nonatomic,retain) NSString * tournamentLabel; 
@property (nonatomic,retain) NSString * countryLabel; 
@property (assign,nonatomic) BOOL deleteFlag; 
+(id)favoriteTournamentWithID:(long long)arg1 andTournamentLabel:(id)arg2 andCountryLabel:(id)arg3 ;
-(long long)idTournament;
-(BOOL)deleteFlag;
-(void)setDeleteFlag:(BOOL)arg1 ;
-(NSString *)tournamentLabel;
-(void)setIdTournament:(long long)arg1 ;
-(void)setTournamentLabel:(NSString *)arg1 ;
-(void)setCountryLabel:(NSString *)arg1 ;
-(NSString *)countryLabel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
@end
