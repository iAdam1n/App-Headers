/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface FBSnacksRingView : UIView {

	BOOL _animating;
	UIColor* _strokeColor;
	double _lineWidth;
	double _progress;

}

@property (nonatomic,retain) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                   //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double progress;                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL animating;                     //@synthesize animating=_animating - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)animating;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(double)progress;
-(void)updateAnimations;
@end
