/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Slack/SLKInvitationViewControllerDelegate.h>

@class NSString, UIColor;

@interface Slack.SLKInvitesEmailViewController : UITableViewController <UITextFieldDelegate, SLKInvitationViewControllerDelegate> {

	 delegate;
	 skipDismissalOnCompletion;
	 isOnboardingContext;
	 dependencies;
	 inviteText;
	 slackText;
	 titleText;
	 inviteContactsStaticText;
	 shareInviteLinkStaticText;
	 emails;
	 UITableViewCellId;
	 SLKTextInputTableViewCellId;
	 shouldShowShareLinkButton;
	 sending;
	 restrictionState;
	 state;
	 alertText;
	 isRequestingShareLink;
	 noAccessError;
	 settingsTitle;
	 cancelTitle;
	 defaultTextColor;
	 isStagingNextField;

}

@property (assign,__weak,nonatomic) id<_TtP5Slack37SLKInvitesEmailViewControllerDelegate_> delegate; 
@property (assign,nonatomic) BOOL skipDismissalOnCompletion; 
@property (assign,nonatomic) BOOL isOnboardingContext; 
@property (assign,nonatomic) BOOL isRequestingShareLink; 
@property (readonly,nonatomic) NSString * noAccessError; 
@property (readonly,nonatomic) NSString * settingsTitle; 
@property (readonly,nonatomic) NSString * cancelTitle; 
@property (readonly,nonatomic) UIColor * defaultTextColor; 
-(id)initWithDependencies:(id)arg1 ;
-(void)invitationViewControllerWillDismiss:(id)arg1 withInviteesCount:(long long)arg2 ;
-(NSString *)noAccessError;
-(NSString *)settingsTitle;
-(BOOL)skipDismissalOnCompletion;
-(void)setSkipDismissalOnCompletion:(BOOL)arg1 ;
-(BOOL)isOnboardingContext;
-(void)setIsOnboardingContext:(BOOL)arg1 ;
-(id)sendButton:(BOOL)arg1 ;
-(void)handleStateChange:(id)arg1 ;
-(void)presentTextField:(id)arg1 ;
-(id)getFirstResponder:(id)arg1 ;
-(void)inviteTapped;
-(BOOL)isRequestingShareLink;
-(void)setIsRequestingShareLink:(BOOL)arg1 ;
-(id)shareInviteLinkText;
-(void)handleTextInputSelection:(id)arg1 ;
-(void)saveEmail:(id)arg1 key:(long long)arg2 ;
-(void)addNewEmailFieldIfNeccessary:(long long)arg1 string:(id)arg2 ;
-(void)addEmailCell;
-(void)checkSendButton;
-(void)handleClear:(id)arg1 ;
-(void)removeEmailCell:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_TtP5Slack37SLKInvitesEmailViewControllerDelegate_>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<_TtP5Slack37SLKInvitesEmailViewControllerDelegate_>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)footerView;
-(NSString *)cancelTitle;
-(UIColor *)defaultTextColor;
@end

