/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBReactionMultiSurfaceViewDelegate.h>
#import <Facebook/FBSportsMatchHeaderViewDelegate.h>
#import <Facebook/FBSportsGameUpdateSubscriptionHandlerDelegate.h>
#import <Facebook/FBReactionComponentsDataSourceDelegate.h>
#import <Facebook/FBReactionGraphQLManagerDelegate.h>

@class FBUserSession, NSString, FBSportsReactionMatchView, FBReactionMultiSurfaceView, FBTransientViewStateManager, FBScenePath, FBSportsGameUpdateSubscriptionHandler, NSDictionary, NSArray, FBSportsMatchHeaderView, FBTimer, FBReactionDefaultStyleMapper, CKComponentHostingView;

@interface FBSportsReactionViewController : UIViewController <FBReactionMultiSurfaceViewDelegate, FBSportsMatchHeaderViewDelegate, FBSportsGameUpdateSubscriptionHandlerDelegate, FBReactionComponentsDataSourceDelegate, FBReactionGraphQLManagerDelegate> {

	FBUserSession* _session;
	NSString* _pageID;
	FBSportsReactionMatchView* _matchView;
	FBReactionMultiSurfaceView* _reactionView;
	FBTransientViewStateManager* _viewStateManager;
	FBScenePath* _scenePath;
	NSString* _currentSurface;
	FBSportsGameUpdateSubscriptionHandler* _subscriptionHander;
	NSString* _firstTeamID;
	NSString* _secondTeamID;
	BOOL _viewControllerMarkedAsVisited;
	BOOL _fireVisitListeners;
	NSDictionary* _analyticsInfo;
	NSArray* _reactionSurfaceRenderConfigs;
	BOOL _useComponents;
	FBSportsMatchHeaderView* _headerView;
	BOOL _surfacesReturned;
	BOOL _setBounds;
	FBTimer* _timer;
	FBReactionDefaultStyleMapper* _styleMapper;
	CKComponentHostingView* _friendsPresenceView;
	CKComponentHostingView* _liveReactionsOverlayView;
	CKComponentHostingView* _reactionsButtonsView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(BOOL)fb_hidesNavigationBar;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(id)analyticsContentEventExtra;
-(id)initWithPageID:(id)arg1 session:(id)arg2 ;
-(id)initWithPageID:(id)arg1 session:(id)arg2 fireVisitListeners:(BOOL)arg3 analyticsInfo:(id)arg4 ;
-(id)graphQLConnectionControllerUserInputForComponentsDataSource:(id)arg1 ;
-(id)connectionControllerForComponentsDataSource:(id)arg1 ;
-(void)willReloadContentForReactionComponentsDataSource:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 withState:(FBScrollViewState)arg2 previousOffset:(double)arg3 ;
-(id)downloadRequestGraphQLQueryForReactionComponentsDataSource:(id)arg1 location:(id)arg2 reactionUnitID:(id)arg3 cursor:(id)arg4 userInfo:(id)arg5 ;
-(long long)headLoadIndexForReactionComponentsDataSource:(id)arg1 ;
-(void)_initSurfaceRenderConfigsForSurfaces:(id)arg1 ;
-(void)_loadReactionSufaces;
-(id)_surfaceRenderConfigForSurface:(id)arg1 ;
-(void)_displayDataIfNeeded;
-(id)_surfaceRenderConfigForManager:(id)arg1 ;
-(id)_createConnectionControllerForReactionSurface:(id)arg1 ;
-(id)_createSurfaceRenderConfigForSurface:(id)arg1 ;
-(void)_handleSurfacesResponse:(id)arg1 ;
-(void)reactionMultiSurfaceView:(id)arg1 didSwitchToSurface:(id)arg2 ;
-(void)reactionGraphQLManager:(id)arg1 didGetConnectionResponse:(id)arg2 ;
-(void)sportsMatchHeaderViewDidTapBackButton:(id)arg1 ;
-(void)_loadMatchHeaderData;
-(void)_loadMatchNTViews;
-(void)_willReloadContentForSurfaceRenderConfig:(id)arg1 ;
-(id)_reactionUnitsTriggerDataForLocation:(id)arg1 sessionInfo:(id)arg2 ;
-(void)_onSeenStateMutationSuccess;
-(void)_updateMatchHeader:(id)arg1 isFullLoad:(BOOL)arg2 ;
-(void)_handleHeaderResponse:(id)arg1 ;
-(void)_subscribeUsingLatestUpdateTime:(id)arg1 ;
-(void)_handleNTViewsResponse:(id)arg1 ;
-(void)gameUpdateSubscriptionHandler:(id)arg1 didUpdateGameState:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
