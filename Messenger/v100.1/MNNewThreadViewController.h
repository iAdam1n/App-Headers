/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNNewThreadViewControllerBase.h>
#import <Messenger/MNComposeViewControllerDelegate.h>
#import <Messenger/FBKeyCommandSource.h>
#import <Messenger/FBMMessageSendListening.h>
#import <Messenger/MNPendingThreadRequestListening.h>
#import <Messenger/MNComposeViewControllerListener.h>
#import <Messenger/MNMediaPreviewActionSheetPresenterDelegate.h>
#import <Messenger/MNMessagesViewThemeUpdateListening.h>
#import <Messenger/MNMessagesViewInteractionsListening.h>
#import <Messenger/MNSMSBridgingUrlHandlerListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNAuthenticationManager, FBProvider, MNPendingThreadQuerying, MNSecureMessagingCapabilityQuerying, MNNewThreadViewControllerDelegate;
@class FBMThreadMessageSender, MNMessagesViewController, MNMessagesViewPresenter, MNCanonicalGroupFetcher, MNThreadStore, FBMThreadParticipantFilter, MNThreadParticipantNameFormatter, FBMMessageSendListeningAnnouncer, UIBarButtonItem, MNErrorToastFactory, FBUserSession, MNUserSettings, MNMessageSendPerfLogger, MNMessageSendEventListenerAnnouncer, MNPendingThreadRequestListeningAnnouncer, MNLocalThreadQuery, NSDictionary, MNMediaPreviewActionSheetPresenter, MNMessageSendNotEligibleAlertController, MNComposerFlowersBorderControlExtension, MNOmnipickerGating, MNComposerInteractionCoordinator, MNNewThreadTopBannerCoordinator, FBToastPresenter, MNSMSParticipantUserCacheCoordinator, MNNewThreadAlertCoordinator, FBKeyCommandHandler, NSArray, FBMThreadSummary, MNComposeViewController, MNThreadViewModel, NSString;

@interface MNNewThreadViewController : MNNewThreadViewControllerBase <MNComposeViewControllerDelegate, FBKeyCommandSource, FBMMessageSendListening, MNPendingThreadRequestListening, MNComposeViewControllerListener, MNMediaPreviewActionSheetPresenterDelegate, MNMessagesViewThemeUpdateListening, MNMessagesViewInteractionsListening, MNSMSBridgingUrlHandlerListener, FBClassProvidable> {

	id<MNAuthenticationManager> _authenticationManager;
	FBMThreadMessageSender* _threadMessageSender;
	id<FBProvider> _composeViewControllerProvider;
	id<FBProvider> _messagesViewControllerProvider;
	MNMessagesViewController* _messagesViewController;
	MNMessagesViewPresenter* _messagesViewPresenter;
	id<FBProvider> _messagesViewByDescriptorPresentationStrategyProvider;
	id<FBProvider> _canonicalGroupFetcherProvider;
	MNCanonicalGroupFetcher* _canonicalGroupFetcher;
	MNThreadStore* _threadStore;
	unsigned long long _threadStoreRequestId;
	FBMThreadParticipantFilter* _threadParticipantFilter;
	MNThreadParticipantNameFormatter* _nameFormatter;
	FBMMessageSendListeningAnnouncer* _messageSendAnnouncer;
	UIBarButtonItem* _newGroupBarButtonItem;
	UIBarButtonItem* _newSecretThreadButtonItem;
	MNErrorToastFactory* _errorToastFactory;
	FBUserSession* _session;
	MNUserSettings* _userSettings;
	MNMessageSendPerfLogger* _messageSendPerfLogger;
	MNMessageSendEventListenerAnnouncer* _messageSendEventAnnouncer;
	MNPendingThreadRequestListeningAnnouncer* _pendingThreadAnnouncer;
	id<MNPendingThreadQuerying> _pendingThreadQuerier;
	MNLocalThreadQuery* _localThreadQueryToNavigateToWhenVisible;
	unsigned long long _userStoreRequestId;
	NSDictionary* _pickedUsersByUserId;
	id<FBProvider> _actionSheetPresenterProvider;
	MNMediaPreviewActionSheetPresenter* _actionSheetPresenter;
	MNMessageSendNotEligibleAlertController* _messageSendNotEligibleAlertController;
	MNComposerFlowersBorderControlExtension* _flowersBorderComposerControlExtension;
	MNOmnipickerGating* _omnipickerGating;
	MNComposerInteractionCoordinator* _composerInteractionCoordinator;
	MNNewThreadTopBannerCoordinator* _newThreadTopBannerCoordinator;
	FBToastPresenter* _topToastPresenter;
	MNSMSParticipantUserCacheCoordinator* _smsParticipantUserCacheCoordinator;
	MNNewThreadAlertCoordinator* _newThreadAlertCoordinator;
	BOOL _isSendingMessage;
	BOOL _hasLoggedSMSContact;
	FBKeyCommandHandler* _keyCommandHandler;
	NSArray* _keyCommands;
	id<MNSecureMessagingCapabilityQuerying> _secureMessagingCapabilityQuerier;
	BOOL _showsCancelButton;
	BOOL _showsSecretButton;
	id<MNNewThreadViewControllerDelegate> _delegate;
	FBMThreadSummary* _fetchedThreadSummary;
	MNComposeViewController* _composeViewController;

}

