/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:22 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface ContentParsers : NSObject
+(void)parseFullDataFromJSON:(id)arg1 forSport:(int)arg2 andDate:(id)arg3 ;
+(void)parseRefreshDataFromJSON:(id)arg1 forSport:(int)arg2 andDate:(id)arg3 ;
+(void)parseRankingsDataFromJSON:(id)arg1 forCountry:(id)arg2 andSport:(int)arg3 withRankingsType:(int)arg4 ;
+(void)parseTabArrayForRankingsVC:(id)arg1 fromJSON:(id)arg2 andSport:(int)arg3 ;
+(void)parseFixtureDataFromJSON:(id)arg1 forCountry:(id)arg2 andSport:(int)arg3 ;
+(id)parseFixtureDatesFromJSON:(id)arg1 ;
+(void)parseParametresForApplicationFromJSON:(id)arg1 ;
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
+(void)parseDataForCommentsVC:(id)arg1 fromJSON:(id)arg2 ;
+(void)parseCountriesDataForRankingsFromJSON:(id)arg1 forSport:(int)arg2 ;
+(void)parseDataForMatch:(id)arg1 fromJSON:(id)arg2 forSport:(int)arg3 ;
+(void)parseParametresForFicheMatch:(id)arg1 fromJSON:(id)arg2 ;
+(void)prepareMatch:(id)arg1 withDataFromDictionary:(id)arg2 forSport:(int)arg3 ;
+(void)prepareForecastMatch:(id)arg1 withDataFromDictionary:(id)arg2 forSport:(int)arg3 ;
+(id)parseOddsFromDataArray:(id)arg1 withBookmakersDictionary:(id)arg2 ;
+(void)parseDataForVideosVC:(id)arg1 fromJSON:(id)arg2 ;
@end

