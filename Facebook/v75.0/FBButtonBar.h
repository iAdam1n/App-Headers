/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableDictionary, UIImageView, NSMutableArray, NSArray, UIImage, UIFont;

@interface FBButtonBar : UIView {

	NSMutableDictionary* _centerImages;
	NSMutableDictionary* _leftCapImages;
	NSMutableDictionary* _rightCapImages;
	NSMutableDictionary* _leftRightCapImages;
	NSMutableDictionary* _titleColors;
	NSMutableDictionary* _widths;
	UIImageView* _backgroundView;
	NSMutableArray* _buttonSeparatorImageViews;
	BOOL _showSeparator;
	NSArray* _items;
	NSArray* _buttons;
	UIImage* _buttonSeparatorImage;
	UIFont* _buttonTitleFont;
	unsigned long long _buttonLayoutStyle;
	UIEdgeInsets _buttonSeparatorInsets;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,copy) NSArray * buttons;                                   //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,copy) NSArray * items;                                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * buttonSeparatorImage;                    //@synthesize buttonSeparatorImage=_buttonSeparatorImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets buttonSeparatorInsets;                //@synthesize buttonSeparatorInsets=_buttonSeparatorInsets - In the implementation block
@property (assign,nonatomic) BOOL showSeparator;                                //@synthesize showSeparator=_showSeparator - In the implementation block
@property (nonatomic,retain) UIFont * buttonTitleFont;                          //@synthesize buttonTitleFont=_buttonTitleFont - In the implementation block
@property (assign,nonatomic) unsigned long long buttonLayoutStyle;              //@synthesize buttonLayoutStyle=_buttonLayoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                    //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
-(void)setButtonTitleFont:(UIFont *)arg1 ;
-(void)setButtonLayoutStyle:(unsigned long long)arg1 ;
-(id)buttonForItem:(id)arg1 ;
-(void)setButtonTitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setWidth:(double)arg1 forButtonAtIndex:(unsigned long long)arg2 ;
-(void)setButtonSeparatorImage:(UIImage *)arg1 ;
-(void)setButtonSeparatorInsets:(UIEdgeInsets)arg1 ;
-(void)setButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 capType:(unsigned long long)arg3 ;
-(UIImage *)buttonSeparatorImage;
-(UIEdgeInsets)buttonSeparatorInsets;
-(void)_updateButtonBackgroundImages;
-(void)_updateButtonTitleColors;
-(void)_updateButtonTitleFonts;
-(void)_updateButtonLayoutStyle;
-(void)_updateSeparators;
-(void)_buttonTouchUpInside:(id)arg1 event:(id)arg2 ;
-(id)_imageDictionaryForCapType:(unsigned long long)arg1 ;
-(void)_setObject:(id)arg1 forState:(unsigned long long)arg2 inDictionary:(id)arg3 ;
-(double)widthForButtonAtIndex:(unsigned long long)arg1 ;
-(double*)_divideWidth:(double)arg1 numberOfElements:(unsigned long long)arg2 ;
-(id)buttonBackgroundImageForState:(unsigned long long)arg1 capType:(unsigned long long)arg2 ;
-(id)buttonTitleColorForState:(unsigned long long)arg1 ;
-(id)itemForButton:(id)arg1 ;
-(void)buttonBarItem:(id)arg1 propertyDidChange:(id)arg2 ;
-(unsigned long long)buttonLayoutStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UIImage *)backgroundImage;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(BOOL)isAccessibilityElement;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)buttons;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(void)setButtons:(NSArray *)arg1 ;
-(UIFont *)buttonTitleFont;
@end
