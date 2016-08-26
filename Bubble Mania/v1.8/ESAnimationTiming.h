/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@class NSString, ESOutMsgDef;

@interface ESAnimationTiming : ModelObject {

	BOOL looping;
	BOOL randomStartingFrame;
	int numberOfPlays;
	float speedScale;
	float localPosX;
	float localPosY;
	float localPosZ;
	NSString* animationFileName;
	NSString* textureAtlasName;
	ESOutMsgDef* animationCompleteMsg;

}

@property (nonatomic,retain) NSString * animationFileName; 
@property (nonatomic,retain) NSString * textureAtlasName; 
@property (assign,nonatomic) int numberOfPlays; 
@property (assign,nonatomic) float speedScale; 
@property (assign,nonatomic) BOOL looping; 
@property (assign,nonatomic) BOOL randomStartingFrame; 
@property (assign,nonatomic) float localPosX; 
@property (assign,nonatomic) float localPosY; 
@property (assign,nonatomic) float localPosZ; 
@property (nonatomic,retain) ESOutMsgDef * animationCompleteMsg; 
+(id)mutableDictionaryTypes;
+(void)load;
-(float)speedScale;
-(void)setSpeedScale:(float)arg1 ;
-(BOOL)looping;
-(void)setNumberOfPlays:(int)arg1 ;
-(ESOutMsgDef *)animationCompleteMsg;
-(NSString *)animationFileName;
-(NSString *)textureAtlasName;
-(int)numberOfPlays;
-(BOOL)randomStartingFrame;
-(float)localPosX;
-(float)localPosY;
-(float)localPosZ;
-(void)setLocalPosX:(float)arg1 ;
-(void)setLocalPosY:(float)arg1 ;
-(void)setLocalPosZ:(float)arg1 ;
-(void)setAnimationCompleteMsg:(ESOutMsgDef *)arg1 ;
-(void)setAnimationFileName:(NSString *)arg1 ;
-(void)setTextureAtlasName:(NSString *)arg1 ;
-(void)setRandomStartingFrame:(BOOL)arg1 ;
-(id)initWithTiming:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setLooping:(BOOL)arg1 ;
-(id)clone;
@end
