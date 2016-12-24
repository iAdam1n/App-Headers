/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <ECBCricketApp/MFMailComposeViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UITableView, NSArray, NSString;

@interface ECBMoreViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate, UIActionSheetDelegate> {

	UITableView* _moreTableView;
	NSArray* _sortedSections;

}

@property (nonatomic,readonly) UITableView * moreTableView;              //@synthesize moreTableView=_moreTableView - In the implementation block
@property (nonatomic,readonly) NSArray * sortedSections;                 //@synthesize sortedSections=_sortedSections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITableView *)moreTableView;
-(NSArray *)sortedSections;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
@end
