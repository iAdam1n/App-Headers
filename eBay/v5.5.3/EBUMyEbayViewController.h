/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUItemsCollectionController.h>
#import <eBay/EBNDataManagerObserver.h>
#import <eBay/EBUMyEbayRefineContentControllerDelegate.h>
#import <eBay/EBUSwipeActionHelperDelegate.h>
#import <eBay/EUITabBarViewControllerDelegate.h>
#import <eBay/EUIToolbarViewDelegate.h>
#import <eBay/EUIShieldViewDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <eBay/EBUMyEBayViewControllerProtocol.h>

@class EBNMyEbayListDataManager, EBUMyEbayNoResultsCell, EBUMyEbayRefineOverlayController, NSMutableSet, UISearchController, NSString, EUILinkButton, EBUSwipeActionHelper, RotatingPopover, EBUMyEbaySectionHeaderView, EBUMyEbaySectionSimpleFooterView, EUIShieldView;

@interface EBUMyEbayViewController : EBUItemsCollectionController <EBNDataManagerObserver, EBUMyEbayRefineContentControllerDelegate, EBUSwipeActionHelperDelegate, EUITabBarViewControllerDelegate, EUIToolbarViewDelegate, EUIShieldViewDelegate, UISearchResultsUpdating, UISearchControllerDelegate, UIPopoverControllerDelegate, EBUMyEBayViewControllerProtocol> {

	BOOL _isRefinePanelShowing;
	BOOL _multiSelecting;
	BOOL _savingOrRestoringSearchMode;
	BOOL _showingSearchShield;
	BOOL _itemSizeCacheEnabled;
	BOOL _showCurrencyConversionFootnote;
	BOOL _searchModeEnabled;
	BOOL _needsCollectionUpdateOnSizeChange;
	/*^block*/id _postLoadHandler;
	long long navigationRootID;
	EBNMyEbayListDataManager* _listDataManager;
	EBUMyEbayNoResultsCell* _noResultsCell;
	EBUMyEbayRefineOverlayController* _refineDeckController;
	NSMutableSet* _selectedListings;
	UISearchController* _searchController;
	NSString* _savedSearchString;
	NSString* _mostRecentSearchString;
	EUILinkButton* _searchButton;
	EBUSwipeActionHelper* _swipeActionHelper;
	RotatingPopover* _popover;
	RotatingPopover* _popoverBeingDismissed;
	RotatingPopover* _popoverBeingPresented;
	EBUMyEbaySectionHeaderView* _headerView;
	EBUMyEbaySectionSimpleFooterView* _footerView;
	EUIShieldView* _shieldView;
	double _separatorPaddingForNoItems;
	CGPoint _savedSearchContentOffset;
	CGSize _itemSizeCache;
	CGSize _previousControllerViewSize;
	CGSize _previousCollectionViewSize;

}

