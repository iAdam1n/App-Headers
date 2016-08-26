/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/AnimationPrimitive.h>

@protocol MotionDelegate;
@class NSMutableArray, TextureAtlas, NSString, NSObject, NSMutableDictionary;

@interface MotionBillboardPrimitive : AnimationPrimitive {

	float fps;
	double curFrame;
	int curFrameA;
	int curFrameB;
	double lastFrame;
	int curPlay;
	double lastDrawTime;
	double secondsPassed;
	BOOL forceUpdateVertices;
	float lastDelegateUpdateCycle;
	Vertex boundMin;
	Vertex boundMax;
	Vertex boundCenter;
	Vertex angle;
	float boundRadius;
	int frameUpdateResolution;
	BOOL isDrawn;
	vector<InterleavedVertex, std::__1::allocator<InterleavedVertex> >* curFrameVerts;
	vector<unsigned short, std::__1::allocator<unsigned short> >* curFrameIndices;
	NSMutableArray* particleLayers;
	CachedCompInfo* compInfo;
	TextureAtlas* atlas;
	BOOL cameraFacing;
	int numFrames;
	float redMultiplier;
	float greenMultiplier;
	float blueMultiplier;
	float compositionScale;
	unsigned drawMode;
	NSString* motionFileName;
	NSString* motionAtlasName;
	NSString* motionAtlasImageBase;
	NSObject*<MotionDelegate> delegate;
	NSMutableDictionary* fileSettings;
	NSString* packageName;

}

