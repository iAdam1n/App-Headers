/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAChatSessionsViewController.h>
#import <WhatsApp/WASearchResultsControllerDelegate.h>
#import <WhatsApp/PhoneInputViewControllerDelegate.h>
#import <WhatsApp/ABDisabledControllerDelegate.h>
#import <WhatsApp/WAChatComposerDelegate.h>
#import <WhatsApp/WAForwardPickerViewControllerDelegate.h>
#import <WhatsApp/WAEmptyChatListViewDelegate.h>
#import <WhatsApp/WAAllChatsArchivedViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIVideoEditorControllerDelegate.h>
#import <WhatsApp/WAChatListSearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <WhatsApp/WAMultiSendPreviewViewControllerDelegate.h>
#import <WhatsApp/WAMultiShotCameraControllerDelegate.h>
#import <WhatsApp/WAMultiSelectBarDelegate.h>

@protocol UIViewControllerPreviewing;
@class NSMutableDictionary, UIBarButtonItem, WAChatListHeaderCell, WAActivityLabel, NSString, WAEmptyChatListView, WAAllChatsArchivedView, WAMultiSelectBar, NSArray, WAContactInfo, NSURL, WASearchResultsController, WAMediaRestoreTableViewCell;

@interface WAChatListViewController : WAChatSessionsViewController <WASearchResultsControllerDelegate, PhoneInputViewControllerDelegate, ABDisabledControllerDelegate, WAChatComposerDelegate, WAForwardPickerViewControllerDelegate, WAEmptyChatListViewDelegate, WAAllChatsArchivedViewDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIVideoEditorControllerDelegate, WAChatListSearchBarDelegate, UISearchDisplayDelegate, WAMultiSendPreviewViewControllerDelegate, WAMultiShotCameraControllerDelegate, WAMultiSelectBarDelegate> {

	/*^block*/id _prepareToSendVideoFileCompletionHandler;
	NSMutableDictionary* _chatViewControllers;
	UIBarButtonItem* _composeButton;
	WAChatListHeaderCell* _headerCell;
	WAActivityLabel* _activityLabel;
	NSString* _activityText;
	unsigned long long _activityCounter;
	double _lastActivityUpdateTime;
	WAEmptyChatListView* _emptyChatListView;
	WAAllChatsArchivedView* _allChatsArchivedView;
	WAMultiSelectBar* _multiSelectBar;
	NSArray* _deletedEmptyChatSessions;
	WAContactInfo* _recipientContact;
	NSURL* _fileURL;
	WASearchResultsController* _searchResultsController;
	double _searchResultCellHeight;
	BOOL _needsRemoveInvalidSearchResults;
	BOOL _needsReloadSearchResultsTableAfterLayout;
	BOOL _isSearchBarAnimationInProgress;
	BOOL _needsHideSearchBarOnLayout;
	BOOL _ignoreScrollViewDidScroll;
	BOOL _animateChangesToSearchResults;
	id<UIViewControllerPreviewing> _searchResultsTablePreviewingContext;
	WAMediaRestoreTableViewCell* _mediaRestoreCell;

}

