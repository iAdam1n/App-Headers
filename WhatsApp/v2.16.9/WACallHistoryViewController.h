/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <WhatsApp/ABDisabledControllerDelegate.h>
#import <WhatsApp/SinglePersonPickerDelegate.h>

@class UISegmentedControl, UIBarButtonItem, NSArray, NSCharacterSet, UIView, UILabel, NSString;

@interface WACallHistoryViewController : WATableViewController <UISearchDisplayDelegate, UISearchBarDelegate, ABDisabledControllerDelegate, SinglePersonPickerDelegate> {

	UISegmentedControl* _callFilterSegmentedControl;
	BOOL _showMissedCallsOnly;
	UIBarButtonItem* _clearAllButton;
	UIBarButtonItem* _startCallButton;
	BOOL _editingSingleRow;
	NSArray* _searchResults;
	NSCharacterSet* _symbolsInPhoneNumberSet;
	NSCharacterSet* _nonNumbersSet;
	UIView* _emptyListView;
	UILabel* _emptyListViewLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tabBarItem;
-(void)startNewChatAnimated:(BOOL)arg1 ;
-(void)wa_fontSizeDidChange;
-(void)abDisabledViewControllerDidCancel:(id)arg1 ;
-(void)singlePersonPickerDidCancel:(id)arg1 ;
-(void)singlePersonPicker:(id)arg1 didSelectContactInfo:(id)arg2 ;
-(void)hideSearchBarIfNeeded;
-(void)callFilterDidChange:(id)arg1 ;
-(void)clearAll:(id)arg1 ;
-(void)startNewCall:(id)arg1 ;
-(void)callLoggerDidUpdateEvents:(id)arg1 ;
-(void)reloadEmptyListView;
-(id)aggregateCallEventAtIndexPath:(id)arg1 ;
-(void)showContactInfoScreenForAggregateCallEvent:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)reload;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)editButtonTapped:(id)arg1 ;
@end

