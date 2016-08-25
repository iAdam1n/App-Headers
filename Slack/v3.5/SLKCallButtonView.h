/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SLKSpringyButton, UILabel, NSLayoutConstraint;

@interface SLKCallButtonView : UIView {

	unsigned long long _type;
	/*^block*/id _buttonWasTappedBlock;
	SLKSpringyButton* _button;
	UILabel* _label;
	NSLayoutConstraint* _spaceConstraint;

}

@property (assign,nonatomic,__weak) SLKSpringyButton * button;                         //@synthesize button=_button - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;                                   //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * spaceConstraint;              //@synthesize spaceConstraint=_spaceConstraint - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id buttonWasTappedBlock;                                    //@synthesize buttonWasTappedBlock=_buttonWasTappedBlock - In the implementation block
-(NSLayoutConstraint *)spaceConstraint;
-(void)buttonTapped;
-(id)buttonWasTappedBlock;
-(void)updateLabelWithText:(id)arg1 ;
-(void)setButtonWasTappedBlock:(id)arg1 ;
-(void)setSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(SLKSpringyButton *)button;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)awakeFromNib;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setButton:(SLKSpringyButton *)arg1 ;
-(void)setButtonEnabled:(BOOL)arg1 ;
@end

