/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class NSString, UIFont, UIColor, UILabel, UIImageView;

@interface SKPEmoticonPickerSectionTitleHeaderView : UICollectionReusableView {

	NSString* _title;
	UIFont* _titleFont;
	UIColor* _titleColor;
	NSString* _glyph;
	UIColor* _glyphColor;
	UILabel* _label;
	UIImageView* _glyphImageView;

}

@property (nonatomic,retain) UILabel * label;                           //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * glyphImageView;              //@synthesize glyphImageView=_glyphImageView - In the implementation block
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                        //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                      //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) NSString * glyph;                            //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                      //@synthesize glyphColor=_glyphColor - In the implementation block
-(void)updateGlyphImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setGlyphImageView:(UIImageView *)arg1 ;
-(UIImageView *)glyphImageView;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(void)setGlyph:(NSString *)arg1 ;
-(NSString *)glyph;
@end
