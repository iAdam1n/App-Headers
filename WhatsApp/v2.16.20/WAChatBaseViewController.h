/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAChatBackgroundViewController.h>
#import <libobjc.A.dylib/ABPersonViewControllerDelegate.h>
#import <WhatsApp/WAInfoInputViewControllerDelegate.h>
#import <WhatsApp/WALocationDataSource.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <WhatsApp/MFMessageComposeViewControllerDelegate.h>
#import <WhatsApp/WABlurredBackgroundProviding.h>
#import <WhatsApp/ABDisabledControllerDelegate.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <WhatsApp/TextBlockDelegate.h>
#import <WhatsApp/WAMessageCellDelegate.h>
#import <WhatsApp/WAChatMessagesControllerDelegate.h>
#import <libobjc.A.dylib/ABNewPersonViewControllerDelegate.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>

@class WALocationData, WAPttPlayer, WAChatCellData, NSString, NSDate, WAChatTableView, WAChatMessagesController, UIViewController;

@interface WAChatBaseViewController : WAChatBackgroundViewController <ABPersonViewControllerDelegate, WAInfoInputViewControllerDelegate, WALocationDataSource, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, WABlurredBackgroundProviding, ABDisabledControllerDelegate, EKEventEditViewDelegate, UITableViewDelegate, UITableViewDataSource, TextBlockDelegate, WAMessageCellDelegate, WAChatMessagesControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate> {

	WALocationData* _locationData;
	WAPttPlayer* _pttPlayer;
	WAChatCellData* _playingChatCellData;
	NSString* _newContactJID;
	BOOL _editingContact;
	long long _indexPathsInserted;
	BOOL _isTableUpdatingContent;
	NSDate* _allowTableRefreshTime;
	BOOL _previewed;
	BOOL _appearing;
	BOOL _disappearing;
	WAChatTableView* _tableViewMessages;
	WAChatMessagesController* _messagesController;
	UIViewController* _viewControllerToPresentInViewDidAppear;
	WAChatCellData* _bottomCellData;
	double _bottomCellOffset;

}

