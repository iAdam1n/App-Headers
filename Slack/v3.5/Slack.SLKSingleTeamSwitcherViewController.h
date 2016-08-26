/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack.SLKTeamSwitcherBaseViewController.h>

@class UIView, UILabel, UIImageView, UIButton;

@interface Slack.SLKSingleTeamSwitcherViewController : Slack.SLKTeamSwitcherBaseViewController {

	 containerView;
	 teamHeaderView;
	 teamHeaderLabel;
	 teamIconImageView;
	 teamNameLabel;
	 teamDomainLabel;
	 onlineStatusLabel;
	 usernameLabel;
	 profileAccountButton;
	 settingsButton;
	 currentUser;
	 modalNavController;

}

@property (retain,nonatomic) UIView * containerView; 
@property (retain,nonatomic) UIView * teamHeaderView; 
@property (retain,nonatomic) UILabel * teamHeaderLabel; 
@property (retain,nonatomic) UIImageView * teamIconImageView; 
@property (retain,nonatomic) UILabel * teamNameLabel; 
@property (retain,nonatomic) UILabel * teamDomainLabel; 
@property (retain,nonatomic) UILabel * onlineStatusLabel; 
@property (retain,nonatomic) UILabel * usernameLabel; 
@property (retain,nonatomic) UIButton * profileAccountButton; 
@property (retain,nonatomic) UIButton * settingsButton; 
-(id)initWithDependencies:(id)arg1 ;
-(UILabel *)usernameLabel;
-(void)setupView;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(void)updateTeamIcon;
-(void)updateTheme;
-(void)showLoadingState:(BOOL)arg1 ;
-(UILabel *)teamNameLabel;
-(void)setTeamNameLabel:(UILabel *)arg1 ;
-(UILabel *)onlineStatusLabel;
-(void)setOnlineStatusLabel:(UILabel *)arg1 ;
-(id)initWithDependencies:(id)arg1 nibName:(id)arg2 ;
-(UIView *)teamHeaderView;
-(void)setTeamHeaderView:(UIView *)arg1 ;
-(UILabel *)teamHeaderLabel;
-(void)setTeamHeaderLabel:(UILabel *)arg1 ;
-(UIImageView *)teamIconImageView;
-(void)setTeamIconImageView:(UIImageView *)arg1 ;
-(UILabel *)teamDomainLabel;
-(void)setTeamDomainLabel:(UILabel *)arg1 ;
-(UIButton *)profileAccountButton;
-(void)setProfileAccountButton:(UIButton *)arg1 ;
-(void)setSettingsButton:(UIButton *)arg1 ;
-(void)doneLoading;
-(void)updateNameAndOnlineStatus;
-(void)profileAccount:(id)arg1 ;
-(void)settings:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(void)updateView;
-(UIButton *)settingsButton;
@end
