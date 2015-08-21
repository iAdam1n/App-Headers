/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPermissionRequestViewDelegate.h>
#import <Messenger/MNContactImportInitiationListener.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNUserSetUpStepViewController.h>

@protocol FBServiceTransactionMutating, MNUserSetUpStepCompletion;
@class MNAddressBookContactImportInitiator, FBAnalytics, FBUserSession, MNPermissionRequestView, MNPermissionRequestViewModel, NSString;

@interface MNRequestContactImportWithFacepileViewController : UIViewController <MNPermissionRequestViewDelegate, MNContactImportInitiationListener, FBClassProvidable, MNUserSetUpStepViewController> {

	MNAddressBookContactImportInitiator* _contactImportInitiator;
	FBAnalytics* _analytics;
	FBUserSession* _session;
	MNPermissionRequestView* _permissionRequestView;
	BOOL _skipButtonEnabled;
	id<FBServiceTransactionMutating> _graphQLRequestToken;
	MNPermissionRequestViewModel* _permissionRequestViewModel;
	id<MNUserSetUpStepCompletion> _completionDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNUserSetUpStepCompletion> completionDelegate;              //@synthesize completionDelegate=_completionDelegate - In the implementation block
-(id)analyticsModule;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_handleFetchError:(id)arg1 ;
-(void)_handleFetchResponse:(id)arg1 ;
-(void)_initiateContactImporting;
-(void)userInitiatedContactImportAllowed;
-(void)userInitiatedContactImportDisallowed;
-(void)userInitiatedContactImportFailedToInitiate;
-(void)_configureNavigationBarExtendedLayout;
-(void)_hideBackButton;
-(void)_showSkipButton;
-(void)_completeStep;
-(id)_skipButton;
-(void)setSkipButtonEnabled:(BOOL)arg1 ;
-(void)_skipButtonPressed;
-(void)permissionRequestViewDidTapFooterText:(id)arg1 ;
-(void)permissionRequestViewDidPressContinueButton:(id)arg1 ;
-(id)initWithContactImporter:(id)arg1 syncLock:(id)arg2 userSettings:(id)arg3 session:(id)arg4 analytics:(id)arg5 permissionRequestViewModel:(id)arg6 ;
-(void)_requestFacepile;
-(unsigned long long)preferredTransitionType;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id<MNUserSetUpStepCompletion>)completionDelegate;
-(void)setCompletionDelegate:(id<MNUserSetUpStepCompletion>)arg1 ;
@end

