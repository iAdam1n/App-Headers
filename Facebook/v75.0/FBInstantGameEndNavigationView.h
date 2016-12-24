/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBTransparentView.h>

@class FBInstantGameUIMetrics, CAGradientLayer, UIButton;

@interface FBInstantGameEndNavigationView : FBTransparentView {

	FBInstantGameUIMetrics* _metrics;
	CAGradientLayer* _gradientShadow;
	UIButton* _leftButton;
	UIButton* _middleButton;
	UIButton* _rightButton;

}

@property (nonatomic,readonly) UIButton * leftButton;                //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIButton * middleButton;              //@synthesize middleButton=_middleButton - In the implementation block
@property (nonatomic,readonly) UIButton * rightButton;               //@synthesize rightButton=_rightButton - In the implementation block
-(UIButton *)middleButton;
-(void)layoutSubviews;
-(id)initWithConfig:(id)arg1 ;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
@end
