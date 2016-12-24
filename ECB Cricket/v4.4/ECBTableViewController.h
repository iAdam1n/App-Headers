/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ECBCricketApp/ECBCricketApp-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSDateFormatter, ECBTable, UITableView, NSArray, ECBLoadingView, NSString;

@interface ECBTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _statusBarShouldBeHidden;
	NSDateFormatter* _deductionsDateFormatter;
	ECBTable* _table;
	UITableView* _standingsTableView;
	NSArray* _sortedGroups;
	NSArray* _sortedDeductions;
	unsigned long long _layout;
	ECBLoadingView* _rotationTip;

}

@property (assign,nonatomic) BOOL statusBarShouldBeHidden;                             //@synthesize statusBarShouldBeHidden=_statusBarShouldBeHidden - In the implementation block
@property (nonatomic,readonly) UITableView * standingsTableView;                       //@synthesize standingsTableView=_standingsTableView - In the implementation block
@property (nonatomic,readonly) NSArray * sortedGroups;                                 //@synthesize sortedGroups=_sortedGroups - In the implementation block
@property (nonatomic,readonly) NSArray * sortedDeductions;                             //@synthesize sortedDeductions=_sortedDeductions - In the implementation block
@property (nonatomic,readonly) unsigned long long layout;                              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * deductionsDateFormatter;              //@synthesize deductionsDateFormatter=_deductionsDateFormatter - In the implementation block
@property (nonatomic,readonly) ECBLoadingView * rotationTip;                           //@synthesize rotationTip=_rotationTip - In the implementation block
@property (nonatomic,retain) ECBTable * table;                                         //@synthesize table=_table - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStatusBarShouldBeHidden:(BOOL)arg1 ;
-(UITableView *)standingsTableView;
-(void)setRotationTipHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSDateFormatter *)deductionsDateFormatter;
-(NSArray *)sortedGroups;
-(NSArray *)sortedDeductions;
-(id)attributedStringForDeduction:(id)arg1 ;
-(BOOL)statusBarShouldBeHidden;
-(ECBLoadingView *)rotationTip;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithTable:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)layout;
-(void)viewDidLoad;
-(ECBTable *)table;
-(void)setTable:(ECBTable *)arg1 ;
@end
