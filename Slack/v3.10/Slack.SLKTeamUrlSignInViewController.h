/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack.SLKFloatLabelSignInViewController.h>

@class _TtC5Slack18SLKSignInAPIHelper, SLKAccount, NSArray, SLKDependencies;

@interface Slack.SLKTeamUrlSignInViewController : Slack.SLKFloatLabelSignInViewController {

	 signInHelper;
	 currentAccount;
	 signedInAccounts;
	 dependencies;
	 isSignInFromTeamSwitcher;

}

@property (retain,nonatomic) _TtC5Slack18SLKSignInAPIHelper * signInHelper; 
@property (retain,nonatomic) SLKAccount * currentAccount; 
@property (copy,nonatomic) NSArray * signedInAccounts; 
@property (assign,__weak,nonatomic) SLKDependencies * dependencies; 
@property (assign,nonatomic) BOOL isSignInFromTeamSwitcher; 
-(_TtC5Slack18SLKSignInAPIHelper *)signInHelper;
-(void)setSignInHelper:(_TtC5Slack18SLKSignInAPIHelper *)arg1 ;
-(void)setIsSignInFromTeamSwitcher:(BOOL)arg1 ;
-(BOOL)isInputTextValidWithInputText:(id)arg1 ;
-(id)inputTextValidationResultsWithInputText:(id)arg1 ;
-(BOOL)isSignInFromTeamSwitcher;
-(void)bottomLabelTapped:(id)arg1 ;
-(NSArray *)signedInAccounts;
-(void)setSignedInAccounts:(NSArray *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithDependencies:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(SLKAccount *)currentAccount;
-(void)setCurrentAccount:(SLKAccount *)arg1 ;
-(void)nextStep;
@end
