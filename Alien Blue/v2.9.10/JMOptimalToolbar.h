/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, JMOptimalSwitch, JMOptimalProgressBar;

@interface JMOptimalToolbar : UIView {

	UIButton* _settingsButton;
	JMOptimalSwitch* _optimalSwitch;
	JMOptimalProgressBar* _progressBar;

}

@property (retain) UIButton * settingsButton;                       //@synthesize settingsButton=_settingsButton - In the implementation block
@property (retain) JMOptimalSwitch * optimalSwitch;                 //@synthesize optimalSwitch=_optimalSwitch - In the implementation block
@property (retain) JMOptimalProgressBar * progressBar;              //@synthesize progressBar=_progressBar - In the implementation block
-(void)applyThemeSettings;
-(void)setSettingsButton:(UIButton *)arg1 ;
-(JMOptimalSwitch *)optimalSwitch;
-(id)initWithFrame:(CGRect)arg1 contentIcon:(id)arg2 ;
-(void)setOptimalSwitch:(JMOptimalSwitch *)arg1 ;
-(void)layoutSubviews;
-(JMOptimalProgressBar *)progressBar;
-(void)setProgressBar:(JMOptimalProgressBar *)arg1 ;
-(UIButton *)settingsButton;
@end

