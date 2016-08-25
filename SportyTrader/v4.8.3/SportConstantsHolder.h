/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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

