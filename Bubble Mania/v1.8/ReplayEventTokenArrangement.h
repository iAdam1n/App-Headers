/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@interface ReplayEventTokenArrangement : ModelObject {

	BOOL _isPayer;
	int _minLevel;
	int _maxLevel;
	int _evenlyAllocatedTokens;
	int _randomlyAllocatedTokens;
	int _minPiecesPerToken;
	int _maxPiecesPerToken;
	int _piecesAvailable;

}

@property (assign,nonatomic) int minLevel;                             //@synthesize minLevel=_minLevel - In the implementation block
@property (assign,nonatomic) int maxLevel;                             //@synthesize maxLevel=_maxLevel - In the implementation block
@property (assign,nonatomic) int evenlyAllocatedTokens;                //@synthesize evenlyAllocatedTokens=_evenlyAllocatedTokens - In the implementation block
@property (assign,nonatomic) int randomlyAllocatedTokens;              //@synthesize randomlyAllocatedTokens=_randomlyAllocatedTokens - In the implementation block
@property (assign,nonatomic) int minPiecesPerToken;                    //@synthesize minPiecesPerToken=_minPiecesPerToken - In the implementation block
@property (assign,nonatomic) int maxPiecesPerToken;                    //@synthesize maxPiecesPerToken=_maxPiecesPerToken - In the implementation block
@property (assign,nonatomic) int piecesAvailable;                      //@synthesize piecesAvailable=_piecesAvailable - In the implementation block
@property (assign,nonatomic) BOOL isPayer;                             //@synthesize isPayer=_isPayer - In the implementation block
+(id)mutableDictionaryTypes;
+(id)loadReplayEventTokenArrangementByLevelId:(int)arg1 ;
+(void)load;
-(BOOL)isPayer;
-(int)minLevel;
-(int)maxLevel;
-(void)setMinLevel:(int)arg1 ;
-(void)setMaxLevel:(int)arg1 ;
-(int)evenlyAllocatedTokens;
-(void)setEvenlyAllocatedTokens:(int)arg1 ;
-(int)randomlyAllocatedTokens;
-(void)setRandomlyAllocatedTokens:(int)arg1 ;
-(int)minPiecesPerToken;
-(void)setMinPiecesPerToken:(int)arg1 ;
-(int)maxPiecesPerToken;
-(void)setMaxPiecesPerToken:(int)arg1 ;
-(int)piecesAvailable;
-(void)setPiecesAvailable:(int)arg1 ;
-(void)setIsPayer:(BOOL)arg1 ;
@end

