/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SLKSpringyButton, UILabel;

@interface SLKVoiceCallButtonView : UIView {

	int _type;
	/*^block*/id _buttonWasTappedBlock;
	SLKSpringyButton* _button;
	UILabel* _label;

}

@property (assign,nonatomic) int type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id buttonWasTappedBlock;                         //@synthesize buttonWasTappedBlock=_buttonWasTappedBlock - In the implementation block
@property (assign,nonatomic,__weak) SLKSpringyButton * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;                        //@synthesize label=_label - In the implementation block
-(id)buttonWasTappedBlock;
-(void)updateLabelWithText:(id)arg1 ;
-(void)setButtonWasTappedBlock:(id)arg1 ;
-(SLKSpringyButton *)button;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)awakeFromNib;
-(void)buttonTapped:(id)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setButton:(SLKSpringyButton *)arg1 ;
-(void)setButtonEnabled:(BOOL)arg1 ;
@end

