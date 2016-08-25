/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _TtC5Slack18SLKSignInAPIHelper, UILabel, UIButton, SLKActivityIndicator;

@interface Slack.SLKMagicLinkSignInViewController : UIViewController {

	 signInHelper;
	 passwordLongLabel;
	 magicLinkLabel;
	 passwordButton;
	 magicLinkButton;
	 errorMessageLabel;
	 activityIndicator;
	 passwordMagicLinkEvent;

}

@property (retain,nonatomic) _TtC5Slack18SLKSignInAPIHelper * signInHelper; 
@property (retain,nonatomic) UILabel * passwordLongLabel; 
@property (retain,nonatomic) UILabel * magicLinkLabel; 
@property (retain,nonatomic) UIButton * passwordButton; 
@property (retain,nonatomic) UIButton * magicLinkButton; 
@property (retain,nonatomic) UILabel * errorMessageLabel; 
@property (retain,nonatomic) SLKActivityIndicator * activityIndicator; 
-(_TtC5Slack18SLKSignInAPIHelper *)signInHelper;
-(void)setSignInHelper:(_TtC5Slack18SLKSignInAPIHelper *)arg1 ;
-(UILabel *)passwordLongLabel;
-(void)setPasswordLongLabel:(UILabel *)arg1 ;
-(UILabel *)magicLinkLabel;
-(void)setMagicLinkLabel:(UILabel *)arg1 ;
-(UIButton *)passwordButton;
-(void)setPasswordButton:(UIButton *)arg1 ;
-(UIButton *)magicLinkButton;
-(void)setMagicLinkButton:(UIButton *)arg1 ;
-(UILabel *)errorMessageLabel;
-(void)setErrorMessageLabel:(UILabel *)arg1 ;
-(void)magicLink;
-(id)errorAttributedString:(id)arg1 ;
-(void)password;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(SLKActivityIndicator *)activityIndicator;
-(void)setActivityIndicator:(SLKActivityIndicator *)arg1 ;
@end

