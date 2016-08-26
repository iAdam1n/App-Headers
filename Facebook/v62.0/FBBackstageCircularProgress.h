/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface FBBackstageCircularProgress : UIView {

	UIColor* _circleBackgroundColor;
	BOOL _clockwiseProgress;
	double _progress;
	UIColor* _fillColor;
	double _shadowWidth;
	UIColor* _shadowColor;
	CGSize _shadowOffset;

}

@property (assign,nonatomic) double progress;                     //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL clockwiseProgress;              //@synthesize clockwiseProgress=_clockwiseProgress - In the implementation block
@property (nonatomic,copy) UIColor * fillColor;                   //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double shadowWidth;                  //@synthesize shadowWidth=_shadowWidth - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                 //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,copy) UIColor * shadowColor;                 //@synthesize shadowColor=_shadowColor - In the implementation block
-(BOOL)clockwiseProgress;
-(void)setClockwiseProgress:(BOOL)arg1 ;
-(double)shadowWidth;
-(void)setShadowWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setProgress:(double)arg1 ;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(double)progress;
@end
