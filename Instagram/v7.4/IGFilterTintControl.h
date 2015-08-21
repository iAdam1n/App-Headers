/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:11 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UITabBarDelegate.h>
#import <Instagram/IGFilterTintColorPickerDelegate.h>

@protocol IGFilterTintControlDelegate;
@class UITabBar, UITabBarItem, UIView, IGFilterTintColorPicker, IGSloppyTouchSlider, UILabel, NSString;

@interface IGFilterTintControl : UIControl <UITabBarDelegate, IGFilterTintColorPickerDelegate> {

	BOOL _hasAdjustHintShown;
	id<IGFilterTintControlDelegate> _delegate;
	unsigned long long _currentState;
	UITabBar* _tintTypeTabBar;
	UITabBarItem* _shadowTab;
	UITabBarItem* _highlightTab;
	UIView* _lineSeparator;
	IGFilterTintColorPicker* _colorPicker;
	IGSloppyTouchSlider* _controlSlider;
	UILabel* _valueLabel;
	UILabel* _adjustHintLabel;
	unsigned long long _tintShadowsColorIndex;
	unsigned long long _tintHighlightsColorIndex;
	double _tintShadowsIntensity;
	double _tintHighlighsIntensity;

}

@property (assign,nonatomic,__weak) id<IGFilterTintControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long currentState;                              //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) double value; 
@property (nonatomic,retain) UITabBar * tintTypeTabBar;                                    //@synthesize tintTypeTabBar=_tintTypeTabBar - In the implementation block
@property (nonatomic,retain) UITabBarItem * shadowTab;                                     //@synthesize shadowTab=_shadowTab - In the implementation block
@property (nonatomic,retain) UITabBarItem * highlightTab;                                  //@synthesize highlightTab=_highlightTab - In the implementation block
@property (nonatomic,retain) UIView * lineSeparator;                                       //@synthesize lineSeparator=_lineSeparator - In the implementation block
@property (nonatomic,retain) IGFilterTintColorPicker * colorPicker;                        //@synthesize colorPicker=_colorPicker - In the implementation block
@property (nonatomic,retain) IGSloppyTouchSlider * controlSlider;                          //@synthesize controlSlider=_controlSlider - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                         //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UILabel * adjustHintLabel;                                    //@synthesize adjustHintLabel=_adjustHintLabel - In the implementation block
@property (assign,nonatomic) BOOL hasAdjustHintShown;                                      //@synthesize hasAdjustHintShown=_hasAdjustHintShown - In the implementation block
@property (assign,nonatomic) BOOL isTintTypeShadow; 
@property (assign,nonatomic) unsigned long long tintShadowsColorIndex;                     //@synthesize tintShadowsColorIndex=_tintShadowsColorIndex - In the implementation block
@property (assign,nonatomic) unsigned long long tintHighlightsColorIndex;                  //@synthesize tintHighlightsColorIndex=_tintHighlightsColorIndex - In the implementation block
@property (assign,nonatomic) double tintShadowsIntensity;                                  //@synthesize tintShadowsIntensity=_tintShadowsIntensity - In the implementation block
@property (assign,nonatomic) double tintHighlighsIntensity;                                //@synthesize tintHighlighsIntensity=_tintHighlighsIntensity - In the implementation block
@property (assign,nonatomic) double priorValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tintShadowsIntensity;
-(void)setPriorValue:(double)arg1 ;
-(unsigned long long)tintShadowsColorIndex;
-(unsigned long long)tintHighlightsColorIndex;
-(void)setValuesForTintShadowsColor:(unsigned long long)arg1 tintHighlightsColor:(unsigned long long)arg2 tintShadowsIntensity:(double)arg3 tintHighlightsIntensity:(double)arg4 ;
-(void)setTintShadowsIntensity:(double)arg1 ;
-(double)priorValue;
-(void)setTintShadowsColorIndex:(unsigned long long)arg1 ;
-(void)setTintHighlightsColorIndex:(unsigned long long)arg1 ;
-(void)cancelIntensityAdjust;
-(void)applyIntensityAdjust;
-(void)onSliderChange:(id)arg1 ;
-(CGRect)labelRect;
-(IGSloppyTouchSlider *)controlSlider;
-(void)setControlSlider:(IGSloppyTouchSlider *)arg1 ;
-(void)colorPicker:(id)arg1 didChangeColorFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)colorPickerShouldPresentIntensitySlider:(id)arg1 ;
-(BOOL)isAnyColorSelected;
-(UITabBar *)tintTypeTabBar;
-(UIView *)lineSeparator;
-(IGFilterTintColorPicker *)colorPicker;
-(UILabel *)adjustHintLabel;
-(BOOL)hasAdjustHintShown;
-(void)setHasAdjustHintShown:(BOOL)arg1 ;
-(void)hideSliderShowPicker;
-(UITabBarItem *)shadowTab;
-(BOOL)isTintTypeShadow;
-(UITabBarItem *)highlightTab;
-(void)setTintHighlighsIntensity:(double)arg1 ;
-(void)setIsTintTypeShadow:(BOOL)arg1 ;
-(void)showAdjustHintLabel;
-(void)hidePickerShowSlider;
-(double)tintHighlighsIntensity;
-(void)setTintTypeTabBar:(UITabBar *)arg1 ;
-(void)setShadowTab:(UITabBarItem *)arg1 ;
-(void)setHighlightTab:(UITabBarItem *)arg1 ;
-(void)setLineSeparator:(UIView *)arg1 ;
-(void)setColorPicker:(IGFilterTintColorPicker *)arg1 ;
-(void)setAdjustHintLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFilterTintControlDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFilterTintControlDelegate>)delegate;
-(unsigned long long)currentState;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)tabBar:(id)arg1 didSelectItem:(id)arg2 ;
-(void)setValue:(double)arg1 animated:(BOOL)arg2 ;
-(void)setCurrentState:(unsigned long long)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)updateValueLabel;
-(UILabel *)valueLabel;
@end

