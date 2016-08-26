/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNExternalForwardDataFetcherListener.h>
#import <Messenger/MNMultiPeoplePickerViewControllerDelegate.h>
#import <Messenger/MNMultiPeoplePickerViewControllerDataSource.h>
#import <Messenger/MNMessageForwardSendControllerDelegate.h>
#import <Messenger/MNMessageForwardSendControllerConsumer.h>
#import <UIKit/UITextViewDelegate.h>
#import <Messenger/MNMessageForwardSendControllerDataSource.h>

@protocol FBProvider, MNSuggestedContactsRetriever, MNExternalForwardDataFetcher, MNThreadMessageSending, MNMontageAudienceNUXManaging, MNForwardMessageViewControllerDelegate;
@class FBUserSession, FBAnalytics, MNMessageSendConversionContext, MNForwardMessageContainerView, NSString, MNForwardContent, MNExternalDataToForwardContentMapper, MNAppThemeConfiguration, MNMultiPeoplePickerConfiguration, MNForwardMessageViewControllerConfiguration, MNForwardComposerView, MNForwardAttachmentSendCoordinator, MNMultiPeoplePickerViewController, MNMessageForwardSendController;

@interface MNForwardMessageViewController : FBContainerViewController <MNExternalForwardDataFetcherListener, MNMultiPeoplePickerViewControllerDelegate, MNMultiPeoplePickerViewControllerDataSource, MNMessageForwardSendControllerDelegate, MNMessageForwardSendControllerConsumer, UITextViewDelegate, MNMessageForwardSendControllerDataSource> {

	id<FBProvider> _forwardSenderProvider;
	FBUserSession* _session;
	FBAnalytics* _analytics;
	id<MNSuggestedContactsRetriever> _suggestedContactsRetriever;
	id<MNSuggestedContactsRetriever> _groupModeSuggestedContactsRetriever;
	MNMessageSendConversionContext* _sendConversionContext;
	MNForwardMessageContainerView* _forwardMessageContainerView;
	NSString* _navigationBarTitle;
	MNForwardContent* _forwardContent;
	BOOL _isForwardContentReadyToSendInGroupMode;
	id<MNExternalForwardDataFetcher> _externalDataFetcher;
	MNExternalDataToForwardContentMapper* _externalDataToForwardContentMapper;
	BOOL _showComposerView;
	MNAppThemeConfiguration* _appThemeConfiguration;
	MNMultiPeoplePickerConfiguration* _multiPeoplePickerConfiguration;
	MNMultiPeoplePickerConfiguration* _groupModeMultiPeoplePickerConfiguration;
	MNForwardMessageViewControllerConfiguration* _forwardMessageViewControllerConfiguration;
	MNForwardComposerView* _singleRecipientModeComposerView;
	BOOL _hasPreselectedContacts;
	BOOL _shouldShowSingleTapButton;
	MNForwardAttachmentSendCoordinator* _sendCoordinator;
	unsigned long long _shareMode;
	MNForwardComposerView* _groupModeComposerView;
	MNMultiPeoplePickerViewController* _multiPeoplePickerViewController;
	MNMultiPeoplePickerViewController* _groupModeMultiPeoplePickerViewController;
	id<MNThreadMessageSending> _threadMessageSender;
	id<MNMontageAudienceNUXManaging> _montageAudienceNUXManager;
	MNMessageForwardSendController* _messageForwardSendController;
	long long _forwardSendControllerLeftBarButtonMode;
	id<MNForwardMessageViewControllerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) MNMessageSendConversionContext * sendConversionContext;              //@synthesize sendConversionContext=_sendConversionContext - In the implementation block
