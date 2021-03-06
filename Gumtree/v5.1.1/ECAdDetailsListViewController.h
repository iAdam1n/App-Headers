/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECBaseViewController.h>
#import <Gumtree/ECAdDetailsViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol ECAdDetailsManager;
@class ECSlidingActionButtonsView, ECAd, ECAdActionsController, ECAdDetailsConfig, ECBufferedSectionMapTransformer, UICollectionView, UICollectionViewFlowLayout, ECAppConfig, ECSectionMapDataSource, ECErrorManager, ECItemListSectionMapGenerator, ECAdDetailsMediaViewTransitioningDelegate, ECSearchManager, ECUserManager, ECAdManager, ECAdDetailsAdvertisingProvider, ECMetricsTracker, NSArray, ECAdDetailsView, NSString;

@interface ECAdDetailsListViewController : ECBaseViewController <ECAdDetailsViewDelegate, UICollectionViewDelegateFlowLayout> {

	BOOL _hasAdDetailsViewEverMovedToWindow;
	BOOL _hasEverChangedAdDetailsView;
	BOOL _shouldSendAdjustVIPEvent;
	BOOL _shouldSendHadoopVIPEvent;
	BOOL _showContactButtons;
	ECSlidingActionButtonsView* _actionButtonsView;
	ECAd* _ad;
	ECAdActionsController* _adActions;
	ECAdDetailsConfig* _adDetailsConfig;
	ECBufferedSectionMapTransformer* _bufferedTransformer;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	ECAppConfig* _config;
	ECSectionMapDataSource* _dataSource;
	ECErrorManager* _errorManager;
	ECItemListSectionMapGenerator* _itemListGenerator;
	id<ECAdDetailsManager> _manager;
	ECAdDetailsMediaViewTransitioningDelegate* _mediaViewTransitioningDelegate;
	ECSearchManager* _searchManager;
	ECUserManager* _userManager;
	ECAdManager* _adManager;
	ECAdDetailsAdvertisingProvider* _advertisingProvider;
	ECMetricsTracker* _metricsTracker;
	NSArray* _observers;
	ECAdDetailsView* _visibleAdDetailsView;
	ECAdDetailsView* _previousAdDetailsView;
	NSString* _trackedAdId;
	double _scrollContentOffsetX;
	CGPoint _startingPanTranslation;

}

