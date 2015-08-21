/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:35:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BAB6B524-089F-49C7-9E02-F76A6A5EBF73/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CARROT/CARROT-Structs.h>
#import <UIKit/UIButton.h>

@class CAShapeLayer, UIView, CARCarrotIconView, UIColor;

@interface CARBigOcularSensorView : UIButton {

	char _isPressed;
	char _levelUp;
	CAShapeLayer* _blackCircle;
	CAShapeLayer* _whiteCircle;
	UIView* _irisContainer;
	CAShapeLayer* _coloredCircle;
	CARCarrotIconView* _iconView;
	UIColor* _irisColor;
	float _strokeWidth;

}

@property (nonatomic,retain) CAShapeLayer * blackCircle;                //@synthesize blackCircle=_blackCircle - In the implementation block
@property (nonatomic,retain) CAShapeLayer * whiteCircle;                //@synthesize whiteCircle=_whiteCircle - In the implementation block
@property (nonatomic,retain) UIView * irisContainer;                    //@synthesize irisContainer=_irisContainer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * coloredCircle;              //@synthesize coloredCircle=_coloredCircle - In the implementation block
@property (nonatomic,retain) CARCarrotIconView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIColor * irisColor;                       //@synthesize irisColor=_irisColor - In the implementation block
@property (assign,nonatomic) float strokeWidth;                         //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign,nonatomic) char levelUp;                              //@synthesize levelUp=_levelUp - In the implementation block
-(void)startupAnimation;
-(CAShapeLayer *)coloredCircle;
-(void)attachAnimations;
-(char)levelUp;
-(void)setLevelUp:(char)arg1 ;
-(UIView *)irisContainer;
-(void)setIrisColor:(UIColor *)arg1 ;
-(void)setupEye;
-(void)setColoredCircle:(CAShapeLayer *)arg1 ;
-(UIColor *)irisColor;
-(CAShapeLayer *)blackCircle;
-(void)setBlackCircle:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)whiteCircle;
-(void)setWhiteCircle:(CAShapeLayer *)arg1 ;
-(void)setIrisContainer:(UIView *)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)animationWithKeyPath:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CARCarrotIconView *)iconView;
-(void)setIconView:(CARCarrotIconView *)arg1 ;
-(float)strokeWidth;
-(void)setStrokeWidth:(float)arg1 ;
-(void)stopAnimations;
@end

