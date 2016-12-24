/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CAKeyframeAnimation.h>

@interface SKBounceAnimation : CAKeyframeAnimation {

	id byValue;

}

@property (nonatomic,retain) id fromValue; 
@property (nonatomic,retain) id byValue; 
@property (nonatomic,retain) id toValue; 
@property (assign,nonatomic) unsigned long long numberOfBounces; 
@property (assign,nonatomic) BOOL shouldOvershoot; 
@property (assign,nonatomic) BOOL shake; 
@property (assign,nonatomic) int stiffness; 
+(id)animationWithKeyPath:(id)arg1 ;
-(void)setNumberOfBounces:(unsigned long long)arg1 ;
-(void)setShouldOvershoot:(BOOL)arg1 ;
-(void)createValueArray;
-(id)valueArrayForStartValue:(double)arg1 endValue:(double)arg2 ;
-(id)createColorArrayFromRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4 ;
-(id)createRectArrayFromXValues:(id)arg1 yValues:(id)arg2 widths:(id)arg3 heights:(id)arg4 ;
-(id)createTransformArrayFromM11:(id)arg1 M12:(id)arg2 M13:(id)arg3 M14:(id)arg4 M21:(id)arg5 M22:(id)arg6 M23:(id)arg7 M24:(id)arg8 M31:(id)arg9 M32:(id)arg10 M33:(id)arg11 M34:(id)arg12 M41:(id)arg13 M42:(id)arg14 M43:(id)arg15 M44:(id)arg16 ;
-(unsigned long long)numberOfBounces;
-(BOOL)shake;
-(BOOL)shouldOvershoot;
-(void)setShake:(BOOL)arg1 ;
-(id)initWithKeyPath:(id)arg1 ;
-(void)setStiffness:(int)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)fromValue;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(id)toValue;
-(int)stiffness;
-(id)byValue;
-(void)setByValue:(id)arg1 ;
@end