@property (nonatomic,retain) ECSlidingActionButtonsView * actionButtonsView;                                          //@synthesize actionButtonsView=_actionButtonsView - In the implementation block
@property (nonatomic,retain) ECAd * ad;                                                                               //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) ECAdActionsController * adActions;                                                       //@synthesize adActions=_adActions - In the implementation block
@property (nonatomic,retain) ECAdDetailsConfig * adDetailsConfig;                                                     //@synthesize adDetailsConfig=_adDetailsConfig - In the implementation block
@property (nonatomic,retain) ECBufferedSectionMapTransformer * bufferedTransformer;                                   //@synthesize bufferedTransformer=_bufferedTransformer - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * collectionViewLayout;                                       //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) ECAppConfig * config;                                                                    //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) ECSectionMapDataSource * dataSource;                                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) ECErrorManager * errorManager;                                                           //@synthesize errorManager=_errorManager - In the implementation block
@property (nonatomic,retain) ECItemListSectionMapGenerator * itemListGenerator;                                       //@synthesize itemListGenerator=_itemListGenerator - In the implementation block
@property (nonatomic,retain) id<ECAdDetailsManager> manager;                                                          //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) ECAdDetailsMediaViewTransitioningDelegate * mediaViewTransitioningDelegate;              //@synthesize mediaViewTransitioningDelegate=_mediaViewTransitioningDelegate - In the implementation block
@property (nonatomic,retain) ECSearchManager * searchManager;                                                         //@synthesize searchManager=_searchManager - In the implementation block
@property (nonatomic,retain) ECUserManager * userManager;                                                             //@synthesize userManager=_userManager - In the implementation block
@property (nonatomic,retain) ECAdManager * adManager;                                                                 //@synthesize adManager=_adManager - In the implementation block
@property (nonatomic,retain) ECAdDetailsAdvertisingProvider * advertisingProvider;                                    //@synthesize advertisingProvider=_advertisingProvider - In the implementation block
@property (nonatomic,retain) ECMetricsTracker * metricsTracker;                                                       //@synthesize metricsTracker=_metricsTracker - In the implementation block
@property (assign,nonatomic) CGPoint startingPanTranslation;                                                          //@synthesize startingPanTranslation=_startingPanTranslation - In the implementation block
@property (nonatomic,retain) NSArray * observers;                                                                     //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL hasAdDetailsViewEverMovedToWindow;                                                  //@synthesize hasAdDetailsViewEverMovedToWindow=_hasAdDetailsViewEverMovedToWindow - In the implementation block
@property (assign,nonatomic) BOOL hasEverChangedAdDetailsView;                                                        //@synthesize hasEverChangedAdDetailsView=_hasEverChangedAdDetailsView - In the implementation block
@property (assign,nonatomic,__weak) ECAdDetailsView * visibleAdDetailsView;                                           //@synthesize visibleAdDetailsView=_visibleAdDetailsView - In the implementation block
@property (assign,nonatomic,__weak) ECAdDetailsView * previousAdDetailsView;                                          //@synthesize previousAdDetailsView=_previousAdDetailsView - In the implementation block
@property (nonatomic,copy) NSString * trackedAdId;                                                                    //@synthesize trackedAdId=_trackedAdId - In the implementation block
@property (assign,nonatomic) BOOL shouldSendAdjustVIPEvent;                                                           //@synthesize shouldSendAdjustVIPEvent=_shouldSendAdjustVIPEvent - In the implementation block
@property (assign,nonatomic) BOOL shouldSendHadoopVIPEvent;                                                           //@synthesize shouldSendHadoopVIPEvent=_shouldSendHadoopVIPEvent - In the implementation block
@property (assign,nonatomic) double scrollContentOffsetX;                                                             //@synthesize scrollContentOffsetX=_scrollContentOffsetX - In the implementation block
@property (assign,nonatomic) BOOL showContactButtons;                                                                 //@synthesize showContactButtons=_showContactButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewActionItems;
-(ECAdDetailsAdvertisingProvider *)advertisingProvider;
-(void)setAdvertisingProvider:(ECAdDetailsAdvertisingProvider *)arg1 ;
-(void)setAd:(ECAd *)arg1 ;
-(void)setAdManager:(ECAdManager *)arg1 ;
-(ECAdManager *)adManager;
-(ECErrorManager *)errorManager;
-(void)trackPageView;
-(ECUserManager *)userManager;
-(void)setUserManager:(ECUserManager *)arg1 ;
-(void)setErrorManager:(ECErrorManager *)arg1 ;
-(ECMetricsTracker *)metricsTracker;
-(void)setMetricsTracker:(ECMetricsTracker *)arg1 ;
-(id)navigationBarBarTintColor;
-(ECSlidingActionButtonsView *)actionButtonsView;
-(void)setInWatchlist:(BOOL)arg1 ;
-(void)adDetailsView:(id)arg1 locationButtonWasTapped:(id)arg2 ;
-(void)adDetailsViewDidTapSponsorLogo:(id)arg1 ;
-(void)performActionUponAppBecomingActive;
-(void)performActionUponAppResigningActive;
-(void)bannerAdInCell:(id)arg1 didFailToReceiveAd:(id)arg2 withError:(id)arg3 ;
-(void)configureAdvertisingProvider;
-(void)configureCollectionView;
-(void)configureObservers;
-(void)configureNavigationItem;
-(void)setBufferedTransformer:(ECBufferedSectionMapTransformer *)arg1 ;
-(ECBufferedSectionMapTransformer *)bufferedTransformer;
-(void)updateCurrentAd;
-(void)scrollToCurrentAdAnimated:(BOOL)arg1 ;
-(ECAdDetailsView *)visibleAdDetailsView;
-(id)currentAdIndexPath;
-(BOOL)shouldSendHadoopVIPEvent;
-(NSString *)trackedAdId;
-(void)trackPageViewAfterDetailsAreLoaded;
-(id)currentAdDetailsView;
-(void)changedToAdDetailsView:(id)arg1 ;
-(BOOL)shouldSendAdjustVIPEvent;
-(void)setShouldSendAdjustVIPEvent:(BOOL)arg1 ;
-(void)setPreviousAdDetailsView:(ECAdDetailsView *)arg1 ;
-(void)setVisibleAdDetailsView:(ECAdDetailsView *)arg1 ;
-(ECAdDetailsView *)previousAdDetailsView;
-(void)exitedAdDetailsView:(id)arg1 ;
-(void)incrementViewCountForAdDetailsView:(id)arg1 ;
-(void)setHasEverChangedAdDetailsView:(BOOL)arg1 ;
-(BOOL)hasEverChangedAdDetailsView;
-(void)scrollToAd:(id)arg1 animated:(BOOL)arg2 ;
-(ECAdActionsController *)adActions;
-(BOOL)hasAdDetailsViewEverMovedToWindow;
-(void)setHasAdDetailsViewEverMovedToWindow:(BOOL)arg1 ;
-(void)trackIndeedAdClick;
-(void)updateDataForHadoopEvent;
-(void)presentPostersOtherAds;
-(void)updateHadoopVIPPageOriginDirection:(id)arg1 ;
-(void)loadMoreAdsIfNeeded;
-(void)setShouldSendHadoopVIPEvent:(BOOL)arg1 ;
-(void)setTrackedAdId:(NSString *)arg1 ;
-(double)scrollContentOffsetX;
-(void)setScrollContentOffsetX:(double)arg1 ;
-(id)initWithSearchResultsManager:(id)arg1 userManager:(id)arg2 adManager:(id)arg3 searchManager:(id)arg4 errorManager:(id)arg5 metricsTracker:(id)arg6 adDetailsConfig:(id)arg7 appConfig:(id)arg8 showingContactButtons:(BOOL)arg9 ;
-(void)viewDidAppearViaPop;
-(void)setAdActions:(ECAdActionsController *)arg1 ;
-(ECAdDetailsMediaViewTransitioningDelegate *)mediaViewTransitioningDelegate;
-(void)setMediaViewTransitioningDelegate:(ECAdDetailsMediaViewTransitioningDelegate *)arg1 ;
-(CGPoint)startingPanTranslation;
-(void)setStartingPanTranslation:(CGPoint)arg1 ;
-(void)adDetailsView:(id)arg1 reportButtonWasTapped:(id)arg2 ;
-(BOOL)skipThemedBackground;
-(BOOL)needsOptOutFromExtendedLayoutChanges;
-(void)adDetailsView:(id)arg1 adDidLoad:(id)arg2 metadata:(id)arg3 ;
-(void)adDetailsView:(id)arg1 bannerAdTabWasTappedForAdSlot:(id)arg2 sender:(id)arg3 ;
-(void)userProfileButtonWasTappedInAdDetailsView:(id)arg1 ;
-(void)adDetailsView:(id)arg1 extendedInfoWasTapped:(id)arg2 ;
-(void)carProofButtonWasTappedInAdDetailsView:(id)arg1 ;
-(void)adDetailsView:(id)arg1 casActionWasTapped:(unsigned long long)arg2 ;
-(BOOL)showContactButtons;
-(void)setShowContactButtons:(BOOL)arg1 ;
-(void)shareAction:(id)arg1 ;
-(void)setItemListGenerator:(ECItemListSectionMapGenerator *)arg1 ;
-(ECItemListSectionMapGenerator *)itemListGenerator;
-(ECAdDetailsConfig *)adDetailsConfig;
-(void)adDetailsView:(id)arg1 contactButtonWasTapped:(id)arg2 ;
-(void)adDetailsViewDidMoveToWindow:(id)arg1 ;
-(void)setActionButtonsView:(ECSlidingActionButtonsView *)arg1 ;
-(void)adDetailsView:(id)arg1 watchlistButtonDidMove:(id)arg2 ;
-(void)editButtonWasTappedInAdDetailsView:(id)arg1 ;
-(void)adDetailsView:(id)arg1 mediaViewerWasTapped:(id)arg2 ;
-(void)adDetailsView:(id)arg1 mediaViewerPanEvent:(id)arg2 ;
-(void)promoteButtonWasTappedInAdDetailsView:(id)arg1 ;
-(void)adDetailsView:(id)arg1 watchlistButtonWasTapped:(BOOL)arg2 ;
-(void)watchlistAction:(id)arg1 ;
-(void)setAdDetailsConfig:(ECAdDetailsConfig *)arg1 ;
-(id<ECAdDetailsManager>)manager;
-(void)setDataSource:(ECSectionMapDataSource *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(ECSectionMapDataSource *)dataSource;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(UICollectionView *)collectionView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)hidesBottomBarWhenPushed;
-(ECAppConfig *)config;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setCollectionViewLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setConfig:(ECAppConfig *)arg1 ;
-(void)setObservers:(NSArray *)arg1 ;
-(NSArray *)observers;
-(id)searchParameters;
-(ECAd *)ad;
-(ECSearchManager *)searchManager;
-(void)setSearchManager:(ECSearchManager *)arg1 ;
-(void)configureDataSource;
-(void)stateDidChange;
-(void)setManager:(id<ECAdDetailsManager>)arg1 ;
@end

