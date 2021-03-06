//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPModalViewController.h"

#import "MKSwipeTableViewCellDelegate.h"
#import "SKPAddContactsViewControllerDelegate.h"
#import "SKPArrayControllerDelegate.h"
#import "SKPGroupProfileViewDelegate.h"
#import "UIActivityItemSource.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MKActivityIndicatorView, MKAlertView, MKImageView, NSString, SKPArrayController, SKPArrayFilter, SKPContactTableViewCell, SKPConversation, SKPConversationCanAddConsumers, SKPGroupProfileTableViewCell, SKPGroupProfileView, UIBarButtonItem, UIView;

@interface SKPGroupProfileViewController : SKPModalViewController <SKPGroupProfileViewDelegate, UITableViewDataSource, UITableViewDelegate, MKSwipeTableViewCellDelegate, SKPArrayControllerDelegate, SKPAddContactsViewControllerDelegate, UIActivityItemSource>
{
    _Bool _visible;
    _Bool _observing;
    _Bool _notificationsEnabled;
    _Bool _isCurrentUserAdmin;
    _Bool _canKickParticipants;
    id <SKPGroupProfileViewControllerDelegate> _delegate;
    SKPArrayController *_controller;
    SKPArrayFilter *_filterForLiveOrConnectingParticipants;
    unsigned long long _numberOfParticipantsLiveOrConnecting;
    SKPConversation *_conversation;
    NSString *_conversationIdentity;
    SKPGroupProfileView *_groupProfileView;
    MKImageView *_navigationBarBackgroundView;
    MKAlertView *_alertView;
    SKPConversationCanAddConsumers *_canAddParticiants;
    UIView *_spinnerOverlay;
    MKActivityIndicatorView *_spinner;
    UIView *_inviteOriginator;
    UIBarButtonItem *_addToFavoritesItem;
    UIBarButtonItem *_removeFromFavoritesItem;
    SKPContactTableViewCell *_prototypeContactCell;
    SKPGroupProfileTableViewCell *_prototypePreferenceCell;
}

@property(retain, nonatomic) SKPGroupProfileTableViewCell *prototypePreferenceCell; // @synthesize prototypePreferenceCell=_prototypePreferenceCell;
@property(retain, nonatomic) SKPContactTableViewCell *prototypeContactCell; // @synthesize prototypeContactCell=_prototypeContactCell;
@property(nonatomic) _Bool canKickParticipants; // @synthesize canKickParticipants=_canKickParticipants;
@property(nonatomic) _Bool isCurrentUserAdmin; // @synthesize isCurrentUserAdmin=_isCurrentUserAdmin;
@property(nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(retain, nonatomic) UIBarButtonItem *removeFromFavoritesItem; // @synthesize removeFromFavoritesItem=_removeFromFavoritesItem;
@property(retain, nonatomic) UIBarButtonItem *addToFavoritesItem; // @synthesize addToFavoritesItem=_addToFavoritesItem;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) UIView *inviteOriginator; // @synthesize inviteOriginator=_inviteOriginator;
@property(retain, nonatomic) MKActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIView *spinnerOverlay; // @synthesize spinnerOverlay=_spinnerOverlay;
@property(retain, nonatomic) SKPConversationCanAddConsumers *canAddParticiants; // @synthesize canAddParticiants=_canAddParticiants;
@property(retain, nonatomic) MKAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) MKImageView *navigationBarBackgroundView; // @synthesize navigationBarBackgroundView=_navigationBarBackgroundView;
@property(retain, nonatomic) SKPGroupProfileView *groupProfileView; // @synthesize groupProfileView=_groupProfileView;
@property(retain, nonatomic) NSString *conversationIdentity; // @synthesize conversationIdentity=_conversationIdentity;
@property(retain, nonatomic) SKPConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) unsigned long long numberOfParticipantsLiveOrConnecting; // @synthesize numberOfParticipantsLiveOrConnecting=_numberOfParticipantsLiveOrConnecting;
@property(retain, nonatomic) SKPArrayFilter *filterForLiveOrConnectingParticipants; // @synthesize filterForLiveOrConnectingParticipants=_filterForLiveOrConnectingParticipants;
@property(retain, nonatomic) SKPArrayController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <SKPGroupProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (_Bool)swipeTableViewCell:(id)arg1 tappedButtonAtIndex:(long long)arg2 direction:(long long)arg3 fromExpansion:(_Bool)arg4;
- (void)kickParticipantFromConversation:(id)arg1 fromTapInteraction:(_Bool)arg2;
- (id)participantForTableViewCell:(id)arg1;
- (id)rightItemsForTableViewCell:(id)arg1;
- (_Bool)swipeTableViewCell:(id)arg1 canSwipe:(long long)arg2;
- (id)swipeTableViewCell:(id)arg1 swipeItemsForDirection:(long long)arg2;
- (id)tableViewForParticipants:(id)arg1;
- (void)updateController;
- (void)addContactsViewController:(id)arg1 didSelectContactsWithIdentities:(id)arg2;
- (void)presentAlertViewWithError:(id)arg1;
- (void)controllerDidChangeAllContent:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didMoveSectionAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)controller:(id)arg1 didInsertSectionsAtIndexes:(id)arg2;
- (void)controller:(id)arg1 didDeleteSectionsAtIndexes:(id)arg2;
- (void)controller:(id)arg1 didMoveObjectAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)controller:(id)arg1 didInsertObjectsAtIndexPaths:(id)arg2;
- (void)controller:(id)arg1 didDeleteObjectsAtIndexPaths:(id)arg2;
- (void)controllerWillChangeContent:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 groupActionCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 participantCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 preferenceCellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 withContact:(id)arg2;
- (void)configurePreferenceCell:(id)arg1 indexPathRow:(long long)arg2;
- (void)voiceOverStatusChanged;
- (double)alphaFromScrollOffset:(double)arg1;
- (double)alphaFromCurrentScrollOffset;
- (void)groupProfileView:(id)arg1 viewDidScrollToOffset:(double)arg2;
- (double)navigationBarHeight;
- (void)updateViewContent;
- (id)normalizeIndexPathForParticipantsSection:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (void)removeFromFavorites:(id)arg1;
- (void)addToFavorites:(id)arg1;
- (void)refreshFavoriteCommands;
- (void)addContactsViewControllerDidCancel:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)deleteChat:(id)arg1;
- (void)leaveGroup:(id)arg1;
- (void)renameGroup:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateObserving;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)showAlert;
- (void)sendActivityCompletionEventsWithActivityType:(id)arg1 andDidComplete:(_Bool)arg2;
- (void)showActivityViewController:(id)arg1;
- (void)inviteClicked:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)updateInviteButton;
- (long long)modalPresentationStyle;
- (void)setupNavigationBar;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithConversation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

