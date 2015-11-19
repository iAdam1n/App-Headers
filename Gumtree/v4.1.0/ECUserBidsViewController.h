/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:22 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECRefreshableViewController.h>
#import <Gumtree/ECItemListViewModelDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class ECFooterLoadingView, ECNoItemsView, ECItemListViewModel, ECNoItemsTableView, ECStatusBarView, UIActivityIndicatorView, ECUserBidsDataProvider, ECSearchResultTableViewAdapter, NSString;

@interface ECUserBidsViewController : ECRefreshableViewController <ECItemListViewModelDelegate, UIScrollViewDelegate> {

	BOOL _needsFullReload;
	ECFooterLoadingView* _footerLoadingView;
	ECNoItemsView* _loadingBidsView;
	ECItemListViewModel* _viewModel;
	ECNoItemsView* _noItemsView;
	ECNoItemsTableView* _tableView;
	ECStatusBarView* _statusBarView;
	UIActivityIndicatorView* _resultsActivityIndicator;
	ECUserBidsDataProvider* _dataProvider;
	ECSearchResultTableViewAdapter* _tableViewAdapter;

}

@property (nonatomic,retain) ECFooterLoadingView * footerLoadingView;                         //@synthesize footerLoadingView=_footerLoadingView - In the implementation block
@property (nonatomic,retain) ECNoItemsView * loadingBidsView;                                 //@synthesize loadingBidsView=_loadingBidsView - In the implementation block
@property (nonatomic,retain) ECItemListViewModel * viewModel;                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) ECNoItemsView * noItemsView;                                     //@synthesize noItemsView=_noItemsView - In the implementation block
@property (nonatomic,retain) ECNoItemsTableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) ECStatusBarView * statusBarView;                                 //@synthesize statusBarView=_statusBarView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * resultsActivityIndicator;              //@synthesize resultsActivityIndicator=_resultsActivityIndicator - In the implementation block
@property (nonatomic,retain) ECUserBidsDataProvider * dataProvider;                           //@synthesize dataProvider=_dataProvider - In the implementation block
@property (assign,nonatomic) BOOL needsFullReload;                                            //@synthesize needsFullReload=_needsFullReload - In the implementation block
@property (nonatomic,retain) ECSearchResultTableViewAdapter * tableViewAdapter;               //@synthesize tableViewAdapter=_tableViewAdapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateValues;
-(void)updateEnable;
-(void)trackPageView;
-(void)viewModelWillStartNewSearch:(id)arg1 ;
-(void)viewModelDidReceiveResultsForNewSearch:(id)arg1 ;
-(void)viewModel:(id)arg1 didReceiveMoreResults:(id)arg2 ;
-(void)viewModelWillStartLoadingMoreDataForCurrentSearch:(id)arg1 ;
-(void)viewModel:(id)arg1 didReceiveSearchError:(id)arg2 ;
-(void)viewModel:(id)arg1 didUpdateBannerAtPosition:(id)arg2 ;
-(void)viewModel:(id)arg1 didDeleteItemAtIndex:(id)arg2 ;
-(void)viewModel:(id)arg1 didReceiveDeleteError:(id)arg2 ;
-(void)showItemDetailsModuleForAd:(id)arg1 entryIsInTopAds:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setNeedsFullReload;
-(void)updateOnTabChange:(BOOL)arg1 ;
-(BOOL)needsFullReload;
-(void)setNeedsFullReload:(BOOL)arg1 ;
-(ECSearchResultTableViewAdapter *)tableViewAdapter;
-(void)setFooterLoadingView:(ECFooterLoadingView *)arg1 ;
-(void)setNoItemsView:(ECNoItemsView *)arg1 ;
-(void)setTableViewAdapter:(ECSearchResultTableViewAdapter *)arg1 ;
-(ECStatusBarView *)statusBarView;
-(ECNoItemsView *)noItemsView;
-(UIActivityIndicatorView *)resultsActivityIndicator;
-(ECFooterLoadingView *)footerLoadingView;
-(void)updateData;
-(void)updateDataAnimated:(BOOL)arg1 ;
-(void)setStatusBarView:(ECStatusBarView *)arg1 ;
-(void)setResultsActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)goToSearch;
-(id)initWithBiddingService:(id)arg1 ;
-(void)setLoadingBidsView:(ECNoItemsView *)arg1 ;
-(ECNoItemsView *)loadingBidsView;
-(BOOL)requiresAuthentication;
-(ECItemListViewModel *)viewModel;
-(void)setViewModel:(ECItemListViewModel *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(ECNoItemsTableView *)tableView;
-(void)setTableView:(ECNoItemsTableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setDataProvider:(ECUserBidsDataProvider *)arg1 ;
-(ECUserBidsDataProvider *)dataProvider;
-(void)refresh;
@end

