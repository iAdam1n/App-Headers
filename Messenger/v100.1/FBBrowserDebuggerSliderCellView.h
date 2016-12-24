/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UISlider, UILabel;

@interface FBBrowserDebuggerSliderCellView : UITableViewCell {

	UISlider* _slider;
	UILabel* _sliderValueLabel;

}

@property (nonatomic,readonly) UISlider * slider;                       //@synthesize slider=_slider - In the implementation block
@property (nonatomic,readonly) UILabel * sliderValueLabel;              //@synthesize sliderValueLabel=_sliderValueLabel - In the implementation block
-(void)sliderValueChanged:(id)arg1 ;
-(UILabel *)sliderValueLabel;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISlider *)slider;
@end
