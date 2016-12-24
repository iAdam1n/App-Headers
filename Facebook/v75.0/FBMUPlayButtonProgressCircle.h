/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface FBMUPlayButtonProgressCircle : UIView {

	CAShapeLayer* _circle;
	double _animationCurrentTime;
	double _animationDuration;

}
-(void)removeAllProgressCircleAnimations;
-(void)resetProgressCircle;
-(void)startAnimatingProgressCircleWithDuration:(double)arg1 ;
-(void)setProgressCircleToTime:(double)arg1 animate:(BOOL)arg2 ;
-(id)init;
-(void)layoutSubviews;
@end
