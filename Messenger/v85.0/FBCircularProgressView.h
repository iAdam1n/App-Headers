/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface FBCircularProgressView : UIView {

	CAShapeLayer* _unfilledLayer;
	CAShapeLayer* _filledLayer;
	double _progress;
	double _circleBorderWidth;
	double _radius;
	UIColor* _progressColor;
	UIColor* _remainingProgressColor;

}

@property (assign,nonatomic) double progress;                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double circleBorderWidth;                      //@synthesize circleBorderWidth=_circleBorderWidth - In the implementation block
@property (assign,nonatomic) double radius;                                 //@synthesize radius=_radius - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;                       //@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,retain) UIColor * remainingProgressColor;              //@synthesize remainingProgressColor=_remainingProgressColor - In the implementation block
-(void)setRemainingProgressColor:(UIColor *)arg1 ;
-(void)setCircleBorderWidth:(double)arg1 ;
-(void)setProgress:(double)arg1 shouldDisplay:(BOOL)arg2 ;
-(double)circleBorderWidth;
-(UIColor *)remainingProgressColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
@end
