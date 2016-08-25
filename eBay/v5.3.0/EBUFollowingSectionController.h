/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUSectionControllerBase.h>
#import <nautilus/EBNFollowedDataManagerObserver.h>
#import <eBay/EBNPagedResultsDataManagerObserver.h>
#import <eBay/EBUImageZoomTransitionController.h>
#import <eBay/EGORefreshHelperDelegate.h>
#import <eBay/SimpleListPickerDelegate.h>
#import <eBay/EBUSwipeActionHelperDelegate.h>
#import <eBay/EUIToolbarViewDelegate.h>

@class EBUFollowedSearchCell, NSMutableDictionary, EBNUSSFeedDataManager, NSMutableArray, EBULoadingToastView, EBUSwipeActionHelper, EBUPickerDeckViewController, LoadingView, UIView, EBNSiteSpeedTracker, NSString;

@interface EBUFollowingSectionController : EBUSectionControllerBase <EBNFollowedDataManagerObserver, EBNPagedResultsDataManagerObserver, EBUImageZoomTransitionController, EGORefreshHelperDelegate, SimpleListPickerDelegate, EBUSwipeActionHelperDelegate, EUIToolbarViewDelegate> {

	BOOL _observeDataManager;
	BOOL _showedFeed;
	BOOL _updatesWereSupressed;
	EBUFollowedSearchCell* _sizingCell;
	NSMutableDictionary* _sizingDictionary;
	EBNUSSFeedDataManager* _feedDataManager;
	NSMutableArray* _selectedItems;
	unsigned long long _numDeleted;
	unsigned long long _numNotificationsChanged;
	EBULoadingToastView* _progressIndicator;
	EBUSwipeActionHelper* _swipeActionHelper;
	EBUPickerDeckViewController* _deck;
	unsigned long long _previousItemCount;
	LoadingView* _footerView;
	UIView* _feedHeaderView;
	EBNSiteSpeedTracker* _siteSpeedTracker;
	NSString* _selectedListingID;
	CGSize _transitioningSize;

}

