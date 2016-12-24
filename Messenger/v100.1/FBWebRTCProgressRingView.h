/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, POPBasicAnimation, UIColor;

@interface FBWebRTCProgressRingView : UIView {

	CAShapeLayer* _backCircle;
	CAShapeLayer* _frontCircle;
	POPBasicAnimation* _progressAnimation;
	double _progress;
	double _strokeWidth;
	UIColor* _backColor;
	UIColor* _color;

}

@property (assign,nonatomic) double progress;                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double strokeWidth;               //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * backColor;              //@synthesize backColor=_backColor - In the implementation block
@property (nonatomic,retain) UIColor * color;                  //@synthesize color=_color - In the implementation block
-(id)progressAnimation;
-(void)setProgress:(double)arg1 animationDuration:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)_updatePath;
-(double)progress;
-(void)setStrokeWidth:(double)arg1 ;
-(double)strokeWidth;
-(UIColor *)backColor;
-(void)setBackColor:(UIColor *)arg1 ;
@end
