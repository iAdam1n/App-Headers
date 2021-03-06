/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, UILabel;

@interface FB360GyroIndicatorView : UIView {

	CAShapeLayer* _rotatingBackgroundLayer;
	CAShapeLayer* _outerCircleLayer;
	UILabel* _label;
	CAShapeLayer* _textMask;
	CAShapeLayer* _hEllipseLayer;
	CAShapeLayer* _vEllipseLayerBottom;
	CAShapeLayer* _vEllipseLayerBottomMask;
	CAShapeLayer* _vEllipseLayerTop;
	CAShapeLayer* _vEllipseLayerTopMask;
	BOOL _enabled;

}

@property (assign,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)startAnimationCompletion:(/*^block*/id)arg1 ;
-(void)_setupViewsAndLayers;
-(void)_addTextView;
-(void)_addOuterRotationAnimation;
-(void)_addHorizontalEllipseAnimation;
-(void)_addVerticalEllipseAnimation;
-(void)_addLabelAnimation;
-(BOOL)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
@end

