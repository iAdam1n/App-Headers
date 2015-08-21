/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGDirectPendingThreadViewDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>

@protocol IGDirectPendingInboxDelegate;
@class IGPlainTableView, NSOrderedSet, NSString, IGPullToRefreshViewManager, UIView;

@interface IGDirectPendingInboxViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGDirectPendingThreadViewDelegate, IGPullToRefreshProtocol> {

	BOOL _loadingPreviousThreads;
	BOOL _hasFakedPullToRefresh;
	id<IGDirectPendingInboxDelegate> _delegate;
	IGPlainTableView* _tableView;
	NSOrderedSet* _threads;
	NSString* _nextMaxId;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	UIView* _headerLabel;

}

@property (assign,nonatomic,__weak) id<IGDirectPendingInboxDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGPlainTableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSOrderedSet * threads;                                             //@synthesize threads=_threads - In the implementation block
@property (assign,nonatomic) BOOL loadingPreviousThreads;                                        //@synthesize loadingPreviousThreads=_loadingPreviousThreads - In the implementation block
@property (nonatomic,copy) NSString * nextMaxId;                                                 //@synthesize nextMaxId=_nextMaxId - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;              //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (assign,nonatomic) BOOL hasFakedPullToRefresh;                                         //@synthesize hasFakedPullToRefresh=_hasFakedPullToRefresh - In the implementation block
@property (nonatomic,retain) UIView * headerLabel;                                               //@synthesize headerLabel=_headerLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThreads:(NSOrderedSet *)arg1 ;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(NSOrderedSet *)threads;
-(BOOL)loadingPreviousThreads;
-(void)setLoadingPreviousThreads:(BOOL)arg1 ;
-(double)cellProfilePictureVerticalPadding;
-(void)loadMoreThreads;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(BOOL)hasFakedPullToRefresh;
-(void)setHasFakedPullToRefresh:(BOOL)arg1 ;
-(NSString *)nextMaxId;
-(void)refreshDataWithNextMaxID:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)setNextMaxId:(NSString *)arg1 ;
-(void)threadViewController:(id)arg1 didAcceptThread:(id)arg2 ;
-(void)threadViewController:(id)arg1 didDeclineThread:(id)arg2 ;
-(BOOL)disableNonEdgeNavigationGesture;
-(void)setDelegate:(id<IGDirectPendingInboxDelegate>)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGDirectPendingInboxDelegate>)delegate;
-(void)setTableView:(IGPlainTableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(IGPlainTableView *)tableView;
-(void)setHeaderLabel:(UIView *)arg1 ;
-(UIView *)headerLabel;
@end

