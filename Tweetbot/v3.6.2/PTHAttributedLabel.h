/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class NSAttributedString, UIColor, UIFont;

@interface PTHAttributedLabel : UIControl {

	CGRect _textFrameRect;
	CTFrameRef _textFrame;
	double _lastIntrinsicWidth;
	unsigned char _textAlignment;
	unsigned char _lineBreakMode;
	NSAttributedString* _attributedText;
	UIColor* _shadowColor;
	UIFont* _font;
	UIColor* _textColor;
	double _lineHeightMultiple;
	/*^block*/id _preferredTextStyleBlock;
	NSAttributedString* _displayText;
	CGSize _shadowOffset;

}

@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                            //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                          //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                  //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                            //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) unsigned char textAlignment;                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) unsigned char lineBreakMode;                    //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (assign,nonatomic) double lineHeightMultiple;                      //@synthesize lineHeightMultiple=_lineHeightMultiple - In the implementation block
@property (nonatomic,copy) id preferredTextStyleBlock;                       //@synthesize preferredTextStyleBlock=_preferredTextStyleBlock - In the implementation block
@property (nonatomic,retain) NSAttributedString * displayText;               //@synthesize displayText=_displayText - In the implementation block
-(void)setPreferredTextStyleBlock:(id)arg1 ;
-(void)setPreferredTextStyle:(id)arg1 ;
-(id)attributeNamed:(id)arg1 hitRect:(CGRect)arg2 contentRect:(CGRect)arg3 hitFrame:(CGRect*)arg4 longestEffectiveRange:(NSRange*)arg5 ;
-(void)resetDisplayText;
-(id)attributeNamed:(id)arg1 forEvent:(id)arg2 hitFrame:(CGRect*)arg3 longestEffectiveRange:(NSRange*)arg4 ;
-(id)newDisplayText;
-(id)preferredTextStyleBlock;
-(void)sizeToFitTop;
-(CTFrameRef)textFrameForRect:(CGRect)arg1 ;
-(id)attributesAtLocation:(CGPoint)arg1 contentRect:(CGRect)arg2 hitFrame:(CGRect*)arg3 longestEffectiveRange:(NSRange*)arg4 ;
-(void)_updateTextStyle;
-(NSAttributedString *)displayText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTextAlignment:(unsigned char)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setLineBreakMode:(unsigned char)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(NSAttributedString *)attributedText;
-(UIFont *)font;
-(UIColor *)textColor;
-(unsigned char)textAlignment;
-(unsigned char)lineBreakMode;
-(void)drawTextInRect:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(id)accessibilityValue;
-(void)setDisplayText:(NSAttributedString *)arg1 ;
-(double)lineHeightMultiple;
-(void)setLineHeightMultiple:(double)arg1 ;
@end

