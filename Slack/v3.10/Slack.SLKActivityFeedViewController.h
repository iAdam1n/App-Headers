/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIViewController.h>
#import <Slack/DZNEmptyDataSetSource.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, UIRefreshControl;

@interface Slack.SLKActivityFeedViewController : UIViewController <DZNEmptyDataSetSource, UITableViewDataSource, UITableViewDelegate> {

	 tableView;
	 refreshControl;
	 cellViewModels;
	 datasource;
	 loading;

}

@property (retain,nonatomic) UITableView * tableView; 
@property (retain,nonatomic) UIRefreshControl * refreshControl; 
+(long long)feedPagingThreshold;
+(id)emptySetImageName;
+(double)emptySetFontSize;
-(void)presentReactions:(id)arg1 fromFrame:(CGRect)arg2 ;
-(void)datasourceFetchDidFail;
-(id)descriptionForEmptyDataSet:(id)arg1 ;
-(id)imageForEmptyDataSet:(id)arg1 ;
-(id)customViewForEmptyDataSet:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)refreshActivity;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
@end
