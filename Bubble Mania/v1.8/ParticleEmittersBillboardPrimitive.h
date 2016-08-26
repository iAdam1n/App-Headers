/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/BillboardPrimitive.h>

@class NSMutableSet, ParticleEmitterGroup, NSString;

@interface ParticleEmittersBillboardPrimitive : BillboardPrimitive {

	double lastDrawTime;
	NSMutableSet* waitOnParticles;
	ParticleEmitterGroup* emitterGroup;
	float speedScale;
	double delay;
	NSString* particleSchemeFile;

}

@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) float speedScale; 
@property (nonatomic,retain) NSString * particleSchemeFile; 
-(double)timeElapsed;
-(void)draw:(Vertex)arg1 ;
-(void)setFollowsEmitter:(BOOL)arg1 ;
-(void)setAllowParticleGeneration:(BOOL)arg1 ;
-(void)setParticleSchemeFile:(NSString *)arg1 ;
-(Class)particleEmitterGroupClass;
-(void)clearEmitters;
-(void)setSchemeFile:(id)arg1 package:(id)arg2 ;
-(void)setSchemeFile:(id)arg1 withNumberOfCycles:(int)arg2 package:(id)arg3 ;
-(void)setSchemeFile:(id)arg1 withNumberOfCycles:(int)arg2 position:(Vertex)arg3 package:(id)arg4 particlesFollowEmitter:(BOOL)arg5 ;
-(NSString *)particleSchemeFile;
-(void)setCycles:(int)arg1 ;
-(int)cycles;
-(BOOL)isEnded;
-(BOOL)hiddenByScale;
-(BOOL)isWaitingForParticles;
-(void)setupScaleMatrix;
-(float)speedScale;
-(void)setEmitting:(BOOL)arg1 ;
-(void)setSchemeFile:(id)arg1 ;
-(void)setSchemeFile:(id)arg1 withNumberOfCycles:(int)arg2 ;
-(void)setSchemeFile:(id)arg1 withNumberOfCycles:(int)arg2 position:(Vertex)arg3 ;
-(void)waitForParticle:(id)arg1 ;
-(void)setSpeedScale:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)draw;
@end
