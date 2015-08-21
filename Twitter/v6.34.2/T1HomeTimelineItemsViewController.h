/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNItemsDataViewController.h>
#import <Twitter/TFNMarkAsViewedDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Twitter/T1SuggestsModuleHeaderViewDelegate.h>
#import <Twitter/T1UMFTakeoverDelegate.h>
#import <Twitter/T1EmptyHomeTimelineHelperDelegate.h>
#import <Twitter/T1PanelRootViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1PromptHelperDelegate.h>
#import <Twitter/T1TwitterStreamControlObjectRowAdapterDelegate.h>
#import <Twitter/T1ErrorDataViewAdapterDelegate.h>
#import <Twitter/T1GapDataViewAdapterDelegate.h>
#import <Twitter/T1Promptable.h>
#import <Twitter/T1UpdateIndicatorDelegate.h>

@class T1StatusTableRowAdapter, T1InlinePromptTableRowAdapter, T1PromptHelper, TFNMarkAsViewedHelper, T1EmptyHomeTimelineHelper, T1HomeTimelineComponentsHelper, TFNStopwatch, UIView, T1TwitterStreamControlObjectRowAdapter, TFNTwitterAccount, NSDate, TFNTwitterHomeTimeline, T1UpdateIndicator, TFNTwitterPrompt, T1TrendsPlusTooltipController, T1SubheaderPromptView, NSString;

@interface T1HomeTimelineItemsViewController : TFNItemsDataViewController <TFNMarkAsViewedDelegate, UIActionSheetDelegate, T1SuggestsModuleHeaderViewDelegate, T1UMFTakeoverDelegate, T1EmptyHomeTimelineHelperDelegate, T1PanelRootViewController, TFNTwitterAuthenticated, T1PromptHelperDelegate, T1TwitterStreamControlObjectRowAdapterDelegate, T1ErrorDataViewAdapterDelegate, T1GapDataViewAdapterDelegate, T1Promptable, T1UpdateIndicatorDelegate> {

	T1StatusTableRowAdapter* _statusAdapter;
	T1InlinePromptTableRowAdapter* _inlinePromptAdapter;
	T1PromptHelper* _promptHelper;
	TFNMarkAsViewedHelper* _markAsViewedHelper;
	T1EmptyHomeTimelineHelper* _emptyHomeTimelineHelper;
	T1HomeTimelineComponentsHelper* _componentsHelper;
	BOOL _isLayoutSubviewsDone;
	BOOL _restoredPersistedScrollPosition;
	BOOL _needsPersistedScrollPositionRestore;
	BOOL _shouldLogFirstTweetAPI;
	BOOL _shouldLogFirstTweetOnBecomingActive;
	TFNStopwatch* _refreshStopwatch;
	long long _timelinePositionBeforeReloadTweetID;
	UIView* _stickyView;
	UIView* _stickyViewContainer;
	double _stickyViewScrollDisplacement;
	CGPoint _stickyViewScrollAnchorOffset;
	double _appWillEnterForegroundTime;
	double _appDidEnterBackgroundTime;
	T1TwitterStreamControlObjectRowAdapter* _streamControlObjectAdapter;
	BOOL _isHTMLPrefetchingEnabled;
	BOOL _isImageAndCSSPrefetchingEnabled;
	TFNTwitterAccount* _account;
	NSDate* _lastViewed;
	TFNTwitterHomeTimeline* _timeline;
	T1UpdateIndicator* _updateIndicator;
	TFNTwitterPrompt* _subheaderPrompt;
	T1TrendsPlusTooltipController* _trendsPlusTooltipController;
	T1SubheaderPromptView* _subheaderPromptControl;
	NSRange _emptyHomeTimelineSectionsRange;
	NSRange _timelineSectionsRange;

}

