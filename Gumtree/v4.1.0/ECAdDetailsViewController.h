/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Gumtree/MFMessageComposeViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Gumtree/ECAdvertisingProviderDelegate.h>
#import <Gumtree/ECBrowseItemDataProviderDelegate.h>
#import <Gumtree/ECAdDetailViewDelegate.h>
#import <Gumtree/ECItemDetailsProtocol.h>

@protocol ECBrowseItemDataProvider;
@class ECAd, ECUserAdManager, UISegmentedControl, UIView, UICollectionView, UIToolbar, UIBarButtonItem, NSMutableArray, NSString, ECAdvertisingProvider, ECAdReporter, NSArray;

@interface ECAdDetailsViewController : ECBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, MFMessageComposeViewControllerDelegate, UIScrollViewDelegate, ECAdvertisingProviderDelegate, ECBrowseItemDataProviderDelegate, ECAdDetailViewDelegate, ECItemDetailsProtocol> {

	UISegmentedControl* _nextPrevSegmentedControlIos6;
	BOOL isMyAd;
	BOOL canToggleFavorite;
	BOOL shouldShowPostersAds;
	BOOL startPromoteFlow;
	BOOL showInterstitials;
	BOOL showAdStatsIfPresentInCurrentAd;
	BOOL _initialScrollPositionSet;
	BOOL _isLoading;
	BOOL _isObserving;
	BOOL _isScrolling;
	BOOL _initialLoad;
	BOOL _shouldSendAdjustVIPEvent;
	BOOL _isViewDirty;
	BOOL _shouldLoadVIPInlineAd;
	ECAd* ad;
	id<ECBrowseItemDataProvider> browserItemDataProvider;
	/*^block*/id completionHandler;
	ECUserAdManager* _userAdManager;
	UIView* _bottomBannerAd;
	UICollectionView* _adsCollectionView;
	UIToolbar* _toolBar;
	UIBarButtonItem* _favoriteBarButton;
	UIBarButtonItem* _shareBarButton;
	UIBarButtonItem* _manageBarButton;
	UIBarButtonItem* _promoteBarButton;
	NSMutableArray* _lastRequestedIDs;
	NSString* _previousAdIdentifier;
	ECAdvertisingProvider* _advertisingProvider;
	NSString* _trackedAdID;
	ECAdReporter* _adReporter;
	NSArray* _loginObserversForBidding;
	CGPoint _cellContentOffset;

}

