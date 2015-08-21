/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:21 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface ManagerFavoris : NSObject
+(BOOL)deleteTeamFromFavoritesWithEquipe:(id)arg1 forSport:(int)arg2 ;
+(void)showTokenError;
+(BOOL)addTeamToFavoritesWithEquipe:(id)arg1 forSport:(int)arg2 ;
+(void)setFavoriteChanged:(BOOL)arg1 forSport:(int)arg2 ;
+(void)resetAllFavoriteChangedFlags;
+(id)keyForFavoriteMatchesWithSport:(int)arg1 ;
+(id)keyForFavoriteTournamentsWithSport:(int)arg1 ;
+(id)keyForFavoriteTeamsWithSport:(int)arg1 ;
+(BOOL)favoriteChangedForSport:(int)arg1 ;
+(BOOL)addMatchToFavorites:(id)arg1 forSport:(int)arg2 ;
+(BOOL)deleteMatchFromFavorites:(id)arg1 forSport:(int)arg2 ;
+(BOOL)addTournamentToFavorites:(id)arg1 withCountry:(id)arg2 forSport:(int)arg3 ;
+(BOOL)deleteTournamentFromFavorites:(id)arg1 forSport:(int)arg2 ;
+(BOOL)addTeamToFavoritesWithEntry:(id)arg1 forSport:(int)arg2 ;
+(BOOL)deleteTeamFromFavoritesWithEntry:(id)arg1 forSport:(int)arg2 ;
+(BOOL)addFavoritesMatchToFavorites:(id)arg1 forSport:(int)arg2 ;
+(BOOL)deleteFavoritesMatchFromFavorites:(id)arg1 forSport:(int)arg2 ;
+(BOOL)addFavoritesTournamentToFavorites:(id)arg1 forSport:(int)arg2 ;
+(BOOL)deleteFavoritesTournamentFromFavorites:(id)arg1 forSport:(int)arg2 ;
+(BOOL)addFavoritesTeamToFavorites:(id)arg1 forSport:(int)arg2 ;
+(BOOL)deleteFavoritesTeamFromFavorites:(id)arg1 forSport:(int)arg2 ;
+(BOOL)deleteMatchsForSport:(int)arg1 ;
+(BOOL)deleteTournamentsForSport:(int)arg1 ;
+(BOOL)deleteTeamsForSport:(int)arg1 ;
+(void)showFavoriteChangeError;
@end
