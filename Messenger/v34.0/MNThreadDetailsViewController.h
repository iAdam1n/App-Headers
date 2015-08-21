/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNThreadDetailsHeaderViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/MNPresenceUpdateListening.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/MNGroupPhotoUploaderListener.h>
#import <Messenger/FBWebRTCCallabilityAwareCallControllerDelegate.h>
#import <Messenger/MNCommerceThreadDetailsFetcherDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>
#import <Messenger/MNThreadDetailsTableViewDataSourceDelegate.h>
#import <Messenger/MNThreadContactInfoAccessoryViewDelegate.h>

@protocol FBClock, MNAuthenticationManager, FBIntentHandler, FBProvider, MNThreadDetailsViewControllerDelegate;
@class FBUserSession, MNPageResponsivenessViewModel, MNThreadDetailsView, MNProfileImageViewController, MNThreadImageManager, MNThreadDetailsHeaderView, FBMParticipantNameFormatter, MNThreadDetailsTableViewDataSource, FBMDateFormatter, MNPresenceSubscriptionService, UIBarButtonItem, UIActionSheet, MNThreadViewModel, FBKeyboardObserver, FBWebRTCCallabilityAwareCallController, MNCommerceThreadDetailsFetcher, MNCommerceOrderListViewModel, MNBusinessPlugin, MNUserInfoControllerCoordinator, MNThreadPhotosViewController, MNSharedPhotosGatingChecker, MNThreadDetailsContactInfoViewModel, MNGroupPhotoUploader, NSString, UIImage, FBMUser, MNPresence;

@interface MNThreadDetailsViewController : UIViewController <UITableViewDelegate, MNThreadDetailsHeaderViewDelegate, UIActionSheetDelegate, MNPresenceUpdateListening, FBKeyboardObserverDelegate, MNGroupPhotoUploaderListener, FBWebRTCCallabilityAwareCallControllerDelegate, MNCommerceThreadDetailsFetcherDelegate, FBClassProvidable, MNThreadViewModelConfigurable, MNThreadDetailsTableViewDataSourceDelegate, MNThreadContactInfoAccessoryViewDelegate> {

	FBUserSession* _session;
	MNPageResponsivenessViewModel* _pageResponsivenessViewModel;
	MNThreadDetailsView* _view;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	MNThreadDetailsHeaderView* _threadDetailsHeaderView;
	FBMParticipantNameFormatter* _nameFormatter;
	MNThreadDetailsTableViewDataSource* _tableViewDataSource;
	FBMDateFormatter* _dateFormatter;
	id<FBClock> _clock;
	MNPresenceSubscriptionService* _presenceSubscriptionService;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	UIActionSheet* _editActionSheet;
	MNThreadViewModel* _threadViewModel;
	FBKeyboardObserver* _keyboardObserver;
	CGRect _keyboardFrame;
	FBWebRTCCallabilityAwareCallController* _callController;
	id<MNAuthenticationManager> _authManager;
	MNCommerceThreadDetailsFetcher* _commerceThreadDetailsFetcher;
	MNCommerceOrderListViewModel* _commerceOrderListViewModel;
	MNBusinessPlugin* _businessPlugin;
	id<FBIntentHandler> _intentHandler;
	BOOL _enableCommerceDetails;
	BOOL _showHeaderAsCell;
	id<FBProvider> _userInfoControllerProvider;
	MNUserInfoControllerCoordinator* _userInfoControllerCoordinator;
	MNThreadPhotosViewController* _threadPhotosViewController;
	id<FBProvider> _threadPhotosProvider;
	MNSharedPhotosGatingChecker* _sharedPhotosGatingChecker;
	MNThreadDetailsContactInfoViewModel* _contactInfoViewModel;
	MNGroupPhotoUploader* _groupPhotoUploader;
	NSString* _commerceUserId;
	UIImage* _optimisticGroupThreadImage;
	id<MNThreadDetailsViewControllerDelegate> _delegate;
	FBMUser* _otherUser;
	MNPresence* _presenceValue;

}

