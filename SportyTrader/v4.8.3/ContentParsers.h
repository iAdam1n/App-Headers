/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ContentParsers : NSObject
+(void)parseFullDataFromJSON:(id)arg1 forSport:(int)arg2 andDate:(id)arg3 ;
+(void)parseRefreshDataFromJSON:(id)arg1 forSport:(int)arg2 andDate:(id)arg3 ;
+(void)parseRankingsDataFromJSON:(id)arg1 forCountry:(id)arg2 andSport:(int)arg3 withRankingsType:(int)arg4 ;
+(void)parseTabArrayForRankingsVC:(id)arg1 fromJSON:(id)arg2 andSport:(int)arg3 ;
+(void)parseFixtureDataFromJSON:(id)arg1 forCountry:(id)arg2 andSport:(int)arg3 ;
+(id)parseFixtureDatesFromJSON:(id)arg1 ;
+(void)parseDataForListLineUpVC:(id)arg1 fromJSON:(id)arg2 ;
+(void)parseDataForFieldLineUpVC:(id)arg1 fromJSON:(id)arg2 ;
+(void)parseDataForTipVC:(id)arg1 fromJSON:(id)arg2 ;
+(void)parseDataForHighlightsVC:(id)arg1 fromJSON:(id)arg2 withSport:(int)arg3 ;
+(void)parseForecastDataFromJSON:(id)arg1 forSport:(int)arg2 andDate:(id)arg3 ;
+(void)parseDataForLineupVC:(id)arg1 fromJSON:(id)arg2 ;
+(void)parseScorersDataFromJSON:(id)arg1 forCountry:(id)arg2 andSport:(int)arg3 andType:(int)arg4 ;
+(id)parseDatesFromJSON:(id)arg1 withCurrentDayMandatory:(BOOL)arg2 ;
+(void)parseTennisRankingsDataFromJSON:(id)arg1 forKey:(id)arg2 ;
+(void)parseDataForOddsVC:(id)arg1 fromJSON:(id)arg2 ;
+(void)parseParametresForApplicationFromJSON:(id)arg1 ;
+(void)parseDataForCommentsVC:(id)arg1 fromJSON:(id)arg2 ;
+(void)parseCountriesDataForRankingsFromJSON:(id)arg1 forSport:(int)arg2 ;
+(void)parseDataForMatch:(id)arg1 fromJSON:(id)arg2 forSport:(int)arg3 ;
+(void)parseParametresForFicheMatch:(id)arg1 fromJSON:(id)arg2 ;
+(void)prepareMatch:(id)arg1 withDataFromDictionary:(id)arg2 forSport:(int)arg3 ;
+(void)prepareForecastMatch:(id)arg1 withDataFromDictionary:(id)arg2 forSport:(int)arg3 ;
+(id)parseOddsFromDataArray:(id)arg1 withBookmakersDictionary:(id)arg2 ;
+(void)parseDataForVideosVC:(id)arg1 fromJSON:(id)arg2 ;
@end
