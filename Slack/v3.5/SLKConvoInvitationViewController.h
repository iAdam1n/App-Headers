/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/SLKInvitationViewController.h>
#import <Slack/SLKInvitationViewControllerDelegate.h>

@class SLKDependencies, NSString;

@interface SLKConvoInvitationViewController : SLKInvitationViewController <SLKInvitationViewControllerDelegate> {

	BOOL _creating;
	BOOL _didPresentRestrictedWarning;
	SLKDependencies* _dependencies;

}

@property (assign,getter=isCreating,nonatomic) BOOL creating;                    //@synthesize creating=_creating - In the implementation block
@property (assign,nonatomic) BOOL didPresentRestrictedWarning;                   //@synthesize didPresentRestrictedWarning=_didPresentRestrictedWarning - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,copy) id completion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPreselectedUserIds:(id)arg1 dependencies:(id)arg2 ;
-(void)openViewController:(id)arg1 ;
-(id)initWithInvitationDataSource:(id)arg1 dependencies:(id)arg2 ;
-(id)invitationViewControllerConfirmationBody:(id)arg1 ;
-(id)invitationViewControllerConfirmationButtonTitle:(id)arg1 ;
-(BOOL)invitationViewControllerRequiresConfirmation:(id)arg1 ;
-(BOOL)invitationViewControllerCanDismiss:(id)arg1 ;
-(void)invitationViewController:(id)arg1 willSendInvitationTo:(id)arg2 ;
-(void)invitationViewController:(id)arg1 didSelectInvitee:(id)arg2 ;
-(void)invitationViewController:(id)arg1 didDeselectInvitee:(id)arg2 ;
-(void)openViewControllerWithUserId:(id)arg1 teamId:(id)arg2 ;
-(void)setCreating:(BOOL)arg1 ;
-(void)openViewControllerWithGenericObject:(id)arg1 ;
-(BOOL)didPresentRestrictedWarning;
-(void)setDidPresentRestrictedWarning:(BOOL)arg1 ;
-(void)shouldCreateConversationWithUserIds:(id)arg1 ;
-(BOOL)isCreating;
-(void)invitationViewControllerWillDismiss:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end

