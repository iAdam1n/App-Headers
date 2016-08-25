/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <WhatsApp/WAContactsSearchControllerDelegate.h>

@protocol SinglePersonPickerDelegate;
@class WATableSection, WATableRow, NSString, UITableView, UISearchDisplayController, WAContactsSearchController, NSArray;

@interface SinglePersonPicker : WAViewController <UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate, WAContactsSearchControllerDelegate> {

	long long _actionsSectionIndex;
	WATableSection* _actionCellSection;
	WATableRow* _platformsDescriptionRow;
	BOOL _needsRefreshOnContactsSync;
	BOOL _doNotAdjustSearchBarPosition;
	BOOL _resetContentOffsetInDidLayoutSubviews;
	NSString* _disabledContactStatusText;
	NSString* _blockedContactStatusText;
	id<SinglePersonPickerDelegate> _delegate;
	unsigned long long _pickerMode;
	UITableView* _tableView;
	UISearchDisplayController* _contactsSearchDisplayController;
	WAContactsSearchController* _contactsSearchController;
	NSArray* _searchResults;
	NSArray* _contactsSections;
	unsigned long long _totalCount;

}

@property (nonatomic,retain) UITableView * tableView;                                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UISearchDisplayController * contactsSearchDisplayController;              //@synthesize contactsSearchDisplayController=_contactsSearchDisplayController - In the implementation block
@property (nonatomic,retain) WAContactsSearchController * contactsSearchController;                    //@synthesize contactsSearchController=_contactsSearchController - In the implementation block
@property (nonatomic,copy) NSArray * searchResults;                                                    //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,copy) NSArray * contactsSections;                                                 //@synthesize contactsSections=_contactsSections - In the implementation block
@property (assign,nonatomic) unsigned long long totalCount;                                            //@synthesize totalCount=_totalCount - In the implementation block
@property (assign,nonatomic,__weak) id<SinglePersonPickerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long pickerMode;                                            //@synthesize pickerMode=_pickerMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)syncManagerDidFinishSync:(id)arg1 ;
-(void)wa_fontSizeDidChange;
-(void)searchWithCriteria:(id)arg1 ;
-(id)contactInfoForTableIndexPath:(id)arg1 ;
-(void)contactsSearchControllerDelegateDidInvalidateSearchResults:(id)arg1 ;
-(NSArray *)contactsSections;
-(id)contactSectionInfoForTableSection:(unsigned long long)arg1 ;
-(void)setContactsSections:(NSArray *)arg1 ;
-(void)setContactsSearchController:(WAContactsSearchController *)arg1 ;
-(WAContactsSearchController *)contactsSearchController;
-(void)updateSupplementaryViews;
-(BOOL)showTableViewSectionIndex;
-(void)setContactsSearchDisplayController:(UISearchDisplayController *)arg1 ;
-(UISearchDisplayController *)contactsSearchDisplayController;
-(void)presentFailedToRegisterDeviceAlert;
-(void)unblockContact:(id)arg1 ;
-(void)fixSearchBarPlacementWithAnimationDuration:(double)arg1 ;
-(void)setDelegate:(id<SinglePersonPickerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id<SinglePersonPickerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)pickerMode;
-(void)setPickerMode:(unsigned long long)arg1 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(void)reloadContacts;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(void)cancelAction:(id)arg1 ;
-(void)setTotalCount:(unsigned long long)arg1 ;
-(unsigned long long)totalCount;
@end

