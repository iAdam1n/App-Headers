/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIStepper, NSString, UILabel;

@interface FBSettingsStepperSpecifierTableViewCell : UITableViewCell {

	long long _decimalPrecision;
	UIStepper* _stepper;
	NSString* _title;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) UIStepper * stepper;               //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
-(void)setCellTitle:(id)arg1 ;
-(void)updateTitleValue;
-(UIStepper *)stepper;
-(void)setStepperValue:(double)arg1 ;
-(void)setStepper:(UIStepper *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMaxValue:(double)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(void)setStepValue:(double)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
@end