@property (nonatomic,retain) WAChatTableView * tableViewMessages;                                    //@synthesize tableViewMessages=_tableViewMessages - In the implementation block
@property (nonatomic,retain) WAChatMessagesController * messagesController;                          //@synthesize messagesController=_messagesController - In the implementation block
@property (getter=isAppearing,nonatomic,readonly) BOOL appearing;                                    //@synthesize appearing=_appearing - In the implementation block
@property (getter=isDisappearing,nonatomic,readonly) BOOL disappearing;                              //@synthesize disappearing=_disappearing - In the implementation block
@property (nonatomic,retain) UIViewController * viewControllerToPresentInViewDidAppear;              //@synthesize viewControllerToPresentInViewDidAppear=_viewControllerToPresentInViewDidAppear - In the implementation block
@property (nonatomic,retain) WAPttPlayer * pttPlayer;                                                //@synthesize pttPlayer=_pttPlayer - In the implementation block
@property (nonatomic,retain) WAChatCellData * bottomCellData;                                        //@synthesize bottomCellData=_bottomCellData - In the implementation block
@property (assign,nonatomic) double bottomCellOffset;                                                //@synthesize bottomCellOffset=_bottomCellOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WAChatTableView *)tableViewMessages;
-(void)wa_applicationDidEnterBackground;
-(void)forwardMessages:(id)arg1 ;
-(void)shareMessages:(id)arg1 ;
-(void)invertSelectionForCell:(id)arg1 ;
-(void)messagesTableDidScroll;
-(void)messageUpdated:(id)arg1 ;
-(void)sendEmailInvitationTo:(id)arg1 ;
-(void)forwardMessages:(id)arg1 toContacts:(id)arg2 status:(unsigned long long)arg3 ;
-(void)sendEmailTo:(id)arg1 subject:(id)arg2 body:(id)arg3 ;
-(void)sendTextInvitationTo:(id)arg1 ;
-(void)abDisabledViewControllerDidCancel:(id)arg1 ;
-(void)showActionSheet:(id)arg1 ;
-(void)presentAddressBookPermissionsScreenWithTitle:(id)arg1 ;
-(void)saveVCardContactAsNewContact:(id)arg1 ;
-(void)addVCardContactToExistingContact:(id)arg1 ;
-(void)startChatWithJIDFromVCard:(id)arg1 ;
-(void)addMergedContactFromVCard:(id)arg1 toPersonRecord:(void*)arg2 onNavigationController:(id)arg3 ;
-(void)presentPeoplePickerToSaveMergedContactFromVCard:(id)arg1 ;
-(void*)copyEditablePersonRecordFromPersonRecord:(void*)arg1 ;
-(void)didUpdateMessagesTableAfterControllerDidChangeContent;
-(void)controllerWillChangeContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)controller:(id)arg1 didRemoveIndexPaths:(id)arg2 ;
-(void)controller:(id)arg1 didRemoveSections:(id)arg2 ;
-(void)controller:(id)arg1 didUpdateGroupingStateForMessageAtIndexPath:(id)arg2 ;
-(void)controller:(id)arg1 didReloadIndexPaths:(id)arg2 ;
-(void)controller:(id)arg1 didInsertSections:(id)arg2 ;
-(void)controller:(id)arg1 didInsertIndexPaths:(id)arg2 ;
-(void)infoInputViewControllerDidCancel:(id)arg1 ;
-(void)infoInputViewControllerDidFinish:(id)arg1 ;
-(void)cancelMediaUploadOrDownloadInCell:(id)arg1 ;
-(id)locationsWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)updateLayoutForCurrentOrientation;
-(BOOL)presentDocumentInMessage:(id)arg1 ;
-(void)openMapForAddress:(id)arg1 displayName:(id)arg2 message:(id)arg3 ;
-(void)inviteContact:(id)arg1 ;
-(BOOL)canPushViewController;
-(void)openMediaViewerFromMessageCell:(id)arg1 ;
-(void)messageVCardPersonFromCell:(id)arg1 ;
-(void)saveVCardPersonFromCell:(id)arg1 ;
-(void)inviteVCardPersonFromCell:(id)arg1 ;
-(id)imageForBlurredBackgroundEffect;
-(id)referenceImageViewForBlurredBackgroundEffect;
-(void)messageCell:(id)arg1 didRequestOpenPlaceURL:(id)arg2 ;
-(void)textBlock:(id)arg1 willAddNewPerson:(void*)arg2 ;
-(void)textBlockWillAddToExistingContact:(id)arg1 ;
-(void)textBlock:(id)arg1 willOpenURL:(id)arg2 ;
-(void)textBlock:(id)arg1 willCallPhoneURL:(id)arg2 ;
-(void)textBlockWillCreateEvent:(id)arg1 ;
-(void)showTooManyMessagesToForwardError;
-(BOOL)allMessagesContainVisualMedia:(id)arg1 ;
-(void)storeContentOffset;
-(void)restoreContentOffset;
-(BOOL)isDisappearing;
-(void)setBottomCellData:(WAChatCellData *)arg1 ;
-(WAChatCellData *)bottomCellData;
-(void)setBottomCellOffset:(double)arg1 ;
-(double)bottomCellOffset;
-(void)refreshViews;
-(void)deleteMessagesInCellData:(id)arg1 ;
-(void)showContactEditingScreenForPerson:(void*)arg1 whatsAppJID:(id)arg2 inNavigationController:(id)arg3 ;
-(void)setViewControllerToPresentInViewDidAppear:(UIViewController *)arg1 ;
-(double)heightForRowWithCellData:(id)arg1 inTableView:(id)arg2 ;
-(id)cellForRowWithCellData:(id)arg1 inTableView:(id)arg2 ;
-(void)messagesTableDidEndScrollingAnimation;
-(void)handleSingleTapInCell:(id)arg1 ;
-(void)handleDoubleTapInCell:(id)arg1 ;
-(void)pausePTTPlayer;
-(void)forwardMessagesInCellData:(id)arg1 ;
-(void)messagesTableDidScrollToTop;
-(void)messagesTableWillBeginDragging;
-(void)messagesTableDidEndDraggingAndWillDecelerate:(BOOL)arg1 ;
-(void)messagesTableDidEndDecelerating;
-(void)messageCellDidRequestScrollToQuotedMessage:(id)arg1 ;
-(void)alertButtonTappedInCell:(id)arg1 ;
-(void)deleteMessagesInCell:(id)arg1 ;
-(void)forwardMessagesInCell:(id)arg1 ;
-(void)addMessageSenderInCell:(id)arg1 ;
-(void)replyMessageSenderFromCell:(id)arg1 ;
-(void)markAsStarredMessageInCell:(id)arg1 ;
-(void)showDialogWithMessageIDInCell:(id)arg1 ;
-(void)messageCell:(id)arg1 didSelectTextBlock:(id)arg2 ;
-(void)messageCell:(id)arg1 willShowMoreOptionsForTextBlock:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)downloadMediaInCell:(id)arg1 ;
-(void)viewMediaInCell:(id)arg1 ;
-(void)handleWAMessageUpdateNotification:(id)arg1 ;
-(WAPttPlayer *)pttPlayer;
-(void)fadeOutDateBubblesWithAnimation:(BOOL)arg1 ;
-(void)showCalendarPermissionsAlertView;
-(void)prepareNewEventFromDateCheckingResult:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)newEventForTextCheckingResult:(id)arg1 withStore:(id)arg2 ;
-(void)createEventFromTextCheckingResult:(id)arg1 ;
-(void)reallyDeleteMessages:(id)arg1 ;
-(void)retrySendingMessages:(id)arg1 ;
-(void)verifyIdentityOfSenderOfMessage:(id)arg1 ;
-(void)cancelFadeOutDateBubbles;
-(void)fadeOutDateBubblesAfterDelay;
-(void)fadeOutDateBubblesImmediately;
-(void)fadeInDateBubblesWithAnimation:(BOOL)arg1 ;
-(id)currentBlurredWallpaperImage;
-(void)fadeOutDateBubbles;
-(void)setTableViewMessages:(WAChatTableView *)arg1 ;
-(UIViewController *)viewControllerToPresentInViewDidAppear;
-(void)reloadTableRowForCellData:(id)arg1 ;
-(void)retryDownloadingMediaForCellData:(id)arg1 ;
-(id)viewControllerForVCardInCellData:(id)arg1 ;
-(id)viewControllerForLocationInCellData:(id)arg1 ;
-(id)viewControllerForPhotoOrVideoInCellData:(id)arg1 ;
-(id)viewControllerForAddressComponents:(id)arg1 displayName:(id)arg2 message:(id)arg3 ;
-(void)notifyVisibleCellsOfScrolling;
-(void)refreshDateBubbleView:(id)arg1 ;
-(void)viewMediaFromMessageCell:(id)arg1 ;
-(void)createNewContactForSenderInCellData:(id)arg1 ;
-(void)addSenderInCellDataToExistingContact:(id)arg1 ;
-(void)messageVCardContact:(id)arg1 ;
-(void)saveVCardIfPossible:(id)arg1 ;
-(void)messagesTableWillBeginDecelerating;
-(void)addTextBlock:(id)arg1 toPersonRecord:(void*)arg2 onNavigationController:(id)arg3 ;
-(void)addPhoneNumberFromCellData:(id)arg1 toPersonRecord:(void*)arg2 onNavigationController:(id)arg3 ;
-(void)addInfoInTextBlockToExistingContact:(id)arg1 ;
-(void)setPttPlayer:(WAPttPlayer *)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(id)peoplePickerNavigationController;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(BOOL)isAppearing;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(WAChatMessagesController *)messagesController;
-(void)setMessagesController:(WAChatMessagesController *)arg1 ;
-(void)deleteMessages:(id)arg1 ;
-(id)locationDataAtIndex:(long long)arg1 ;
-(unsigned long long)numberOfLocations;
@end
