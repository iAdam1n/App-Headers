/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:22 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECRefreshableViewController.h>
#import <Gumtree/ECScrollableViewControllerProtocol.h>
#import <Gumtree/ECAdvertisingProviderDelegate.h>
#import <Gumtree/ECItemListViewModelDelegate.h>
#import <Gumtree/ECSearchResultsTabbedViewControllerProtocol.h>

@class ECSearchAdsDataProvider, ECAdvertisingProvider, ECSearchResultsViewModel, ECSearchResultCollectionViewAdapter, ECSearchResultTableViewAdapter, ECScrollViewFloatingHeaderBehavior, ECSearchResultsView, NSString;

@interface ECSearchResultsViewController : ECRefreshableViewController <ECScrollableViewControllerProtocol, ECAdvertisingProviderDelegate, ECItemListViewModelDelegate, ECSearchResultsTabbedViewControllerProtocol> {

	BOOL _appInBackground;
	BOOL _isGalleryView;
	BOOL _isNewSearchInProgress;
	ECSearchAdsDataProvider* _dataProvider;
	ECAdvertisingProvider* _advertisingProvider;
	ECSearchResultsViewModel* _viewModel;
	ECSearchResultCollectionViewAdapter* _collectionViewAdapter;
	ECSearchResultTableViewAdapter* _tableViewAdapter;
	ECScrollViewFloatingHeaderBehavior* _headersBehavior;

}

@property (nonatomic,retain) ECSearchAdsDataProvider * dataProvider;                                   //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) ECAdvertisingProvider * advertisingProvider;                              //@synthesize advertisingProvider=_advertisingProvider - In the implementation block
@property (nonatomic,retain) ECSearchResultsViewModel * viewModel;                                     //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) ECSearchResultCollectionViewAdapter * collectionViewAdapter;              //@synthesize collectionViewAdapter=_collectionViewAdapter - In the implementation block
@property (nonatomic,retain) ECSearchResultTableViewAdapter * tableViewAdapter;                        //@synthesize tableViewAdapter=_tableViewAdapter - In the implementation block
@property (nonatomic,readonly) id<ECSearchResultsViewAdapterProtocol> currentAdapter; 
@property (nonatomic,retain) ECScrollViewFloatingHeaderBehavior * headersBehavior;                     //@synthesize headersBehavior=_headersBehavior - In the implementation block
@property (assign,nonatomic) BOOL appInBackground;                                                     //@synthesize appInBackground=_appInBackground - In the implementation block
@property (nonatomic,readonly) BOOL picturesOnly; 
@property (nonatomic,readonly) ECSearchResultsView * resultsView; 
@property (assign,nonatomic) BOOL isGalleryView;                                                       //@synthesize isGalleryView=_isGalleryView - In the implementation block
@property (assign,nonatomic) BOOL isNewSearchInProgress;                                               //@synthesize isNewSearchInProgress=_isNewSearchInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createListController;
+(id)createGalleryController;
-(void)setCurrentView:(id)arg1 ;
-(void)updateValues;
-(void)updateEnable;
-(void)trackPageView;
-(id)currentConfig;
-(void)setAdvertisingProvider:(ECAdvertisingProvider *)arg1 ;
-(ECAdvertisingProvider *)advertisingProvider;
-(BOOL)usersAds;
-(void)saveSearchAction:(id)arg1 ;
-(void)saveSearchHelp;
-(void)viewModelWillStartNewSearch:(id)arg1 ;
-(void)viewModelDidReceiveResultsForNewSearch:(id)arg1 ;
-(void)viewModel:(id)arg1 didReceiveMoreResults:(id)arg2 ;
-(void)viewModelWillStartLoadingMoreDataForCurrentSearch:(id)arg1 ;
-(void)viewModel:(id)arg1 didReceiveSearchError:(id)arg2 ;
-(void)viewModel:(id)arg1 didUpdateBannerAtPosition:(id)arg2 ;
-(void)showItemDetailsModuleForAd:(id)arg1 entryIsInTopAds:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateBannerAd:(id)arg1 atPosition:(unsigned long long)arg2 bannerType:(unsigned long long)arg3 ;
-(void)adProvider:(id)arg1 didReceiveAd:(id)arg2 forBannerType:(unsigned long long)arg3 atPosition:(unsigned long long)arg4 withError:(id)arg5 ;
-(ECSearchResultTableViewAdapter *)tableViewAdapter;
-(void)setTableViewAdapter:(ECSearchResultTableViewAdapter *)arg1 ;
-(void)updateData;
-(void)performActionUponAppBecomingActive;
-(void)performActionUponAppResigningActive;
-(void)startSearch;
-(void)setExtraTopInset:(double)arg1 ;
-(BOOL)picturesOnly;
-(void)refineAction:(id)arg1 ;
-(ECSearchResultsView *)resultsView;
-(void)setCollectionViewAdapter:(ECSearchResultCollectionViewAdapter *)arg1 ;
-(ECSearchResultCollectionViewAdapter *)collectionViewAdapter;
-(void)setIsGalleryView:(BOOL)arg1 ;
-(BOOL)isGalleryView;
-(void)requestBannersToPresent;
-(BOOL)showCASStoreFront;
-(void)setHeadersBehavior:(ECScrollViewFloatingHeaderBehavior *)arg1 ;
-(ECScrollViewFloatingHeaderBehavior *)headersBehavior;
-(void)applicationIsChangingState:(id)arg1 ;
-(void)loadOptionalResultViewTypes;
-(void)showGalleryView;
-(BOOL)canShowGrid;
-(void)setAppInBackground:(BOOL)arg1 ;
-(void)setIsNewSearchInProgress:(BOOL)arg1 ;
-(void)cleanUpViewForNewSearch;
-(void)updateAdapterSortDistanceAscending;
-(void)updateAdapterForCASStoreFront;
-(id<ECSearchResultsViewAdapterProtocol>)currentAdapter;
-(BOOL)appInBackground;
-(BOOL)shouldShowSaveSort;
-(BOOL)isNewSearchInProgress;
-(id)adsFromVisibleCells;
-(void)sortAction:(id)arg1 ;
-(ECSearchResultsViewModel *)viewModel;
-(void)setViewModel:(ECSearchResultsViewModel *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setDataProvider:(ECSearchAdsDataProvider *)arg1 ;
-(ECSearchAdsDataProvider *)dataProvider;
-(void)showTableView;
-(void)refresh;
@end
