/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Tweetbot/PTHTweetbotSearchTableViewDelegate.h>

@class UITableView, NSMutableArray, UIView, PTHTweetbotSearchTableViewController, PTHSearchBar, PTHTweetbotTableViewStatusView, NSTimer, NSArray, NSString;

@interface PTHTweetbotTableViewController : PTHViewController <UITableViewDelegate, UITableViewDataSource, PTHTweetbotSearchTableViewDelegate> {

	UITableView* _tableView;
	NSMutableArray* _items;
	NSMutableArray* _searchItems;
	UIView* _headerContainer;
	PTHTweetbotSearchTableViewController* _searchTableViewController;
	PTHSearchBar* _searchBar;
	PTHTweetbotTableViewStatusView* _statusView;
	/*^block*/id _endScrollingBlock;
	NSTimer* _endScrollingTimer;
	/*^block*/id _endTrackingBlock;
	NSTimer* _endTrackingTimer;
	unsigned long long _trackingCounter;
	BOOL _isSearching;
	BOOL _disableSearch;

}

@property (nonatomic,readonly) UITableView * tableView;                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * items;                           //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSArray * searchItems;                              //@synthesize searchItems=_searchItems - In the implementation block
@property (nonatomic,__weak,readonly) NSString * searchTitle; 
@property (nonatomic,readonly) unsigned long long itemDisplayCount; 
@property (nonatomic,__weak,readonly) NSString * toolbarTitle; 
@property (nonatomic,__weak,readonly) NSString * itemTitle; 
@property (nonatomic,__weak,readonly) NSString * itemsTitle; 
@property (nonatomic,__weak,readonly) NSString * nothingFoundTitle; 
@property (nonatomic,readonly) BOOL needsCustomSeparators; 
@property (nonatomic,readonly) double topLayoutLength; 
@property (nonatomic,readonly) double topLayoutExtraOffset; 
@property (nonatomic,readonly) double bottomLayoutLength; 
@property (assign,nonatomic) BOOL disableSearch;                                 //@synthesize disableSearch=_disableSearch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)pushFreezeUpdates;
+(void)popFreezeUpdates;
+(unsigned long long)canUpdate;
-(NSString *)searchTitle;
-(NSString *)nothingFoundTitle;
-(double)topLayoutLength;
-(void)updateInsets;
-(double)topLayoutExtraOffset;
-(void)setContentPosition:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)runIfNotTracking:(/*^block*/id)arg1 ;
-(void)scrollViewDidStop:(id)arg1 ;
-(void)searchTableViewControllerDidEndSearch:(id)arg1 ;
-(unsigned long long)itemDisplayCount;
-(NSString *)itemsTitle;
-(BOOL)needsCustomSeparators;
-(void)_runTrackingBlockIfNeeded;
-(void)_runScrollingBlockIfNeeded;
-(double)bottomLayoutLength;
-(BOOL)shouldShowHeaderContainer;
-(void)_scrollViewDidStop:(id)arg1 ;
-(void)searchTableViewControllerWillBeginSearch:(id)arg1 ;
-(void)searchTableViewController:(id)arg1 reloadData:(id)arg2 ;
-(void)searchTableViewController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(BOOL)searchTableViewController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(NSString *)toolbarTitle;
-(BOOL)disableSearch;
-(void)setDisableSearch:(BOOL)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(NSArray *)searchItems;
-(void)setSearchItems:(NSArray *)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(NSMutableArray *)items;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(Class)cellClass;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UITableView *)tableView;
-(id)selectedItem;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(NSString *)itemTitle;
@end
