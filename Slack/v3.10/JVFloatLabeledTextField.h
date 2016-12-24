/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITextField.h>

@class UILabel, UIFont, UIColor;

@interface JVFloatLabeledTextField : UITextField {

	BOOL _isFloatingLabelFontDefault;
	BOOL _animateEvenIfNotFirstResponder;
	BOOL _adjustsClearButtonRect;
	BOOL _alwaysFloatLabel;
	UILabel* _floatingLabel;
	double _floatingLabelYPadding;
	double _floatingLabelXPadding;
	double _placeholderYPadding;
	UIFont* _floatingLabelFont;
	UIColor* _floatingLabelTextColor;
	UIColor* _floatingLabelActiveTextColor;
	double _floatingLabelShowAnimationDuration;
	double _floatingLabelHideAnimationDuration;
	CGRect _editingRect;

}

@property (nonatomic,readonly) UILabel * floatingLabel;                              //@synthesize floatingLabel=_floatingLabel - In the implementation block
@property (assign,nonatomic) double floatingLabelYPadding;                           //@synthesize floatingLabelYPadding=_floatingLabelYPadding - In the implementation block
@property (assign,nonatomic) double floatingLabelXPadding;                           //@synthesize floatingLabelXPadding=_floatingLabelXPadding - In the implementation block
@property (assign,nonatomic) double placeholderYPadding;                             //@synthesize placeholderYPadding=_placeholderYPadding - In the implementation block
@property (nonatomic,retain) UIFont * floatingLabelFont;                             //@synthesize floatingLabelFont=_floatingLabelFont - In the implementation block
@property (nonatomic,retain) UIColor * floatingLabelTextColor;                       //@synthesize floatingLabelTextColor=_floatingLabelTextColor - In the implementation block
@property (nonatomic,retain) UIColor * floatingLabelActiveTextColor;                 //@synthesize floatingLabelActiveTextColor=_floatingLabelActiveTextColor - In the implementation block
@property (assign,nonatomic) BOOL animateEvenIfNotFirstResponder;                    //@synthesize animateEvenIfNotFirstResponder=_animateEvenIfNotFirstResponder - In the implementation block
@property (assign,nonatomic) double floatingLabelShowAnimationDuration;              //@synthesize floatingLabelShowAnimationDuration=_floatingLabelShowAnimationDuration - In the implementation block
@property (assign,nonatomic) double floatingLabelHideAnimationDuration;              //@synthesize floatingLabelHideAnimationDuration=_floatingLabelHideAnimationDuration - In the implementation block
@property (assign,nonatomic) BOOL adjustsClearButtonRect;                            //@synthesize adjustsClearButtonRect=_adjustsClearButtonRect - In the implementation block
@property (assign,nonatomic) BOOL alwaysFloatLabel;                                  //@synthesize alwaysFloatLabel=_alwaysFloatLabel - In the implementation block
@property (assign,nonatomic) CGRect editingRect;                                     //@synthesize editingRect=_editingRect - In the implementation block
-(id)defaultFloatingLabelFont;
-(void)setLabelOriginForTextAlignment;
-(id)labelActiveColor;
-(UIColor *)floatingLabelTextColor;
-(void)hideFloatingLabel:(BOOL)arg1 ;
-(void)showFloatingLabel:(BOOL)arg1 ;
-(void)setPlaceholder:(id)arg1 floatingTitle:(id)arg2 ;
-(void)setFloatingLabelFont:(UIFont *)arg1 ;
-(double)floatingLabelYPadding;
-(void)setFloatingLabelYPadding:(double)arg1 ;
-(double)floatingLabelXPadding;
-(void)setFloatingLabelXPadding:(double)arg1 ;
-(double)placeholderYPadding;
-(void)setPlaceholderYPadding:(double)arg1 ;
-(UIFont *)floatingLabelFont;
-(void)setFloatingLabelTextColor:(UIColor *)arg1 ;
-(UIColor *)floatingLabelActiveTextColor;
-(void)setFloatingLabelActiveTextColor:(UIColor *)arg1 ;
-(BOOL)animateEvenIfNotFirstResponder;
-(void)setAnimateEvenIfNotFirstResponder:(BOOL)arg1 ;
-(double)floatingLabelShowAnimationDuration;
-(void)setFloatingLabelShowAnimationDuration:(double)arg1 ;
-(double)floatingLabelHideAnimationDuration;
-(void)setFloatingLabelHideAnimationDuration:(double)arg1 ;
-(void)setEditingRect:(CGRect)arg1 ;
-(void)setAlwaysFloatLabel:(BOOL)arg1 ;
-(void)setFloatingLabelText:(id)arg1 ;
-(void)updateDefaultFloatingLabelFont;
-(BOOL)adjustsClearButtonRect;
-(double)maxTopInset;
-(BOOL)alwaysFloatLabel;
-(void)setAdjustsClearButtonRect:(BOOL)arg1 ;
-(CGRect)editingRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(void)commonInit;
-(UILabel *)floatingLabel;
-(void)setAttributedPlaceholder:(id)arg1 ;
@end
