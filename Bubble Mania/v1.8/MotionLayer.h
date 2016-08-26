/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/ModelObject.h>

@class NSMutableArray, NSString;

@interface MotionLayer : ModelObject {

	int layerType;
	NSMutableArray* frames;
	NSString* layerName;

}

@property (nonatomic,retain) NSString * layerName; 
@property (assign,nonatomic) int layerType; 
@property (nonatomic,retain) NSMutableArray * frames; 
+(id)mutableDictionaryTypes;
+(void)load;
-(int)layerType;
-(Quad)draw:(float)arg1 texAtlas:(id)arg2 isEffectLayer:(BOOL)arg3 ;
-(BOOL)isStatic:(id)arg1 next:(id)arg2 ;
-(Quad)draw:(float)arg1 position:(Vertex)arg2 size:(CGSize)arg3 rotation:(float)arg4 texAtlas:(id)arg5 isEffectLayer:(BOOL)arg6 ;
-(void)setLayerType:(int)arg1 ;
-(NSString *)layerName;
-(void)setLayerName:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)frames;
@end