@property (assign,nonatomic,__weak) id<MNThreadDetailsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBMUser * otherUser;                                                    //@synthesize otherUser=_otherUser - In the implementation block
@property (nonatomic,retain) MNPresence * presenceValue;                                             //@synthesize presenceValue=_presenceValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)commerceThreadDetailsFetcherDidFinishLoad:(id)arg1 withOrderListViewModel:(id)arg2 ;
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(void)_startImageDownloadForCell:(id)arg1 scenePath:(id)arg2 ;
-(void)callabilityAwareCallControllerOtherUserCallabilityDidChange:(id)arg1 ;
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(FBMUser *)otherUser;
-(void)setPresenceValue:(MNPresence *)arg1 ;
-(void)setOtherUser:(FBMUser *)arg1 ;
-(MNPresence *)presenceValue;
-(void)groupPhotoUpload:(id)arg1 startedForGroupThreadKey:(id)arg2 ;
-(void)groupPhotoUpload:(id)arg1 finishedForGroupThreadKey:(id)arg2 ;
-(void)groupPhotoUpload:(id)arg1 failedForGroupThreadKey:(id)arg2 withError:(id)arg3 ;
-(void)_didTapEditBarButtonItem:(id)arg1 ;
-(void)threadDetailsContactInfoAccessoryViewDidPressAudioCallButton:(id)arg1 ;
-(void)threadDetailsContactInfoAccessoryViewDidPressVideoCallButton:(id)arg1 ;
-(void)threadDetailsHeaderViewDidEndEditingThreadName:(id)arg1 ;
-(void)threadDetailsHeaderViewDidPressImageView:(id)arg1 ;
-(BOOL)threadDetailsHeaderViewCanEditThreadName:(id)arg1 ;
-(void)threadDetailsHeaderViewDidPressThreadNameLabel:(id)arg1 ;
-(void)threadDetailsHeaderViewDidTapEmptySpace:(id)arg1 ;
-(BOOL)threadDetailsTableViewDataShourceShouldShowRoundedCorners:(id)arg1 ;
-(void)threadDetailsTableViewDataSource:(id)arg1 didRemoveParticipantWithUserId:(id)arg2 ;
-(void)threadDetailsTableViewDataSourceDidEndEditingEditablePeopleCell:(id)arg1 ;
-(id)initWithSession:(id)arg1 profileImageViewController:(id)arg2 threadImageManager:(id)arg3 nameFormatter:(id)arg4 dateFormatter:(id)arg5 clock:(id)arg6 presenceSubscriptionService:(id)arg7 callController:(id)arg8 authManager:(id)arg9 intentHandler:(id)arg10 avatarImageDecoration:(id)arg11 userInfoControllerCoordinator:(id)arg12 threadPhotosProvider:(id)arg13 groupPhotoUploader:(id)arg14 sharedPhotosGatingChecker:(id)arg15 pluginManager:(id)arg16 ;
-(void)_didTapDoneBarButtonItem:(id)arg1 ;
-(void)_setEditModeEnabled:(BOOL)arg1 ;
-(void)_dismissEditableGroupNameTextField;
-(void)_updatePeopleSectionExpanded:(BOOL)arg1 ;
-(void)_loadCommerceData;
-(void)_configureThreadDetailsHeaderViewWithThreadViewModel;
-(void)_updateHeaderViewPresenceTextForCanonicalThread;
-(void)_presentEditActionSheet;
-(void)_updateHeaderViewWithPresenceText:(id)arg1 ;
-(void)_updateContactInfoViewModel:(id)arg1 ;
-(void)_setEditModeEnabled:(BOOL)arg1 showKeyboard:(BOOL)arg2 ;
-(void)_scrollToHeaderViewIfNeeded;
-(void)_commitEditThreadName;
-(void)_updateThreadName;
-(void)_updateHeaderViewImage;
-(void)_showNameTooLongAlert;
-(void)_editGroupsPhoto;
-(void)_editThreadName;
-(void)dealloc;
-(void)setDelegate:(id<MNThreadDetailsViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<MNThreadDetailsViewControllerDelegate>)delegate;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_updateRightBarButtonItem;
@end

