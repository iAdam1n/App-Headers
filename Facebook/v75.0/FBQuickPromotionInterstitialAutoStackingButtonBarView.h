/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, CALayer;

@interface FBQuickPromotionInterstitialAutoStackingButtonBarView : UIView {

	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	CALayer* _topBorderLayer;
	CALayer* _stackedButtonSeparatorLayer;
	double _separatorHeight;
	unsigned long long _buttonLayout;

}

@property (nonatomic,readonly) UIButton * primaryButton;                   //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,readonly) UIButton * secondaryButton; 
@property (assign,nonatomic) unsigned long long buttonLayout;              //@synthesize buttonLayout=_buttonLayout - In the implementation block
-(UIButton *)secondaryButton;
-(void)setButtonLayout:(unsigned long long)arg1 ;
-(void)_updateSeparators;
-(CGRect)_secondaryButtonFrameForBoundingSize:(CGSize)arg1 ;
-(CGRect)_primaryButtonFrameForBoundingSize:(CGSize)arg1 ;
-(BOOL)shouldUseFullWidthButtonsForBoundingSize:(CGSize)arg1 ;
-(unsigned long long)buttonLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)primaryButton;
@end
