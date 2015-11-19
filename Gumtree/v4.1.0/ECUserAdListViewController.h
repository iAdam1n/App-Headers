/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <Gumtree/ECBrowseItemDataProvider.h>

@protocol ECBrowseItemDataProviderDelegate;
@class NSArray, ECUserAdManager, ECPostFeatureTotalButton, ECUserAdListConfig, ECSectionMapDataSource, ECItemListSectionMapGenerator, ECLoadMoreSectionMapTransformer, ECMultiFeatureSectionMapTransformer, ECNoItemsView, ECPullToRefreshView, ECTooltipOverlayView, NSMutableDictionary, ECStatusBarView, ECNoItemsTableView, NSString;

@interface ECUserAdListViewController : ECBaseViewController <UITableViewDelegate, ECBrowseItemDataProvider> {

	BOOL _inPurchaseMode;
	NSArray* _debugServices;
	id<ECBrowseItemDataProviderDelegate> _browseItemDataProviderDelegate;
	ECUserAdManager* _adManager;
	ECPostFeatureTotalButton* _checkOutButton;
	ECUserAdListConfig* _config;
	ECSectionMapDataSource* _dataSource;
	ECItemListSectionMapGenerator* _itemListGenerator;
	double _lastScrollViewOffset;
	double _lastScrollViewOffsetTime;
	ECLoadMoreSectionMapTransformer* _loadMoreTransformer;
	ECMultiFeatureSectionMapTransformer* _multiFeatureTransformer;
	ECNoItemsView* _noItemsView;
	NSArray* _observerTokens;
	ECPullToRefreshView* _pullToRefreshView;
	ECTooltipOverlayView* _quickConnectOverlayView;
	NSMutableDictionary* _sectionHeaderViews;
	ECStatusBarView* _statusBarView;
	ECNoItemsTableView* _tableView;

}

