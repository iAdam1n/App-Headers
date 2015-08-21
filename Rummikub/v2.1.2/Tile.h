/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Rummikub/Rummikub-Structs.h>
@class GameManager, TileSet, NSString;

@interface Tile : NSObject {

	float textures[12];
	GameManager* gameManager;
	char hidden;
	TileSet* container;
	CGPoint position;
	float size;
	float rotation;
	NSString* playSound;
	CGPoint positionRender;
	float rotationRender;
	float sizeRender;
	int tileId;
	int jokerValue;
	char hovering;
	char needsAnimation;
	char badnessRising;
	float badnessFactor;

}

@property (assign) CGPoint position; 
@property (assign) float size; 
@property (assign) float rotation; 
@property (nonatomic,retain) TileSet * container; 
+(int)tilesMoved;
+(int)moveQueue;
+(float)moveDistance;
+(void)resetTilesMoved;
+(void)updateDarkColor:(float)arg1 ;
-(void)renderFace;
-(id)init:(int)arg1 withManager:(id)arg2 ;
-(char)needsAnimation;
-(float)distanceTo:(CGPoint)arg1 ;
-(void)playSoundOnDestination:(id)arg1 ;
-(void)youveBeenBad;
-(void)setJokerValue:(int)arg1 ;
-(char)isJoker;
-(void)render;
-(void)dealloc;
-(float)size;
-(int)value;
-(void)setSize:(float)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setContainer:(TileSet *)arg1 ;
-(TileSet *)container;
-(void)animate;
-(int)color;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
@end