@property (nonatomic,retain) TFNTwitterHomeTimeline * timeline;                                        //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,retain) T1UpdateIndicator * updateIndicator;                                      //@synthesize updateIndicator=_updateIndicator - In the implementation block
@property (nonatomic,retain) TFNTwitterPrompt * subheaderPrompt;                                       //@synthesize subheaderPrompt=_subheaderPrompt - In the implementation block
@property (nonatomic,retain) T1TrendsPlusTooltipController * trendsPlusTooltipController;              //@synthesize trendsPlusTooltipController=_trendsPlusTooltipController - In the implementation block
@property (nonatomic,readonly) T1PromptHelper * promptHelper;                                          //@synthesize promptHelper=_promptHelper - In the implementation block
@property (nonatomic,readonly) NSRange emptyHomeTimelineSectionsRange;                                 //@synthesize emptyHomeTimelineSectionsRange=_emptyHomeTimelineSectionsRange - In the implementation block
@property (nonatomic,readonly) NSRange timelineSectionsRange;                                          //@synthesize timelineSectionsRange=_timelineSectionsRange - In the implementation block
@property (nonatomic,retain) T1SubheaderPromptView * subheaderPromptControl;                           //@synthesize subheaderPromptControl=_subheaderPromptControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                              //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * panelID; 
@property (nonatomic,readonly) NSDate * lastViewed;                                                    //@synthesize lastViewed=_lastViewed - In the implementation block
@property (nonatomic,readonly) NSString * scribePage; 
-(id)scribe;
-(NSString *)scribePage;
-(void)setTimeline:(TFNTwitterHomeTimeline *)arg1 ;
-(void)setUpdateIndicator:(T1UpdateIndicator *)arg1 ;
-(NSString *)panelID;
-(id)scribeSection;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(void)_timelineDidFinishDeserialization:(id)arg1 ;
-(BOOL)isLoadingTop;
-(void)loadTop:(id)arg1 ;
-(TFNTwitterHomeTimeline *)timeline;
-(void)layoutGuidesDidChange:(long long)arg1 ;
-(void)emptyHomeTimelineHelper:(id)arg1 didTapMoreUserRecommendations:(id)arg2 ;
-(void)emptyHomeTimelineHelper:(id)arg1 didFollowUser:(id)arg2 ;
-(void)emptyHomeTimelineHelper:(id)arg1 didUpdateRecommendation:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)emptyHomeTimelineHelper:(id)arg1 didUpdateRecommendationList:(id)arg2 ;
-(void)emptyHomeTimelineHelperNeedsHide:(id)arg1 ;
-(void)emptyHomeTimelineHelper:(id)arg1 didTapCallToAction:(id)arg2 ;
-(id)scribeContextForIndexPath:(id)arg1 ;
-(void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)headerViewDidTapDismiss:(id)arg1 ;
-(BOOL)_updateSections;
-(double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2 ;
-(void)gapItemWasSelected:(id)arg1 ;
-(id)scribeComponentForIndexPath:(id)arg1 ;
-(id)t1_extraTweetContextActionsForStatus:(id)arg1 account:(id)arg2 entityURL:(id)arg3 indexPath:(id)arg4 supportsDismiss:(BOOL)arg5 ;
-(id)scribeItemForIndexPath:(id)arg1 ;
-(id)scribeSectionForIndexPath:(id)arg1 ;
-(id)scribeImpressionParametersForIndexPath:(id)arg1 ;
-(void)_handlePromptsChangedNotification:(id)arg1 ;
-(void)_setupStreamFromTimeline;
-(void)loadTopDidEnd;
-(T1PromptHelper *)promptHelper;
-(id)autosaveName;
-(void)didEndScrolling;
-(void)_removePrompts:(id)arg1 ;
-(id)indexPathForItem:(id)arg1 ;
-(void)markAsViewedHelper:(id)arg1 didViewCells:(id)arg2 ;
-(void)promptViewControllerDidBecomeReady:(id)arg1 ;
-(unsigned long long)promptInsertionIndexForSuggestedIndex:(unsigned long long)arg1 ;
-(id)_scrollPositionUserDefaultsKey;
-(BOOL)dismissStatus:(id)arg1 ;
-(void)errorItemTapped:(id)arg1 ;
-(void)streamControlObjectTriggered:(id)arg1 ;
-(unsigned long long)_statusOptionsForAdapter:(id)arg1 args:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setUpPromoWebsiteCardExperiments;
-(void)_outboxChanged:(id)arg1 ;
-(void)_scrollToStatusID:(long long)arg1 ;
-(void)_updateStickyViewLayout;
-(void)_restorePersistedScrollPositionIfNeeded;
-(void)_checkForPromptsForTrigger:(id)arg1 ;
-(void)_checkForSubheader;
-(long long)_scrollPositionTweetID;
-(BOOL)_emptyHomeTimelineSectionsExist;
-(void)_updateSubheaderView;
-(T1TrendsPlusTooltipController *)trendsPlusTooltipController;
-(void)_loadTopWithSource:(long long)arg1 ;
-(BOOL)hasCustomContentAtTop;
-(void)_dismissStatus:(id)arg1 indexPath:(id)arg2 fromAccount:(id)arg3 ;
-(BOOL)_restorePersistedScrollPosition;
-(id)_statusWithID:(long long)arg1 ;
-(void)_streamDidUpdateWithNotification:(id)arg1 ;
-(void)_checkForLoadPrompts;
-(T1UpdateIndicator *)updateIndicator;
-(void)_streamDidUpdate;
-(id)_statusAtIndexPath:(id)arg1 ;
-(BOOL)_timelineSectionsExist;
-(void)_persistScrollPosition;
-(void)_triggerStreamControlObject:(id)arg1 ;
-(void)_triggerFirstStreamControlObjectBelowViewedStatus:(id)arg1 ;
-(BOOL)_recommendationSectionExists;
-(unsigned long long)_recommendationSectionIndex;
-(id)_recommendationAtIndex:(unsigned long long)arg1 ;
-(NSRange)emptyHomeTimelineSectionsRange;
-(NSRange)timelineSectionsRange;
-(void)setSubheaderPrompt:(TFNTwitterPrompt *)arg1 ;
-(void)_streamDidUpdateFromAPI:(id)arg1 ;
-(void)_reloadTimelineAfterFollow;
-(void)_setNeedsPersistedScrollPositionRestore;
-(void)_prefetchPromoWebsiteCardAssetsForStatus:(id)arg1 ;
-(TFNTwitterPrompt *)subheaderPrompt;
-(void)setSubheaderPromptControl:(T1SubheaderPromptView *)arg1 ;
-(T1SubheaderPromptView *)subheaderPromptControl;
-(void)_subheaderClicked:(id)arg1 forEvent:(id)arg2 ;
-(void)_subheaderHideClicked:(id)arg1 forEvent:(id)arg2 ;
-(id)promptFormat;
-(BOOL)canShowUpdateIndicator:(id)arg1 ;
-(void)setTrendsPlusTooltipController:(T1TrendsPlusTooltipController *)arg1 ;
-(id)_indexPathForItemIdenticalTo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)update;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(NSDate *)lastViewed;
@end

