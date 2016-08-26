/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBNewsFeedViewControllerBase.h>
#import <Facebook/FBCloseFriendsInlineComposerComponentsProvider.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBFeedVPVdLoggingDebuggable.h>
#import <Facebook/FBFeedViewControllerHeaderProviderDelegate.h>
#import <Facebook/FBFeedViewTopDataSourceDelegate.h>
#import <Facebook/FBFeedVisibleEdgeProvider.h>
#import <Facebook/FBFriendsCountFetchingControllerDelegate.h>
#import <Facebook/FBMegaphoneDataSourceDelegate.h>
#import <Facebook/FBOutboxControllerHostingViewController.h>
#import <Facebook/FBPTStatePresenterDelegate.h>
#import <Facebook/FBScrollPositionRestoringScrollViewListener.h>
#import <Facebook/FBStickyHeaderDelegate.h>
#import <Facebook/FBSideFeedConfigurationProvider.h>
#import <Facebook/FBNewsFeedViewControllerProviding.h>
#import <Facebook/FBPresentableViewController.h>
#import <Facebook/FBBookmarkIdentifying.h>

@protocol FBFeedConfigProtocol, FBScrollPositionRestoringScrollViewController, FBInlineComposerTapHandlerFBFeedInlineComposerTapHandlerProxying, FBFeedFloatingInlineComposerPromptDisplayer, FBMovableNavigationBarEventListener, FBCancelable, FBPublisherBarListener;
@class FBFeedUnitDebugInfoManager, FBPreferences, FBFeedViewScrollPositionRestorationIndexPathProvider, FBCollectionViewUpdateIndexPathTracker, FBScrollPositionRestoringCollectionViewControllerIndexPathAdapter, FBScrollPositionRestoringCollectionViewController, FBOutboxController, FBFeedViewControllerLifecycleStatus, FBFeedSemanticScrollPositionController, FBComposerCrashReinitializer, FBPromptDisplayerManager, FBFeedInlineComposerPromptIntegrationController, FBFeedInlineComposerDataSource, FBInlineSnacksDataSource, FBSessionStartupManager, FBSessionStartupManagerDelayExperimentContext, UIColor, FBScenePath, FBScenePathContext, FBFeedVisibleEdgeAwareGraphQLConnectionModifier, FBFeedEndToEndPerformanceLogger, FBPublisherBar, FBOneRowDataSource, NSString, FBFeedPublicationParticleController, FBNewsFeedCameraController, FBFeedViewComposerOpenHandler, FBMegaphoneDataSource, FBInspirationDataSource, FBCollectionViewAggregatedDataSource, FBFriendsCountFetchingController, UIView;

@interface FBNewsFeedViewController : FBNewsFeedViewControllerBase <FBCloseFriendsInlineComposerComponentsProvider, FBComposerFlowDelegate, FBFeedVPVdLoggingDebuggable, FBFeedViewControllerHeaderProviderDelegate, FBFeedViewTopDataSourceDelegate, FBFeedVisibleEdgeProvider, FBFriendsCountFetchingControllerDelegate, FBMegaphoneDataSourceDelegate, FBOutboxControllerHostingViewController, FBPTStatePresenterDelegate, FBScrollPositionRestoringScrollViewListener, FBStickyHeaderDelegate, FBSideFeedConfigurationProvider, FBNewsFeedViewControllerProviding, FBPresentableViewController, FBBookmarkIdentifying> {

