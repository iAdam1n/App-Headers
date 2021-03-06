/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECRefreshableViewController.h>
#import <Gumtree/ECUserAdsViewModelDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class ECNoItemsTableView, ECStatusBarView, UIActivityIndicatorView, ECFooterLoadingView, ECUserAdsTableViewAdapter, ECUserAdsViewModel, ECNoItemsView, NSString;

@interface ECUserAdsViewController : ECRefreshableViewController <ECUserAdsViewModelDelegate, UIScrollViewDelegate> {

	ECNoItemsTableView* _tableView;
	ECStatusBarView* _statusBarView;
	UIActivityIndicatorView* _resultsActivityIndicator;
	ECFooterLoadingView* _footerLoadingView;
	ECUserAdsTableViewAdapter* _tableViewAdapter;
	ECUserAdsViewModel* _viewModel;
	ECNoItemsView* _loadingAdsView;
	ECNoItemsView* _noItemsView;

}

@property (nonatomic,retain) ECNoItemsTableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) ECStatusBarView * statusBarView;                                 //@synthesize statusBarView=_statusBarView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * resultsActivityIndicator;              //@synthesize resultsActivityIndicator=_resultsActivityIndicator - In the implementation block
@property (nonatomic,retain) ECFooterLoadingView * footerLoadingView;                         //@synthesize footerLoadingView=_footerLoadingView - In the implementation block
@property (nonatomic,retain) ECUserAdsTableViewAdapter * tableViewAdapter;                    //@synthesize tableViewAdapter=_tableViewAdapter - In the implementation block
@property (nonatomic,retain) ECUserAdsViewModel * viewModel;                                  //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) ECNoItemsView * loadingAdsView;                                  //@synthesize loadingAdsView=_loadingAdsView - In the implementation block
@property (nonatomic,retain) ECNoItemsView * noItemsView;                                     //@synthesize noItemsView=_noItemsView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)trackPageView;
-(void)updateEnable;
-(void)updateData;
-(void)updateOnTabChange:(BOOL)arg1 ;
-(void)updateValues;
-(void)setFooterLoadingView:(ECFooterLoadingView *)arg1 ;
-(ECFooterLoadingView *)footerLoadingView;
-(ECStatusBarView *)statusBarView;
-(void)setStatusBarView:(ECStatusBarView *)arg1 ;
-(void)handleLoginChangeNotification:(id)arg1 ;
-(ECNoItemsView *)noItemsView;
-(void)updateDataAnimated:(BOOL)arg1 ;
-(UIActivityIndicatorView *)resultsActivityIndicator;
-(void)setResultsActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setNoItemsView:(ECNoItemsView *)arg1 ;
-(ECUserAdsViewModel *)viewModel;
-(void)viewModelEndedEditing:(id)arg1 ;
-(void)goToPostFlow;
-(void)setLoadingAdsView:(ECNoItemsView *)arg1 ;
-(void)setTableViewAdapter:(ECUserAdsTableViewAdapter *)arg1 ;
-(ECNoItemsView *)loadingAdsView;
-(void)displayAd:(id)arg1 startPromoteFlow:(BOOL)arg2 ;
-(ECUserAdsTableViewAdapter *)tableViewAdapter;
-(void)setNeedsFullReload;
-(void)viewModelWillLoadMoreItems;
-(void)viewModelDidFinishLoading;
-(void)viewModelWillReloadItems;
-(void)viewModelDidDeleteItemsAtIndexes:(id)arg1 ;
-(BOOL)loadingFooterHidden;
-(void)viewModelWillDisplayAdDetails:(id)arg1 ;
-(void)viewModelStartedEditing:(id)arg1 ;
-(void)viewModelUpdatedAdAtIndex:(id)arg1 ;
-(void)setViewModel:(ECUserAdsViewModel *)arg1 ;
-(void)refresh;
-(BOOL)requiresAuthentication;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setTableView:(ECNoItemsTableView *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(ECNoItemsTableView *)tableView;
@end

