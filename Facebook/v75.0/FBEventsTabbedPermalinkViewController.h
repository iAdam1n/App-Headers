/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBComponentCollectionViewDataSourceCellConfigProvider.h>
#import <Facebook/FBComponentCollectionViewDataSourceEventListener.h>
#import <Facebook/FBEventPermalinkChangeListener.h>
#import <Facebook/FBEventPermalinkChunkedDownloaderDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Facebook/FBEmbeddedTabContainerViewDelegate.h>
#import <Facebook/FBEventPermalinkTabManagerDelegate.h>
#import <Facebook/FBOptimisticPostingSectionComponentListener.h>
#import <Facebook/FBEventsPermalinkIntentHandlerDelegate.h>
#import <Facebook/FBPostingControllerDelegate.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBNuxBannerControllerDelegate.h>
#import <Facebook/FBSideFeedConfigurationProvider.h>

@protocol FBEmbeddedTabBarListController, FBGraphQLSubscriptionHandle, FBNuxBannerViewController, FBEventPermalinkNavigationDelegate;
@class FBMemEvent, FBEventAnalyticTracker, FBScenePathContext, FBScenePath, NSString, FBUserSession, UIAlertView, FBEventPermalinkChunkedLoadingModel, FBEventPermalinkCollectionView, FBEventActionResponder, FBNetworkErrorBar, FBComponentCollectionViewDataSource, FBComponentCollectionViewFlowLayoutDelegate, FBEventPermalinkToolbox, FBEventPermalinkStatefulWriteInterface, FBConsistentLookasideCacheObservationHandle, FBEventPermalinkChangeListenerAnnouncer, FBEventPermalinkChunkedDownloader, FBEventPermalinkTabContentFactory, FBEmbeddedTabController, FBEventPermalinkTabManager, NSArray, FBPostingController, UIActivityIndicatorView, FBTransientViewStateManager, FBViewMarginCalculator, FBTransparentNavigationBarFader, UIViewController;

@interface FBEventsTabbedPermalinkViewController : UIViewController <FBComponentCollectionViewDataSourceCellConfigProvider, FBComponentCollectionViewDataSourceEventListener, FBEventPermalinkChangeListener, FBEventPermalinkChunkedDownloaderDelegate, UICollectionViewDelegateFlowLayout, FBEmbeddedTabContainerViewDelegate, FBEventPermalinkTabManagerDelegate, FBOptimisticPostingSectionComponentListener, FBEventsPermalinkIntentHandlerDelegate, FBPostingControllerDelegate, FBComposerFlowDelegate, FBNuxBannerControllerDelegate, FBSideFeedConfigurationProvider> {

	FBMemEvent* _event;
	FBEventAnalyticTracker* _tracker;
	FBScenePathContext* _scenePathContext;
	FBScenePath* _scenePath;
	NSString* _eventFBID;
	FBUserSession* _session;
	UIAlertView* _alertView;
	FBEventPermalinkChunkedLoadingModel* _loadingModel;
	FBEventPermalinkCollectionView* _collectionView;
	FBEventActionResponder* _actionResponder;
	FBNetworkErrorBar* _errorBar;
	BOOL _responseWasCached;
	FBComponentCollectionViewDataSource* _collectionViewDataSource;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	FBEventPermalinkToolbox* _toolbox;
	FBEventPermalinkStatefulWriteInterface* _statefulWriteInterface;
	FBConsistentLookasideCacheObservationHandle* _headCLCHandle;
	FBEventPermalinkChangeListenerAnnouncer* _changeAnnouncer;
	FBEventPermalinkChunkedDownloader* _downloader;
	FBEventPermalinkTabContentFactory* _tabContentFactory;
	FBEmbeddedTabController* _embeddedTabController;
	FBEventPermalinkTabManager* _tabManager;
	id<FBEmbeddedTabBarListController> _tabBarListController;
	NSArray* _tabConfigurations;
	BOOL _failedDownloadingHead;
	BOOL _isEventUpdated;
	FBPostingController* _postingController;
	UIActivityIndicatorView* _activityIndicatorView;
	FBTransientViewStateManager* _viewStateManager;
	NSArray* _trackingCodes;
	BOOL _hasLoggedView;
	BOOL _hasLoggedTorsoPerf;
	FBViewMarginCalculator* _viewMarginCalculator;
	id<FBGraphQLSubscriptionHandle> _graphqlEventRsvpSubscriptionHandle;
	BOOL _isFirstScroll;
	BOOL _isEmbeddedTabListController;
	BOOL _transparentNavBar;
	FBTransparentNavigationBarFader* _navigationBarFader;
	UIViewController*<FBNuxBannerViewController> _nuxBannerController;
	id<FBEventPermalinkNavigationDelegate> _permalinkNavigationDelegate;

}

