/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Skype/SKPContactsListAdapterDelegate.h>
#import <Skype/SKPAddContactPickerControllerDelegate.h>

@protocol SKPSearchContactsViewControllerDelegate;
@class SKPContactsListAdapter, SKPSearchContactsView, SKPContactTableViewCell, NSString;

@interface SKPSearchContactsViewController : UIViewController <UITableViewDelegate, UISearchBarDelegate, SKPContactsListAdapterDelegate, SKPAddContactPickerControllerDelegate> {

	BOOL _showSearchOverlay;
	BOOL _showEmptyView;
	SKPContactsListAdapter* _contactsListAdapter;
	id<SKPSearchContactsViewControllerDelegate> _delegate;
	long long _state;
	SKPSearchContactsView* _searchView;
	SKPContactTableViewCell* _prototypeCell;

}

@property (assign,nonatomic) long long state;                                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL showSearchOverlay;                                                   //@synthesize showSearchOverlay=_showSearchOverlay - In the implementation block
@property (assign,nonatomic) BOOL showEmptyView;                                                       //@synthesize showEmptyView=_showEmptyView - In the implementation block
@property (nonatomic,retain) SKPSearchContactsView * searchView;                                       //@synthesize searchView=_searchView - In the implementation block
@property (nonatomic,retain) SKPContactTableViewCell * prototypeCell;                                  //@synthesize prototypeCell=_prototypeCell - In the implementation block
@property (assign,nonatomic,__weak) SKPContactsListAdapter * contactsListAdapter;                      //@synthesize contactsListAdapter=_contactsListAdapter - In the implementation block
@property (assign,nonatomic,__weak) id<SKPSearchContactsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissSearch;
-(SKPContactTableViewCell *)prototypeCell;
-(SKPContactsListAdapter *)contactsListAdapter;
-(void)contactsListAdapter:(id)arg1 controllerDidChangeAllContent:(id)arg2 ;
-(void)contactsListAdapter:(id)arg1 didChangeState:(long long)arg2 ;
-(void)contactsListAdapterShouldJumpToFavorites:(id)arg1 ;
-(void)contactsListAdapterWillReloadTable:(id)arg1 ;
-(void)contactsListAdapterDidReloadTable:(id)arg1 ;
-(void)contactsListAdapterShouldRelayout:(id)arg1 ;
-(void)contactsListAdapterWillStartSearching:(id)arg1 ;
-(id)tableViewForContactsListAdapter:(id)arg1 ;
-(void)updateInsets;
-(void)setPrototypeCell:(SKPContactTableViewCell *)arg1 ;
-(void)setContactsListAdapter:(SKPContactsListAdapter *)arg1 ;
-(void)contactsListAdapter:(id)arg1 controllerDidStartSearchWithText:(id)arg2 ;
-(void)contactsListAdapterShouldJumpToSearch:(id)arg1 ;
-(void)showSkypeDirectorySearch:(id)arg1 ;
-(void)addContactPickerControllerDidCancel:(id)arg1 ;
-(void)addContactPickerController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)addContactPickerController:(id)arg1 callConversation:(id)arg2 ;
-(BOOL)showEmptyView;
-(void)showAddFavorites;
-(void)setShowSearchOverlay:(BOOL)arg1 ;
-(void)contactsListAdapter:(id)arg1 shouldShowEmptyPage:(BOOL)arg2 attributedEmptyPageTitle:(id)arg3 ;
-(BOOL)showSearchOverlay;
-(void)setShowEmptyView:(BOOL)arg1 ;
-(void)setDelegate:(id<SKPSearchContactsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<SKPSearchContactsViewControllerDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(long long)preferredStatusBarStyle;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(BOOL)accessibilityPerformEscape;
-(SKPSearchContactsView *)searchView;
-(void)setSearchView:(SKPSearchContactsView *)arg1 ;
@end
