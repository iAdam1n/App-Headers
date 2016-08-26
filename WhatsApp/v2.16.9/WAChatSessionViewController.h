/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAChatBackgroundViewController.h>
#import <WhatsApp/WAChatBarManagerDelegate.h>
#import <WhatsApp/WAMentionsSelectorViewDelegate.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <WhatsApp/WAPttRecorderDelegate.h>
#import <WhatsApp/WAConversationHeaderViewDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <WhatsApp/WAImageToImageTransitioning.h>
#import <WhatsApp/WANavigationControllerPushAnimating.h>
#import <WhatsApp/WANavigationControllerPopToAnimating.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <WhatsApp/WATableViewCellPreviewingDelegate.h>
#import <WhatsApp/WAVCardMessagePreviewActionDelegate.h>
#import <UIKit/UIDocumentMenuDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <WhatsApp/ShareLocationControllerDelegate.h>
#import <WhatsApp/WAChatMessagesControllerDelegate.h>
#import <libobjc.A.dylib/ABNewPersonViewControllerDelegate.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>
#import <WhatsApp/ABDisabledControllerDelegate.h>
#import <WhatsApp/WAInfoInputViewControllerDelegate.h>
#import <WhatsApp/WAShareContactViewControllerDelegate.h>
#import <WhatsApp/WAMultiSendMediaPickerControllerDelegate.h>
#import <WhatsApp/WAMultiSendPreviewViewControllerDelegate.h>
#import <WhatsApp/WAMultiShotCameraControllerDelegate.h>
#import <WhatsApp/WAMessageBubbleTableViewCellDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <WhatsApp/MFMessageComposeViewControllerDelegate.h>
#import <WhatsApp/WABlurredBackgroundProviding.h>
#import <WhatsApp/WAChatSessionPresenting.h>

@protocol UIViewControllerPreviewing, WAChatBarManager;
@class UIPanGestureRecognizer, WAReportSpamCell, WAWarningView, WAChatCellData, WAMentionsSelectorView, UIButton, UITapGestureRecognizer, UIView, WAChatMessagesController, NSNumber, WAMessageBubbleTableViewCell, WAMessage, WAConversationHeaderView, UIBarButtonItem, UINavigationController, WAPttRecorder, NSTimer, WAMediaStreamUploadOperation, WAPttPlayer, NSDictionary, NSMutableArray, NSUserActivity, NSArray, UIToolbar, WAChatSession, WAChatSessionTableView, NSString, NSSet;

@interface WAChatSessionViewController : WAChatBackgroundViewController <WAChatBarManagerDelegate, WAMentionsSelectorViewDelegate, EKEventEditViewDelegate, WAPttRecorderDelegate, WAConversationHeaderViewDelegate, UIViewControllerAnimatedTransitioning, WAImageToImageTransitioning, WANavigationControllerPushAnimating, WANavigationControllerPopToAnimating, UIViewControllerPreviewingDelegate, WATableViewCellPreviewingDelegate, WAVCardMessagePreviewActionDelegate, UIDocumentMenuDelegate, UIDocumentPickerDelegate, ShareLocationControllerDelegate, WAChatMessagesControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABDisabledControllerDelegate, WAInfoInputViewControllerDelegate, WAShareContactViewControllerDelegate, WAMultiSendMediaPickerControllerDelegate, WAMultiSendPreviewViewControllerDelegate, WAMultiShotCameraControllerDelegate, WAMessageBubbleTableViewCellDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, WABlurredBackgroundProviding, WAChatSessionPresenting> {

