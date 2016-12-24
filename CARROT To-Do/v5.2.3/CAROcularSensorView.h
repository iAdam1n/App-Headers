/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:47:20 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B61875E7-F2F8-487D-814D-DF59A28B6A4C/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CARROT/CARROT-Structs.h>
#import <UIKit/UIButton.h>

@class CAShapeLayer, CARCarrotIconView, UIColor;

@interface CAROcularSensorView : UIButton {

	BOOL _isPressed;
	CAShapeLayer* _blackCircle;
	CAShapeLayer* _whiteCircle;
	CAShapeLayer* _coloredCircle;
	CARCarrotIconView* _iconView;
	UIColor* _irisColor;
	double _strokeWidth;

}

@property (nonatomic,retain) CAShapeLayer * blackCircle;                //@synthesize blackCircle=_blackCircle - In the implementation block
@property (nonatomic,retain) CAShapeLayer * whiteCircle;                //@synthesize whiteCircle=_whiteCircle - In the implementation block
@property (nonatomic,retain) CAShapeLayer * coloredCircle;              //@synthesize coloredCircle=_coloredCircle - In the implementation block
@property (nonatomic,retain) CARCarrotIconView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIColor * irisColor;                       //@synthesize irisColor=_irisColor - In the implementation block
@property (assign,nonatomic) double strokeWidth;                        //@synthesize strokeWidth=_strokeWidth - In the implementation block
-(CAShapeLayer *)coloredCircle;
-(void)attachAnimations;
-(void)setIrisColor:(UIColor *)arg1 ;
-(void)setupEye;
-(void)setColoredCircle:(CAShapeLayer *)arg1 ;
-(UIColor *)irisColor;
-(CAShapeLayer *)blackCircle;
-(void)setBlackCircle:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)whiteCircle;
-(void)setWhiteCircle:(CAShapeLayer *)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)animationWithKeyPath:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)stopAnimations;
-(CARCarrotIconView *)iconView;
-(void)setStrokeWidth:(double)arg1 ;
-(double)strokeWidth;
-(void)setIconView:(CARCarrotIconView *)arg1 ;
@end
