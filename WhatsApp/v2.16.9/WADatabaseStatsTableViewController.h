/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>
#import <WhatsApp/NSFetchedResultsControllerDelegate.h>

@class WADatabaseStatsTableViewHeader, UIBarButtonItem, WACircularProgressView, UIView, UILabel, NSMutableIndexSet, NSFetchedResultsController, NSString;

@interface WADatabaseStatsTableViewController : WATableViewController <NSFetchedResultsControllerDelegate> {

	WADatabaseStatsTableViewHeader* _headerView;
	UIBarButtonItem* _refreshButton;
	WACircularProgressView* _progressCircle;
	UIView* _progressView;
	UILabel* _progressLabel;
	NSMutableIndexSet* _expandedCells;
	NSFetchedResultsController* _fetchedResultsController;
	int _sortMethod;
	double _expandedHeight;
	double _collapsedHeight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(void)reloadFonts;
-(void)wa_fontSizeDidChange;
-(void)receivedRefreshUpdate:(id)arg1 ;
-(void)finishedRefreshing:(id)arg1 ;
-(void)sortMethodDidChange:(id)arg1 ;
-(void)startRefreshRecurring:(BOOL)arg1 ;
-(id)fetchedResultsController;
-(void)updateReloadProgressAnimated:(BOOL)arg1 ;
-(void)reloadToolbarTitle;
-(void)setHeaderLabelText;
-(void)unhideAllSeparators;
-(void)controllerDidChangeContent:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)refreshButtonTapped:(id)arg1 ;
@end
