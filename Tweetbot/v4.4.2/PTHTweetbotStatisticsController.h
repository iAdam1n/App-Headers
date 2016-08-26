/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Tweetbot/PTHTweetbotUserProfileControllerProtocol.h>

@class PTHTweetbotAccount, PTHTweetbotAccountDataStatisticsMonitor, NSMutableArray, UITableView, PTHTweetbotViewControllerStateView, PTHTweetbotStatisticsHeaderView, _PTHTweetbotStatisticsNothingFoundCell, NSString;

@interface PTHTweetbotStatisticsController : PTHViewController <UITableViewDataSource, UITableViewDelegate, PTHTweetbotUserProfileControllerProtocol> {

	PTHTweetbotAccount* _account;
	PTHTweetbotAccountDataStatisticsMonitor* _statisticsMonitor;
	NSMutableArray* _statuses;
	UITableView* _tableView;
	PTHTweetbotViewControllerStateView* _statusView;
	PTHTweetbotStatisticsHeaderView* _headerView;
	_PTHTweetbotStatisticsNothingFoundCell* _nothingFoundCell;
	unsigned long long _maximumFavorites;
	unsigned long long _maximumRetweets;
	BOOL _hasActuallyAppeared;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewForSourceObject:(id)arg1 ;
-(void)_showFollowers:(id)arg1 ;
-(void)_activitiesWereUpdated;
-(id)initWithCoder:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)scrollToTop;
@end
