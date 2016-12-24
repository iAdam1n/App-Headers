/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, MNLoadingIndicator, UIColor, NSString;

@interface MNButton : UIView {

	UIButton* _button;
	unsigned long long _colorScheme;
	MNLoadingIndicator* _loadingIndicator;
	UIColor* _buttonBackgroundColor;
	UIColor* _buttonBorderColor;
	UIColor* _buttonTitleColor;
	double _horizontalPaddingRatio;
	double _verticalPadding;
	NSString* _buttonTitleText;

}

@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) double horizontalPaddingRatio;              //@synthesize horizontalPaddingRatio=_horizontalPaddingRatio - In the implementation block
@property (assign,nonatomic) double verticalPadding;                     //@synthesize verticalPadding=_verticalPadding - In the implementation block
@property (nonatomic,copy) NSString * buttonTitleText;                   //@synthesize buttonTitleText=_buttonTitleText - In the implementation block
-(void)setHorizontalPaddingRatio:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 icon:(id)arg3 fontStyle:(unsigned long long)arg4 colorScheme:(unsigned long long)arg5 ;
-(void)_layoutLoadingIndicator;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 icon:(id)arg3 fontStyle:(unsigned long long)arg4 colorScheme:(unsigned long long)arg5 loadingIndicatorStyle:(unsigned long long)arg6 ;
-(NSString *)buttonTitleText;
-(void)startLoadingAnimation;
-(void)stopLoadingAnimation;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 fontStyle:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 icon:(id)arg3 ;
-(void)_layoutButton;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 icon:(id)arg3 fontStyle:(unsigned long long)arg4 ;
-(void)setButtonTitleColor:(id)arg1 ;
-(void)setButtonBorderColor:(id)arg1 ;
-(void)_buttonTouchedDown;
-(void)_buttonTouchedUp;
-(double)_availableWidthWithSize:(CGSize)arg1 ;
-(void)_animateButtonWithAlpha:(double)arg1 ;
-(double)horizontalPaddingRatio;
-(void)layoutSubviews;
-(BOOL)enabled;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setAdjustsImageWhenHighlighted:(BOOL)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(double)verticalPadding;
-(void)setVerticalPadding:(double)arg1 ;
-(void)setButtonTitleText:(NSString *)arg1 ;
-(void)setButtonBackgroundColor:(id)arg1 ;
@end