@property (assign,nonatomic,__weak) id<MNForwardMessageViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNMessageSendConversionContext *)sendConversionContext;
-(void)multiPeoplePickerViewController:(id)arg1 didPickContacts:(id)arg2 ;
-(void)multiPeoplePickerViewController:(id)arg1 didToggleContact:(id)arg2 selected:(BOOL)arg3 ;
-(BOOL)multiPeoplePickerViewController:(id)arg1 shouldShowPersonFromSearch:(id)arg2 ;
-(void)multiPeoplePickerViewController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(BOOL)arg3 ;
-(id)multiPeoplePickerViewControllerStringForSearchBarPlaceholderText:(id)arg1 ;
-(void)multiPeoplePickerViewControllerDidTapBlockingUI:(id)arg1 ;
-(void)multiPeoplePickerViewController:(id)arg1 didSelectSuggestionsFilteringSegmentWithIndex:(long long)arg2 ;
-(id)multiPeoplePickerViewControllerAccessoryViewAboveSearchBar:(id)arg1 ;
-(void)willFetchExternalForwardDataWithMessageOutgoingAttribution:(id)arg1 ;
-(void)didFetchExternalForwardData:(id)arg1 messageOutgoingAttribution:(id)arg2 ;
-(void)didFailToFetchDataWithError:(id)arg1 ;
-(void)configureWithThreadMessageSender:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 analytics:(id)arg2 peoplePickerViewControllerBlock:(/*^block*/id)arg3 forwardSenderProvider:(id)arg4 externalDataToForwardContentMapper:(id)arg5 suggestedContactsRetriever:(id)arg6 groupModeSuggestedContactsRetriever:(id)arg7 peopleSuggestionsListeners:(id)arg8 navigationBarTitle:(id)arg9 sendConversionContext:(id)arg10 externalForwardDataFetcher:(id)arg11 showComposerView:(BOOL)arg12 recipientCountLimit:(unsigned long long)arg13 searchBarHidden:(BOOL)arg14 appThemeConfiguration:(id)arg15 forwardMessageViewControllerConfiguration:(id)arg16 hasPreselectedContacts:(BOOL)arg17 montageAudienceNUXManager:(id)arg18 ;
-(void)_toggleBetweenSingleRecipientModeAndGroupMode;
-(id)analyticsExtras:(id)arg1 ;
-(void)_updateForwardContentWithTextIfPossible;
-(void)_beginForwardContent:(id)arg1 toContacts:(id)arg2 ;
-(void)_switchToSingleRecipientModeIfNecessary;
-(BOOL)_shouldKeepContactInPickedContacts:(id)arg1 failedFbids:(id)arg2 ;
-(void)_forwardItemToContacts:(id)arg1 ;
-(void)_forwardItemToGroupWithContacts:(id)arg1 ;
-(void)_singleModeMultiPeoplePickerViewControllerDidSelectContact:(id)arg1 fromSearch:(BOOL)arg2 ;
-(void)_updateSendToGroupButtonState;
-(void)_createComposerViewsIfNecessary;
-(id)_createComposerView;
-(void)_updateFromExternalDataToForwardContentMapperForwardContent:(id)arg1 previewContent:(id)arg2 ;
-(void)_configureToForwardContent:(id)arg1 ;
-(void)_configureCaptionPreviewViewControllerWithPreviewContent:(id)arg1 forwardContent:(id)arg2 ;
-(void)_updateComposerViewText:(id)arg1 ;
-(void)_updateUIWithShareMode:(unsigned long long)arg1 ;
-(BOOL)shouldShowSuccessConfirmationForForwardSendController:(id)arg1 ;
-(void)forwardSendControllerDidCancel:(id)arg1 ;
-(void)forwardSendController:(id)arg1 didForwardMessageWithRecipientInfos:(id)arg2 ;
-(void)forwardSendController:(id)arg1 didForwardMessage:(id)arg2 ;
-(void)forwardSendController:(id)arg1 didFailForFbids:(id)arg2 ;
-(BOOL)forwardSendControllerShouldShowCancelButtonDuringSending:(id)arg1 ;
-(void)forwardSendControllerDidShowSendingUI:(id)arg1 ;
-(void)forwardSendControllerDidHideSendingUI:(id)arg1 ;
-(long long)leftBarButtonModeForForwardSendController:(id)arg1 ;
-(void)setDelegate:(id<MNForwardMessageViewControllerDelegate>)arg1 ;
-(id<MNForwardMessageViewControllerDelegate>)delegate;
-(id)navigationBar;
-(id)navigationItem;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
@end
