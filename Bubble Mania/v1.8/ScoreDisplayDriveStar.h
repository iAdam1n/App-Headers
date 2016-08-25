/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/BubbleSelfRefreshDriveStar.h>

@class NSMutableArray, ScoreDisplayDriveModel;

@interface ScoreDisplayDriveStar : BubbleSelfRefreshDriveStar {

	NSMutableArray* textBillboards;

}

@property (nonatomic,retain) NSMutableArray * textBillboards; 
@property (nonatomic,readonly) ScoreDisplayDriveModel * scoreDisplayDM; 
+(id)bubbleFontInstance;
+(id)babyFontInstance;
+(id)chainFontInstance;
-(double)distanceFrom:(Vertex)arg1 to:(Vertex)arg2 ;
-(int)billboardList:(id*)arg1 ;
-(void)selfRefresh;
-(void)setTextBillboards:(NSMutableArray *)arg1 ;
-(id)findClusterFrom:(Vertex)arg1 InRange:(double)arg2 ;
-(ScoreDisplayDriveModel *)scoreDisplayDM;
-(float)fontWidth:(SCD_Struct_Gr5*)arg1 vertexCount:(long long)arg2 ;
-(id)createBottomLineStaticBillboard:(int)arg1 totalWidth:(float*)arg2 ;
-(float)xOffsetCenteredAndOnScreen:(float)arg1 position:(Vertex)arg2 ;
-(void)createTextBillboardWithString:(id)arg1 size:(double)arg2 location:(Vertex)arg3 offset:(Vertex)arg4 fontType:(int)arg5 ;
-(float)createBottomLine:(int)arg1 size:(int)arg2 ;
-(id)createBottomLineDynamicBillboard:(int)arg1 size:(int)arg2 fontStringWidth:(float*)arg3 totalWidth:(float*)arg4 spaceWidth:(float)arg5 ;
-(NSMutableArray *)textBillboards;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)reset;
-(id)initWithModel:(id)arg1 ;
-(void)refresh;
@end

