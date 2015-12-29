//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPContactsListViewController.h"

@class MKTokenFieldBar, NSArray, NSMutableArray, SKPActivityToken, UISegmentedControl, UIView;

@interface SKPContactsPickerViewController : SKPContactsListViewController
{
    _Bool _hasAppeared;
    MKTokenFieldBar *_tokenFieldBar;
    unsigned long long _maximumSelectionSize;
    UIView *_filterContainerView;
    UISegmentedControl *_segmentedControl;
    NSMutableArray *_selectedItemsDuringEditMode;
    SKPActivityToken *_modalActivity;
}

+ (_Bool)shouldBeConnectionAware;
+ (_Bool)shouldBeLiveCallAware;
+ (id)favoritesCacheName;
+ (id)contactsCacheName;
+ (Class)tokenFieldBarClass;
@property(retain, nonatomic) SKPActivityToken *modalActivity; // @synthesize modalActivity=_modalActivity;
@property(retain, nonatomic) NSMutableArray *selectedItemsDuringEditMode; // @synthesize selectedItemsDuringEditMode=_selectedItemsDuringEditMode;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIView *filterContainerView; // @synthesize filterContainerView=_filterContainerView;
@property(nonatomic) unsigned long long maximumSelectionSize; // @synthesize maximumSelectionSize=_maximumSelectionSize;
@property(retain, nonatomic) MKTokenFieldBar *tokenFieldBar; // @synthesize tokenFieldBar=_tokenFieldBar;
- (void).cxx_destruct;
- (void)contactsListAdapterShouldRelayout:(id)arg1;
- (void)contactsListAdapterDidReloadTable:(id)arg1;
- (void)contactsListAdapterWillReloadTable:(id)arg1;
- (void)contactsListAdapterShouldJumpToFavorites:(id)arg1;
- (void)contactsListAdapter:(id)arg1 didChangeState:(long long)arg2;
- (void)contactsListAdapter:(id)arg1 didAddItemToToken:(id)arg2 atIndexPath:(id)arg3;
- (void)contactsListAdapter:(id)arg1 didRemoveItemToToken:(id)arg2 atIndexPath:(id)arg3;
- (void)contactsListAdapter:(id)arg1 controllerDidChangeAllContent:(id)arg2;
- (void)contactsListAdapter:(id)arg1 controllerWillChangeContent:(id)arg2;
- (void)saveSelectedConversationsIfNeeded;
- (void)refreshSelectedConversationIfNeeded;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewConstraints;
- (void)didContactFilterChange:(id)arg1;
- (struct UIEdgeInsets)contentInsets;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, copy, nonatomic) NSArray *selectedContacts;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