@property (nonatomic,retain) WAMediaRestoreTableViewCell * mediaRestoreCell;                                    //@synthesize mediaRestoreCell=_mediaRestoreCell - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfUnreadChatSessions; 
@property (nonatomic,readonly) unsigned long long numberOfUnreadMessages; 
@property (nonatomic,readonly) unsigned long long numberOfNewUnreadMessagesSinceGoingToBackground; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateSendStateForMessages:(id)arg1 ;
+(unsigned long long)editButtonPlacement;
-(id)startChatWithSession:(id)arg1 highlightedMessage:(id)arg2 prefilledText:(id)arg3 presentKeyboard:(BOOL)arg4 pushImmediately:(BOOL)arg5 animated:(BOOL)arg6 ;
-(void)updateUnreadBadgeInTabBar;
-(unsigned long long)numberOfNewUnreadMessagesSinceGoingToBackground;
-(void)processSendURL:(id)arg1 ;
-(void)forwardFileAtURL:(id)arg1 ;
-(void)saveUnreadCount;
-(void)activateSearchModeAnimated:(BOOL)arg1 ;
-(void)startNewChatAnimated:(BOOL)arg1 ;
-(void)presentMultiShotCameraAnimated:(BOOL)arg1 ;
-(void)inviteContacts;
-(void)wa_fontSizeDidChange;
-(id)startChatWithContact:(id)arg1 jid:(id)arg2 pushImmediately:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)wa_applicationDidEnterBackground;
-(void)multiShotCameraController:(id)arg1 didCaptureItems:(id)arg2 ;
-(void)multiShotCameraControllerDidCancel:(id)arg1 ;
-(void)multiSendPreviewViewController:(id)arg1 didConfirmItems:(id)arg2 ;
-(void)multiSendPreviewViewControllerDidCancel:(id)arg1 ;
-(void)multiSendPreviewViewControllerDidRequestRetakePhoto:(id)arg1 ;
-(void)forwardMessages:(id)arg1 toContacts:(id)arg2 ;
-(void)phoneInputViewController:(id)arg1 didFinishWithCountryCode:(id)arg2 phoneNumber:(id)arg3 ;
-(void)formatTitle;
-(void)phoneInputViewControllerDidCancel:(id)arg1 ;
-(void)abDisabledViewControllerDidCancel:(id)arg1 ;
-(void)sendVCard:(id)arg1 toContacts:(id)arg2 ;
-(void)allChatsArchivedViewDidChooseViewArchivedChats:(id)arg1 ;
-(void)chatStorageDidDeleteChatSessions:(id)arg1 ;
-(BOOL)searchResultsControllerShouldUpdateContent:(id)arg1 ;
-(void)searchResultsControllerDidChangeContent:(id)arg1 ;
-(void)searchResultsControllerWillUpdateContent:(id)arg1 ;
-(void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2 ;
-(void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2 ;
-(void)searchResultsController:(id)arg1 didInsertSections:(id)arg2 ;
-(void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2 ;
-(void)searchResultsControllerDidUpdateContent:(id)arg1 ;
-(void)setUpNoContentView:(id)arg1 ;
-(id)predicateForFetchRequest;
-(void)multiSelectBar:(id)arg1 didRequestSetEditing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)multiSelectBarDidUpdateTitle:(id)arg1 ;
-(id)confirmationButtonTitleForForwardPicker:(id)arg1 ;
-(id)forwardPicker:(id)arg1 confirmationTextForContactInfo:(id)arg2 ;
-(void)chatStorageDidAddMessages:(id)arg1 ;
-(id)backItemTitleForViewController:(id)arg1 ;
-(void)removeFileAtURL:(id)arg1 ;
-(void)chatStorageWillDeleteChatSession:(id)arg1 ;
-(void)chatStorageDidDeleteMessagesInChatSession:(id)arg1 ;
-(void)chatStorageDidDeleteAllMessagesInChatSession:(id)arg1 ;
-(void)showMultiSelectBarAnimated:(BOOL)arg1 ;
-(void)hideMultiSelectBarAnimated:(BOOL)arg1 ;
-(void)registerForMediaRestoreNotifications;
-(void)updateMediaRestoreCell:(id)arg1 ;
-(void)showBroadcastLists:(id)arg1 ;
-(void)startGroupChat:(id)arg1 ;
-(void)startNewChat:(id)arg1 ;
-(void)deleteEmptyEligibleChatSessionsImmediately:(BOOL)arg1 ;
-(void)removeInvalidSearchResults;
-(void)commitPendingDeletionOfEligibleChatSessions;
-(void)showTooltipIfNeeded;
-(void)rollbackPendingDeletionOfEligibleChatSessions;
-(void)hideSearchBarIfNeeded;
-(id)searchDisplayControllerContainerViewInView:(id)arg1 ;
-(void)logAndFixIfNeededSearchTableViewState:(id)arg1 name:(id)arg2 ;
-(void)updateAllChatsArchivedView;
-(void)layoutMultiSelectBar;
-(id)searchOverlayInView:(id)arg1 ;
-(void)updateInterfaceWithAnimation:(BOOL)arg1 ;
-(void)updateNetworkStatusLabel;
-(void)setChatSearchBarExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willUnloadDatabase;
-(void)visibleConnectionStatusDidChange;
-(id)shortViewControllerTitle;
-(unsigned long long)numberOfUnreadChatSessions;
-(void)purgeUnownedViewControllers;
-(WAMediaRestoreTableViewCell *)mediaRestoreCell;
-(id)newOrExistingChatForContactInfo:(id)arg1 scrollToChat:(BOOL)arg2 ;
-(void)sendMediaItems:(id)arg1 toContacts:(id)arg2 ;
-(void)removeCachedViewControllerForChatSession:(id)arg1 ;
-(void)startChatWithContact:(id)arg1 jid:(id)arg2 prefilledText:(id)arg3 ;
-(id)startChatWithContact:(id)arg1 jid:(id)arg2 prefilledText:(id)arg3 pushImmediately:(BOOL)arg4 animated:(BOOL)arg5 ;
-(id)existingOrNewChatSessionWithContact:(id)arg1 jid:(id)arg2 ;
-(id)fetchedResultsIndexPathFromTableIndexPath:(id)arg1 ;
-(unsigned long long)numberOfUnreadMessages;
-(void)didChangeContent;
-(void)updateChatSessionCellsInSearchTableView;
-(void)didInsertOrDeleteRows;
-(void)didLoadDatabase;
-(void)setNeedsRemoveInvalidSearchResultsIfNeeded;
-(id)tableViewCellForList:(id)arg1 inTableView:(id)arg2 ;
-(id)tableViewCellForGroup:(id)arg1 inTableView:(id)arg2 ;
-(id)tableViewCellForSearchResultInTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)didSelectSearchResultsRowAtIndexPath:(id)arg1 ;
-(id)chatSessionForRowAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)presentChatSessionOfMessage:(id)arg1 ;
-(void)startChatWithContactInfo:(id)arg1 prefilledText:(id)arg2 ;
-(void)reloadSearchResultsTableView;
-(void)redrawSeparatorsInTableView:(id)arg1 ;
-(void)updateSizeOfViewToMatchItsSuperview:(id)arg1 logMessageOnError:(id)arg2 ;
-(void)setMediaRestoreCell:(WAMediaRestoreTableViewCell *)arg1 ;
-(void)showAllArchivedChats;
-(id)openChatForContactInfo:(id)arg1 ;
-(id)tableIndexPathFromFetchedResultsIndexPath:(id)arg1 ;
-(id)existingOrNewChatSessionWithABID:(int)arg1 jid:(id)arg2 ;
-(void)showChatAfterSendingExternalMediaWithMessage:(id)arg1 error:(id)arg2 ;
-(void)prepareExternalVideoFileForSending:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendExternalMediaAtURL:(id)arg1 caption:(id)arg2 toContactInfo:(id)arg3 ;
-(void)updateTitle:(id)arg1 ;
-(void)chatComposer:(id)arg1 didFinishWithContactInfo:(id)arg2 ;
-(void)chatComposer:(id)arg1 didFinishWithContacts:(id)arg2 subject:(id)arg3 picture:(id)arg4 ;
-(void)chatComposerDidCancel:(id)arg1 ;
-(void)chatComposerDidAskToInviteFriends:(id)arg1 ;
-(void)emptyChatListViewWillInviteContacts:(id)arg1 ;
-(void)chatListSearchBarWillShowArchivedChats:(id)arg1 ;
-(BOOL)shouldShowNoContentView;
-(BOOL)isCachedViewControllerAvailableForChatSession:(id)arg1 ;
-(void)presentChatSession:(id)arg1 ;
-(id)viewControllerForChatPreviewInTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(unsigned long long)tableSectionIndexFromFetchedResultsSectionIndex:(unsigned long long)arg1 ;
-(unsigned long long)fetchedResultsSectionIndexFromTableSectionIndex:(unsigned long long)arg1 ;
-(id)tableViewForChatSessionCell:(id)arg1 ;
-(id)tableViewSessions;
-(id)startChatWithContact:(id)arg1 JID:(id)arg2 animated:(BOOL)arg3 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(id)separatorColor;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)commonInit;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)videoEditorControllerDidCancel:(id)arg1 ;
-(void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2 ;
-(void)videoEditorController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

