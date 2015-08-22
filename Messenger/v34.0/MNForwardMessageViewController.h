/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNCaptionPreviewViewControllerDelegate.h>
#import <Messenger/MNExternalForwardDataFetcherListener.h>
#import <Messenger/MNMultiPeoplePickerViewControllerDelegate.h>
#import <Messenger/MNMessageForwardSendControllerDelegate.h>
#import <Messenger/MNMessageForwardSendControllerConsumer.h>
#import <Messenger/MNScrollViewScrollingListener.h>

@protocol MNSuggestedContactsRetriever, MNForwardContentProtocol, MNExternalForwardDataFetcher, MNForwardMessageViewControllerDelegate;
@class FBUserSession, FBAnalytics, NSArray, MNMessageForwardSendController, MNCaptionPreviewViewController, MNForwardMessageView, NSString, NSObject, MNExternalDataToForwardContentMapper, MNMultiPeoplePickerViewController;

@interface MNForwardMessageViewController : FBContainerViewController <MNCaptionPreviewViewControllerDelegate, MNExternalForwardDataFetcherListener, MNMultiPeoplePickerViewControllerDelegate, MNMessageForwardSendControllerDelegate, MNMessageForwardSendControllerConsumer, MNScrollViewScrollingListener> {

	/*^block*/id _forwardSenderBlock;
	FBUserSession* _session;
	FBAnalytics* _analytics;
	id<MNSuggestedContactsRetriever> _suggestedContactsRetriever;
	NSArray* _peopleSuggestionsListeners;
	unsigned long long _entryPoint;
	MNMessageForwardSendController* _sendController;
	MNCaptionPreviewViewController* _captionPreviewViewController;
	MNForwardMessageView* _forwardMessageView;
	NSString* _navigationBarTitle;
	NSObject*<MNForwardContentProtocol> _forwardContent;
	unsigned long long _recipientCountLimit;
	id<MNExternalForwardDataFetcher> _externalDataFetcher;
	MNExternalDataToForwardContentMapper* _externalDataToForwardContentMapper;
	BOOL _showComposerView;
	id<MNForwardMessageViewControllerDelegate> _delegate;
	MNMultiPeoplePickerViewController* _multiPeoplePickerViewController;

}

@property (assign,nonatomic,__weak) id<MNForwardMessageViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MNMultiPeoplePickerViewController * multiPeoplePickerViewController;              //@synthesize multiPeoplePickerViewController=_multiPeoplePickerViewController - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                          //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)multiPeoplePickerViewController:(id)arg1 didPickContacts:(id)arg2 ;
-(void)multiPeoplePickerViewControllerWillBeginSearch:(id)arg1 ;
-(void)multiPeoplePickerViewControllerWillEndSearch:(id)arg1 ;
-(double)containerTopContentInsetForMultiPeoplePickerViewController:(id)arg1 ;
-(void)multiPeoplePickerViewController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(BOOL)arg3 ;
-(BOOL)multiPeoplePickerViewController:(id)arg1 shouldShowPersonFromSearch:(id)arg2 ;
-(id)multiPeoplePickerViewControllerStringForSearchBarPlaceholderText:(id)arg1 ;
-(void)multiPeoplePickerViewControllerDidTapBlockingUI:(id)arg1 ;
-(void)_updateForwardContentWithTextIfPossible;
-(void)_forwardItemToContacts:(id)arg1 ;
-(void)_setComposerViewHidden:(BOOL)arg1 ;
-(void)_previewViewNeedsLayout;
-(void)_configureToForwardContent:(id)arg1 ;
-(void)_configureCaptionPreviewViewControllerWithContent:(id)arg1 ;
-(void)captionPreviewViewControllerDidBeginEditingCaption:(id)arg1 ;
-(void)captionPreviewViewControllerDidEndEditingCaption:(id)arg1 ;
-(void)captionPreviewViewControllerDidUpdatePreviewView:(id)arg1 ;
-(void)willFetchExternalForwardDataWithMessageOutgoingAttribution:(id)arg1 ;
-(void)didFetchExternalForwardData:(id)arg1 messageOutgoingAttribution:(id)arg2 ;
-(void)didFailToFetchDataWithError:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 analytics:(id)arg2 peoplePickerViewControllerBlock:(/*^block*/id)arg3 forwardSenderBlock:(/*^block*/id)arg4 externalDataToForwardContentMapper:(id)arg5 suggestedContactsRetriever:(id)arg6 peopleSuggestionsListeners:(id)arg7 navigationBarTitle:(id)arg8 entryPoint:(unsigned long long)arg9 externalForwardDataFetcher:(id)arg10 showComposerView:(BOOL)arg11 recipientCountLimit:(unsigned long long)arg12 ;
-(MNMultiPeoplePickerViewController *)multiPeoplePickerViewController;
-(void)setMultiPeoplePickerViewController:(MNMultiPeoplePickerViewController *)arg1 ;
-(BOOL)shouldShowSuccessConfirmationForForwardSendController:(id)arg1 ;
-(void)forwardSendControllerDidCancel:(id)arg1 ;
-(void)forwardSendController:(id)arg1 didForwardMessageWithRecipientInfo:(id)arg2 ;
-(void)forwardSendController:(id)arg1 didFailForFbids:(id)arg2 ;
-(BOOL)forwardSendControllerShouldShowCancelButton:(id)arg1 ;
-(BOOL)forwardSendControllerShouldShowCancelButtonDuringSending:(id)arg1 ;
-(void)forwardSendControllerDidShowSendingUI:(id)arg1 ;
-(void)forwardSendControllerDidHideSendingUI:(id)arg1 ;
-(id)analyticsExtras:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNForwardMessageViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<MNForwardMessageViewControllerDelegate>)delegate;
-(id)navigationBar;
-(id)navigationItem;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
