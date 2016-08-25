/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <WhatsApp/WAContactGridViewControllerDataSource.h>
#import <WhatsApp/WAContactGridViewControllerDelegate.h>
#import <WhatsApp/WAContactsSearchControllerDelegate.h>

@protocol WAParticipantPickerViewControllerDelegate;
@class NSArray, WAContactsSectionInfo, WAContactsSearchController, NSMutableArray, NSString, WAConversationHeaderView, UITableView, UISearchBar, WAContactGridViewController, UILabel;

@interface WAParticipantPickerViewController : WAViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, WAContactGridViewControllerDataSource, WAContactGridViewControllerDelegate, WAContactsSearchControllerDelegate> {

	NSArray* _sections;
	NSArray* _actionRows;
	WAContactsSectionInfo* _actionsSection;
	WAContactsSectionInfo* _searchResults;
	WAContactsSearchController* _searchController;
	NSMutableArray* _selectedContacts;
	double _keyboardHeight;
	BOOL _needsRefreshOnContactsSync;
	long long _minContacts;
	long long _maxContacts;
	BOOL _resetContentOffsetOnSearchStart;
	id<WAParticipantPickerViewControllerDelegate> _delegate;
	unsigned long long _mode;
	NSString* _groupOrListJID;
	NSArray* _lockedJIDs;
	WAConversationHeaderView* _titleView;
	UITableView* _tableView;
	UISearchBar* _searchBar;
	WAContactGridViewController* _contactGridViewController;
	UILabel* _broadcastListWarning;

}

@property (nonatomic,retain) WAConversationHeaderView * titleView;                                         //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                      //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) WAContactGridViewController * contactGridViewController;                      //@synthesize contactGridViewController=_contactGridViewController - In the implementation block
@property (nonatomic,retain) UILabel * broadcastListWarning;                                               //@synthesize broadcastListWarning=_broadcastListWarning - In the implementation block
@property (nonatomic,readonly) unsigned long long contactsCount; 
@property (getter=isDisplayingSearchResults,nonatomic,readonly) BOOL displayingSearchResults; 
@property (assign,nonatomic) BOOL resetContentOffsetOnSearchStart;                                         //@synthesize resetContentOffsetOnSearchStart=_resetContentOffsetOnSearchStart - In the implementation block
@property (assign,nonatomic,__weak) id<WAParticipantPickerViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSString * groupOrListJID;                                                      //@synthesize groupOrListJID=_groupOrListJID - In the implementation block
@property (nonatomic,copy) NSArray * lockedJIDs;                                                           //@synthesize lockedJIDs=_lockedJIDs - In the implementation block
@property (nonatomic,copy) NSArray * selectedContacts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)syncManagerDidFinishSync:(id)arg1 ;
-(void)wa_fontSizeDidChange;
-(unsigned long long)contactsCount;
-(id)initWithPickerMode:(unsigned long long)arg1 ;
-(void)contactsSearchControllerDelegateDidInvalidateSearchResults:(id)arg1 ;
-(void)setSelectedContacts:(NSArray *)arg1 ;
-(void)doneAction:(id)arg1 ;
-(id)currentDataSource;
-(void)setGroupOrListJID:(NSString *)arg1 ;
-(void)setLockedJIDs:(NSArray *)arg1 ;
-(unsigned long long)numberOfContactsInContactGridViewController:(id)arg1 ;
-(id)contactGridViewController:(id)arg1 contactAtIndex:(unsigned long long)arg2 ;
-(void)contactGridViewController:(id)arg1 requestedToDeleteContactAtIndex:(unsigned long long)arg2 ;
-(NSArray *)lockedJIDs;
-(void)updateTitleViewToCurrentInterfaceOrientation;
-(void)setContactGridViewController:(WAContactGridViewController *)arg1 ;
-(WAContactGridViewController *)contactGridViewController;
-(void)setBroadcastListWarning:(UILabel *)arg1 ;
-(UILabel *)broadcastListWarning;
-(void)updateInterfaceOnSelectionChange;
-(NSString *)groupOrListJID;
-(void)searchContactsWithText:(id)arg1 ;
-(void)setContactGridHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)groupInviteLinkAction;
-(BOOL)isIndexPathAnActionCell:(id)arg1 ;
-(id)contactForCellIndexPath:(id)arg1 ;
-(void)selectContact:(id)arg1 updateTableView:(BOOL)arg2 ;
-(void)deselectContact:(id)arg1 updateTableView:(BOOL)arg2 ;
-(BOOL)resetContentOffsetOnSearchStart;
-(void)setResetContentOffsetOnSearchStart:(BOOL)arg1 ;
-(void)updateTableViewInsets;
-(void)setDelegate:(id<WAParticipantPickerViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id<WAParticipantPickerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(WAConversationHeaderView *)titleView;
-(void)setTitleView:(WAConversationHeaderView *)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(UISearchBar *)searchBar;
-(unsigned long long)mode;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(BOOL)searchBarShouldEndEditing:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(id)sections;
-(id)indexPathForContact:(id)arg1 ;
-(void)reloadContacts;
-(NSArray *)selectedContacts;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(BOOL)isDisplayingSearchResults;
-(void)cancelAction:(id)arg1 ;
@end