@property (nonatomic,retain) NSString * motionFileName; 
@property (nonatomic,retain) NSString * motionAtlasName; 
@property (nonatomic,retain) NSString * motionAtlasImageBase; 
@property (nonatomic,retain) NSMutableDictionary * fileSettings; 
@property (nonatomic,retain) NSString * packageName; 
@property (nonatomic,readonly) float fps; 
@property (nonatomic,readonly) int numFrames; 
@property (nonatomic,readonly) double curFrame; 
@property (nonatomic,readonly) int curPlay; 
@property (assign,nonatomic) float redMultiplier; 
@property (assign,nonatomic) float greenMultiplier; 
@property (assign,nonatomic) float blueMultiplier; 
@property (assign,nonatomic) float compositionScale; 
@property (nonatomic,readonly) BOOL isDrawn; 
@property (assign,nonatomic) int frameUpdateResolution; 
@property (assign,nonatomic) BOOL cameraFacing; 
@property (assign,nonatomic) unsigned drawMode; 
@property (assign,nonatomic) NSObject*<MotionDelegate> delegate; 
-(BOOL)intersectsWithRay:(const Line*)arg1 outIntersection:(Vertex*)arg2 ;
-(void)setTextureFile:(id)arg1 packageName:(id)arg2 ;
-(void)setEnablePulsing:(BOOL)arg1 ;
-(void)ownerClear;
-(void)setSpeedScale:(float)arg1 ;
-(NSString *)packageName;
-(void)setPackageName:(NSString *)arg1 ;
-(void)loadMotionFile:(id)arg1 texAtlasBase:(id)arg2 ;
-(int)numFrames;
-(double)curFrame;
-(void)dataReset;
-(void)timerReset;
-(void)setCameraFacing:(BOOL)arg1 ;
-(CachedComposition*)cachedCompositionData;
-(int)numPlayFrames;
-(void)loadMotionFile:(id)arg1 texAtlas:(id)arg2 imageBase:(id)arg3 package:(id)arg4 ;
-(void)loadMotionFile:(id)arg1 texAtlas:(id)arg2 imageBase:(id)arg3 settings:(id)arg4 package:(id)arg5 ;
-(void)switchMotionFile:(id)arg1 texAtlas:(id)arg2 imageBase:(id)arg3 settings:(id)arg4 package:(id)arg5 ;
-(void)loadMotionFile:(id)arg1 texAtlasBase:(id)arg2 imageBase:(id)arg3 cachedComposition:(CachedCompositionNEON*)arg4 ;
-(void)switchMotionFile:(id)arg1 texAtlas:(id)arg2 imageBase:(id)arg3 ;
-(void)setMotionFileName:(NSString *)arg1 ;
-(void)setMotionAtlasName:(NSString *)arg1 ;
-(void)setMotionAtlasImageBase:(NSString *)arg1 ;
-(void)setFileSettings:(NSMutableDictionary *)arg1 ;
-(BOOL)switchToAtlas:(id)arg1 imageBase:(id)arg2 ;
-(id)texFileNameWithType:(id)arg1 ;
-(void)updateTimingInfo;
-(void)loadComposition;
-(BOOL)notifyDelegateAndMaybeRetry:(CachedComposition*)arg1 ;
-(void)setupCurFrame;
-(void)keyFramesForInterpolation:(float*)arg1 frameA:(CachedMotionFrame*)arg2 frameB:(CachedMotionFrame*)arg3 ;
-(void)updateBounds:(float)arg1 frameA:(const CachedMotionFrame*)arg2 frameB:(const CachedMotionFrame*)arg3 ;
-(BOOL)boundingSphereInFrustum;
-(void)updateVertices:(float)arg1 frameA:(const CachedMotionFrame*)arg2 frameB:(const CachedMotionFrame*)arg3 ;
-(void)drawOneInstance;
-(BOOL)transformRayFromWorldSpaceToObjectSpace:(Line*)arg1 ;
-(void)loadCompositionWithRetry:(BOOL)arg1 ;
-(void)setupEffectLayers;
-(void)cleanCurrentFrameData;
-(void)setupCurrentFrameIndices;
-(void)setupParticleEffectLayer:(id)arg1 ;
-(void)interpolateParticleEffectLayer:(id)arg1 A:(const EffectInfo*)arg2 B:(const EffectInfo*)arg3 ratio:(float)arg4 ;
-(void)NEONInterpolateImageLayers:(int)arg1 B:(int)arg2 inComposition:(CachedCompositionNEON*)arg3 ratio:(float)arg4 ;
-(void)interpolateImageLayers:(const CachedMotionFrame*)arg1 A:(const CachedMotionFrame*)arg2 B:(const CachedMotionFrame*)arg3 ratio:(float)arg4 ;
-(void)interpolateEffectLayers:(const CachedMotionFrame*)arg1 B:(const CachedMotionFrame*)arg2 ratio:(float)arg3 ;
-(BOOL)cameraFacing;
-(void)drawWithVertexArray;
-(void)setupRenderState;
-(void)drawImages;
-(void)drawEffects;
-(void)restoreRenderState;
-(const Vertex*)boundMin;
-(const Vertex*)boundMax;
-(const Vertex*)boundCenter;
-(void)loadMotionFile:(id)arg1 ;
-(void)loadMotionFile:(id)arg1 texAtlasBase:(id)arg2 package:(id)arg3 ;
-(void)loadMotionFile:(id)arg1 texAtlas:(id)arg2 imageBase:(id)arg3 ;
-(void)loadMotionFile:(id)arg1 texAtlasBase:(id)arg2 cachedComposition:(CachedCompositionNEON*)arg3 ;
-(void)switchMotionFile:(id)arg1 ;
-(void)switchMotionFile:(id)arg1 texAtlasBase:(id)arg2 ;
-(void)switchMotionFile:(id)arg1 texAtlasBase:(id)arg2 package:(id)arg3 ;
-(void)switchMotionFile:(id)arg1 texAtlas:(id)arg2 imageBase:(id)arg3 package:(id)arg4 ;
-(BOOL)switchToAtlas:(id)arg1 ;
-(void)swapTextures:(id)arg1 ;
-(void)setFrameUpdateResolution:(int)arg1 ;
-(float)fps;
-(int)curPlay;
-(float)redMultiplier;
-(void)setRedMultiplier:(float)arg1 ;
-(float)greenMultiplier;
-(void)setGreenMultiplier:(float)arg1 ;
-(float)blueMultiplier;
-(void)setBlueMultiplier:(float)arg1 ;
-(NSString *)motionFileName;
-(NSString *)motionAtlasName;
-(NSString *)motionAtlasImageBase;
-(BOOL)isDrawn;
-(float)compositionScale;
-(void)setCompositionScale:(float)arg1 ;
-(NSMutableDictionary *)fileSettings;
-(int)frameUpdateResolution;
-(void)setDelegate:(NSObject*<MotionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<MotionDelegate>)delegate;
-(void)stop;
-(unsigned)drawMode;
-(void)setDrawMode:(unsigned)arg1 ;
-(void)draw;
-(void)setColor:(Color)arg1 ;
-(void)setWidth:(float)arg1 ;
-(void)setAngle:(const Vertex*)arg1 ;
-(const Vertex*)angle;
-(id)initWithOwner:(id)arg1 ;
-(void)setHeight:(float)arg1 ;
-(void)updateDelegate;
-(void)setIsPaused:(BOOL)arg1 ;
-(void)restart;
@end
