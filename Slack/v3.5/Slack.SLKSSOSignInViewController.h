/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Slack/Slack.SLKSignInAPIHelperDelegate.h>

@class _TtC5Slack18SLKSignInAPIHelper, UIView, UIImageView, UILabel, UIButton;

@interface Slack.SLKSSOSignInViewController : UIViewController <Slack.SLKSignInAPIHelperDelegate> {

	 signInHelper;
	 enterpriseIconContainerView;
	 enterpriseIconImageView;
	 superCirclesContainerView;
	 logoImageView;
	 teamNameLabel;
	 mainLabel;
	 signInButton;
	 separtorView;
	 guestAccountLabel;
	 guestInButton;
	 normalAttributes;
	 boldAttributes;
	 dependencies;

}

@property (retain,nonatomic) _TtC5Slack18SLKSignInAPIHelper * signInHelper; 
@property (retain,nonatomic) UIView * enterpriseIconContainerView; 
@property (retain,nonatomic) UIImageView * enterpriseIconImageView; 
@property (retain,nonatomic) UIView * superCirclesContainerView; 
@property (retain,nonatomic) UIImageView * logoImageView; 
@property (retain,nonatomic) UILabel * teamNameLabel; 
@property (retain,nonatomic) UILabel * mainLabel; 
@property (retain,nonatomic) UIButton * signInButton; 
@property (retain,nonatomic) UIView * separtorView; 
@property (retain,nonatomic) UILabel * guestAccountLabel; 
@property (retain,nonatomic) UIButton * guestInButton; 
-(id)initWithDependencies:(id)arg1 ;
-(_TtC5Slack18SLKSignInAPIHelper *)signInHelper;
-(void)setSignInHelper:(_TtC5Slack18SLKSignInAPIHelper *)arg1 ;
-(void)signInSuccess:(id)arg1 shouldShowPushNotificationGate:(BOOL)arg2 ;
-(void)signInSuccessNoEnterpriseTeams:(id)arg1 enterpriseName:(id)arg2 ;
-(void)signInFailed:(id)arg1 error:(id)arg2 ;
-(UIImageView *)logoImageView;
-(void)setLogoImageView:(UIImageView *)arg1 ;
-(UIView *)enterpriseIconContainerView;
-(void)setEnterpriseIconContainerView:(UIView *)arg1 ;
-(UIImageView *)enterpriseIconImageView;
-(void)setEnterpriseIconImageView:(UIImageView *)arg1 ;
-(UIView *)superCirclesContainerView;
-(void)setSuperCirclesContainerView:(UIView *)arg1 ;
-(UILabel *)teamNameLabel;
-(void)setTeamNameLabel:(UILabel *)arg1 ;
-(UIView *)separtorView;
-(void)setSepartorView:(UIView *)arg1 ;
-(UILabel *)guestAccountLabel;
-(void)setGuestAccountLabel:(UILabel *)arg1 ;
-(UIButton *)guestInButton;
-(void)setGuestInButton:(UIButton *)arg1 ;
-(void)setupIcons;
-(void)setupMainLabels;
-(void)setupGuestOwnerLabel;
-(void)signIn:(id)arg1 ;
-(void)guestIn:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setMainLabel:(UILabel *)arg1 ;
-(UIButton *)signInButton;
-(void)setSignInButton:(UIButton *)arg1 ;
-(UILabel *)mainLabel;
@end
