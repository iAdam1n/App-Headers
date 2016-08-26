/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/MotionElement.h>

@class NSString;

@interface MotionInstanceBase : MotionElement {

	float sizex;
	float sizey;
	float rotate;
	float translatex;
	float translatey;
	float translatez;
	float scalex;
	float scaley;
	float scalez;
	float alphaMultiplier;
	float skew;
	NSString* libraryItemName;

}

@property (nonatomic,retain) NSString * libraryItemName; 
@property (assign,nonatomic) float skew; 
@property (assign,nonatomic) float rotate; 
@property (assign,nonatomic) float scalex; 
@property (assign,nonatomic) float scaley; 
@property (assign,nonatomic) float scalez; 
@property (assign,nonatomic) float translatex; 
@property (assign,nonatomic) float translatey; 
@property (assign,nonatomic) float translatez; 
@property (assign,nonatomic) float sizex; 
@property (assign,nonatomic) float sizey; 
@property (assign,nonatomic) float alphaMultiplier; 
+(id)mutableDictionaryTypes;
+(void)load;
-(void)setAlphaMultiplier:(float)arg1 ;
-(float)alphaMultiplier;
-(NSString *)libraryItemName;
-(void)setLibraryItemName:(NSString *)arg1 ;
-(float)sizex;
-(void)setSizex:(float)arg1 ;
-(float)sizey;
-(void)setSizey:(float)arg1 ;
-(float)rotate;
-(void)setRotate:(float)arg1 ;
-(float)translatex;
-(void)setTranslatex:(float)arg1 ;
-(float)translatey;
-(void)setTranslatey:(float)arg1 ;
-(float)translatez;
-(void)setTranslatez:(float)arg1 ;
-(float)scalex;
-(void)setScalex:(float)arg1 ;
-(float)scaley;
-(void)setScaley:(float)arg1 ;
-(float)scalez;
-(void)setScalez:(float)arg1 ;
-(void)setSkew:(float)arg1 ;
-(id)init:(float)arg1 ;
-(Vertex)translate;
-(void)setTranslate:(Vertex)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)setScale:(Vertex)arg1 ;
-(Vertex)scale;
-(void)setSize:(CGSize)arg1 ;
-(float)skew;
@end
