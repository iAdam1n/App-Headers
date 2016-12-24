/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ARTNode.h>

@class ARTBrush;

@interface ARTRenderable : ARTNode {

	int _strokeCap;
	int _strokeJoin;
	ARTBrush* _fill;
	CGColorRef _stroke;
	double _strokeWidth;
	SCD_Struct_AR801* _strokeDash;

}

@property (nonatomic,retain) ARTBrush * fill;                           //@synthesize fill=_fill - In the implementation block
@property (assign,nonatomic) CGColorRef stroke;                         //@synthesize stroke=_stroke - In the implementation block
@property (assign,nonatomic) double strokeWidth;                        //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign,nonatomic) int strokeCap;                             //@synthesize strokeCap=_strokeCap - In the implementation block
@property (assign,nonatomic) int strokeJoin;                            //@synthesize strokeJoin=_strokeJoin - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR801* strokeDash;              //@synthesize strokeDash=_strokeDash - In the implementation block
-(void)renderLayerTo:(CGContextRef)arg1 ;
-(void)renderTo:(CGContextRef)arg1 ;
-(void)setStrokeCap:(int)arg1 ;
-(void)setStrokeJoin:(int)arg1 ;
-(void)setStrokeDash:(SCD_Struct_AR801*)arg1 ;
-(int)strokeCap;
-(int)strokeJoin;
-(SCD_Struct_AR801*)strokeDash;
-(void)dealloc;
-(ARTBrush *)fill;
-(CGColorRef)stroke;
-(void)setStrokeWidth:(double)arg1 ;
-(void)setFill:(ARTBrush *)arg1 ;
-(void)setStroke:(CGColorRef)arg1 ;
-(double)strokeWidth;
@end
