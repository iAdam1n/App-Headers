/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor, UIView, UILabel, MKBadgeViewStylesheet;

@interface MKBadgeView : UIView {

	BOOL _shouldBeHidden;
	NSString* _text;
	UIColor* _textColor;
	UIColor* _bgColor;
	double _borderWidth;
	UIColor* _borderColor;
	double _transformScale;
	UIView* _backgroundView;
	UILabel* _textLabel;
	MKBadgeViewStylesheet* _stylesheet;

}

@property (nonatomic,retain) UIView * backgroundView;                         //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                             //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) BOOL shouldBeHidden;                             //@synthesize shouldBeHidden=_shouldBeHidden - In the implementation block
@property (nonatomic,retain) MKBadgeViewStylesheet * stylesheet;              //@synthesize stylesheet=_stylesheet - In the implementation block
@property (nonatomic,copy) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                             //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * bgColor;                               //@synthesize bgColor=_bgColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                              //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                           //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double transformScale;                           //@synthesize transformScale=_transformScale - In the implementation block
-(void)mk_commonInit;
-(void)setShouldBeHidden:(BOOL)arg1 ;
-(BOOL)shouldBeHidden;
-(void)updateFramesForTextChange;
-(void)updateWithText:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTransformScale:(double)arg1 ;
-(double)transformScale;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)viewForBaselineLayout;
-(UIColor *)textColor;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UILabel *)textLabel;
-(UIView *)backgroundView;
-(UIColor *)borderColor;
-(double)borderWidth;
-(id)accessibilityLabel;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setupSubviews;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)showAnimated:(BOOL)arg1 ;
-(MKBadgeViewStylesheet *)stylesheet;
-(void)setStylesheet:(MKBadgeViewStylesheet *)arg1 ;
-(void)setBgColor:(UIColor *)arg1 ;
-(UIColor *)bgColor;
-(void)setText:(id)arg1 animated:(BOOL)arg2 ;
@end
