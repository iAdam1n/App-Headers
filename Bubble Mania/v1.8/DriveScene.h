/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@class SceneLayer, NSMutableDictionary, Camera, NSMutableArray;

@interface DriveScene : NSObject {

	BOOL sceneLayerSortDirty;
	BOOL drawGradient;
	BOOL touchInProgress;
	BOOL skipRendering;
	Color topGradientColor;
	Color bottomGradientColor;
	SceneLayer* mainLayer;
	NSMutableDictionary* stringToLayer;
	long long frameCount;
	double currentFrameStartTime;
	Camera* gradientCamera;
	NSMutableArray* layerArray;

}

@property (nonatomic,retain) NSMutableDictionary * stringToLayer; 
@property (nonatomic,retain) Camera * gradientCamera; 
@property (assign,nonatomic) SceneLayer * mainLayer; 
@property (assign,nonatomic) long long frameCount; 
@property (assign,nonatomic) double currentFrameStartTime; 
@property (assign,nonatomic) BOOL drawGradient; 
@property (assign,nonatomic) Color topGradientColor; 
@property (assign,nonatomic) Color bottomGradientColor; 
@property (assign,nonatomic) BOOL touchInProgress; 
@property (assign,nonatomic) BOOL skipRendering; 
@property (nonatomic,retain) NSMutableArray * layerArray; 
+(id)instance;
-(void)setDrawGradient:(BOOL)arg1 ;
-(void)setupNextFrame:(double)arg1 ;
-(void)drawFrame:(double)arg1 ;
-(void)setOrientation:(long long)arg1 duration:(double)arg2 ;
-(CGPoint)screenCoordinatesForVertex:(Vertex)arg1 ;
-(Vertex)worldPointFromScreenPoint:(CGPoint)arg1 ;
-(void)setZoomMinByRatio:(float)arg1 ;
-(id)layerFromName:(id)arg1 ;
-(SceneLayer *)mainLayer;
-(Vertex)worldPointFromScreenPoint:(CGPoint)arg1 xDenominator:(int)arg2 zDenominator:(int)arg3 height:(float)arg4 ;
-(void)setUsesOrientation:(BOOL)arg1 ;
-(void)constructGradientCamera;
-(void)constructMainLayer;
-(void)dirtySceneLayerSort;
-(void)dirtyBillboardSort;
-(void)sortBillboards;
-(void)focusCameraOnPoint:(Vertex)arg1 ;
-(void)focusCameraOnPoint:(Vertex)arg1 withTranslateSpeedMultiplier:(float)arg2 ;
-(void)scrollFromScreenPoint:(CGPoint)arg1 toScreenPoint:(CGPoint)arg2 ;
-(void)zoom:(float)arg1 at:(CGPoint)arg2 ;
-(void)zoomToTarget:(float)arg1 at:(CGPoint)arg2 ;
-(void)setZoomMaxModifier:(float)arg1 ;
-(void)updateZoom;
-(void)setInnerCorner:(CGSize)arg1 ;
-(void)setDrawBorder:(BOOL)arg1 ;
-(void)setLayerArray:(NSMutableArray *)arg1 ;
-(void)drawBackgroundGradient;
-(void)drawLayers:(double)arg1 excludeUI:(BOOL)arg2 ;
-(BOOL)layerExistsFromName:(id)arg1 ;
-(void)cleanBillboardSort;
-(void)setMainLayer:(SceneLayer *)arg1 ;
-(NSMutableDictionary *)stringToLayer;
-(void)setStringToLayer:(NSMutableDictionary *)arg1 ;
-(double)currentFrameStartTime;
-(void)setCurrentFrameStartTime:(double)arg1 ;
-(BOOL)drawGradient;
-(BOOL)touchInProgress;
-(void)setTouchInProgress:(BOOL)arg1 ;
-(Camera *)gradientCamera;
-(void)setGradientCamera:(Camera *)arg1 ;
-(BOOL)skipRendering;
-(void)setSkipRendering:(BOOL)arg1 ;
-(NSMutableArray *)layerArray;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(void)setTopGradientColor:(Color)arg1 ;
-(void)setBottomGradientColor:(Color)arg1 ;
-(Color)topGradientColor;
-(Color)bottomGradientColor;
-(void)setFrameCount:(long long)arg1 ;
-(long long)frameCount;
-(id)camera;
@end
