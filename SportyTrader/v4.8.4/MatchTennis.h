/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/Match.h>

@interface MatchTennis : Match {

	int typeTerrain;
	BOOL jeuEnDouble;
	unsigned short tennisService;

}

@property (assign,nonatomic) int typeTerrain; 
@property (assign,nonatomic) BOOL jeuEnDouble; 
@property (assign,nonatomic) unsigned short tennisService; 
-(void)setJeuEnDouble:(BOOL)arg1 ;
-(void)setTennisService:(unsigned short)arg1 ;
-(void)setAvatarWithName:(id)arg1 forJoueur:(unsigned long long)arg2 ;
-(unsigned short)tennisService;
-(int)typeTerrain;
-(BOOL)jeuEnDouble;
-(void)setTypeTerrain:(int)arg1 ;
-(id)init;
@end
