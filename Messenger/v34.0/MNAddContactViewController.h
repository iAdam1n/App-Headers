/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNPhoneNumberDialogDelegate.h>
#import <Messenger/MNContactNotFoundDialogDelegate.h>
#import <Messenger/MNContactAddedDialogDelegate.h>
#import <Messenger/MNAddContactOperationDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNPresentableDialog.h>

@class MNAddContactOperation, MNAddContactView, FBUserSession, MNNavigationCoordinator, FBSyncStoreWriter, FBMParticipantNameFormatter, MNSyncStoreCache, FBAnalytics, MNSMSInvitePresenter, FBCurrentCountryManager, NSString;

@interface MNAddContactViewController : UIViewController <MNPhoneNumberDialogDelegate, MNContactNotFoundDialogDelegate, MNContactAddedDialogDelegate, MNAddContactOperationDelegate, FBClassProvidable, MNPresentableDialog> {

	BOOL _statusBarHiddenBeforeAddContactFlow;
	MNAddContactOperation* _addContactOperation;
	MNAddContactView* _addContactView;
	FBUserSession* _session;
	MNNavigationCoordinator* _navigationCoordinator;
	FBSyncStoreWriter* _syncStoreWriter;
	FBMParticipantNameFormatter* _nameFormatter;
	MNSyncStoreCache* _syncStoreCache;
	FBAnalytics* _analytics;
	MNSMSInvitePresenter* _smsInvitePresenter;
	FBCurrentCountryManager* _currentCountryManager;
	CGPoint _originalPopoverLocation;

}

@property (nonatomic,retain) MNAddContactOperation * addContactOperation;                  //@synthesize addContactOperation=_addContactOperation - In the implementation block
@property (nonatomic,retain) MNAddContactView * addContactView;                            //@synthesize addContactView=_addContactView - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) MNNavigationCoordinator * navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,retain) FBSyncStoreWriter * syncStoreWriter;                          //@synthesize syncStoreWriter=_syncStoreWriter - In the implementation block
@property (nonatomic,retain) FBMParticipantNameFormatter * nameFormatter;                  //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,retain) MNSyncStoreCache * syncStoreCache;                            //@synthesize syncStoreCache=_syncStoreCache - In the implementation block
@property (nonatomic,retain) FBAnalytics * analytics;                                      //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) MNSMSInvitePresenter * smsInvitePresenter;                    //@synthesize smsInvitePresenter=_smsInvitePresenter - In the implementation block
@property (nonatomic,retain) FBCurrentCountryManager * currentCountryManager;              //@synthesize currentCountryManager=_currentCountryManager - In the implementation block
@property (assign,nonatomic) BOOL statusBarHiddenBeforeAddContactFlow;                     //@synthesize statusBarHiddenBeforeAddContactFlow=_statusBarHiddenBeforeAddContactFlow - In the implementation block
@property (assign,nonatomic) CGPoint originalPopoverLocation;                              //@synthesize originalPopoverLocation=_originalPopoverLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setAnalytics:(FBAnalytics *)arg1 ;
-(FBAnalytics *)analytics;
-(FBSyncStoreWriter *)syncStoreWriter;
-(MNNavigationCoordinator *)navigationCoordinator;
-(FBMParticipantNameFormatter *)nameFormatter;
-(void)setNameFormatter:(FBMParticipantNameFormatter *)arg1 ;
-(void)setCurrentCountryManager:(FBCurrentCountryManager *)arg1 ;
-(FBCurrentCountryManager *)currentCountryManager;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 syncStoreWriter:(id)arg3 nameFormatter:(id)arg4 syncStoreCache:(id)arg5 analytics:(id)arg6 ;
-(MNSMSInvitePresenter *)smsInvitePresenter;
-(void)setAddContactOperation:(MNAddContactOperation *)arg1 ;
-(void)_showErrorAlert:(id)arg1 ;
-(void)userDidEnterPhoneNumber:(id)arg1 ;
-(void)userDidDismissPhoneNumberEntry;
-(void)userDidPressInvite:(id)arg1 ;
-(void)userDidPressClose;
-(void)userDidPressSendMessage;
-(void)userDidPressUndo;
-(void)addContactOperation:(id)arg1 didAddContact:(id)arg2 ;
-(void)addContactOperation:(id)arg1 didAddContact:(id)arg2 withMatchedProfile:(id)arg3 ;
-(void)addContactOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)willOpenKeyboardOnAppear;
-(MNAddContactOperation *)addContactOperation;
-(MNAddContactView *)addContactView;
-(void)setAddContactView:(MNAddContactView *)arg1 ;
-(void)setNavigationCoordinator:(MNNavigationCoordinator *)arg1 ;
-(void)setSyncStoreWriter:(FBSyncStoreWriter *)arg1 ;
-(MNSyncStoreCache *)syncStoreCache;
-(void)setSyncStoreCache:(MNSyncStoreCache *)arg1 ;
-(void)setSmsInvitePresenter:(MNSMSInvitePresenter *)arg1 ;
-(BOOL)statusBarHiddenBeforeAddContactFlow;
-(void)setStatusBarHiddenBeforeAddContactFlow:(BOOL)arg1 ;
-(CGPoint)originalPopoverLocation;
-(void)setOriginalPopoverLocation:(CGPoint)arg1 ;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_dismiss;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)_orientationChanged:(id)arg1 ;
-(double)backgroundAlpha;
@end

