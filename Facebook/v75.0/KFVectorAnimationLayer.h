/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class NSMutableArray, NSString;

@interface KFVectorAnimationLayer : CAShapeLayer {

	CGPoint _scaleToCanvas;
	CGPoint _scaleToLayer;
	NSMutableArray* _animations;
	BOOL _hasHiddenAnimation;
	unsigned long long _frameRate;
	unsigned long long _frameCount;
	NSString* _formatVersion;

}

@property (assign,nonatomic) unsigned long long frameRate;               //@synthesize frameRate=_frameRate - In the implementation block
@property (assign,nonatomic) unsigned long long frameCount;              //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,copy) NSString * formatVersion;                     //@synthesize formatVersion=_formatVersion - In the implementation block
-(void)_applyStrokeWidthAnimation:(id)arg1 ;
-(void)_applyScaleAnimation:(id)arg1 ;
-(void)_applyRotationAnimation:(id)arg1 ;
-(void)_applyPositionAnimation:(id)arg1 ;
-(void)_applyAnchorPointAnimation:(id)arg1 ;
-(void)_applyXPositionAnimation:(id)arg1 ;
-(void)_applyYPositionAnimation:(id)arg1 ;
-(void)_applyOpacityAnimation:(id)arg1 ;
-(void)_applyStrokeColorAnimation:(id)arg1 ;
-(void)_applyFillColorAnimation:(id)arg1 ;
-(void)_applyHiddenAnimation:(id)arg1 ;
-(void)setLifespanFromFrame:(unsigned long long)arg1 toFrom:(unsigned long long)arg2 ;
-(void)setAnimations:(id)arg1 scaleToCanvas:(CGPoint)arg2 scaleToLayer:(CGPoint)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFrameCount:(unsigned long long)arg1 ;
-(unsigned long long)frameCount;
-(void)resetAnimations;
-(NSString *)formatVersion;
-(void)setFormatVersion:(NSString *)arg1 ;
-(unsigned long long)frameRate;
-(void)setFrameRate:(unsigned long long)arg1 ;
@end
