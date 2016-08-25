/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@class NSString;

@interface MapDecoration : ModelObject {

	float x;
	float y;
	float width;
	float height;
	int layer;
	float slideFrequency;
	float slideAmplitude;
	int worldId;
	NSString* animationScheme;
	NSString* imagePath;

}

@property (assign,nonatomic) float x; 
@property (assign,nonatomic) float y; 
@property (assign,nonatomic) float width; 
@property (assign,nonatomic) float height; 
@property (assign,nonatomic) int layer; 
@property (nonatomic,retain) NSString * animationScheme; 
@property (nonatomic,retain) NSString * imagePath; 
@property (assign,nonatomic) float slideFrequency; 
@property (assign,nonatomic) float slideAmplitude; 
@property (assign,nonatomic) int worldId; 
+(id)mutableDictionaryTypes;
+(void)load;
-(NSString *)animationScheme;
-(void)setAnimationScheme:(NSString *)arg1 ;
-(float)slideFrequency;
-(void)setSlideFrequency:(float)arg1 ;
-(float)slideAmplitude;
-(void)setSlideAmplitude:(float)arg1 ;
-(int)worldId;
-(void)setWorldId:(int)arg1 ;
-(int)layer;
-(void)dealloc;
-(void)setLayer:(int)arg1 ;
-(float)width;
-(float)height;
-(float)x;
-(void)setX:(float)arg1 ;
-(float)y;
-(void)setY:(float)arg1 ;
-(void)setWidth:(float)arg1 ;
-(void)setHeight:(float)arg1 ;
-(void)setImagePath:(NSString *)arg1 ;
-(NSString *)imagePath;
@end

