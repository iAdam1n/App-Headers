/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface CBFlatProgressBar : UIView {

	double _currentPercentage;
	UIColor* _progressColor;
	UIColor* _borderColor;
	UIColor* _bgColor;
	double _radius;

}

@property (assign,nonatomic) double currentPercentage;              //@synthesize currentPercentage=_currentPercentage - In the implementation block
@property (retain) UIColor * progressColor;                         //@synthesize progressColor=_progressColor - In the implementation block
@property (retain) UIColor * borderColor;                           //@synthesize borderColor=_borderColor - In the implementation block
@property (retain) UIColor * bgColor;                               //@synthesize bgColor=_bgColor - In the implementation block
@property (assign) double radius;                                   //@synthesize radius=_radius - In the implementation block
-(double)currentPercentage;
-(void)setCurrentPercentage:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
-(void)setBgColor:(UIColor *)arg1 ;
-(UIColor *)bgColor;
@end