	FBPreferences* _sessionPreferences;
	id<FBFeedConfigProtocol> _feedConfig;
	BOOL _shouldScrollToTopForTopDataSourceRefresh;
	FBFeedViewScrollPositionRestorationIndexPathProvider* _scrollPositionRestorationIndexPathProvider;
	FBCollectionViewUpdateIndexPathTracker* _collectionViewUpdateIndexPathTracker;
	FBScrollPositionRestoringCollectionViewControllerIndexPathAdapter* _scrollPositionRestoringCollectionViewControllerIndexPathAdapter;
	id<FBScrollPositionRestoringScrollViewController> _scrollPositionRestoringScrollViewController;
	FBScrollPositionRestoringCollectionViewController* _scrollPositionRestoringCollectionViewController;
	FBOutboxController* _outboxController;
	FBFeedViewControllerLifecycleStatus* _feedStatus;
	FBFeedSemanticScrollPositionController* _semanticScrollPositionStatus;
	FBComposerCrashReinitializer* _composerCrashReinitializer;
	FBPromptDisplayerManager* _promptDisplayerManager;
	FBFeedInlineComposerPromptIntegrationController* _inlineComposerPromptIntegrationController;
	FBFeedInlineComposerDataSource* _inlineComposerDataSource;
	BOOL _showInlineComposerAndPromptsInHeader;
	FBInlineSnacksDataSource* _inlineSnacksDataSource;
	id<FBInlineComposerTapHandler><FBFeedInlineComposerTapHandlerProxying> _proxyingInlineComposerTapHandler;
	FBSessionStartupManager* _sessionStartupManager;
	FBSessionStartupManagerDelayExperimentContext* _sessionStartupManagerDelayExperimentContext;
	UIColor* _previousBackgroundColor;
	FBScenePath* _scenePath;
	FBScenePathContext* _scenePathContext;
	long long _placeholderType;
	FBFeedVisibleEdgeAwareGraphQLConnectionModifier* _feedDeduplicator;
	FBFeedVisibleEdgeAwareGraphQLConnectionModifier* _seeFirstBumpedRemover;
	FBFeedVisibleEdgeAwareGraphQLConnectionModifier* _adSpacingViolationAdjuster;
	FBFeedEndToEndPerformanceLogger* _e2eLogger;
	long long _publisherBarStyle;
	FBPublisherBar* _floatingStickyPublisherBar;
	FBOneRowDataSource* _inlinePublisherBarDataSource;
	NSString* _feedTitle;
	BOOL _shouldEnableRestorationAfterPlaceTipFeedUnitRefresh;
	id<FBFeedFloatingInlineComposerPromptDisplayer> _floatingInlineComposerPromptDisplayer;
	id<FBMovableNavigationBarEventListener> _movableNavigationBarEventListener;
	unsigned long long _feedStorySectionIndex;
	id<FBCancelable> _cancelableEmptyFeedAddFriendViewLoggingToken;
	NSString* _crowdsourcingFeatherPageID;
	FBFeedPublicationParticleController* _publicationParticleController;
	FBNewsFeedCameraController* _newsFeedCameraController;
	id<FBPublisherBarListener> _publishBarListener;
	FBFeedViewComposerOpenHandler* _composerOpenHandler;
	FBFeedUnitDebugInfoManager* _feedUnitDebugInfoManager;
	FBMegaphoneDataSource* _megaphoneDataSource;
	FBInspirationDataSource* _inspirationDataSource;
	FBCollectionViewAggregatedDataSource* _rootCollectionViewAggregatedDataSource;
	FBOneRowDataSource* _headerViewDataSource;
	FBFriendsCountFetchingController* _friendsCountFetchingController;
	UIView* _scrollViewHeaderView;

}

