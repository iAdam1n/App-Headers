/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@class SceneLayer, DriveStar;

@interface Primitive : NSObject {

	Vertex position;
	Vertex sortingPosition;
	SceneLayer* sceneLayerPtr;
	BOOL hidden;
	float farDistance;
	DriveStar* owner;
	BOOL isOnScreen;
	BOOL customSorting;
	BOOL isTappable;
	BOOL ztest;
	BOOL zwrite;
	BOOL alphaTest;
	BOOL texturing;
	BOOL colorArray;
	BOOL cullFace;
	int layer;
	int overrideLayer;
	int priority;
	float customFarDistance;
	int sortIndex;
	int blendMode;
	float _textureScaleX;
	float _textureScaleY;
	float _textureTranslateX;
	float _textureTranslateY;

}

@property (assign,nonatomic) DriveStar * owner; 
@property (assign,nonatomic) float textureScaleX;                                     //@synthesize textureScaleX=_textureScaleX - In the implementation block
@property (assign,nonatomic) float textureScaleY;                                     //@synthesize textureScaleY=_textureScaleY - In the implementation block
@property (assign,nonatomic) SceneLayer * sceneLayerPtr; 
@property (assign,nonatomic) float textureTranslateX;                                 //@synthesize textureTranslateX=_textureTranslateX - In the implementation block
@property (assign,nonatomic) float textureTranslateY;                                 //@synthesize textureTranslateY=_textureTranslateY - In the implementation block
@property (assign,nonatomic) BOOL ztest; 
@property (assign,nonatomic) BOOL zwrite; 
@property (assign,nonatomic) BOOL alphaTest; 
@property (assign,nonatomic) BOOL texturing; 
@property (assign,nonatomic) BOOL colorArray; 
@property (assign,nonatomic) int blendMode; 
@property (assign,nonatomic) BOOL cullFace; 
@property (assign,nonatomic) int layer; 
@property (assign,nonatomic) int overrideLayer; 
@property (assign,nonatomic) int priority; 
@property (assign,nonatomic) BOOL customSorting; 
@property (assign,nonatomic) float customFarDistance; 
@property (nonatomic,readonly) float farDistance; 
@property (assign,nonatomic) int sortIndex; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL isTappable; 
@property (nonatomic,readonly) int renderGroup; 
@property (nonatomic,readonly) unsigned long long priorityInRenderGroup; 
-(void)setTexturing:(BOOL)arg1 ;
-(void)setZtest:(BOOL)arg1 ;
-(void)setZwrite:(BOOL)arg1 ;
-(void)setAlphaTest:(BOOL)arg1 ;
-(SceneLayer *)sceneLayerPtr;
-(BOOL)intersectsWithRay:(const Line*)arg1 outIntersection:(Vertex*)arg2 ;
-(void)setOverrideLayer:(int)arg1 ;
-(BOOL)ztest;
-(BOOL)zwrite;
-(BOOL)alphaTest;
-(unsigned long long)priorityInRenderGroup;
-(BOOL)texturing;
-(BOOL)cullFace;
-(BOOL)colorArray;
-(float)textureScaleX;
-(float)textureTranslateX;
-(float)textureScaleY;
-(float)textureTranslateY;
-(BOOL)intersectsWithRay:(const Line*)arg1 ;
-(void)setIsTappable:(BOOL)arg1 ;
-(void)setTextureScaleX:(float)arg1 ;
-(void)setTextureScaleY:(float)arg1 ;
-(void)initProperties;
-(void)ownerClear;
-(const Vertex*)sortingPosition;
-(void)setSortingPosition:(const Vertex*)arg1 ;
-(void)setTextureTranslateX:(float)arg1 ;
-(void)setTextureTranslateY:(float)arg1 ;
-(float)farDistance;
-(int)renderGroup;
-(int)overrideLayer;
-(float)customFarDistance;
-(void)setCustomFarDistance:(float)arg1 ;
-(BOOL)customSorting;
-(void)setCustomSorting:(BOOL)arg1 ;
-(void)setSceneLayerPtr:(SceneLayer *)arg1 ;
-(void)setColorArray:(BOOL)arg1 ;
-(void)setCullFace:(BOOL)arg1 ;
-(int)layer;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(void)setLayer:(int)arg1 ;
-(void)setPosition:(const Vertex*)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(const Vertex*)position;
-(void)draw;
-(DriveStar *)owner;
-(void)setOwner:(DriveStar *)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(id)initWithOwner:(id)arg1 ;
-(BOOL)hidden;
-(void)setSortIndex:(int)arg1 ;
-(int)sortIndex;
-(BOOL)isTappable;
-(void)ownerRelease;
@end