@property (nonatomic,copy) FBMThreadSummary * fetchedThreadSummary;                              //@synthesize fetchedThreadSummary=_fetchedThreadSummary - In the implementation block
@property (nonatomic,retain) MNComposeViewController * composeViewController;                    //@synthesize composeViewController=_composeViewController - In the implementation block
@property (assign,nonatomic,__weak) id<MNNewThreadViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsCancelButton;                                             //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (assign,nonatomic) BOOL showsSecretButton;                                             //@synthesize showsSecretButton=_showsSecretButton - In the implementation block
@property (nonatomic,readonly) MNThreadViewModel * presentedThreadViewModel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)willCreateThreadForPendingThread:(id)arg1 ;
-(void)didCreateThreadWithKey:(id)arg1 forPendingThread:(id)arg2 ;
-(void)didFailToCreateThreadForPendingThread:(id)arg1 error:(id)arg2 ;
-(void)didCancelCreatingThreadForPendingThread:(id)arg1 ;
-(void)willRetryCreatingThreadForPendingThread:(id)arg1 ;
-(void)didScheduleSendingMessage:(id)arg1 toPendingThread:(id)arg2 ;
-(void)didCancelSendingMessage:(id)arg1 fromPendingThread:(id)arg2 ;
-(id)analyticsModule;
-(void)messagesViewThemeDidUpdateThemeColor:(id)arg1 customLikeEmoji:(id)arg2 ;
-(void)peoplePicker:(id)arg1 didChangePickedContacts:(id)arg2 ;
-(void)peoplePicker:(id)arg1 didPickGroup:(id)arg2 ;
-(void)peoplePicker:(id)arg1 didPickContact:(id)arg2 ;
-(void)peoplePickerDidShowSearchResults:(id)arg1 ;
-(void)peoplePickerDidHideSearchResults:(id)arg1 ;
-(void)peoplePickerTokenFieldWillBecomeResponder:(id)arg1 ;
-(void)peoplePickerTokenFieldDidResize:(id)arg1 ;
-(id)fb_keyCommands;
-(void)actionSheetPresenter:(id)arg1 didTapSendWithContent:(id)arg2 recipientFBIDs:(id)arg3 conversationInitiator:(id)arg4 ;
-(void)actionSheetPresenter:(id)arg1 didTapEditWithContent:(id)arg2 recipientFBIDs:(id)arg3 conversationInitiator:(id)arg4 ;
-(void)actionSheetPresenter:(id)arg1 didTapCancelWithRecipientFBIDs:(id)arg2 conversationInitiator:(id)arg3 ;
-(void)actionSheetPresenter:(id)arg1 didTapOpenApp:(id)arg2 ;
-(void)actionSheetPresenter:(id)arg1 didPresentWithRecipientFBIDs:(id)arg2 conversationInitiator:(id)arg3 ;
-(void)didEnqueueMessage:(id)arg1 ;
-(void)didPublishMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 ;
-(void)willRetryMessage:(id)arg1 ;
-(void)message:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(MNThreadViewModel *)presentedThreadViewModel;
-(void)didTransitionToExtension:(id)arg1 ;
-(id)_composingContext;
-(void)_updateComposingContext;
-(void)messagesViewDidOpenPopoverOrModal;
-(void)messagesViewDidTapEmptySpace;
-(void)messagesViewDidSelectStickersPack:(id)arg1 ;
-(void)messagesViewDidScrollToFirstUnreadMessage;
-(void)messagesViewDidRequestToOpenComposerExtensionTarget:(id)arg1 ;
-(void)composeViewControllerNeedResize:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)composeViewControllerCanPresentExtension:(id)arg1 ;
-(id)composeViewControllerDidBeginSending:(id)arg1 ;
-(id)composeViewController:(id)arg1 didCommitSendingWithText:(id)arg2 attachment:(id)arg3 attribution:(id)arg4 clientTags:(id)arg5 extensibleMessageData:(id)arg6 sendingContextToken:(id)arg7 loggingBlock:(/*^block*/id)arg8 ;
-(void)composeViewControllerDidCancelSending:(id)arg1 ;
-(BOOL)composeViewControllerShouldResetDuringSend:(id)arg1 ;
-(void)composeViewControllerDidAttemptSendWhenDisabled:(id)arg1 ;
-(BOOL)composeViewControllerCanSelectContent:(id)arg1 ;
-(void)composeViewControllerWillSelectContent:(id)arg1 ;
-(void)composeViewController:(id)arg1 didSelectContent:(id)arg2 ;
-(void)composeViewController:(id)arg1 didPasteContent:(id)arg2 ;
-(void)composeViewControllerNuxVisibilityDidChange:(id)arg1 ;
-(void)composeViewController:(id)arg1 didChangeComposerControlExtensionModeEnabledWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)composeViewController:(id)arg1 didPressControlExtensionIconWithControlExtension:(id)arg2 ;
-(void)composeViewControllerDismissPresentedViewController:(id)arg1 ;
-(void)composeViewController:(id)arg1 presentViewController:(id)arg2 ;
-(void)composeViewController:(id)arg1 didCommitSendingLightweightActionType:(id)arg2 ;
-(id)threadViewModelForComposeViewController:(id)arg1 ;
-(void)composeViewControllerDidChangeText:(id)arg1 ;
-(void)_setUpNavigationItems;
-(id)initWithAuthenticationManager:(id)arg1 threadMessengerSender:(id)arg2 composeViewControllerProvider:(id)arg3 messagesViewControllerProvider:(id)arg4 messagesViewPresenter:(id)arg5 messagesViewByDescriptorPresentationStrategyProvider:(id)arg6 canonicalGroupFetcherProvider:(id)arg7 peoplePickerViewControllerProvider:(id)arg8 navigationCoordinator:(id)arg9 keyboardResettingTracker:(id)arg10 userSettings:(id)arg11 threadStore:(id)arg12 threadParticipantFilter:(id)arg13 messageSendAnnouncer:(id)arg14 pendingThreadAnnouncer:(id)arg15 session:(id)arg16 errorToastFactory:(id)arg17 messageSendPerfLogger:(id)arg18 coefficientSuggestedContactsRetriever:(id)arg19 userStore:(id)arg20 nameFormatter:(id)arg21 actionSheetPresenterProvider:(id)arg22 messageSendNotEligibleAlertController:(id)arg23 omnipickerGating:(id)arg24 flowersBorderComposeControlExtension:(id)arg25 pendingThreadQuerier:(id)arg26 secureMessagingCapabilityQuerier:(id)arg27 composerInteractionCoordinator:(id)arg28 addressBookContactSyncPolicy:(id)arg29 newThreadTopBannerCoordinator:(id)arg30 smsParticipantUserCacheCoordinator:(id)arg31 newThreadAlertCoordinator:(id)arg32 peoplePickerAccessoryDataSource:(id)arg33 contactSyncPermissionChecker:(id)arg34 contactSyncController:(id)arg35 inviteListAddressBookContactsRetriever:(id)arg36 keyCommandHandler:(id)arg37 ;
-(void)_cancelThreadStoreRequest;
-(void)setPickedContacts:(id)arg1 ;
-(id)_pickedUserIdsExcludingSMSParticipants;
-(void)_fetchThreadForPickedContact:(id)arg1 ;
-(void)_fetchPickedUsersAndUpdateComposingContext;
-(void)updateComposerState;
-(void)_restoreDraftForUncreatedThread;
-(void)_updateNavigationItems;
-(void)_applyInitialComposerExtensionIfNeeded;
-(void)_updateMessagesView;
-(void)_navigateToThreadWithLocalThreadQueryWhenPossible:(id)arg1 ;
-(BOOL)_shouldAnimateThreadPresentation;
-(void)_saveDraftForUncreatedThread;
-(void)_fetchThreadForSyncedThreadKey:(id)arg1 ;
-(void)_updateWithFetchedThreadSummary:(id)arg1 ;
-(void)setFetchedThreadSummary:(FBMThreadSummary *)arg1 ;
-(FBMThreadSummary *)fetchedThreadSummary;
-(id)_threadName;
-(void)_reportDidEnterThreadWithFlowersBorderModeEnabled:(id)arg1 ;
-(void)dismissComposer;
-(BOOL)_isOmnipickerEligible;
-(id)_pickedSMSParticipants;
-(id)_sendMessageWithText:(id)arg1 attachment:(id)arg2 clientTags:(id)arg3 attribution:(id)arg4 extensibleMessageData:(id)arg5 sendTarget:(id)arg6 conversionContext:(id)arg7 messageLifeTime:(long long)arg8 ;
-(void)_showNoRecipientAlert;
-(void)_presentActionSheetWithContent:(id)arg1 ;
-(void)_sendMessageWithText:(id)arg1 attachment:(id)arg2 clientTags:(id)arg3 attribution:(id)arg4 extensibleMessageData:(id)arg5 ;
-(void)_dismissInputViewIfPresented;
-(void)_sendContent:(id)arg1 ;
-(void)_dismissKeyboardInPeoplePicker;
-(void)_transferUnsentDraftIfNeededToLocalThreadKey:(id)arg1 messageText:(id)arg2 ;
-(void)_newGroupClicked;
-(void)_secretClicked;
-(BOOL)showsSecretButton;
-(id)_pickedUserIds;
-(void)_setFetchedUsersAndUpdateComposingContext:(id)arg1 ;
-(long long)_messageSendSource;
-(void)setComposeViewController:(MNComposeViewController *)arg1 ;
-(BOOL)_shouldShowMessagesView;
-(BOOL)_shouldDisableComposer;
-(BOOL)shouldRespondToKeyboardUpdate;
-(double)minimumPeoplePickerHeightToShowNavBar;
-(void)setShowsSecretButton:(BOOL)arg1 ;
-(void)_showMessagesView;
-(void)_hideMessagesView;
-(void)_loadMessagesViewForPickedUserIds:(id)arg1 threadKey:(id)arg2 ;
-(void)_loadMessagesViewForPickedUserIds:(id)arg1 groupThreadKey:(id)arg2 ;
-(void)_removeChildMessagesViewController;
-(void)_loadMessagesViewWithThreadKey:(id)arg1 ;
-(void)_addMessagesViewControllerAsChild;
-(void)cancelCompose;
-(void)smsBridingUrlHandlerDidSyncContacts;
-(void)composeViewController:(id)arg1 didChangeSearchMode:(long long)arg2 toSearchMode:(long long)arg3 ;
-(void)composerViewControllerWillAppear:(id)arg1 ;
-(void)composerViewControllerWillDisappear:(id)arg1 ;
-(void)loadComposeView;
-(BOOL)shouldPresentCancelActionSheet;
-(id)accessibilityStringForComposedContent;
-(void)focusComposer;
-(BOOL)canShowKeyboard;
-(void)setDelegate:(id<MNNewThreadViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNNewThreadViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(MNComposeViewController *)composeViewController;
-(void)configure:(id)arg1 ;
@end