@property (nonatomic,retain) ECUserAdManager * adManager;                                                             //@synthesize adManager=_adManager - In the implementation block
@property (nonatomic,retain) ECPostFeatureTotalButton * checkOutButton;                                               //@synthesize checkOutButton=_checkOutButton - In the implementation block
@property (nonatomic,retain) ECUserAdListConfig * config;                                                             //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) ECSectionMapDataSource * dataSource;                                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL inPurchaseMode;                                                                     //@synthesize inPurchaseMode=_inPurchaseMode - In the implementation block
@property (nonatomic,retain) ECItemListSectionMapGenerator * itemListGenerator;                                       //@synthesize itemListGenerator=_itemListGenerator - In the implementation block
@property (assign,nonatomic) double lastScrollViewOffset;                                                             //@synthesize lastScrollViewOffset=_lastScrollViewOffset - In the implementation block
@property (assign,nonatomic) double lastScrollViewOffsetTime;                                                         //@synthesize lastScrollViewOffsetTime=_lastScrollViewOffsetTime - In the implementation block
@property (nonatomic,retain) ECLoadMoreSectionMapTransformer * loadMoreTransformer;                                   //@synthesize loadMoreTransformer=_loadMoreTransformer - In the implementation block
@property (nonatomic,retain) ECMultiFeatureSectionMapTransformer * multiFeatureTransformer;                           //@synthesize multiFeatureTransformer=_multiFeatureTransformer - In the implementation block
@property (nonatomic,retain) ECNoItemsView * noItemsView;                                                             //@synthesize noItemsView=_noItemsView - In the implementation block
@property (nonatomic,retain) NSArray * observerTokens;                                                                //@synthesize observerTokens=_observerTokens - In the implementation block
@property (nonatomic,retain) ECPullToRefreshView * pullToRefreshView;                                                 //@synthesize pullToRefreshView=_pullToRefreshView - In the implementation block
@property (nonatomic,retain) ECTooltipOverlayView * quickConnectOverlayView;                                          //@synthesize quickConnectOverlayView=_quickConnectOverlayView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionHeaderViews;                                                //@synthesize sectionHeaderViews=_sectionHeaderViews - In the implementation block
@property (nonatomic,retain) ECStatusBarView * statusBarView;                                                         //@synthesize statusBarView=_statusBarView - In the implementation block
@property (nonatomic,retain) ECNoItemsTableView * tableView;                                                          //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ECBrowseItemDataProviderDelegate> browseItemDataProviderDelegate;              //@synthesize browseItemDataProviderDelegate=_browseItemDataProviderDelegate - In the implementation block
-(ECUserAdManager *)adManager;
-(void)setAdManager:(ECUserAdManager *)arg1 ;
-(void)setNoItemsView:(ECNoItemsView *)arg1 ;
-(void)setQuickConnectOverlayView:(ECTooltipOverlayView *)arg1 ;
-(ECTooltipOverlayView *)quickConnectOverlayView;
-(ECStatusBarView *)statusBarView;
-(NSMutableDictionary *)sectionHeaderViews;
-(ECNoItemsView *)noItemsView;
-(void)displayAd:(id)arg1 startPromoteFlow:(BOOL)arg2 ;
-(void)showQuickConnectTooltipWithView:(id)arg1 ;
-(void)setStatusBarView:(ECStatusBarView *)arg1 ;
-(void)handleActivateAd:(id)arg1 ;
-(void)showPostFlow;
-(id)browserItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfBrowserItem:(id)arg1 ;
-(id)nextItemWithCurrentItem:(id)arg1 ;
-(id)previousItemWithCurrentItem:(id)arg1 ;
-(id<ECBrowseItemDataProviderDelegate>)browseItemDataProviderDelegate;
-(void)setBrowseItemDataProviderDelegate:(id<ECBrowseItemDataProviderDelegate>)arg1 ;
-(id)initWithAdManager:(id)arg1 config:(id)arg2 ;
-(void)setObserverTokens:(NSArray *)arg1 ;
-(void)handlePromoteForAd:(id)arg1 inView:(id)arg2 ;
-(id)cellForAd:(id)arg1 tableView:(id)arg2 ;
-(void)updateFeatureUI;
-(void)toggleAdState:(id)arg1 inView:(id)arg2 ;
-(void)attachToAdManager;
-(ECItemListSectionMapGenerator *)itemListGenerator;
-(ECLoadMoreSectionMapTransformer *)loadMoreTransformer;
-(ECPullToRefreshView *)pullToRefreshView;
-(void)updateNoItemsView;
-(void)updateStatusBarView;
-(void)purchaseInsertionAdAction:(id)arg1 ;
-(id)featureProvidersWithActiveSelections;
-(void)resetFeatureUI;
-(void)purchaseAction:(id)arg1 ;
-(ECPostFeatureTotalButton *)checkOutButton;
-(void)setCheckOutButton:(ECPostFeatureTotalButton *)arg1 ;
-(BOOL)areAnyFeaturesSelected;
-(void)resetAllFeatureProviders;
-(void)exitPurchaseMode;
-(BOOL)inPurchaseMode;
-(void)enterPurchaseMode;
-(id)cellForObject:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 ;
-(void)removeAdWithID:(id)arg1 ;
-(void)setLoadMoreTransformer:(ECLoadMoreSectionMapTransformer *)arg1 ;
-(void)setItemListGenerator:(ECItemListSectionMapGenerator *)arg1 ;
-(void)setMultiFeatureTransformer:(ECMultiFeatureSectionMapTransformer *)arg1 ;
-(ECMultiFeatureSectionMapTransformer *)multiFeatureTransformer;
-(void)setPullToRefreshView:(ECPullToRefreshView *)arg1 ;
-(double)lastScrollViewOffsetTime;
-(double)lastScrollViewOffset;
-(void)setLastScrollViewOffset:(double)arg1 ;
-(void)setLastScrollViewOffsetTime:(double)arg1 ;
-(id)debugServices;
-(void)setInPurchaseMode:(BOOL)arg1 ;
-(NSArray *)observerTokens;
-(void)setSectionHeaderViews:(NSMutableDictionary *)arg1 ;
-(void)cancelAction:(id)arg1 ;
-(BOOL)requiresAuthentication;
-(void)setDataSource:(ECSectionMapDataSource *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(ECSectionMapDataSource *)dataSource;
-(id)initWithStyle:(long long)arg1 ;
-(void)loadView;
-(ECNoItemsTableView *)tableView;
-(void)setTableView:(ECNoItemsTableView *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)numberOfItems;
-(ECUserAdListConfig *)config;
-(void)setConfig:(ECUserAdListConfig *)arg1 ;
-(void)stateDidChange;
-(void)refresh;
@end

