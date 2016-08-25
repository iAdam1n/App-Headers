/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECLabeledTextFieldTableViewCell.h>

@class NSString, NSArray, UISlider, UILabel;

@interface ECSliderTableViewCell : ECLabeledTextFieldTableViewCell {

	NSString* _unit;
	NSArray* _allowedValues;
	/*^block*/id _valueChangeBlock;
	UISlider* _slider;
	UILabel* _currentValueLabel;

}

@property (retain) UISlider * slider;                              //@synthesize slider=_slider - In the implementation block
@property (retain) UILabel * currentValueLabel;                    //@synthesize currentValueLabel=_currentValueLabel - In the implementation block
@property (retain) NSString * unit;                                //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) NSArray * allowedValues;              //@synthesize allowedValues=_allowedValues - In the implementation block
@property (nonatomic,copy) id valueChangeBlock;                    //@synthesize valueChangeBlock=_valueChangeBlock - In the implementation block
-(void)setValueChangeBlock:(id)arg1 ;
-(UILabel *)currentValueLabel;
-(void)setCurrentValueLabel:(UILabel *)arg1 ;
-(void)setAllowedValues:(NSArray *)arg1 ;
-(void)updateCurrentValueLabel;
-(id)valueChangeBlock;
-(id)selectedSliderValueString;
-(void)setSliderValueString:(id)arg1 ;
-(void)setSliderFloatValue:(float)arg1 ;
-(void)setMinimumValue:(float)arg1 maximumValue:(float)arg2 ;
-(void)setSliderEnabled:(BOOL)arg1 ;
-(void)setValueLabelText:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setDefaults;
-(void)sliderValueChanged:(id)arg1 ;
-(void)setSlider:(UISlider *)arg1 ;
-(UISlider *)slider;
-(NSArray *)allowedValues;
-(NSString *)unit;
-(void)setUnit:(NSString *)arg1 ;
@end

