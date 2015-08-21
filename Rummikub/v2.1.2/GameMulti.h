/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Rummikub/Rummikub-Structs.h>
#import <Rummikub/GameManager.h>
#import <Rummikub/GCTurnBasedMatchHelperDelegate.h>

@class GKTurnBasedMatch, MultiData, NSMutableArray;

@interface GameMulti : GameManager <GCTurnBasedMatchHelperDelegate> {

	int tickTicker;
	GKTurnBasedMatch* _match;
	MultiData* _data;
	char playerPunished;
	NSMutableArray* oldValid;
	NSMutableArray* aiAnimatingTiles;

}
+(id)sharedInstance;
-(void)tick;
-(int)randomFreeTile;
-(void)grabSingleTile:(int)arg1 ;
-(void)endTurn;
-(id)findTileWithId:(int)arg1 ;
-(id)isPointOccupied:(CGPoint)arg1 ;
-(void)assignNewAnimatingTile;
-(void)rearrangeTable;
-(float)tableFragmented;
-(void)logParticipants;
-(void)updateTopBar;
-(void)layoutMatch:(id)arg1 ;
-(int)participantToPlayerId:(id)arg1 ;
-(void)refreshGameState;
-(int)playerIdToPosition:(int)arg1 ;
-(void)sendTurn;
-(void)refreshTable;
-(void)setGameOver;
-(void)enterNewGame:(id)arg1 ;
-(void)takeTurn:(id)arg1 ;
-(void)recieveEndGame:(id)arg1 ;
-(void)sendNotice:(id)arg1 forMatch:(id)arg2 ;
-(id)initWithNewMatch:(id)arg1 ;
-(id)initWithExisitingMatch:(id)arg1 ;
-(void)restart;
-(void)render;
-(void)dealloc;
-(void)submit;
@end
