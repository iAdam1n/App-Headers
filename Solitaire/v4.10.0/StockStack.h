/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/CardStack.h>

@class WasteStack, UILabel;

@interface StockStack : CardStack {

	WasteStack* ws;
	id main;
	unsigned char noDraw;
	UILabel* redX;
	float fRedXSize;
	unsigned char touched;

}

@property (nonatomic,retain) WasteStack * ws; 
@property (assign) unsigned char touched; 
@property (readonly) unsigned char noDraw; 
-(BOOL)addCard:(id)arg1 ;
-(BOOL)removeCard:(id)arg1 ;
-(void)moveToLocation:(CGPoint)arg1 ;
-(void)addCardFromUndo:(id)arg1 ;
-(BOOL)addCardFromSave:(id)arg1 ;
-(BOOL)isOverStack:(CGPoint)arg1 ;
-(BOOL)canAddCards:(id)arg1 ;
-(void)clearCards;
-(void)setRedXFrame;
-(void)animateRedX;
-(BOOL)returnCard:(id)arg1 ;
-(id)initWithView:(id)arg1 location:(CGRect)arg2 redXSize:(float)arg3 ;
-(void)setMain:(id)arg1 ;
-(void)checkDrawState:(unsigned char)arg1 ;
-(id)flipCards:(unsigned char)arg1 anim:(unsigned char)arg2 performFlipAnimation:(unsigned char)arg3 ;
-(BOOL)canDraw;
-(WasteStack *)ws;
-(void)setWs:(WasteStack *)arg1 ;
-(unsigned char)touched;
-(void)setTouched:(unsigned char)arg1 ;
-(unsigned char)noDraw;
-(void)setLocation:(CGRect)arg1 ;
-(BOOL)isConsistent;
@end
