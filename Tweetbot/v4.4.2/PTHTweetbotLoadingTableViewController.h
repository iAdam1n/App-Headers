/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, PTHTweetbotViewControllerStateView, NSString, NSMutableArray, UIView, PTHTweetbotAccount, NSArray;

@interface PTHTweetbotLoadingTableViewController : PTHViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	PTHTweetbotViewControllerStateView* _stateView;
	BOOL _firstTime;
	NSString* _reuseIdentifier;
	NSMutableArray* _items;
	UIView* _nothingFoundView;
	PTHTweetbotAccount* _account;

}

@property (nonatomic,readonly) PTHTweetbotAccount * account;                                //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,readonly) PTHTweetbotViewControllerStateView * stateView;              //@synthesize stateView=_stateView - In the implementation block
@property (nonatomic,readonly) NSString * nothingFoundTitle; 
@property (nonatomic,readonly) UIView * nothingFoundView;                                   //@synthesize nothingFoundView=_nothingFoundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
-(NSString *)nothingFoundTitle;
-(id)viewForSourceObject:(id)arg1 ;
-(void)configure:(id)arg1 forItem:(id)arg2 ;
-(void)loadDataIfNeeded:(BOOL)arg1 ;
-(UIView *)nothingFoundView;
-(PTHTweetbotViewControllerStateView *)stateView;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(PTHTweetbotAccount *)account;
-(void)startLoading;
@end

