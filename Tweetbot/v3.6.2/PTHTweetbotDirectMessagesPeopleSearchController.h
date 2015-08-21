/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchBarDelegate.h>

@class PTHTweetbotAccount, UITableView, PTHSearchBar, UIBarButtonItem, PTHTweetbotUser, NSArray, NSString;

@interface PTHTweetbotDirectMessagesPeopleSearchController : PTHViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate> {

	PTHTweetbotAccount* _account;
	UITableView* _tableView;
	PTHSearchBar* _searchBar;
	CGRect _keyboardFrame;
	UIBarButtonItem* _useButton;
	PTHTweetbotUser* _selectedItem;
	NSArray* _users;
	NSString* _searchString;

}

@property (nonatomic,retain) PTHTweetbotUser * selectedItem;              //@synthesize selectedItem=_selectedItem - In the implementation block
@property (nonatomic,retain) NSArray * users;                             //@synthesize users=_users - In the implementation block
@property (nonatomic,copy) NSString * searchString;                       //@synthesize searchString=_searchString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardWillChange:(id)arg1 ;
-(void)_use;
-(void)_updateLayout;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setSelectedItem:(PTHTweetbotUser *)arg1 ;
-(NSString *)searchString;
-(PTHTweetbotUser *)selectedItem;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)updateUI:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(void)_hideKeyboard;
@end

