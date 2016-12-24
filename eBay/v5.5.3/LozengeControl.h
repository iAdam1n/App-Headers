/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIControl.h>

@class UIColor, UIFont, NSString, UIImage;

@interface LozengeControl : UIControl {

	UIColor* fillColor;
	UIColor* highlightColor;
	UIColor* textColor;
	UIColor* highlightedTextColor;
	UIFont* font;
	NSString* text;
	CGSize minSize;
	UIImage* image;
	UIImage* backgroundImage;
	CGSize labelOffset;
	UIEdgeInsets textInsets;

}

@property (nonatomic,retain) UIColor * fillColor; 
@property (nonatomic,retain) UIColor * highlightColor; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * highlightedTextColor; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (assign,nonatomic) CGSize labelOffset; 
@property (assign,nonatomic) UIEdgeInsets textInsets; 
@property (assign,nonatomic) CGSize minSize; 
-(CGSize)labelOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)backgroundImage;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(void)setSelected:(BOOL)arg1 ;
-(CGSize)minSize;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIColor *)highlightedTextColor;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)commonInit;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setLabelOffset:(CGSize)arg1 ;
-(void)setTextInsets:(UIEdgeInsets)arg1 ;
-(void)setDefaults;
-(UIEdgeInsets)textInsets;
@end
