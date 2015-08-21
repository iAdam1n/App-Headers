/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:22 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface SportConstantsHolder : NSObject {

	int currentSport;
	NSString* defaultImageName;
	NSString* favoritesTournamentsKey;
	NSString* favoritesMatchsKey;
	NSString* favoritesTeamsKey;

}

@property (assign,nonatomic) int currentSport; 
@property (nonatomic,retain) NSString * defaultImageName; 
@property (nonatomic,retain) NSString * favoritesTournamentsKey; 
@property (nonatomic,retain) NSString * favoritesMatchsKey; 
@property (nonatomic,retain) NSString * favoritesTeamsKey; 
+(id)sharedSportConstantsHolder;
-(int)currentSport;
-(NSString *)defaultImageName;
-(NSString *)favoritesTeamsKey;
-(NSString *)favoritesMatchsKey;
-(NSString *)favoritesTournamentsKey;
-(void)setCurrentSport:(int)arg1 ;
-(void)setDefaultImageName:(NSString *)arg1 ;
-(void)setFavoritesTournamentsKey:(NSString *)arg1 ;
-(void)setFavoritesMatchsKey:(NSString *)arg1 ;
-(void)setFavoritesTeamsKey:(NSString *)arg1 ;
@end

