/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInviteRequestControllerDelegate.h>
#import <Messenger/MNInvitesViewControllerDelegate.h>
#import <Messenger/MNInvitesViewControllerPresenting.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNModalPresentation, MNInvitesViewControllerPresenting, FBProvider;
@class MNInvitesCooldownController, MNInvitesViewController, FBUserSession, MNInviteRequestController, MNInviteSenderAnalyticsLogger, MNInviteSenderConfiguration, FBMLoggedInUserInfoManager, MNInviteSenderListenerAnnouncer, NSString;

@interface MNInviteSender : NSObject <MNInviteRequestControllerDelegate, MNInvitesViewControllerDelegate, MNInvitesViewControllerPresenting, FBClassProvidable> {

	id<MNModalPresentation> _modalPresenter;
	id<MNInvitesViewControllerPresenting> _invitesViewControllerPresenter;
	id<FBProvider> _mobileConfigContextManagerProvider;
	MNInvitesCooldownController* _invitesCooldownController;
	id<FBProvider> _invitesViewControllerProvider;
	MNInvitesViewController* _presentedInvitesViewController;
	FBUserSession* _session;
	MNInviteRequestController* _inviteRequestController;
	MNInviteSenderAnalyticsLogger* _inviteSenderAnalyticsLogger;
	BOOL _shouldEnableSMSInvites;
	MNInviteSenderConfiguration* _inviteSenderConfiguration;
	FBMLoggedInUserInfoManager* _loggedInUserManager;
	MNInviteSenderListenerAnnouncer* _inviteSenderListenerAnnouncer;

}

@property (nonatomic,readonly) MNInviteSenderListenerAnnouncer * inviteSenderListenerAnnouncer;              //@synthesize inviteSenderListenerAnnouncer=_inviteSenderListenerAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)configureWithInviteSenderConfiguration:(id)arg1 ;
-(void)inviteUsers:(id)arg1 withInvitesViewControllerPresenter:(id)arg2 fromSource:(unsigned long long)arg3 ;
-(void)presentInvitesViewController:(id)arg1 ;
-(void)dismissInvitesViewController:(id)arg1 ;
-(void)inviteConverastionContacts:(id)arg1 withMultiPicker:(BOOL)arg2 withSelectedInviteContactsType:(unsigned long long)arg3 fromSource:(unsigned long long)arg4 ;
-(void)inviteUsers:(id)arg1 withMultiPicker:(BOOL)arg2 fromSource:(unsigned long long)arg3 ;
-(BOOL)_isLoggedInUserPartial;
-(void)inviteConverastionContacts:(id)arg1 withMultiPicker:(BOOL)arg2 fromSource:(unsigned long long)arg3 ;
-(void)inviteRequestController:(id)arg1 didInviteContacts:(id)arg2 ;
-(void)inviteRequestController:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithModalPresenter:(id)arg1 invitesViewControllerProvider:(id)arg2 mobileConfigContextManagerProvider:(id)arg3 loggedInUserManager:(id)arg4 invitesCooldownController:(id)arg5 session:(id)arg6 analytics:(id)arg7 ;
-(void)_dismissPresentedInvitesViewController;
-(void)_startInviteRequestWithPickedContacts:(id)arg1 fromSource:(unsigned long long)arg2 ;
-(void)_dismissPresentedInvitesViewControllerIfNecessary;
-(void)_resetPresentedInvitesViewController;
-(unsigned long long)_defaultInviteContactsType;
-(void)_inviteConversationContacts:(id)arg1 withMultiPicker:(BOOL)arg2 withSelectedInviteContactsType:(unsigned long long)arg3 withInvitesViewControllerPresenter:(id)arg4 fromSource:(unsigned long long)arg5 ;
-(BOOL)_shouldShowRemoteRankedContacts;
-(void)_presentInvitesViewControllerWithPickedContacts:(id)arg1 withSelectedInviteContactsType:(unsigned long long)arg2 withInvitesViewControllerPresenter:(id)arg3 fromSource:(unsigned long long)arg4 ;
-(id)_invitesViewControllerConfigurationWithPickedContacts:(id)arg1 selectedInviteContactsType:(unsigned long long)arg2 fromSource:(unsigned long long)arg3 ;
-(MNInviteSenderListenerAnnouncer *)inviteSenderListenerAnnouncer;
-(void)invitesViewController:(id)arg1 didPickContacts:(id)arg2 ;
-(void)invitesViewControllerDidTapDismissButton:(id)arg1 ;
-(void)invitesViewController:(id)arg1 didSelectSuggestionsFilteringInviteContactsType:(unsigned long long)arg2 ;
@end
