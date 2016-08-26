/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/Primitive.h>

@class TextureModelGroup, Model3D, NSString;

@interface ModelPrimitive : Primitive {

	Vertex offset;
	Vertex rotation;
	TextureModelGroup* ownerGroup;
	BOOL ownsModel;
	BOOL _deferUnderlyingPositionUpdate;
	unsigned vertexKey;
	float scaleX;
	float scaleY;
	float scaleZ;
	float textureScaleX;
	float textureScaleY;
	float alphaMultiplier;
	Color color;
	unsigned long long texKey;
	Model3D* model3D;
	NSString* filePath;
	NSString* sceneLayerName;
	NSString* textureName;

}

@property (assign,nonatomic) unsigned vertexKey; 
@property (assign,nonatomic) unsigned long long texKey; 
@property (assign,nonatomic) Vertex offset; 
@property (assign,nonatomic) Vertex rotation; 
@property (assign,nonatomic) Color color; 
@property (assign,nonatomic) float scaleX; 
@property (assign,nonatomic) float scaleY; 
@property (assign,nonatomic) float scaleZ; 
@property (nonatomic,retain) NSString * filePath; 
@property (nonatomic,retain) NSString * textureName; 
@property (assign,nonatomic) BOOL ownsModel; 
@property (assign,nonatomic) float alphaMultiplier; 
@property (assign,nonatomic) BOOL deferUnderlyingPositionUpdate;              //@synthesize deferUnderlyingPositionUpdate=_deferUnderlyingPositionUpdate - In the implementation block
@property (nonatomic,retain) NSString * sceneLayerName; 
@property (nonatomic,retain) Model3D * model3D; 
-(void)setTexKey:(unsigned long long)arg1 ;
-(NSString *)textureName;
-(void)setTextureFile:(id)arg1 ;
-(void)setAlphaMultiplier:(float)arg1 ;
-(BOOL)intersectsWithRay:(Line*)arg1 outIntersection:(Vertex*)arg2 ;
-(float)alphaMultiplier;
-(unsigned long long)texKey;
-(float)textureScaleX;
-(float)textureScaleY;
-(BOOL)intersectsWithRay:(Line*)arg1 ;
-(void)setSceneLayerName:(NSString *)arg1 ;
-(NSString *)sceneLayerName;
-(void)setModel3D:(Model3D *)arg1 ;
-(id)initWithModel3D:(id)arg1 ;
-(Model3D *)model3D;
-(void)removeFromModelGroup;
-(void)updateUnderlyingPosition;
-(unsigned)vertexKey;
-(Vertex)localTransform:(SCD_Struct_Gr5*)arg1 ;
-(void)setTextureScaleX:(float)arg1 ;
-(void)setTextureScaleY:(float)arg1 ;
-(void)setVertexKey:(unsigned)arg1 ;
-(void)setTextureName:(NSString *)arg1 ;
-(id)initWithObj:(id)arg1 ;
-(id)initWithVertices:(SCD_Struct_Gr5*)arg1 vertexCount:(int)arg2 name:(id)arg3 ;
-(float)scaleZ;
-(void)setScaleZ:(float)arg1 ;
-(BOOL)ownsModel;
-(void)setOwnsModel:(BOOL)arg1 ;
-(BOOL)deferUnderlyingPositionUpdate;
-(void)setDeferUnderlyingPositionUpdate:(BOOL)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)setScale:(float)arg1 ;
-(void)setPosition:(const Vertex*)arg1 ;
-(void)setOffset:(Vertex)arg1 ;
-(Vertex)offset;
-(Color)color;
-(void)setColor:(Color)arg1 ;
-(void)setRotation:(Vertex)arg1 ;
-(Vertex)rotation;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(void)setTextureScale:(float)arg1 ;
-(void)setScaleX:(float)arg1 ;
-(void)setScaleY:(float)arg1 ;
-(float)scaleX;
-(float)scaleY;
@end
