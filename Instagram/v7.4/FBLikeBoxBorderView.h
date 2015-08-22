/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:20 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface FBLikeBoxBorderView : UIView {

	double _borderCornerRadius;
	double _borderWidth;
	unsigned long long _caretPosition;
	UIView* _contentView;
	UIColor* _fillColor;
	UIColor* _foregroundColor;

}

@property (assign,nonatomic) double borderCornerRadius;                     //@synthesize borderCornerRadius=_borderCornerRadius - In the implementation block
@property (assign,nonatomic) double borderWidth;                            //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) unsigned long long caretPosition;              //@synthesize caretPosition=_caretPosition - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets; 
@property (nonatomic,retain) UIView * contentView;                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                           //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                     //@synthesize foregroundColor=_foregroundColor - In the implementation block
-(UIEdgeInsets)_borderInsets;
-(void)_initializeContent;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(unsigned long long)caretPosition;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)awakeFromNib;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setBorderWidth:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(double)borderWidth;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIEdgeInsets)contentInsets;
-(double)borderCornerRadius;
-(void)setBorderCornerRadius:(double)arg1 ;
@end
