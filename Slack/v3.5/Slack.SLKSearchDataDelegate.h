/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, NSString, UITableView;

@interface Slack.SLKSearchDataDelegate : NSObject <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate> {

	 isLoading;
	 results;
	 totalCount;
	 currentSortOrder;
	 searchModifiers;
	 searchHistoryResults;
	 SLKSearchAssistTableCellId;
	 SLKSearchHistoryTableCellId;
	 searchDataManager;
	 tableView;
	 dependencies;
	 searchAssistHandler;
	 loadMoreHandler;
	 sortHandler;

}

@property (assign,nonatomic) BOOL isLoading; 
@property (copy,nonatomic) NSArray * results; 
@property (assign,nonatomic) long long totalCount; 
@property (readonly,nonatomic) NSArray * searchModifiers; 
@property (copy,nonatomic) NSArray * searchHistoryResults; 
@property (readonly,nonatomic) NSString * SLKSearchAssistTableCellId; 
@property (readonly,nonatomic) NSString * SLKSearchHistoryTableCellId; 
@property (retain,nonatomic) UITableView * tableView; 
-(id)initWithDependencies:(id)arg1 ;
-(BOOL)showTopSeparator;
-(NSArray *)searchModifiers;
-(NSArray *)searchHistoryResults;
-(void)setSearchHistoryResults:(NSArray *)arg1 ;
-(NSString *)SLKSearchAssistTableCellId;
-(NSString *)SLKSearchHistoryTableCellId;
-(BOOL)isLastCellFromSection:(id)arg1 ;
-(BOOL)isSeparatorCell:(id)arg1 ;
-(id)adjustedIndexPath:(id)arg1 ;
-(long long)searchAssistWithNumberOfRowsInSection:(long long)arg1 ;
-(id)searchAssistTableCellForRowAtIndexPath:(id)arg1 ;
-(id)searchAssistWithViewForHeaderInSection:(long long)arg1 ;
-(id)searchAssistWithTitleForHeaderInSection:(long long)arg1 ;
-(double)searchAssistRowCellHeightForRowAtIndexPath:(id)arg1 ;
-(double)searchAssistWithHeightForHeaderInSection:(long long)arg1 ;
-(void)didSelectSearchAssistCellAtIndexPath:(id)arg1 ;
-(void)didSelectSearchAssistCommandWithHandlerForSearchHistory:(/*^block*/id)arg1 ;
-(void)didTapClearButton:(id)arg1 term:(id)arg2 ;
-(BOOL)canLoadMore;
-(void)onLoadMoreWithHandler:(/*^block*/id)arg1 ;
-(BOOL)showSortCell;
-(BOOL)isSortCell:(id)arg1 ;
-(void)callSortHandler;
-(id)init;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(BOOL)isLoading;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)setTotalCount:(long long)arg1 ;
-(long long)totalCount;
@end

