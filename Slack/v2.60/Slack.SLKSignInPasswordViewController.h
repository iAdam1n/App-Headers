/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack.SLKSignInInputViewController.h>

@class NSString;

@interface Slack.SLKSignInPasswordViewController : Slack.SLKSignInInputViewController {

	 passwordDescription;
	 onePasswordLoginTimer;

}

@property (readonly,nonatomic) NSString * passwordDescription; 
-(id)initWithApiHelper:(id)arg1 addingTeam:(BOOL)arg2 ;
-(void)inputTextFieldTextDidChange:(id)arg1 ;
-(void)nextButtonPressed;
-(void)continueOnePasswordSignIn;
-(void)didTapFooterView;
-(NSString *)passwordDescription;
-(void)setupPasswordInputTextField;
-(void)showHideButtonPressed;
-(void)refreshShowHideButtonUI;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

