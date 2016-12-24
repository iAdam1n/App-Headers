/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/AdParams2Delegate.h>
#import <SolitaireFree/HTTPRequestDelegate.h>

@class Card, NSString, WinningDeal, NSArray, MyView, HTTPRequest, NSDictionary;

@interface Deck : NSObject <AdParams2Delegate, HTTPRequestDelegate> {

	int nextCard;
	Card* cards[52];
	int deckInx;
	int whichShuffle;
	int whichRandom;
	unsigned char playingAWinner;
	int moves;
	int ptime;
	int undos;
	int hints;
	int score;
	int draw;
	NSString* sendSolution;
	NSString* solution;
	int solIdx;
	mStruct m;
	int gameID;
	int MP;
	int WD;
	int DC;
	int DW;
	int SR;
	int DT;
	int gameIDRequested;
	NSString* dataDomain;
	NSString* dataProtocol;
	unsigned char playingSolution;
	unsigned char betterSolution;
	unsigned char accessBlocked;
	WinningDeal* winDeal;
	int maxNumberOfScoresInLeaderboards;
	NSArray* scores;
	NSArray* firstPlayScores;
	NSArray* bestmoves;
	unsigned char winWasFirstTimePlayed;
	int winScoreFromFirstPlay;
	int winScore;
	int winTime;
	int winMoves;
	int winningPercent;
	unsigned char oniPad;
	MyView* myView;
	int style;
	CGRect frame;
	HTTPRequest* currentServerRequest;
	BOOL _fetchingTimeFromServer;
	NSDictionary* _serverTimeResult;

}

@property (assign) int deckInx; 
@property (assign) unsigned char playingAWinner; 
@property (assign) int draw; 
@property (assign) int gameIDRequested; 
@property (assign) int gameID; 
@property (assign) unsigned char playingSolution; 
@property (readonly) int maxNumberOfScoresInLeaderboards; 
@property (readonly) NSArray * scores; 
@property (readonly) NSArray * firstPlayScores; 
@property (readonly) NSArray * bestmoves; 
@property (readonly) unsigned char winWasFirstTimePlayed; 
@property (assign) int winScoreFromFirstPlay; 
@property (readonly) int winScore; 
@property (readonly) int score; 
@property (readonly) int moves; 
@property (readonly) int ptime; 
@property (readonly) int winTime; 
@property (readonly) int winMoves; 
@property (readonly) int MP; 
@property (readonly) int WD; 
@property (assign) BOOL fetchingTimeFromServer;                        //@synthesize fetchingTimeFromServer=_fetchingTimeFromServer - In the implementation block
@property (retain) NSDictionary * serverTimeResult;                    //@synthesize serverTimeResult=_serverTimeResult - In the implementation block
@property (readonly) NSString * dataDomain; 
@property (readonly) NSString * dataProtocol; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringWithSignatureOfQueryParametersAdded:(id)arg1 ;
+(id)getWinningGamesServer;
+(id)getAlias;
+(id)getAnonymousAlias;
+(id)getAliasInternal;
+(id)insertNewScore:(int)arg1 time:(int)arg2 moves:(int)arg3 array:(id)arg4 index:(int)arg5 maxCount:(int)arg6 ;
+(id)md5:(id)arg1 ;
-(void)adParamsReady:(id)arg1 ;
-(id)getCard:(int)arg1 ;
-(void)setDeckHasShadows:(BOOL)arg1 ;
-(int)gameID;
-(int)moves;
-(void)setGameID:(int)arg1 ;
-(void)setDraw:(int)arg1 ;
-(int)winScore;
-(unsigned char)playingAWinner;
-(void)setPlayingAWinner:(unsigned char)arg1 ;
-(void)deckTerminate;
-(unsigned char)haveAWinner:(unsigned char)arg1 ;
-(int)MP;
-(void)setPlayingSolution:(unsigned char)arg1 ;
-(void)shuffleDeck;
-(unsigned char)getStoredWinner:(unsigned char)arg1 ;
-(unsigned char)getAWinner:(unsigned char)arg1 ;
-(id)encodeDeckCompact;
-(unsigned char)decodeDeckCompact:(id)arg1 ;
-(void)setGameIDRequested:(int)arg1 ;
-(unsigned char)playingSolution;
-(unsigned char)winWasFirstTimePlayed;
-(NSArray *)firstPlayScores;
-(NSArray *)bestmoves;
-(int)winMoves;
-(mStruct*)getNextMove;
-(void)resetDeck;
-(void)setDeckInx:(int)arg1 ;
-(unsigned char)sortDeck:(gameStruct)arg1 ;
-(id)findCardFromRank:(int)arg1 suit:(int)arg2 ;
-(int)findIndexFromCard:(id)arg1 ;
-(int)deckInx;
-(BOOL)sortDeckToString:(id)arg1 ;
-(id)dealCard;
-(void)setWinScoreFromFirstPlay:(int)arg1 ;
-(unsigned char)getSolution;
-(NSString *)dataDomain;
-(NSString *)dataProtocol;
-(BOOL)startRequestingServerTime;
-(BOOL)startRequestingDailyDeal:(id)arg1 ;
-(void)cancelCurrentServerRequest;
-(id)buildDeck:(int)arg1 superView:(id)arg2 frame:(CGRect)arg3 oniPad:(unsigned char)arg4 winPercent:(int)arg5 ;
-(void)migrateWinningDealsData:(BOOL)arg1 ;
-(int)reportWinner:(int)arg1 solution:(id)arg2 time:(int)arg3 undos:(int)arg4 hints:(int)arg5 score:(int)arg6 draw3:(unsigned char)arg7 firstPlay:(unsigned char)arg8 ;
-(id)findCardFromImageView:(id)arg1 ;
-(int)decodeInt:(id)arg1 ;
-(void)fixDeckCorruption;
-(unsigned char)shouldReportStats:(int)arg1 time:(int)arg2 moves:(int)arg3 firstPlay:(unsigned char)arg4 ;
-(id)encodeDeck;
-(void)sendWinner:(id)arg1 ;
-(unsigned char)decodeDeck:(id)arg1 ;
-(BOOL)fetchingTimeFromServer;
-(void)sortShuffle;
-(void)requestFinished:(id)arg1 result:(id)arg2 ;
-(id)getGameID;
-(id)gameIDLabel;
-(void)clearWinDeal:(unsigned char)arg1 ;
-(id)findCardFromIndex:(int)arg1 ;
-(void)changeSize:(CGRect)arg1 ;
-(int)gameIDRequested;
-(int)maxNumberOfScoresInLeaderboards;
-(int)winScoreFromFirstPlay;
-(int)winTime;
-(int)WD;
-(void)setFetchingTimeFromServer:(BOOL)arg1 ;
-(NSDictionary *)serverTimeResult;
-(void)setServerTimeResult:(NSDictionary *)arg1 ;
-(int)draw;
-(void)loadState;
-(int)score;
-(NSArray *)scores;
-(int)ptime;
-(void)saveState:(unsigned char)arg1 ;
@end
