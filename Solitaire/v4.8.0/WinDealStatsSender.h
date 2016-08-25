/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WinDealStatsSender : NSObject {

	int _gameID;
	int _draw;
	int _moves;
	int _time;
	int _undos;
	int _hints;
	int _score;
	NSString* _protocol;
	NSString* _domain;

}

@property (nonatomic,retain) NSString * protocol;              //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSString * domain;                //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) int gameID;                       //@synthesize gameID=_gameID - In the implementation block
@property (assign,nonatomic) int draw;                         //@synthesize draw=_draw - In the implementation block
@property (assign,nonatomic) int moves;                        //@synthesize moves=_moves - In the implementation block
@property (assign,nonatomic) int time;                         //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) int undos;                        //@synthesize undos=_undos - In the implementation block
@property (assign,nonatomic) int hints;                        //@synthesize hints=_hints - In the implementation block
@property (assign,nonatomic) int score;                        //@synthesize score=_score - In the implementation block
-(int)gameID;
-(int)moves;
-(int)undos;
-(void)sendWin;
-(void)sendLoss;
-(void)reportWinAsync;
-(void)reportLossAsync;
-(void)setGameID:(int)arg1 ;
-(void)setDraw:(int)arg1 ;
-(void)setMoves:(int)arg1 ;
-(void)setUndos:(int)arg1 ;
-(NSString *)domain;
-(int)draw;
-(void)setTime:(int)arg1 ;
-(int)time;
-(NSString *)protocol;
-(void)setHints:(int)arg1 ;
-(int)hints;
-(void)setScore:(int)arg1 ;
-(void)setProtocol:(NSString *)arg1 ;
-(int)score;
-(void)setDomain:(NSString *)arg1 ;
@end

