/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, CAShapeLayer;

@interface FBReactionFooterView : UIControl {

	UIView* _backgroundView;
	CAShapeLayer* _backgroundMaskLayer;
	UIView* _borderView;
	unsigned long long _corners;
	double _cornerRadius;
	UIView* _contentView;
	UIView* _actionView;
	double _minContentHeight;
	UIEdgeInsets _contentViewInsets;

}

@property (nonatomic,retain) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * actionView;                         //@synthesize actionView=_actionView - In the implementation block
@property (assign,nonatomic) double minContentHeight;                     //@synthesize minContentHeight=_minContentHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentViewInsets;              //@synthesize contentViewInsets=_contentViewInsets - In the implementation block
-(id)initWithRoundedCorners:(unsigned long long)arg1 cornerRadius:(double)arg2 ;
-(void)setActionView:(UIView *)arg1 ;
-(double)minContentHeight;
-(void)setMinContentHeight:(double)arg1 ;
-(void)layoutBackground;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)contentViewInsets;
-(void)setContentViewInsets:(UIEdgeInsets)arg1 ;
-(UIView *)actionView;
@end
