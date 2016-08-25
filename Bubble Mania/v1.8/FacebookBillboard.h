/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/Billboard3DPrimitive.h>

@class Model3D, NSString;

@interface FacebookBillboard : Billboard3DPrimitive {

	Model3D* pictureModel;
	Model3D* bubbleModel;
	unsigned long long bubbleTexKey;
	NSString* fbuid;
	NSString* profileUrl;
	NSString* urlForCurrentModel;
	Vertex bubbleScale;
	Vertex originalPosition;

}

@property (assign,nonatomic) Vertex originalPosition; 
@property (assign,nonatomic) Vertex bubbleScale; 
@property (nonatomic,retain) Model3D * bubbleModel; 
@property (nonatomic,retain) NSString * fbuid; 
@property (nonatomic,retain) NSString * profileUrl; 
@property (assign,nonatomic) unsigned long long bubbleTexKey; 
@property (nonatomic,retain) Model3D * pictureModel; 
@property (nonatomic,retain) NSString * urlForCurrentModel; 
-(void)setBubbleModel:(Model3D *)arg1 ;
-(void)setOriginalPosition:(Vertex)arg1 ;
-(void)loadTexture:(id)arg1 ;
-(Vertex)originalPosition;
-(NSString *)profileUrl;
-(NSString *)urlForCurrentModel;
-(NSString *)fbuid;
-(Model3D *)bubbleModel;
-(void)setPictureModel:(Model3D *)arg1 ;
-(Model3D *)pictureModel;
-(void)updateModelForAspectRatio:(id)arg1 aspectRatio:(float)arg2 ;
-(void)setUrlForCurrentModel:(NSString *)arg1 ;
-(void)useDownloadedTexture:(id)arg1 ;
-(void)setProfileUrl:(NSString *)arg1 ;
-(void)setFbuid:(NSString *)arg1 ;
-(void)facebookGraphResponse:(id)arg1 response:(id)arg2 ;
-(void)drawModel3D:(id)arg1 texKey:(unsigned long long)arg2 modelScale:(Vertex)arg3 ;
-(unsigned long long)bubbleTexKey;
-(void)convertComplete:(id)arg1 ;
-(void)setBubbleTexKey:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)draw;
-(id)initWithOwner:(id)arg1 ;
-(void)setBubbleScale:(Vertex)arg1 ;
-(Vertex)bubbleScale;
@end