	UIPanGestureRecognizer* _keyboardDraggingScrollGesture;
	WAReportSpamCell* _reportSpamCell;
	BOOL _suspiciousChatUI;
	WAWarningView* _readonlyWarningView;
	WAWarningView* _officialAnnouncementsWarningView;
	BOOL _fadingOutReadonlyWarning;
	BOOL _didShowKeyboard;
	BOOL _interactiveChatBarDraggingFromTableViewInProgress;
	CGPoint _interactiveChatBarDraggingInitialTranslation;
	WAChatCellData* _bottomCellDataToRestoreOnKeyboardWillShow;
	double _bottomCellDataRelativeOffsetToRestoreOnKeyboardWillShow;
	WAMentionsSelectorView* _mentionsSelectorView;
	UIButton* _scrollToMostRecentButton;
	UITapGestureRecognizer* _scrollDownOverridingGesture;
	UIView* _previewHeader;
	WAChatMessagesController* _messagesController;
	long long _countOfInsertedIndexPaths;
	BOOL _isTableUpdatingContent;
	long long _lastMessageIndex;
	long long _loadedMessagesCount;
	BOOL _needsScrollToTargetAfterTableUpdates;
	NSNumber* _yOffsetToScrollTo;
	WAChatCellData* _bottomCellData;
	double _bottomCellRelativeOffset;
	BOOL _ignoreUnreadDividerOnScrollToTargetAfterTableUpdates;
	BOOL _hasOutgoingMessages;
	long long _infiniteScrollingCounter;
	CGSize _contentSizeBeforeLoadEarlierMessages;
	CGSize _contentSizeBeforeLoadLaterMessages;
	BOOL _hasEarlierMessages;
	BOOL _swipeToDetailsInProgress;
	long long _navigationControllerOperation;
	WAMessageBubbleTableViewCell* _messageCellForSwipeToDetails;
	UIView* _messageCellForSwipeToDetailsSnapshot;
	WAMessage* _lastSelectedMessageForMessageInfo;
	WAConversationHeaderView* _headerView;
	id<UIViewControllerPreviewing> _profilePicturePreviewingContext;
	double _initialViewDidAppearTimestamp;
	double _lastViewDidAppearTimestamp;
	UIBarButtonItem* _showAllChatsBarButtonItem;
	UINavigationController* _lastNavigationController;
	UIBarButtonItem* _customBackBarButtonItem;
	WAPttRecorder* _pttRecorder;
	NSTimer* _pttAudioRecorderUpdateTimer;
	double _pttRecordStartTime;
	BOOL _pttInterruption;
	WAMediaStreamUploadOperation* _voiceMsgStreamOperation;
	WAPttPlayer* _pttPlayer;
	WAChatCellData* _playingChatCellData;
	NSDictionary* _pttSoundEffects;
	id<WAChatBarManager> _chatBarManager;
	NSMutableArray* _messageNavigationStack;
	NSUserActivity* _userActivity;
	BOOL _isMenuControllerHiding;
	NSArray* _selectedChatCellDataObjects;
	double _renderStartTime;
	BOOL _needsScrollToTarget;
	WAMessage* _messageToScrollTo;
	WAMessage* _messageToHighlightAfterScrollingEnds;
	long long _ignoreAnimatedContentOffsetChangesCounter;
	long long _preventDateBubbleFadeInCounter;
	CGSize _sizeAfterInterfaceRotation;
	CGSize _lastViewSize;
	UIBarButtonItem* _doneBarButtonItem;
	UIToolbar* _editModeToolbar;
	UIBarButtonItem* _forwardBarButtonItem;
	UIBarButtonItem* _shareBarButtonItem;
	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _editModeTitleBarButtonItem;
	BOOL _alwaysShowsBackButton;
	BOOL _ignoreUnsentTextOnDisappear;
	BOOL _interfaceRotationInProgress;
	WAChatSession* _chatSession;
	WAMessage* _highlightedMessage;
	WAChatSessionTableView* _tableView;
	double _openChatStartTime;
	NSArray* _chatPreviewActionItems;
	WAMessage* _messageForAnimatedTransition;
	WAMessageBubbleTableViewCell* _mediaMessageCellForAnimatedTransition;
	unsigned long long _appearanceState;
	unsigned long long _editMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIBarButtonItem * showAllChatsBarButtonItem; 
@property (nonatomic,readonly) WAConversationHeaderView * headerView; 
@property (nonatomic,readonly) UIButton * scrollToMostRecentButton; 
@property (nonatomic,readonly) UIView * previewHeader; 
@property (nonatomic,readonly) WAReportSpamCell * reportSpamCell; 
@property (nonatomic,readonly) unsigned long long orientation; 
@property (assign,nonatomic) unsigned long long editMode;                                                       //@synthesize editMode=_editMode - In the implementation block
@property (assign,nonatomic) unsigned long long appearanceState;                                                //@synthesize appearanceState=_appearanceState - In the implementation block
@property (nonatomic,retain) WAChatSession * chatSession;                                                       //@synthesize chatSession=_chatSession - In the implementation block
@property (nonatomic,readonly) BOOL chatSessionAvailable; 
@property (nonatomic,readonly) WAChatMessagesController * messagesController;                                   //@synthesize messagesController=_messagesController - In the implementation block
@property (nonatomic,retain) WAMessage * highlightedMessage;                                                    //@synthesize highlightedMessage=_highlightedMessage - In the implementation block
@property (nonatomic,copy) NSSet * highlightedTerms; 
@property (nonatomic,readonly) WAChatSessionTableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) id<WAChatBarManager> chatBarManager;                                             //@synthesize chatBarManager=_chatBarManager - In the implementation block
@property (assign,nonatomic) BOOL showKeyboardOnAppear; 
@property (assign,nonatomic) BOOL alwaysShowsBackButton;                                                        //@synthesize alwaysShowsBackButton=_alwaysShowsBackButton - In the implementation block
@property (assign,nonatomic) double openChatStartTime;                                                          //@synthesize openChatStartTime=_openChatStartTime - In the implementation block
@property (assign,nonatomic) BOOL ignoreUnsentTextOnDisappear;                                                  //@synthesize ignoreUnsentTextOnDisappear=_ignoreUnsentTextOnDisappear - In the implementation block
@property (nonatomic,copy) NSArray * chatPreviewActionItems;                                                    //@synthesize chatPreviewActionItems=_chatPreviewActionItems - In the implementation block
@property (nonatomic,retain) WAMessage * messageForAnimatedTransition;                                          //@synthesize messageForAnimatedTransition=_messageForAnimatedTransition - In the implementation block
@property (nonatomic,retain) WAMessageBubbleTableViewCell * mediaMessageCellForAnimatedTransition;              //@synthesize mediaMessageCellForAnimatedTransition=_mediaMessageCellForAnimatedTransition - In the implementation block
@property (nonatomic,readonly) BOOL interfaceRotationInProgress;                                                //@synthesize interfaceRotationInProgress=_interfaceRotationInProgress - In the implementation block
@property (nonatomic,copy,readonly) NSString * jid; 
@property (getter=isShowingMostRecentMessages,nonatomic,readonly) BOOL showingMostRecentMessages; 
+(BOOL)allowReplyToMessage:(id)arg1 ;
+(BOOL)canViewMessageInfo;
+(BOOL)isEditModeSupported;
+(BOOL)needsChatBar;
-(BOOL)chatBarManagerDelegateIsAppearing:(id)arg1 ;
-(void)chatBarManager:(id)arg1 needsAdjustBottomInset:(double)arg2 withScrolling:(BOOL)arg3 keyboardAnimationCurve:(long long)arg4 keyboardAnimationDuration:(double)arg5 ;
-(BOOL)chatBarManagerDelegateIsDisappearing:(id)arg1 ;
-(void)chatBarManager:(id)arg1 didProcessKeyboardWillShowNotification:(id)arg2 ;
-(void)chatBarManager:(id)arg1 didProcessKeyboardDidShowNotification:(id)arg2 ;
-(unsigned long long)chatBarManagerVisibleConnectionStatus:(id)arg1 ;
-(double)chatBarManagerMaximumHeight:(id)arg1 ;
-(void)chatBarManagerDidChangeText:(id)arg1 ;
-(void)chatBarManager:(id)arg1 didPasteImage:(id)arg2 ;
-(void)chatBarManager:(id)arg1 didPasteGIF:(id)arg2 forURL:(id)arg3 ;
-(void)chatBarManager:(id)arg1 didInsertAutoSendURL:(id)arg2 ;
-(void)chatBarManagerWantsToAttachMedia:(id)arg1 ;
-(void)chatBarManagerWantsToPresentCamera:(id)arg1 ;
-(void)chatBarManager:(id)arg1 userDidSubmitText:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)chatBarManagerShouldBeginPTTRecording:(id)arg1 ;
-(void)chatBarManagerDidBeginPTTRecording:(id)arg1 ;
-(double)chatBarManagerWillEndPTTRecording:(id)arg1 ;
-(void)chatBarManagerDidEndPTTRecording:(id)arg1 ;
-(void)chatBarManager:(id)arg1 didCancelPTTRecordingByUser:(BOOL)arg2 ;
-(void)chatBarManagerWantsToScrollToTop:(id)arg1 ;
-(BOOL)chatBarManagerShouldTrackMentions:(id)arg1 ;
-(void)chatBarManager:(id)arg1 didEditMentionInRange:(NSRange)arg2 ;
-(void)chatBarManagerDidStopEditingMention:(id)arg1 ;
-(void)handleDraggingInMessagesTableView:(id)arg1 ;
-(BOOL)isUserConnectedShowingErrorMessageIfNeeded:(BOOL)arg1 ;
-(void)beginDraggingInMessagesTableViewIfPossible:(id)arg1 ;
-(BOOL)chatBarManagerDelegateIsPreviewingContent:(id)arg1 ;
-(void)chatBarManagerWillBeginDraggingChatBar:(id)arg1 ;
-(void)chatBarManager:(id)arg1 didEndDraggingChatBarWithAdditionalTranslation:(double)arg2 finalBottomInset:(double)arg3 ;
-(void)updateMentionsSelectorViewLayoutWithAnimationCurve:(long long)arg1 animationDuration:(double)arg2 ;
-(void)configureMentionsSelectorView;
-(void)mentionsSelectorView:(id)arg1 didSelectContact:(id)arg2 forTextRange:(NSRange)arg3 ;
-(void)prepareTableViewForChatBarManager;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)replyToMessage:(id)arg1 ;
-(void)promptToForwardMessageIfNeeded:(id)arg1 ;
-(void)promptToDeleteMessageIfNeeded:(id)arg1 ;
-(void)callGroupMember:(id)arg1 ;
-(void)videoCallGroupMember:(id)arg1 ;
-(id)applicationURLForOutlookFromMailtoURL:(id)arg1 ;
-(id)applicationURLForGmailFromMailtoURL:(id)arg1 ;
-(id)applicationURLForInboxFromMailtoURL:(id)arg1 ;
-(void)viewGroupInfo;
-(void)viewContactInfo;
-(void)jumpToChatListViewController;
-(void)viewBroadcastListInfo;
-(void)reallyDeleteMessages:(id)arg1 ;
-(void)showAllActionsForLink:(id)arg1 inMessage:(id)arg2 ;
-(id)actionSheetForMailtoURLInLink:(id)arg1 ;
-(id)actionSheetForWebURLInLink:(id)arg1 ;
-(id)actionSheetForPhoneNumberInLink:(id)arg1 ;
-(id)actionSheetForAddressInLink:(id)arg1 ;
-(id)actionSheetForDateInLink:(id)arg1 ;
-(id)actionSheetForMentionInLink:(id)arg1 ;
-(void)jumpToChatWithGroupMember:(id)arg1 ;
-(void)retrySendingMessages:(id)arg1 ;
-(void)verifyIdentityOfSenderOfMessage:(id)arg1 ;
-(void)performActionForLink:(id)arg1 inMessage:(id)arg2 ;
-(void)deleteMessages:(id)arg1 ;
-(void)showCalendarPermissionsAlertView;
-(void)prepareNewEventFromDateCheckingResult:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)newEventForTextCheckingResult:(id)arg1 withStore:(id)arg2 ;
-(void)createEventFromTextCheckingResult:(id)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)presentInsufficientDiskSpaceAlert;
-(void)presentInternetNotReachableAlert;
-(void)presentDocumentCannotBeSharedAlert;
-(void)presentDocumentTooLargeAlert;
-(void)showPushToTalkTooltip;
-(void)showTooltipIfNeeded;
-(void)presentShareTooltip;
-(void)presentGroupInfoTooltop;
-(CGRect)frameOfRightButtonInNavigationBar:(id)arg1 ;
-(id)createWarningViewWithText:(id)arg1 ;
-(void)showWarningView:(id)arg1 animated:(BOOL)arg2 ;
-(void)layoutWarningView:(id)arg1 ;
-(void)showReadonlyWarningAnimated:(BOOL)arg1 ;
-(void)showOfficialAnnouncementsWarningAnimated:(BOOL)arg1 ;
-(void)layoutPresentedWarningView;
-(void)presentTurnOnLocationAlert;
-(void)presentFailedToGetLocationAlertWithHandler:(/*^block*/id)arg1 ;
-(void)showErrorMessageForUnavailableMediaInMessage:(id)arg1 ;
-(void)showErrorMessageForUnsupportedMediaInMessage:(id)arg1 ;
-(void)showGenericDownloadErrorForMediaInMessage:(id)arg1 ;
-(void)presentCouldntDownloadImageReachableAlert;
-(void)presentCouldntDownloadImageUnreachableAlert;
-(void)presentCouldntDownloadVideoReachableAlert;
-(void)presentCouldntDownloadVideoUnreachableAlert;
-(void)presentCouldntDownloadAudioReachableAlert;
-(void)presentCouldntDownloadAudioUnreachableAlert;
-(void)presentCouldntDownloadDocumentReachableAlert;
-(void)presentCouldntDownloadDocumentUnreachableAlert;
-(void)presentImageNotAvailableAlert;
-(void)presentVideoNotAvailableAlert;
-(void)presentAudioNotAvailableAlert;
-(void)presentDocumentNotAvailableAlert;
-(void)presentMediaNotAvailableAlert;
-(void)presentImageUnsupportedAlert;
-(void)presentVideoUnsupportedAlert;
-(void)presentAudioUnsupportedAlert;
-(void)presentDocumentUnsupportedAlert;
-(void)presentMediaUnsupportedAlert;
-(void)removeReadonlyWarningAnimated:(BOOL)arg1 ;
-(void)showBlockedContactWarning:(id)arg1 ;
-(void)disableShareToolTips;
-(void)presentFailedToGetLocationAlertWithoutHandler;
-(void)presentGIFNotAvailableAlert;
-(void)presentCouldntDownloadGIFReachableAlert;
-(void)presentCouldntDownloadGIFUnreachableAlert;
-(void)presentGIFUnsupportedAlert;
-(void)presentInternetRequiredUpdateAlert;
-(void)showUnableToForwardTooltipFromMessageBubbleTableViewCell:(id)arg1 ;
-(void)addAutomationNotificationObservers;
-(void)pttRecordWillStartRecording:(id)arg1 ;
-(void)pttRecorderDidFailToRecord:(id)arg1 ;
-(void)pttRecorderDidStartRecording:(id)arg1 ;
-(void)pttRecorderWasInterrupted:(id)arg1 ;
-(void)pttRecorder:(id)arg1 didFinishRecordingSuccessfully:(BOOL)arg2 filePath:(id)arg3 ;
-(void)updatePushToTalkRecordTime;
-(void)sendAudioAtFilePath:(id)arg1 quotedMessage:(id)arg2 durationSeconds:(long long)arg3 streamingHash:(id)arg4 mediaKey:(id)arg5 ;
-(void)playPTTInBubbleTableViewCell:(id)arg1 ;
-(void)pausePTTPlayer;
-(id)pttPlayer;
-(void)playPTTSoundEffect:(unsigned long long)arg1 ;
-(void)resetAllPTTProgressState;
-(void)handlePTTPlayerDidUpdateKeyPath:(id)arg1 ;
-(void)destroyPTTPlayer;
-(void)startPTTRecording;
-(void)prepareToStopRecording;
-(void)stopPTTRecording;
-(void)cancelPTTRecordingByUser:(BOOL)arg1 ;
-(void)profilePictureTapped:(id)arg1 ;
-(void)headerViewTapped:(id)arg1 ;
-(void)callButtonTapped:(id)arg1 ;
-(void)videoCallButtonTapped:(id)arg1 ;
-(void)updateTitleViewTapability;
-(void)updateUserPresence;
-(BOOL)shouldShowAllChatsButton;
-(void)showAllChats:(id)arg1 ;
-(UIBarButtonItem *)showAllChatsBarButtonItem;
-(void)setUpNavigationBarTitle;
-(void)reloadProfilePictureInNavigationBar;
-(void)updateLeftBarButtonItemWithAnimation:(BOOL)arg1 ;
-(WAConversationHeaderView *)headerView;
-(void)updateHeaderView;
-(BOOL)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4 ;
-(void)prepareForTransitionWithContext:(id)arg1 ;
-(id)viewForTransitionAnimationWithContext:(id)arg1 ;
-(void)finishTransitionWithView:(id)arg1 context:(id)arg2 ;
-(id)popAnimationInteractionControllerFromViewController:(id)arg1 ;
-(id)popAnimationControllerFromViewController:(id)arg1 ;
-(BOOL)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1 ;
-(BOOL)isPerformingCustomPushAnimation;
-(id)pushAnimationInteractionControllerToViewController:(id)arg1 ;
-(id)pushAnimationControllerToViewController:(id)arg1 ;
-(BOOL)isTableViewCellSufficientlyVisibleToParticipateInTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)forwardMessages:(id)arg1 toContacts:(id)arg2 ;
-(void)forwardMessages:(id)arg1 ;
-(void)shareMessages:(id)arg1 ;
-(void)showTooManyMessagesToForwardError;
-(BOOL)allMessagesContainVisualMedia:(id)arg1 ;
-(id)viewControllerForWebURLPreview:(id)arg1 ;
-(id)viewControllerForAddressComponents:(id)arg1 displayName:(id)arg2 inMessage:(id)arg3 ;
-(id)mediaViewerViewControllerForMediaInMessage:(id)arg1 ;
-(id)viewControllerForContactInMessage:(id)arg1 ;
-(id)viewControllerForLocationInMessage:(id)arg1 ;
-(void)presentMediaInBubbleTableViewCell:(id)arg1 ;
-(void)retryDownloadingMediaInMessage:(id)arg1 ;
-(void)presentMessageInMediaViewer:(id)arg1 ;
-(void)presentWebURLInMessage:(id)arg1 ;
-(void)presentContactInMessage:(id)arg1 ;
-(void)presentDocumentInMessage:(id)arg1 ;
-(void)presentMapLocationInMessage:(id)arg1 ;
-(id)mediaManagerForMediaInMessage:(id)arg1 ;
-(void)openMapForAddress:(id)arg1 displayName:(id)arg2 message:(id)arg3 ;
-(void)showInfoForMessage:(id)arg1 ;
-(void)cleanUpAfterSwipeToDetails;
-(BOOL)allowSwipeToDetailsToComplete:(id)arg1 ;
-(void)handleSwipeGestureDidChange:(id)arg1 inBubbleTableViewCell:(id)arg2 ;
-(void)animatePushTransition:(id)arg1 ;
-(void)animatePopTransition:(id)arg1 ;
-(id)pushAnimationInteractionControllerForMessageInfo;
-(void)noOpGestureHandler:(id)arg1 ;
-(UIButton *)scrollToMostRecentButton;
-(UIView *)previewHeader;
-(void)unblockContact;
-(void)blockContact;
-(void)markChatAsTrusted;
-(void)reportContactAsSpam;
-(void)reallyBlockContact;
-(void)reallyReportContactAsSpam;
-(WAReportSpamCell *)reportSpamCell;
-(void)showOrHideSuspiciousChatUI;
-(void)messageVCardContact:(id)arg1 withPreviewAction:(id)arg2 ;
-(void)saveVCardContactAsNewContact:(id)arg1 withPreviewAction:(id)arg2 ;
-(void)addVCardContactToExistingContact:(id)arg1 withPreviewAction:(id)arg2 ;
-(id)previewingContext:(id)arg1 viewControllerForData:(id)arg2 inTableViewCell:(id)arg3 ;
-(void)previewingContext:(id)arg1 inTableViewCell:(id)arg2 commitViewController:(id)arg3 ;
-(id)defaultPreviewActionsForMessage:(id)arg1 ;
-(id)previewActionItems;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)sendDocumentAttachment:(id)arg1 ;
-(void)promptUserToSendMessageIfNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentShareDocumentController;
-(void)presentShareLocationController;
-(void)shareLocationControllerDidSelectWAPlace:(id)arg1 ;
-(void)shareLocationControllerDidCancel:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2 ;
-(void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2 ;
-(void)reloadMessageControllerAtMessage:(id)arg1 ;
-(id)loadMessagesFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(id)extendMessagesForwardToCompleteCollection:(id)arg1 fromOffset:(long long)arg2 ;
-(void)addMessagesToTheBottom:(id)arg1 animated:(BOOL)arg2 dividerBehavior:(unsigned long long)arg3 allowScrolling:(BOOL)arg4 searchResultMessageID:(id)arg5 ;
-(BOOL)loadLaterMessagesIfNeeded;
-(BOOL)isInfiniteScrollingEnabled;
-(void)beginDisablingInfiniteScrolling;
-(void)endDisablingInfiniteScrolling;
-(void)didUpdateMessagesTableAfterControllerDidChangeContent;
-(void)reloadMessageController;
-(void)loadEarlierOrLaterMessagesIfNeeded;
-(void)controllerWillChangeContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)controller:(id)arg1 didRemoveIndexPaths:(id)arg2 ;
-(void)controller:(id)arg1 didRemoveSections:(id)arg2 ;
-(void)controller:(id)arg1 didUpdateGroupingStateForMessageAtIndexPath:(id)arg2 ;
-(void)controller:(id)arg1 didReloadIndexPaths:(id)arg2 ;
-(void)controller:(id)arg1 didInsertSections:(id)arg2 ;
-(void)controller:(id)arg1 didInsertIndexPaths:(id)arg2 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(BOOL)loadEarlierMessagesIfNeeded;
-(void)sendEmailInvitationTo:(id)arg1 ;
-(void)sendEmailTo:(id)arg1 subject:(id)arg2 body:(id)arg3 ;
-(void)sendTextInvitationTo:(id)arg1 ;
-(void)abDisabledViewControllerDidCancel:(id)arg1 ;
-(void)presentAddressBookPermissionsScreenWithTitle:(id)arg1 ;
-(void)sendVCard:(id)arg1 ;
-(void)saveVCardContactAsNewContact:(id)arg1 ;
-(void)addVCardContactToExistingContact:(id)arg1 ;
-(void)startChatWithJIDFromVCard:(id)arg1 ;
-(void)addMergedContactFromVCard:(id)arg1 toPersonRecord:(const void*)arg2 onNavigationController:(id)arg3 ;
-(void)presentPeoplePickerToSaveMergedContactFromVCard:(id)arg1 ;
-(void)showContactEditingScreenForPerson:(void*)arg1 whatsAppJID:(id)arg2 onNavigationController:(id)arg3 ;
-(void*)copyEditablePersonRecordFromPersonRecord:(void*)arg1 ;
-(void)viewContactInfoForContactWithABID:(int)arg1 jid:(id)arg2 ;
-(void)inviteVCardContact:(id)arg1 ;
-(void)showVCardPersonPicker;
-(void)shareContactViewController:(id)arg1 didFinishWithVCard:(id)arg2 ;
-(void)shareContactViewControllerDidCancel:(id)arg1 ;
-(void)addUnknownSenderToAddressBook;
-(void)promptToSaveVCardContact:(id)arg1 ;
-(void)saveVCardContactAsNewContactIfPossible:(id)arg1 ;
-(void)addVCardContactToExistingContactIfPossible:(id)arg1 ;
-(void)startChatWithVCardContact:(id)arg1 ;
-(void)presentUnknownContactScreenForSenderOfMessage:(id)arg1 ;
-(void)presentUnknownContactScreenForDataInLink:(id)arg1 ;
-(void)addPhoneNumberInLink:(id)arg1 toPersonRecord:(void*)arg2 onNavigationController:(id)arg3 ;
-(void)viewContactInfoForGroupMemberWithJID:(id)arg1 ;
-(void)continueEditingPerson:(void*)arg1 onNavigationController:(id)arg2 ;
-(void)infoInputViewControllerDidFinish:(id)arg1 ;
-(void)infoInputViewControllerDidCancel:(id)arg1 ;
-(id)peoplePickerNavigationController;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(void)handlePastedMultiSendMediaItem:(id)arg1 forURL:(id)arg2 ;
-(void)showCameraWithCameraRollPicker:(BOOL)arg1 ;
-(BOOL)hasSufficientDiskSpaceToUseCamera;
-(void)reallyShowMultiSendCameraWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showMultiShotCameraWithCameraRollPicker:(BOOL)arg1 ;
-(void)showCameraFromActionSheetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendVideoAtURL:(id)arg1 referenceURL:(id)arg2 caption:(id)arg3 ;
-(void)dequeueMediaItemSendQueue:(id)arg1 index:(long long)arg2 count:(long long)arg3 previousMessage:(id)arg4 ;
-(void)showMultiSendPickerWithMode:(unsigned long long)arg1 ;
-(void)sendVideoAtURL:(id)arg1 isGIF:(BOOL)arg2 referenceURL:(id)arg3 caption:(id)arg4 ;
-(void)sendRecordedVideoAtURL:(id)arg1 caption:(id)arg2 ;
-(void)reallySaveMediaInMessage:(id)arg1 ;
-(void)handlePastedGIFData:(id)arg1 forURL:(id)arg2 ;
-(void)handlePastedImage:(id)arg1 ;
-(void)handleInsertedAutoSendURL:(id)arg1 ;
-(void)showCameraFromActionSheet;
-(void)showCameraFromChatBar;
-(void)multiShotCameraController:(id)arg1 didCaptureItems:(id)arg2 ;
-(void)multiShotCameraControllerDidCancel:(id)arg1 ;
-(void)multiShotCameraController:(id)arg1 didSelectVideoAtURL:(id)arg2 referenceURL:(id)arg3 caption:(id)arg4 ;
-(void)showPhotoLibrary;
-(void)showPhotoOnlyLibrary;
-(void)showVideoOnlyLibrary;
-(void)debug_showMovieFileInfoAtURL:(id)arg1 ;
-(void)multiSendMediaPickerController:(id)arg1 didSaveVideoToURL:(id)arg2 caption:(id)arg3 ;
-(void)multiSendMediaPickerController:(id)arg1 didSelectVideoAtURL:(id)arg2 referenceURL:(id)arg3 caption:(id)arg4 ;
-(void)multiSendMediaPickerController:(id)arg1 didSelectGIFAtURL:(id)arg2 ;
-(void)multiSendPreviewViewController:(id)arg1 didConfirmItems:(id)arg2 ;
-(void)multiSendPreviewViewControllerDidCancel:(id)arg1 ;
-(void)multiSendPreviewViewControllerDidRequestRetakePhoto:(id)arg1 ;
-(void)multiSendMediaPickerController:(id)arg1 didSelectItems:(id)arg2 ;
-(void)multiSendMediaPickerControllerDidCancel:(id)arg1 ;
-(void)multiSendMediaPickerControllerDidRequestRetakePhoto:(id)arg1 ;
-(void)saveMediaInMessageToPhotoLibrary:(id)arg1 ;
-(NSString *)jid;
-(void)xmppConnectionStateDidChange:(id)arg1 ;
-(WAChatSession *)chatSession;
-(void)setChatSession:(WAChatSession *)arg1 ;
-(void)chatStorageDidLoadDatabase:(id)arg1 ;
-(void)wa_fontSizeDidChange;
-(void)wa_applicationDidEnterBackground;
-(void)sendMediaItems:(id)arg1 ;
-(id<WAChatBarManager>)chatBarManager;
-(void)clearQuotedMessage;
-(void)transitionToShowingOnlyMostRecentMessagesIfNeeded;
-(void)chatStorageDidUpdateChatSession:(id)arg1 ;
-(void)wa_applicationWillEnterForeground;
-(void)showActionSheet:(id)arg1 ;
-(WAMessage *)highlightedMessage;
-(void)saveTableViewSelectionState;
-(void)reloadTableView;
-(void)restoreTableViewSelectionState;
-(void)setShowKeyboardOnAppear:(BOOL)arg1 ;
-(BOOL)isShowingMostRecentMessages;
-(void)makeActiveIfPossible;
-(void)beginPreventingDateBubbleFadeInOnProgrammaticScrolling;
-(void)endPreventingDateBubbleFadeInOnProgrammaticScrolling;
-(void)setNeedsScrollToTarget;
-(void)chatStorageWillUnloadDatabase:(id)arg1 ;
-(void)chatStorageDidReplaceChatSession:(id)arg1 ;
-(void)chatStorageDidDeleteChatSessions:(id)arg1 ;
-(void)profilePictureDidChange:(id)arg1 ;
-(void)applicationWillPresentCallScreen:(id)arg1 ;
-(NSArray *)chatPreviewActionItems;
-(void)xmppConnectionChatStateDidChange:(id)arg1 ;
-(void)scrollDownButtonTapped:(id)arg1 ;
-(void)updateLayoutForCurrentOrientation;
-(void)setMediaMessageCellForAnimatedTransition:(WAMessageBubbleTableViewCell *)arg1 ;
-(void)setMessageForAnimatedTransition:(WAMessage *)arg1 ;
-(void)chatStorageDidDeleteMessages:(id)arg1 ;
-(void)chatStorageDidUpdateParticipantsOfChatSession:(id)arg1 ;
-(void)chatStorageDidAddMessages:(id)arg1 ;
-(void)scrollToBottomAnimated:(BOOL)arg1 ;
-(id)imageForBlurredBackgroundEffect;
-(id)referenceImageViewForBlurredBackgroundEffect;
-(void)doneEditing:(id)arg1 ;
-(void)forwardSelectedMessages:(id)arg1 ;
-(void)shareSelectedMessages:(id)arg1 ;
-(void)deleteSelectedMessages:(id)arg1 ;
-(void)setHighlightedTerms:(NSSet *)arg1 ;
-(id)allSelectedMessages;
-(void)updateEditModeButtons;
-(void)setHighlightedMessage:(WAMessage *)arg1 ;
-(void)restoreSavedInput;
-(void)bubbleTableViewCell:(id)arg1 swipeGestureDidChange:(id)arg2 ;
-(BOOL)showAllowShowMessageInfoFromBubbleTableViewCell:(id)arg1 ;
-(NSSet *)highlightedTerms;
-(void)handleTapOnAlertButtonInBubbleTableViewCell:(id)arg1 ;
-(id)transitionCoordinatorForBubbleTableViewCell:(id)arg1 ;
-(unsigned long long)presentationContextForBubbleTableViewCell:(id)arg1 ;
-(void)bubbleTableViewCellDidRequestScrollToQuotedMessage:(id)arg1 ;
-(void)handleSingleTapInBubbleTableViewCell:(id)arg1 ;
-(void)bubbleTableViewCell:(id)arg1 didReceiveLongPressOnSliceView:(id)arg2 ;
-(void)bubbleTableViewCell:(id)arg1 didRequestHandleLink:(id)arg2 ;
-(void)bubbleTableViewCell:(id)arg1 didRequestShowOptionsForLink:(id)arg2 ;
-(void)bubbleTableViewCell:(id)arg1 didRequestSaveContact:(id)arg2 ;
-(void)bubbleTableViewCell:(id)arg1 didRequestInviteContact:(id)arg2 ;
-(void)bubbleTableViewCell:(id)arg1 didRequestMessageContact:(id)arg2 ;
-(void)bubbleTableViewCellDidRequestStartPlayback:(id)arg1 ;
-(void)bubbleTableViewCellDidRequestStopPlayback:(id)arg1 ;
-(void)bubbleTableViewCellDidRequestStartNetworkTransfer:(id)arg1 ;
-(void)bubbleTableViewCellDidRequestStopNetworkTransfer:(id)arg1 ;
-(BOOL)showAllowReplyToMessageFromBubbleTableViewCell:(id)arg1 ;
-(void)saveMediaInMessageInBubbleTableViewCell:(id)arg1 ;
-(void)deleteMessagesInBubbleTableViewCell:(id)arg1 ;
-(void)showInfoForMessageInBubbleTableViewCell:(id)arg1 ;
-(void)forwardMessagesInBubbleTableViewCell:(id)arg1 ;
-(void)addToContactsSenderOfMessageInBubbleTableViewCell:(id)arg1 ;
-(void)jumpToChatWithSenderOfMessageInBubbleTableViewCell:(id)arg1 ;
-(void)toggleStarredStateOfMessageInBubbleTableViewCell:(id)arg1 ;
-(void)replyToMessageInBubbleTableViewCell:(id)arg1 ;
-(void)showDialogWithMessageIDInBubbleTableViewCell:(id)arg1 ;
-(void)applicationWillPresentCallWindow:(id)arg1 ;
-(BOOL)showKeyboardOnAppear;
-(void)blockedContactsListUpdated:(id)arg1 ;
-(void)visibleConnectionStatusDidChange;
-(BOOL)ignoreUnsentTextOnDisappear;
-(void)setIgnoreUnsentTextOnDisappear:(BOOL)arg1 ;
-(double)openChatStartTime;
-(void)setOpenChatStartTime:(double)arg1 ;
-(void)setChatPreviewActionItems:(NSArray *)arg1 ;
-(void)setEditMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)chatStorageDidDisplayChatSessionRemotely:(id)arg1 ;
-(void)scrollToRowAtIndexPath:(id)arg1 position:(double)arg2 attemptCount:(long long)arg3 ;
-(void)restoreContentOffset;
-(void)beginIgnoringAnimatedContentOffsetChanges;
-(void)endIgnoringAnimatedContentOffsetChanges;
-(id)previousMessageInNavigationStack;
-(void)scrollToMessage:(id)arg1 fromMessage:(id)arg2 pushingOnStack:(BOOL)arg3 ;
-(CGPoint)correctContentOffsetForOverscroll:(CGPoint)arg1 ;
-(BOOL)isIgnoringAnimatedContentOffsetChanges;
-(void)setPausedSessionState;
-(void)currentLocaleChanged:(id)arg1 ;
-(void)xmppConnectionPresenceDidChange:(id)arg1 ;
-(void)mediaDownloadDidFail:(id)arg1 ;
-(void)mediaProgressDidChange:(id)arg1 ;
-(void)locationUpdateDidFail:(id)arg1 ;
-(void)applicationDidDismissCallScreen:(id)arg1 ;
-(void)scrollToTarget;
-(void)updateScrollToMostRecentButton;
-(void)checkChatEncryptionStatus;
-(void)removeUnreadDivider;
-(void)storeContentOffset;
-(id)popMessageNavigationStack;
-(void)clearMessageNavigationStack;
-(void)pushMessageOnNavigationStack:(id)arg1 fromMessage:(id)arg2 ;
-(void)highlightMessageTemporarily:(id)arg1 ;
-(void)reloadAndScrollToMessage:(id)arg1 scrollUp:(BOOL)arg2 ;
-(WAMessageBubbleTableViewCell *)mediaMessageCellForAnimatedTransition;
-(void)cancelScrolling;
-(WAMessage *)messageForAnimatedTransition;
-(BOOL)chatSessionAvailable;
-(void)reloadAfterFontSizeDidChange;
-(void)handleMessageUpdatedNotification:(id)arg1 ;
-(void)updateTableViewContentInsetsWithKeyboardHeight:(double)arg1 adjustingContentOffset:(BOOL)arg2 extendBottomInsetIfNeeded:(BOOL)arg3 fadeInDateBubbles:(BOOL)arg4 ;
-(void)fadeOutDateBubblesWithAnimation:(BOOL)arg1 ;
-(BOOL)isMessageInChatView:(id)arg1 ;
-(void)registerForWhatsAppNotifications;
-(void)registerForSystemNotifications;
-(void)menuControllerDidHide:(id)arg1 ;
-(void)updateScrollOffsetDependentViews;
-(void)clearTableViewSelectionState;
-(id)allSelectedChatCellDataObjects;
-(void)loadToolbarAndBarButtonItems;
-(void)setAppearanceState:(unsigned long long)arg1 ;
-(void)cancelFadeOutDateBubbles;
-(void)fadeOutDateBubblesAfterDelay;
-(void)fadeOutDateBubblesImmediately;
-(BOOL)interfaceRotationInProgress;
-(id)bottomChatCellDataReturningRelativeOffset:(double*)arg1 ;
-(void)restoreContentOffsetWithBottomCellData:(id)arg1 relativeOffset:(double)arg2 chatBarBottomInset:(double)arg3 animated:(BOOL)arg4 ;
-(double)maximumContentOffsetY;
-(void)announceMessageInVoiceOverIfNeeded:(id)arg1 ;
-(BOOL)isPreventingDateBubbleFadeInOnProgrammaticScrolling;
-(void)fadeInDateBubblesWithAnimation:(BOOL)arg1 ;
-(void)updateFloatingStateOfDateBubbleView:(id)arg1 ;
-(void)handleSingleTapOnSystemEventMessage:(id)arg1 ;
-(void)handleSingleTapOnPlaceholderMessage:(id)arg1 ;
-(id)currentBlurredWallpaperImage;
-(void)fadeOutDateBubbles;
-(void)didUpdateChatCellData:(id)arg1 atIndexPath:(id)arg2 ;
-(void)chatSessionTableViewWillBeginScrollingProgrammatically:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(unsigned long long)orientation;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(WAChatSessionTableView *)tableView;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)menuControllerWillHide:(id)arg1 ;
-(void)scrollToBottom;
-(unsigned long long)editMode;
-(void)setEditMode:(unsigned long long)arg1 ;
-(void)setAlwaysShowsBackButton:(BOOL)arg1 ;
-(BOOL)alwaysShowsBackButton;
-(unsigned long long)appearanceState;
-(WAChatMessagesController *)messagesController;
-(void)audioSessionMediaServicesWereLost:(id)arg1 ;
-(void)audioSessionMediaServicesWereReset:(id)arg1 ;
@end
