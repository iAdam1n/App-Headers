/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Tweetbot/PTHTweetbotUserProfileControllerProtocol.h>

@class PTHTweetbotAccount, PTHTweetbotAccountDataStatisticsMonitor, UITableView, PTHTweetbotViewControllerStateView, _PTHTweetbotStatisticsNothingFoundCell, NSMutableArray, PTHTweetbotStatisticsHeaderView, NSString;

@interface PTHTweetbotStatisticsController : PTHViewController <UITableViewDataSource, UITableViewDelegate, PTHTweetbotUserProfileControllerProtocol> {

	PTHTweetbotAccount* _account;
	PTHTweetbotAccountDataStatisticsMonitor* _statisticsMonitor;
	UITableView* _tableView;
	PTHTweetbotViewControllerStateView* _statusView;
	_PTHTweetbotStatisticsNothingFoundCell* _nothingFoundCell;
	NSMutableArray* _statuses;
	PTHTweetbotStatisticsHeaderView* _headerView;
	unsigned long long _freezeCount;
	unsigned long long _maximumFavorites;
	unsigned long long _maximumRetweets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pushFreezeUpdates;
-(void)popFreezeUpdates;
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
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollToTop;
-(id)initWithAccount:(id)arg1 ;
@end