@property (nonatomic,copy) NSString * eventFBID;                                                                     //@synthesize eventFBID=_eventFBID - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventPermalinkNavigationDelegate> permalinkNavigationDelegate;              //@synthesize permalinkNavigationDelegate=_permalinkNavigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setShouldRefreshOnNewPostPublished:(BOOL)arg1 ;
-(id)analyticsModule;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 userInfo:(id)arg3 ;
-(id)analyticsExtras;
-(id)analyticsSourceExtras;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_useDefaultSearchText;
-(id)fb_searchFieldAttributedText;
-(void)composerCompletedWithResult:(id)arg1 ;
-(BOOL)alreadyOpenWithViewController:(id)arg1 ;
-(void)setAnalyticsFromModule:(id)arg1 ;
-(NSString *)eventFBID;
-(BOOL)fb_hideNavBarRightButton;
-(void)nuxBannerControllerDidDismissBanner:(id)arg1 ;
-(id)sideFeedConfigurationForSession:(id)arg1 contactsSearch:(id)arg2 onlineStatusManager:(id)arg3 ;
-(id)sideFeedRightViewControllerKey;
-(BOOL)compatibleWithConfiguration:(id)arg1 ;
-(long long)fb_cardedLayoutStyle;
-(void)_handleError;
-(CGSize)headerViewSize;
-(void)headerViewFrameDidUpdate;
-(void)finishedPublishingWithPublisherData:(id)arg1 ;
-(void)successfullyPublishedNewStoryWithPublisherData:(id)arg1 response:(id)arg2 ;
-(void)successfullyPublishedEditedStoryWithPublisherData:(id)arg1 ;
-(unsigned long long)fb_searchFieldStyle;
-(void)didLoadContentView:(id)arg1 forTabAtIndex:(unsigned long long)arg2 ;
-(void)didUpdateHeaderViewSize:(CGSize)arg1 ;
-(void)didSuccessfullyPublishStory;
-(void)didSuccessfullyEditStory;
-(FBComponentCollectionViewDataSourceCellConfig)configForCollectionCellInDataSource:(id)arg1 ;
-(void)downloader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setPermalinkNavigationDelegate:(id<FBEventPermalinkNavigationDelegate>)arg1 ;
-(void)_showNUXBannerIfNeeded;
-(void)didFinishCheckIn;
-(void)didReceiveToolboxUpdate:(id)arg1 ;
-(void)didPublishDraftEvent;
-(void)didFinishFetchingFeedStory:(id)arg1 error:(id)arg2 ;
-(void)didStartCheckIn;
-(void)didStartBuyingTickets;
-(void)didFinishBuyingTickets;
-(void)downloader:(id)arg1 didReceiveCachedHeadEvent:(id)arg2 ;
-(void)downloader:(id)arg1 didReceiveHeadEvent:(id)arg2 ;
-(void)downloader:(id)arg1 didReceiveTorsoEvent:(id)arg2 ;
-(void)_initializeEventLoading;
-(void)applyChangeset;
-(void)subscribeToRsvp;
-(void)unsubscribeFromRsvp;
-(void)_hideAlertView;
-(void)_layoutLoadingIndicator;
-(void)_headConsistentFieldsUpdated:(id)arg1 ;
-(id)_perfLoggerTag;
-(void)updateDateFormattingCapability;
-(void)_setupCLCHandlerForHead:(id)arg1 ;
-(BOOL)_isDraftEvent;
-(void)_loadNext;
-(void)_configureTabs;
-(BOOL)_shouldShowTabBar;
-(void)_handlePostReview;
-(void)didResetBadgeCountForTabAtIndex:(unsigned long long)arg1 ;
-(void)didSelectTabAtIndex:(unsigned long long)arg1 ;
-(void)handleViewEventPostsIntent;
-(id)initWithEventFBID:(id)arg1 session:(id)arg2 tracker:(id)arg3 trackingCodes:(id)arg4 ;
-(void)setEventFBID:(NSString *)arg1 ;
-(void)controller:(id)arg1 showAlertView:(id)arg2 ;
-(id)defaultAnalyticsExtras;
-(id<FBEventPermalinkNavigationDelegate>)permalinkNavigationDelegate;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
@end
