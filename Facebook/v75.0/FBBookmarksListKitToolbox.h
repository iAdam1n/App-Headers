/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentToolbox.h>
#import <Facebook/FBSectionComponentToolbox.h>

@protocol FBBookmarksListKitTapHandler, FBBookmarksListKitScrollListenerAnnouncer;
@class FBBookmarksListKitExperimentContext, FBBookmarksRedesignExperimentContext, FBAdsManagerDeepLinkingController, NSString, FBUserSession, FBScenePath, FBListViewStateManager, FBListLogger, FBListViewLayoutListenerAnnouncer, FBGraphQLConsistentLookasideCache, FBFeedGraphQLConnectionManager;

@interface FBBookmarksListKitToolbox : FBSectionComponentToolbox <FBSectionComponentToolbox> {

	id<FBBookmarksListKitTapHandler> _tapHandler;
	FBBookmarksListKitExperimentContext* _listKitExperiment;
	FBBookmarksRedesignExperimentContext* _redesignExperiment;
	FBAdsManagerDeepLinkingController* _adsManagerDeepLinkingController;
	id<FBBookmarksListKitScrollListenerAnnouncer> _scrollListenerAnnouncer;

}

@property (nonatomic,__weak,readonly) id<FBBookmarksListKitTapHandler> tapHandler;                                        //@synthesize tapHandler=_tapHandler - In the implementation block
@property (nonatomic,readonly) FBBookmarksListKitExperimentContext * listKitExperiment;                                   //@synthesize listKitExperiment=_listKitExperiment - In the implementation block
@property (nonatomic,readonly) FBBookmarksRedesignExperimentContext * redesignExperiment;                                 //@synthesize redesignExperiment=_redesignExperiment - In the implementation block
@property (nonatomic,readonly) FBAdsManagerDeepLinkingController * adsManagerDeepLinkingController;                       //@synthesize adsManagerDeepLinkingController=_adsManagerDeepLinkingController - In the implementation block
@property (nonatomic,__weak,readonly) id<FBBookmarksListKitScrollListenerAnnouncer> scrollListenerAnnouncer;              //@synthesize scrollListenerAnnouncer=_scrollListenerAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBUserSession * session; 
@property (nonatomic,readonly) FBScenePath * scenePath; 
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator; 
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler; 
@property (nonatomic,__weak,readonly) id<FBSectionComponentScrollManagerProtocol> scrollManager; 
@property (nonatomic,__weak,readonly) id<FBListViewNavigationSearchBarUpdater> searchBarUpdater; 
@property (nonatomic,__weak,readonly) FBListViewStateManager * viewStateManager; 
@property (nonatomic,readonly) FBListLogger * logger; 
@property (nonatomic,__weak,readonly) id<FBListViewControllerActionHandler> componentActionHandler; 
@property (nonatomic,readonly) FBListViewLayoutListenerAnnouncer * layoutAnnouncer; 
@property (nonatomic,readonly) id<FBGraphQLService> graphQLService; 
@property (nonatomic,readonly) FBGraphQLConsistentLookasideCache * consistentLookasideCache; 
@property (nonatomic,readonly) FBFeedGraphQLConnectionManager * feedGraphQLConnectionManager; 
@property (nonatomic,copy,readonly) NSString * analyticsModule; 
-(FBBookmarksListKitExperimentContext *)listKitExperiment;
-(id<FBBookmarksListKitScrollListenerAnnouncer>)scrollListenerAnnouncer;
-(FBBookmarksRedesignExperimentContext *)redesignExperiment;
-(id)initWithContext:(id)arg1 tapHandler:(id)arg2 scrollListenerAnnouncer:(id)arg3 ;
-(FBAdsManagerDeepLinkingController *)adsManagerDeepLinkingController;
-(id<FBBookmarksListKitTapHandler>)tapHandler;
@end
