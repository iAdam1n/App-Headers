/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class PTHTweetbotAccount, UITableView, PTHTweetbotAccountMessages, NSMutableArray, PTHTweetbotRefreshView, PTHTweetbotViewControllerStateView, NSString;

@interface PTHTweetbotDirectMessageThreadsController : PTHViewController <UITableViewDelegate, UITableViewDataSource> {

	PTHTweetbotAccount* _account;
	UITableView* _tableView;
	PTHTweetbotAccountMessages* _accountMessages;
	NSMutableArray* _threads;
	PTHTweetbotRefreshView* _refreshView;
	PTHTweetbotViewControllerStateView* _statusView;
	BOOL _hasUpdated;
	BOOL _hasPlayedRefreshPull;

}

@property (nonatomic,readonly) PTHTweetbotAccount * account;              //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)_updateUnreadTab;
-(void)_streamingTransitioned;
-(void)loadNewer;
-(void)updateInsets;
-(void)loadNewerIfNeeded;
-(void)_compose:(id)arg1 ;
-(void)_setMarkAllRead:(id)arg1 ;
-(void)_refreshDidStart;
-(void)_refreshDidStop;
-(void)selectDirectMessageThreadForUser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)update;
-(id)initWithAccount:(id)arg1 ;
-(PTHTweetbotAccount *)account;
@end