@property (assign,nonatomic) unsigned long long previousItemCount;                        //@synthesize previousItemCount=_previousItemCount - In the implementation block
@property (assign,nonatomic,__weak) LoadingView * footerView;                             //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * feedHeaderView;                              //@synthesize feedHeaderView=_feedHeaderView - In the implementation block
@property (nonatomic,retain) EBNSiteSpeedTracker * siteSpeedTracker;                      //@synthesize siteSpeedTracker=_siteSpeedTracker - In the implementation block
@property (nonatomic,copy) NSString * selectedListingID;                                  //@synthesize selectedListingID=_selectedListingID - In the implementation block
@property (assign,nonatomic) BOOL updatesWereSupressed;                                   //@synthesize updatesWereSupressed=_updatesWereSupressed - In the implementation block
@property (assign,setter=setIsEmpty:,getter=isEmpty,nonatomic) BOOL isEmpty; 
@property (assign,nonatomic) BOOL observeDataManager;                                     //@synthesize observeDataManager=_observeDataManager - In the implementation block
@property (retain) EBUFollowedSearchCell * sizingCell;                                    //@synthesize sizingCell=_sizingCell - In the implementation block
@property (retain) NSMutableDictionary * sizingDictionary;                                //@synthesize sizingDictionary=_sizingDictionary - In the implementation block
@property (assign,nonatomic) BOOL showedFeed;                                             //@synthesize showedFeed=_showedFeed - In the implementation block
@property (nonatomic,retain) EBNUSSFeedDataManager * feedDataManager;                     //@synthesize feedDataManager=_feedDataManager - In the implementation block
@property (nonatomic,readonly) BOOL isEditing; 
@property (nonatomic,retain) NSMutableArray * selectedItems;                              //@synthesize selectedItems=_selectedItems - In the implementation block
@property (assign,nonatomic) unsigned long long numDeleted;                               //@synthesize numDeleted=_numDeleted - In the implementation block
@property (assign,nonatomic) unsigned long long numNotificationsChanged;                  //@synthesize numNotificationsChanged=_numNotificationsChanged - In the implementation block
@property (nonatomic,retain) EBULoadingToastView * progressIndicator;                     //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,retain) EBUSwipeActionHelper * swipeActionHelper;                    //@synthesize swipeActionHelper=_swipeActionHelper - In the implementation block
@property (assign) CGSize transitioningSize;                                              //@synthesize transitioningSize=_transitioningSize - In the implementation block
@property (nonatomic,retain) EBUPickerDeckViewController * deck;                          //@synthesize deck=_deck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)indexForFollowingSection:(unsigned long long)arg1 ;
+(double)loadingFooterHeight;
+(double)topSectionHeaderHeight;
+(double)sectionHeaderHeight;
+(double)sectionFooterHeight;
-(void)simpleListPickerSelectionDismissed:(id)arg1 ;
-(void)setFeedDataManager:(EBNUSSFeedDataManager *)arg1 ;
-(EBNUSSFeedDataManager *)feedDataManager;
-(void)reloadTableViewDataSource;
-(void)setSelectedListingID:(NSString *)arg1 ;
-(NSString *)selectedListingID;
-(id)transitionImageView:(BOOL)arg1 ;
-(BOOL)isZoomImageAvailable:(BOOL)arg1 ;
-(CGRect)zoomTransitionTargetImageFrame:(BOOL)arg1 ;
-(id)transitionBackgroundColor;
-(id)trackingEvent;
-(void)hideProgressIndicator;
-(void)setProgressIndicator:(EBULoadingToastView *)arg1 ;
-(unsigned long long)followingType;
-(id)savedSearches;
-(EBUSwipeActionHelper *)swipeActionHelper;
-(void)setSwipeActionHelper:(EBUSwipeActionHelper *)arg1 ;
-(double)actionHelper:(id)arg1 buttonWidthForDirection:(unsigned long long)arg2 atIndexPath:(id)arg3 ;
-(unsigned long long)actionHelper:(id)arg1 appearanceForDirection:(unsigned long long)arg2 atIndexPath:(id)arg3 ;
-(id)actionHelper:(id)arg1 actionItemsForDirection:(unsigned long long)arg2 atIndexPath:(id)arg3 actionBlock:(/*^block*/id)arg4 ;
-(void)deleteItemWithAccessibilityAction:(id)arg1 ;
-(double)feedSectionHeaderHeight;
-(void)setIsEmpty:(BOOL)arg1 ;
-(void)signedOutHandler;
-(void)signedInHandler;
-(void)reloadFeedData;
-(BOOL)observeDataManager;
-(BOOL)updatesWereSupressed;
-(void)setUpdatesWereSupressed:(BOOL)arg1 ;
-(void)reloadFeedDataIfNecessary;
-(void)updateDataDisplay;
-(void)setObserveDataManager:(BOOL)arg1 ;
-(void)setPreviousItemCount:(unsigned long long)arg1 ;
-(UIView *)feedHeaderView;
-(long long)adjustBatchSizeForLayout:(long long)arg1 ;
-(void)setupFeedColor;
-(void)feedDidInitialLoad;
-(unsigned long long)previousItemCount;
-(unsigned long long)followingSectionForIndex:(long long)arg1 ;
-(void)showCollection:(id)arg1 ;
-(EBUFollowedSearchCell *)sizingCell;
-(void)setSizingCell:(EBUFollowedSearchCell *)arg1 ;
-(NSMutableDictionary *)sizingDictionary;
-(void)setSizingDictionary:(NSMutableDictionary *)arg1 ;
-(BOOL)feedIsEmpty;
-(id)savedSearchesCellForIndexPath:(id)arg1 ;
-(id)memberCellForIndexPath:(id)arg1 ;
-(id)collectionCellForIndexPath:(id)arg1 ;
-(id)feedCellForIndexPath:(id)arg1 ;
-(void)notificationButtonHit:(id)arg1 ;
-(void)emailButtonHit:(id)arg1 ;
-(void)actionButtonShowInterest:(id)arg1 ;
-(void)loadNextBatchAfterIndexIfNeeded:(id)arg1 ;
-(void)setShowedFeed:(BOOL)arg1 ;
-(void)setFeedHeaderView:(UIView *)arg1 ;
-(void)showFeedInterest:(id)arg1 ;
-(void)setDeck:(EBUPickerDeckViewController *)arg1 ;
-(EBUPickerDeckViewController *)deck;
-(id)sortMap;
-(void)hideSortPanel;
-(unsigned long long)numDeleted;
-(void)setNumDeleted:(unsigned long long)arg1 ;
-(BOOL)showedFeed;
-(void)registerEditTracking;
-(unsigned long long)numNotificationsChanged;
-(void)setNumNotificationsChanged:(unsigned long long)arg1 ;
-(void)reloadDataSource;
-(void)showFeedInterestForIndex:(long long)arg1 ;
-(void)showMemberForIndex:(long long)arg1 ;
-(void)showCollectionForIndex:(long long)arg1 ;
-(void)editSection:(unsigned long long)arg1 ;
-(long long)numberOfSelectedEditItemsForToolbar:(id)arg1 ;
-(long long)numberOfTotalEditItemsForToolbar:(id)arg1 ;
-(void)toolbar:(id)arg1 isEditing:(BOOL)arg2 ;
-(void)toolbarDidSelectDelete:(id)arg1 ;
-(void)toolbarDidSelectAll:(id)arg1 ;
-(void)dataManager:(id)arg1 didUpdate:(id)arg2 ;
-(long long)followedEntityType;
-(void)dataManager:(id)arg1 didError:(id)arg2 ;
-(void)dataManager:(id)arg1 didCompleteFetch:(id)arg2 ;
-(void)followedDataManager:(id)arg1 didUpdate:(long long)arg2 ;
-(void)followedDataManager:(id)arg1 didUpdateHiddenEntities:(long long)arg2 ;
-(void)followedDataManager:(id)arg1 didUpdateBadgeCountForEntities:(id)arg2 ;
-(void)loadUpToAtLeast:(long long)arg1 ;
-(void)pagedDataManagerDidFindItems:(id)arg1 ;
-(EBNSiteSpeedTracker *)siteSpeedTracker;
-(void)setSiteSpeedTracker:(EBNSiteSpeedTracker *)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)isEmpty;
-(BOOL)isEditing;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(NSMutableArray *)selectedItems;
-(void)setSelectedItems:(NSMutableArray *)arg1 ;
-(LoadingView *)footerView;
-(void)setFooterView:(LoadingView *)arg1 ;
-(void)sort:(id)arg1 ;
-(void)dismissPopover;
-(void)handleRotation:(id)arg1 ;
-(EBULoadingToastView *)progressIndicator;
-(CGSize)transitioningSize;
-(void)setTransitioningSize:(CGSize)arg1 ;
-(void)showProgressIndicator;
-(void)deleteItems:(id)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(void)toggleSelectionAtIndexPath:(id)arg1 ;
@end