@property (nonatomic,readonly) UIView * scrollViewHeaderView;                                      //@synthesize scrollViewHeaderView=_scrollViewHeaderView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBSectionedDataSourceReading> readInterface; 
@property (nonatomic,readonly) FBFeedUnitDebugInfoManager * feedUnitDebugInfoManager; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
+(id)feedEdgeFromObject:(id)arg1 ;
-(id<FBSectionedDataSourceReading>)readInterface;
-(BOOL)fb_showNavBarSearchField;
-(id)analyticsModule;
-(id)analyticsExtras;
-(BOOL)allowPartiallyVisibleHeaderWhenScrollDown;
-(BOOL)shouldAnimateScrollViewOffsetChangeWhenHeaderFrameChanges;
-(id)movableNavigationBarEventListener;
-(id)newsFeedViewController;
-(BOOL)alreadyOpenWithURL:(id)arg1 ;
-(BOOL)alreadyOpenWithViewController:(id)arg1 ;
-(unsigned long long)occlusionInfo;
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)composerCompletedDismissing;
-(BOOL)analyticsRequiresNetworkContent;
-(id)identifiedBookmarkID;
-(id)sideFeedConfigurationForSession:(id)arg1 contactsSearch:(id)arg2 onlineStatusManager:(id)arg3 ;
-(id)sideFeedRightViewControllerKey;
-(void)graphQLConnectionController:(id)arg1 didBeginLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didCompleteLoad:(id)arg2 ;
-(void)didTapPublishStatusButton:(id)arg1 ;
-(void)didTapPublishPhotoButton:(id)arg1 ;
-(id)visibleEdges;
-(BOOL)hasVisibleContent;
-(void)didTapSellButton:(id)arg1 ;
-(BOOL)fb_searchTextFieldEnableTicker;
-(BOOL)fb_enableChatBarButton;
-(BOOL)analyticsHasCachedNetworkContent;
-(void)scrollViewWillSaveStateForScrollPositionRestoration:(id)arg1 ;
-(void)scrollView:(id)arg1 didRestoreScrollPositionWithContentOffsetYDelta:(double)arg2 ;
-(void)outboxControllerWillRefresh:(id)arg1 ;
-(void)outboxControllerDidInsertNewStories:(id)arg1 ;
-(void)outboxControllerDidRefresh:(id)arg1 ;
-(void)outboxControllerDesiresHeadLoad:(id)arg1 ;
-(void)outboxControllerDidRemoveStories:(id)arg1 ;
-(UIEdgeInsets)pullToRefreshViewContentInsets;
-(void)_setFeedViewState:(unsigned long long)arg1 ;
-(void)feedTableViewDataSource:(id)arg1 willEndUpdates:(id)arg2 ;
-(void)didTapPublishCheckInButton:(id)arg1 ;
-(BOOL)analyticsAutomaticallyLogContent;
-(id)initWithSession:(id)arg1 targetID:(id)arg2 feedLayoutIdiom:(unsigned long long)arg3 configuration:(id)arg4 sideFeedConfiguration:(id)arg5 floatingHeaderViewProvider:(id)arg6 ;
-(double)feedView:(id)arg1 contentOffsetOfShimmeringStoriesForCollectionView:(id)arg2 ;
-(id)inlineComposerComponents;
-(void)feedTopViewDataSourceWillRefresh:(id)arg1 ;
-(void)feedTopViewDataSourceDidRefresh:(id)arg1 ;
-(BOOL)feedTopViewDataSourceCanRefresh:(id)arg1 ;
-(BOOL)isFeedScrolledToTop;
-(id)_getExtraQueryOptions;
-(void)_configureSavedDashboardEntryPoint;
-(FBFeedUnitDebugInfoManager *)feedUnitDebugInfoManager;
-(void)configureTitle:(long long)arg1 ;
-(void)_bugReportSnapshot:(id)arg1 ;
-(void)configureNoContentType;
-(void)_handlePostPostRainWithPublisherData:(id)arg1 ;
-(void)_markStartupCompletedForSessionStartupManager;
-(void)feedViewDidEndScrolling;
-(void)_logEmptyFeedAddFriendViewImpression;
-(void)_recordBugStateForCollector:(id)arg1 ;
-(id)_debugStringForFeedEdges:(id)arg1 ;
-(BOOL)inlineComposerPromptCanReload;
-(void)headerContainerSizeInvalidated;
-(void)friendsCountFetchingController:(id)arg1 didLoadFriendsCount:(unsigned long long)arg2 ;
-(void)friendsCountFetchingController:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)megaphoneDataSource:(id)arg1 shouldDismissAfterOpenURL:(id)arg2 ;
-(BOOL)megaphoneDataSource:(id)arg1 openMegaphoneURL:(id)arg2 ;
-(void)placeTipFeedUnitWillRefresh:(id)arg1 ;
-(void)placeTipFeedUnitDidRefresh:(id)arg1 ;
-(void)stickyHeader:(id)arg1 didUpdateHeaderViewPositionWithScrollOffsetY:(double)arg2 ;
-(void)stickyHeader:(id)arg1 didUpdateHeaderViewVisibility:(BOOL)arg2 ;
-(void)scrollToStoryFromDirection:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)openTrendingTopObjectWebView:(id)arg1 ;
-(BOOL)fb_searchTextFieldAllowUnreadBadge;
-(void)didTapPublishLiveVideoButton:(id)arg1 ;
-(UIView *)scrollViewHeaderView;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_didEnterBackground:(id)arg1 ;
@end