@property (nonatomic,retain) UIView * bottomBannerAd;                                                  //@synthesize bottomBannerAd=_bottomBannerAd - In the implementation block
@property (nonatomic,retain) UICollectionView * adsCollectionView;                                     //@synthesize adsCollectionView=_adsCollectionView - In the implementation block
@property (nonatomic,retain) UIToolbar * toolBar;                                                      //@synthesize toolBar=_toolBar - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * favoriteBarButton;                                      //@synthesize favoriteBarButton=_favoriteBarButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareBarButton;                                         //@synthesize shareBarButton=_shareBarButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * manageBarButton;                                        //@synthesize manageBarButton=_manageBarButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * promoteBarButton;                                       //@synthesize promoteBarButton=_promoteBarButton - In the implementation block
@property (assign,nonatomic) BOOL initialScrollPositionSet;                                            //@synthesize initialScrollPositionSet=_initialScrollPositionSet - In the implementation block
@property (nonatomic,readonly) BOOL isLoading;                                                         //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) BOOL isObserving;                                                         //@synthesize isObserving=_isObserving - In the implementation block
@property (assign,nonatomic) BOOL isScrolling;                                                         //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,nonatomic) BOOL initialLoad;                                                         //@synthesize initialLoad=_initialLoad - In the implementation block
@property (assign,nonatomic) BOOL shouldSendAdjustVIPEvent;                                            //@synthesize shouldSendAdjustVIPEvent=_shouldSendAdjustVIPEvent - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastRequestedIDs;                                        //@synthesize lastRequestedIDs=_lastRequestedIDs - In the implementation block
@property (nonatomic,copy) NSString * previousAdIdentifier;                                            //@synthesize previousAdIdentifier=_previousAdIdentifier - In the implementation block
@property (nonatomic,retain) ECAdvertisingProvider * advertisingProvider;                              //@synthesize advertisingProvider=_advertisingProvider - In the implementation block
@property (assign,nonatomic) BOOL isViewDirty;                                                         //@synthesize isViewDirty=_isViewDirty - In the implementation block
@property (nonatomic,retain) NSString * trackedAdID;                                                   //@synthesize trackedAdID=_trackedAdID - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadVIPInlineAd;                                               //@synthesize shouldLoadVIPInlineAd=_shouldLoadVIPInlineAd - In the implementation block
@property (nonatomic,retain) ECAdReporter * adReporter;                                                //@synthesize adReporter=_adReporter - In the implementation block
@property (assign) CGPoint cellContentOffset;                                                          //@synthesize cellContentOffset=_cellContentOffset - In the implementation block
@property (nonatomic,retain) NSArray * loginObserversForBidding;                                       //@synthesize loginObserversForBidding=_loginObserversForBidding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) ECAd * ad; 
@property (assign,nonatomic) BOOL isMyAd; 
@property (assign,nonatomic) BOOL canToggleFavorite; 
@property (assign,nonatomic) BOOL shouldShowPostersAds; 
@property (assign,nonatomic) BOOL showInterstitials; 
@property (assign,nonatomic) BOOL startPromoteFlow; 
@property (assign,nonatomic) BOOL showAdStatsIfPresentInCurrentAd; 
@property (nonatomic,retain) ECUserAdManager * userAdManager;                                          //@synthesize userAdManager=_userAdManager - In the implementation block
@property (assign,nonatomic,__weak) id<ECBrowseItemDataProvider> browserItemDataProvider; 
@property (nonatomic,copy) id completionHandler; 
-(void)setAd:(ECAd *)arg1 ;
-(void)setLastRequestedIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lastRequestedIDs;
-(void)updateValues;
-(void)updateEnable;
-(void)trackPageView;
-(void)setAdvertisingProvider:(ECAdvertisingProvider *)arg1 ;
-(ECAdvertisingProvider *)advertisingProvider;
-(UICollectionView *)adsCollectionView;
-(void)setIsMyAd:(BOOL)arg1 ;
-(void)setCanToggleFavorite:(BOOL)arg1 ;
-(void)setStartPromoteFlow:(BOOL)arg1 ;
-(void)setBrowserItemDataProvider:(id<ECBrowseItemDataProvider>)arg1 ;
-(void)setShouldShowPostersAds:(BOOL)arg1 ;
-(void)adProvider:(id)arg1 didReceiveAd:(id)arg2 forBannerType:(unsigned long long)arg3 atPosition:(unsigned long long)arg4 withError:(id)arg5 ;
-(void)updateData;
-(void)setShowAdStatsIfPresentInCurrentAd:(BOOL)arg1 ;
-(void)performActionUponAppBecomingActive;
-(void)performActionUponAppResigningActive;
-(void)setIsViewDirty:(BOOL)arg1 ;
-(void)setShouldLoadVIPInlineAd:(BOOL)arg1 ;
-(void)setShouldSendAdjustVIPEvent:(BOOL)arg1 ;
-(ECUserAdManager *)userAdManager;
-(BOOL)shouldSendAdjustVIPEvent;
-(BOOL)showInterstitials;
-(void)setupNextPreviousView;
-(void)userAdUpdatedNotification:(id)arg1 ;
-(id<ECBrowseItemDataProvider>)browserItemDataProvider;
-(CGPoint)cellContentOffset;
-(void)setCellContentOffset:(CGPoint)arg1 ;
-(id)cellForAdID:(id)arg1 ;
-(void)scrollNextAction;
-(void)scrollPreviousAction;
-(BOOL)isMyAd;
-(void)promoteAction:(id)arg1 ;
-(id)barButtonWithFrame:(CGRect)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(void)setPromoteBarButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)promoteBarButton;
-(void)manageAction:(id)arg1 ;
-(void)setManageBarButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)manageBarButton;
-(BOOL)canToggleFavorite;
-(void)favoritesAction:(id)arg1 ;
-(void)setFavoriteBarButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)favoriteBarButton;
-(void)shareAction:(id)arg1 ;
-(void)setShareBarButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)shareBarButton;
-(UIToolbar *)toolBar;
-(BOOL)isViewDirty;
-(void)updateFavoriteStatus;
-(UIView *)bottomBannerAd;
-(BOOL)shouldLoadVIPInlineAd;
-(void)setPrevButtonEnabled:(BOOL)arg1 nextButtonEnabled:(BOOL)arg2 ;
-(BOOL)isLoadingDetailsFor:(id)arg1 ;
-(void)disableToolbar;
-(void)setupReplyButtonActionsWithCell:(id)arg1 ;
-(void)updateOtherAdsForAd:(id)arg1 withCell:(id)arg2 isMyAd:(BOOL)arg3 ;
-(void)trackPageViewForAd:(id)arg1 ;
-(void)fetchUserProfileForAd:(id)arg1 ;
-(void)refreshAd:(id)arg1 withCell:(id)arg2 ;
-(BOOL)shouldShowPostersAds;
-(void)scrollByNumberOfPages:(long long)arg1 ;
-(void)reportAdOnWebsite;
-(ECAdReporter *)adReporter;
-(void)setAdReporter:(ECAdReporter *)arg1 ;
-(void)replyWebAction:(id)arg1 ;
-(void)replyChatAction:(id)arg1 ;
-(void)replyEmailAction:(id)arg1 ;
-(void)replyPhoneAction:(id)arg1 ;
-(void)replySMSAction:(id)arg1 ;
-(void)replyBidAction:(id)arg1 ;
-(void)setLoginObserversForBidding:(NSArray *)arg1 ;
-(void)loadAdDetailsForAd:(id)arg1 withCell:(id)arg2 forceUpdate:(BOOL)arg3 reportAnalytics:(BOOL)arg4 ;
-(void)showMap:(id)arg1 ;
-(void)showPostersOtherAds:(id)arg1 ;
-(BOOL)initialScrollPositionSet;
-(void)setInitialScrollPositionSet:(BOOL)arg1 ;
-(NSString *)trackedAdID;
-(void)setTrackedAdID:(NSString *)arg1 ;
-(void)currentAdHasChanged;
-(void)replyContactAction:(id)arg1 ;
-(BOOL)initialLoad;
-(double)getBottomInsetForCell;
-(BOOL)showAdStatsIfPresentInCurrentAd;
-(void)reportAd;
-(void)fullscreenImageAction:(id)arg1 ;
-(void)presentBottomBannerAd:(id)arg1 ;
-(void)presentBannerAd:(id)arg1 withError:(id)arg2 ;
-(void)setBottomBannerAd:(UIView *)arg1 ;
-(void)browseItemDataProviderResultsUpdated:(id)arg1 ;
-(void)didTapAddress:(id)arg1 ;
-(void)didTapExtendedInfo:(id)arg1 ;
-(void)didTapOtherAds:(id)arg1 ;
-(void)didTapEmail:(id)arg1 ;
-(void)didTapTermsAndConditions:(id)arg1 ;
-(void)setShowInterstitials:(BOOL)arg1 ;
-(BOOL)startPromoteFlow;
-(void)setUserAdManager:(ECUserAdManager *)arg1 ;
-(void)nextPrevSegmentControlAction:(id)arg1 ;
-(void)setAdsCollectionView:(UICollectionView *)arg1 ;
-(void)setToolBar:(UIToolbar *)arg1 ;
-(NSString *)previousAdIdentifier;
-(void)setPreviousAdIdentifier:(NSString *)arg1 ;
-(NSArray *)loginObserversForBidding;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isLoading;
-(void)setIsScrolling:(BOOL)arg1 ;
-(BOOL)isScrolling;
-(void)setupToolbar;
-(void)statusBarFrameWillChange:(id)arg1 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(BOOL)isObserving;
-(void)setIsObserving:(BOOL)arg1 ;
-(void)setInitialLoad:(BOOL)arg1 ;
-(ECAd *)ad;
@end