@property (nonatomic,retain) EBNMyEbayListDataManager * listDataManager;                                         //@synthesize listDataManager=_listDataManager - In the implementation block
@property (nonatomic,retain) EBUMyEbayNoResultsCell * noResultsCell;                                             //@synthesize noResultsCell=_noResultsCell - In the implementation block
@property (nonatomic,retain) EBUMyEbayRefineOverlayController * refineDeckController;                            //@synthesize refineDeckController=_refineDeckController - In the implementation block
@property (assign,nonatomic) BOOL isRefinePanelShowing;                                                          //@synthesize isRefinePanelShowing=_isRefinePanelShowing - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedListings;                                                    //@synthesize selectedListings=_selectedListings - In the implementation block
@property (assign,getter=isMultiSelecting,nonatomic) BOOL multiSelecting;                                        //@synthesize multiSelecting=_multiSelecting - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                              //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,copy) NSString * savedSearchString;                                                         //@synthesize savedSearchString=_savedSearchString - In the implementation block
@property (nonatomic,copy) NSString * mostRecentSearchString;                                                    //@synthesize mostRecentSearchString=_mostRecentSearchString - In the implementation block
@property (nonatomic,retain) EUILinkButton * searchButton;                                                       //@synthesize searchButton=_searchButton - In the implementation block
@property (assign,getter=isSavingOrRestoringSearchMode,nonatomic) BOOL savingOrRestoringSearchMode;              //@synthesize savingOrRestoringSearchMode=_savingOrRestoringSearchMode - In the implementation block
@property (assign,nonatomic) CGPoint savedSearchContentOffset;                                                   //@synthesize savedSearchContentOffset=_savedSearchContentOffset - In the implementation block
@property (assign,getter=isShowingSearchShield,nonatomic) BOOL showingSearchShield;                              //@synthesize showingSearchShield=_showingSearchShield - In the implementation block
@property (nonatomic,retain) EBUSwipeActionHelper * swipeActionHelper;                                           //@synthesize swipeActionHelper=_swipeActionHelper - In the implementation block
@property (nonatomic,retain) RotatingPopover * popover;                                                          //@synthesize popover=_popover - In the implementation block
@property (assign,nonatomic,__weak) RotatingPopover * popoverBeingDismissed;                                     //@synthesize popoverBeingDismissed=_popoverBeingDismissed - In the implementation block
@property (assign,nonatomic,__weak) RotatingPopover * popoverBeingPresented;                                     //@synthesize popoverBeingPresented=_popoverBeingPresented - In the implementation block
@property (assign,nonatomic) BOOL itemSizeCacheEnabled;                                                          //@synthesize itemSizeCacheEnabled=_itemSizeCacheEnabled - In the implementation block
@property (assign,nonatomic) CGSize itemSizeCache;                                                               //@synthesize itemSizeCache=_itemSizeCache - In the implementation block
@property (assign,nonatomic,__weak) EBUMyEbaySectionHeaderView * headerView;                                     //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic,__weak) EBUMyEbaySectionSimpleFooterView * footerView;                               //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) BOOL showCurrencyConversionFootnote;                                                //@synthesize showCurrencyConversionFootnote=_showCurrencyConversionFootnote - In the implementation block
@property (assign,nonatomic) BOOL searchModeEnabled;                                                             //@synthesize searchModeEnabled=_searchModeEnabled - In the implementation block
@property (nonatomic,retain) EUIShieldView * shieldView;                                                         //@synthesize shieldView=_shieldView - In the implementation block
@property (assign,nonatomic) BOOL needsCollectionUpdateOnSizeChange;                                             //@synthesize needsCollectionUpdateOnSizeChange=_needsCollectionUpdateOnSizeChange - In the implementation block
@property (assign,nonatomic) CGSize previousControllerViewSize;                                                  //@synthesize previousControllerViewSize=_previousControllerViewSize - In the implementation block
@property (assign,nonatomic) CGSize previousCollectionViewSize;                                                  //@synthesize previousCollectionViewSize=_previousCollectionViewSize - In the implementation block
@property (assign,nonatomic) double separatorPaddingForNoItems;                                                  //@synthesize separatorPaddingForNoItems=_separatorPaddingForNoItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id postLoadHandler;                                                                   //@synthesize postLoadHandler=_postLoadHandler - In the implementation block
@property (assign,nonatomic) long long navigationRootID; 
+(id)makeMyEBayCollectionController:(id)arg1 ;
-(void)setNavigationRootID:(long long)arg1 ;
-(long long)navigationRootID;
-(id)postLoadHandler;
-(void)setPostLoadHandler:(id)arg1 ;
-(void)trackViewDidBecomeActive;
-(id)defaultTrackingSourceImpression;
-(void)refetchContents;
-(void)showBusyState:(BOOL)arg1 ;
-(void)reloadContents;
-(id)noResultsCollectionCell;
-(void)reloadTableViewDataSource;
-(void)simulateReloadTableViewDataSource;
-(long long)defaultPresentationType;
-(id)listingForIndexPath:(id)arg1 ;
-(BOOL)canConfigureCellForListing:(id)arg1 ;
-(void)configureListingCell:(id)arg1 withListing:(id)arg2 forIndexPath:(id)arg3 ;
-(BOOL)canEditItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldAddVisitedItemsToRecents;
-(id)noResultsViewTitleString;
-(EBUMyEbayRefineOverlayController *)refineDeckController;
-(BOOL)isMultiSelecting;
-(void)setMultiSelecting:(BOOL)arg1 ;
-(void)configureToolbar;
-(void)dismissPopoverAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentViewControllerInPopover:(id)arg1 fromToolbarItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CGSize)previousCollectionViewSize;
-(void)setPreviousCollectionViewSize:(CGSize)arg1 ;
-(EBUSwipeActionHelper *)swipeActionHelper;
-(void)setSwipeActionHelper:(EBUSwipeActionHelper *)arg1 ;
-(double)actionHelper:(id)arg1 buttonWidthForDirection:(unsigned long long)arg2 atIndexPath:(id)arg3 ;
-(unsigned long long)actionHelper:(id)arg1 appearanceForDirection:(unsigned long long)arg2 atIndexPath:(id)arg3 ;
-(id)actionHelper:(id)arg1 actionItemsForDirection:(unsigned long long)arg2 atIndexPath:(id)arg3 actionBlock:(/*^block*/id)arg4 ;
-(void)setListDataManager:(EBNMyEbayListDataManager *)arg1 ;
-(unsigned long long)itemContextForSectionIndex:(unsigned long long)arg1 ;
-(void)clearSearchAndReloadContents;
-(void)setSelectedListings:(NSMutableSet *)arg1 ;
-(void)makeSearchController;
-(BOOL)shouldAddHorizontalInsets;
-(double)separatorPaddingForNoItems;
-(void)setSeparatorPaddingForNoItems:(double)arg1 ;
-(BOOL)isUsingFullScreenWidth;
-(BOOL)searchModeEnabled;
-(void)didSelectEditButton;
-(void)didSelectRefineButton;
-(void)presentSearchControllerAnimated:(BOOL)arg1 ;
-(void)reloadDataFromDataManagerAndReloadContents;
-(NSString *)savedSearchString;
-(void)setSavingOrRestoringSearchMode:(BOOL)arg1 ;
-(void)setSavedSearchString:(NSString *)arg1 ;
-(CGPoint)savedSearchContentOffset;
-(void)setItemSizeCache:(CGSize)arg1 ;
-(void)setSavedSearchContentOffset:(CGPoint)arg1 ;
-(void)dismissSearchControllerAnimated:(BOOL)arg1 ;
-(void)setSearchModeEnabled:(BOOL)arg1 ;
-(BOOL)isRefinePanelShowing;
-(void)dismissRefinePanel;
-(void)setInsetsForFooterView:(id)arg1 ;
-(void)presentRefinePanel;
-(void)setMostRecentSearchString:(NSString *)arg1 ;
-(void)displayErrorString:(id)arg1 ;
-(void)refetchAndReloadContentsWithRefineModule:(id)arg1 ;
-(BOOL)isSavingOrRestoringSearchMode;
-(void)setShowCurrencyConversionFootnote:(BOOL)arg1 ;
-(NSMutableSet *)selectedListings;
-(void)deleteItemWithAccessibilityAction:(id)arg1 ;
-(BOOL)showCurrencyConversionFootnote;
-(void)presentViewItemForListingSummary:(id)arg1 context:(id)arg2 ;
-(BOOL)itemSizeCacheEnabled;
-(CGSize)itemSizeCache;
-(void)deleteItemAtRow:(unsigned long long)arg1 ;
-(void)prepareRefinePanel;
-(id)editableItemIndexPaths;
-(void)handleDeleteAction:(id)arg1 ;
-(void)setRefineDeckController:(EBUMyEbayRefineOverlayController *)arg1 ;
-(void)setIsRefinePanelShowing:(BOOL)arg1 ;
-(void)searchControlObscuresBackgroundDuringPresentation:(BOOL)arg1 ;
-(void)didDismissSearchController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isShowingSearchShield;
-(void)setShowingSearchShield:(BOOL)arg1 ;
-(void)showSearchShield:(BOOL)arg1 ;
-(void)setSearchShieldVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)mostRecentSearchString;
-(BOOL)shouldFetchWithFormerFilterString:(id)arg1 withNewFilterString:(id)arg2 ;
-(BOOL)isPresentingOrDismissingPopover;
-(void)setupPopover:(id)arg1 anchorView:(id)arg2 ;
-(void)popoverDidDismissWithCompletion:(/*^block*/id)arg1 ;
-(RotatingPopover *)popoverBeingPresented;
-(void)popoverDidPresentWithCompletion:(/*^block*/id)arg1 ;
-(void)contentController:(id)arg1 didSelectRefineOption:(id)arg2 ;
-(void)contentController:(id)arg1 didHide:(BOOL)arg2 ;
-(BOOL)canRefineSection:(unsigned long long)arg1 ;
-(void)handlePresentAction;
-(void)navigateToDestination:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(EBUMyEbayNoResultsCell *)noResultsCell;
-(void)setNoResultsCell:(EBUMyEbayNoResultsCell *)arg1 ;
-(RotatingPopover *)popoverBeingDismissed;
-(void)setPopoverBeingDismissed:(RotatingPopover *)arg1 ;
-(void)setPopoverBeingPresented:(RotatingPopover *)arg1 ;
-(void)setItemSizeCacheEnabled:(BOOL)arg1 ;
-(EUIShieldView *)shieldView;
-(void)shieldViewWasTapped:(id)arg1 ;
-(void)setShieldView:(EUIShieldView *)arg1 ;
-(void)setNeedsCollectionUpdateOnSizeChange:(BOOL)arg1 ;
-(BOOL)needsCollectionUpdateOnSizeChange;
-(CGSize)previousControllerViewSize;
-(void)setPreviousControllerViewSize:(CGSize)arg1 ;
-(id)hideOnScrollView;
-(void)barContentHeightDidChange:(double)arg1 ;
-(long long)numberOfSelectedEditItemsForToolbar:(id)arg1 ;
-(long long)numberOfTotalEditItemsForToolbar:(id)arg1 ;
-(void)toolbar:(id)arg1 isEditing:(BOOL)arg2 ;
-(void)toolbarDidCancel:(id)arg1 ;
-(void)toolbarDidSelectDelete:(id)arg1 ;
-(void)toolbarDidSelectAll:(id)arg1 ;
-(void)dataManager:(id)arg1 didError:(id)arg2 ;
-(void)dataManager:(id)arg1 didCompleteFetch:(id)arg2 ;
-(void)registerTracking;
-(long long)appSpeedBeaconID;
-(EBNMyEbayListDataManager *)listDataManager;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(id)initWithContext:(id)arg1 ;
-(EBUMyEbaySectionHeaderView *)headerView;
-(void)setHeaderView:(EBUMyEbaySectionHeaderView *)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(id)headerTitle;
-(id)footerTitle;
-(EBUMyEbaySectionSimpleFooterView *)footerView;
-(void)setFooterView:(EBUMyEbaySectionSimpleFooterView *)arg1 ;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(RotatingPopover *)popover;
-(void)setPopover:(RotatingPopover *)arg1 ;
-(void)reset:(id)arg1 ;
-(void)setSearchButton:(EUILinkButton *)arg1 ;
-(EUILinkButton *)searchButton;
@end
