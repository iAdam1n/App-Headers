/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface SThanksForRegisteringView : UIView {

	UILabel* _registrationEmail;
	UILabel* _emailSentLabel;
	UILabel* _pleaseActivateLabel;
	UILabel* _ThanksForRegisteringLabel;
	UIButton* _okButton;

}

@property (nonatomic,retain) UILabel * registrationEmail;                      //@synthesize registrationEmail=_registrationEmail - In the implementation block
@property (nonatomic,retain) UILabel * emailSentLabel;                         //@synthesize emailSentLabel=_emailSentLabel - In the implementation block
@property (nonatomic,retain) UILabel * pleaseActivateLabel;                    //@synthesize pleaseActivateLabel=_pleaseActivateLabel - In the implementation block
@property (nonatomic,retain) UILabel * ThanksForRegisteringLabel;              //@synthesize ThanksForRegisteringLabel=_ThanksForRegisteringLabel - In the implementation block
@property (nonatomic,retain) UIButton * okButton;                              //@synthesize okButton=_okButton - In the implementation block
+(id)thanksForRegisteringView;
-(void)setPleaseActivateLabel:(UILabel *)arg1 ;
-(UILabel *)ThanksForRegisteringLabel;
-(UILabel *)emailSentLabel;
-(UILabel *)pleaseActivateLabel;
-(void)setRegistrationEmail:(UILabel *)arg1 ;
-(void)setEmailSentLabel:(UILabel *)arg1 ;
-(void)setThanksForRegisteringLabel:(UILabel *)arg1 ;
-(UILabel *)registrationEmail;
-(void)dealloc;
-(void)awakeFromNib;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
@end
