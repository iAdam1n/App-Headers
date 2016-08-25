/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/S8Label.h>

@class UIColor, NSArray;

@interface FXLabel : S8Label {

	BOOL innerShadowUsingSingleOffset;
	UIColor* innerShadowColor;
	NSArray* gradientColors;
	unsigned long long oversampling;
	unsigned long long minSamples;
	unsigned long long maxSamples;
	CGSize innerShadowOffset;
	CGPoint gradientStartPoint;
	CGPoint gradientEndPoint;
	UIEdgeInsets textInsets;

}

@property (assign,nonatomic) CGSize innerShadowOffset; 
@property (nonatomic,retain) UIColor * innerShadowColor; 
@property (assign,nonatomic) BOOL innerShadowUsingSingleOffset; 
@property (nonatomic,retain) UIColor * gradientStartColor; 
@property (nonatomic,retain) UIColor * gradientEndColor; 
@property (nonatomic,copy) NSArray * gradientColors; 
@property (assign,nonatomic) CGPoint gradientStartPoint; 
@property (assign,nonatomic) CGPoint gradientEndPoint; 
@property (assign,nonatomic) unsigned long long oversampling; 
@property (assign,nonatomic) UIEdgeInsets textInsets; 
@property (assign,nonatomic) unsigned long long minSamples; 
@property (assign,nonatomic) unsigned long long maxSamples; 
-(void)setGradientStartColor:(UIColor *)arg1 ;
-(void)initDefaults;
-(void)getComponents:(double*)arg1 forColor:(CGColorRef)arg2 ;
-(id)color:(CGColorRef)arg1 blendedWithColor:(CGColorRef)arg2 ;
-(UIColor *)gradientStartColor;
-(void)setOversampling:(unsigned long long)arg1 ;
-(BOOL)innerShadowUsingSingleOffset;
-(void)setInnerShadowUsingSingleOffset:(BOOL)arg1 ;
-(unsigned long long)oversampling;
-(unsigned long long)minSamples;
-(void)setMinSamples:(unsigned long long)arg1 ;
-(unsigned long long)maxSamples;
-(void)setMaxSamples:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setInnerShadowColor:(UIColor *)arg1 ;
-(void)setInnerShadowOffset:(CGSize)arg1 ;
-(UIColor *)innerShadowColor;
-(CGSize)innerShadowOffset;
-(void)setGradientColors:(NSArray *)arg1 ;
-(NSArray *)gradientColors;
-(void)setTextInsets:(UIEdgeInsets)arg1 ;
-(void)setGradientEndPoint:(CGPoint)arg1 ;
-(void)setGradientStartPoint:(CGPoint)arg1 ;
-(CGPoint)gradientEndPoint;
-(CGPoint)gradientStartPoint;
-(void)setGradientEndColor:(UIColor *)arg1 ;
-(UIColor *)gradientEndColor;
-(UIEdgeInsets)textInsets;
@end

