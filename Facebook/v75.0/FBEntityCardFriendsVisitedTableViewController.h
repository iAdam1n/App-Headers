/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBTableViewController.h>

@class FBUserSession, FBEntityFetcher, FBMemPage, NSArray;

@interface FBEntityCardFriendsVisitedTableViewController : FBTableViewController {

	FBUserSession* _session;
	FBEntityFetcher* _fetcher;
	FBMemPage* _page;
	NSArray* _sortedVisitorFriends;

}
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(id)cellIdentifierAtIndexPath:(id)arg1 ;
-(id)initWithPage:(id)arg1 session:(id)arg2 ;
-(void)_sendRequest;
-(id)newCellWithIdentifier:(id)arg1 ;
-(void)_handleResponseContent:(id)arg1 error:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
@end
