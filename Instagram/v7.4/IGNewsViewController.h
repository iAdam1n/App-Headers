/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGTabPageViewController.h>

@class IGNewsFollowingTableViewController, IGNewsInboxTableViewController;

@interface IGNewsViewController : IGTabPageViewController {

	IGNewsFollowingTableViewController* _followingViewController;
	IGNewsInboxTableViewController* _inboxViewController;

}

@property (nonatomic,retain) IGNewsFollowingTableViewController * followingViewController;              //@synthesize followingViewController=_followingViewController - In the implementation block
@property (nonatomic,retain) IGNewsInboxTableViewController * inboxViewController;                      //@synthesize inboxViewController=_inboxViewController - In the implementation block
-(id)analyticsModule;
-(void)focusInboxIfOffscreen;
-(void)focusInbox;
-(void)fetchInbox;
-(void)onShouldReload;
-(void)tabBarTapped:(id)arg1 ;
-(IGNewsFollowingTableViewController *)followingViewController;
-(IGNewsInboxTableViewController *)inboxViewController;
-(long long)currentSegment;
-(id)scrollViewForSegment:(long long)arg1 ;
-(void)setFollowingViewController:(IGNewsFollowingTableViewController *)arg1 ;
-(void)setInboxViewController:(IGNewsInboxTableViewController *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
