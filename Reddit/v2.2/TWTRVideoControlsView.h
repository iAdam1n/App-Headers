/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UISlider, UIButton;

@interface TWTRVideoControlsView : UIView {

	UILabel* _timeLabel;
	UISlider* _scrubber;
	UIButton* _controlButton;

}

@property (nonatomic,readonly) UILabel * timeLabel;                   //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,readonly) UISlider * scrubber;                   //@synthesize scrubber=_scrubber - In the implementation block
@property (nonatomic,readonly) UIButton * controlButton;              //@synthesize controlButton=_controlButton - In the implementation block
-(void)prepareSubviews;
-(void)updateTintColorForSubviews;
-(UIButton *)controlButton;
-(void)updateButtonImageForState:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(UILabel *)timeLabel;
-(UISlider *)scrubber;
@end
