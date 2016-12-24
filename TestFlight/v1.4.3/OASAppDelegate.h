/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UIResponder.h>
#import <TestFlight/OASAuthenticationManagerDelegate.h>
#import <TestFlight/OASBagDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, OASContainerViewController, OASAuthenticationManager, OASBackgroundActionManager, OASExternalActionManager, OASInstallManager, OASNanoInstallManager, OASObjectCache, OASBag, OASMetrics, OASMainAppsViewController, UIViewController, NSMutableArray, NSString;

@interface OASAppDelegate : UIResponder <OASAuthenticationManagerDelegate, OASBagDelegate, UIApplicationDelegate> {

	BOOL _modalInteractionInProgress;
	UIWindow* _window;
	OASContainerViewController* _rootViewController;
	OASAuthenticationManager* _authManager;
	OASBackgroundActionManager* _backgroundActionManager;
	OASExternalActionManager* _externalActionManager;
	OASInstallManager* _installManager;
	OASNanoInstallManager* _nanoInstallManager;
	OASObjectCache* _objectCache;
	OASBag* _bag;
	OASMetrics* _metrics;
	OASMainAppsViewController* _appListVC;
	UIViewController* _visibleTermsVC;
	/*^block*/id _delayedOpenBlock;
	/*^block*/id _currentlyActivatedOpenBlock;
	NSMutableArray* _modalInteractionBlocks;

}

@property (nonatomic,retain) UIWindow * window;                                                   //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) OASContainerViewController * rootViewController;                   //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,readonly) OASAuthenticationManager * authManager;                            //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,readonly) OASBackgroundActionManager * backgroundActionManager;              //@synthesize backgroundActionManager=_backgroundActionManager - In the implementation block
@property (nonatomic,readonly) OASExternalActionManager * externalActionManager;                  //@synthesize externalActionManager=_externalActionManager - In the implementation block
@property (nonatomic,readonly) OASInstallManager * installManager;                                //@synthesize installManager=_installManager - In the implementation block
@property (nonatomic,readonly) OASNanoInstallManager * nanoInstallManager;                        //@synthesize nanoInstallManager=_nanoInstallManager - In the implementation block
@property (nonatomic,readonly) OASObjectCache * objectCache;                                      //@synthesize objectCache=_objectCache - In the implementation block
@property (nonatomic,readonly) OASBag * bag;                                                      //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) OASMetrics * metrics;                                              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) OASMainAppsViewController * appListVC;                               //@synthesize appListVC=_appListVC - In the implementation block
@property (nonatomic,retain) UIViewController * visibleTermsVC;                                   //@synthesize visibleTermsVC=_visibleTermsVC - In the implementation block
@property (nonatomic,copy) id delayedOpenBlock;                                                   //@synthesize delayedOpenBlock=_delayedOpenBlock - In the implementation block
@property (nonatomic,copy) id currentlyActivatedOpenBlock;                                        //@synthesize currentlyActivatedOpenBlock=_currentlyActivatedOpenBlock - In the implementation block
@property (nonatomic,readonly) NSMutableArray * modalInteractionBlocks;                           //@synthesize modalInteractionBlocks=_modalInteractionBlocks - In the implementation block
@property (assign,nonatomic) BOOL modalInteractionInProgress;                                     //@synthesize modalInteractionInProgress=_modalInteractionInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(OASAuthenticationManager *)authManager;
-(void)enqueueModalInteractionWithBlock:(/*^block*/id)arg1 ;
-(OASInstallManager *)installManager;
-(OASNanoInstallManager *)nanoInstallManager;
-(void)bagWasUpdated:(id)arg1 ;
-(BOOL)openURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)setDelayedOpenBlock:(id)arg1 ;
-(OASExternalActionManager *)externalActionManager;
-(OASBackgroundActionManager *)backgroundActionManager;
-(void)cannotOpenURL:(id)arg1 ;
-(void)delayOpenBlockUntilAuthenticated:(/*^block*/id)arg1 ;
-(NSMutableArray *)modalInteractionBlocks;
-(void)_startNextModalInteraction;
-(BOOL)modalInteractionInProgress;
-(void)setModalInteractionInProgress:(BOOL)arg1 ;
-(id)currentlyActivatedOpenBlock;
-(void)setVisibleTermsVC:(UIViewController *)arg1 ;
-(BOOL)isShowingAppList;
-(void)setCurrentlyActivatedOpenBlock:(id)arg1 ;
-(OASMainAppsViewController *)appListVC;
-(BOOL)isShowingAuthenticationViewController;
-(void)setAppListVC:(OASMainAppsViewController *)arg1 ;
-(void)showAuthScreen;
-(id)createAndStartUsingNewSessionContext;
-(void)showNewMainViewControllerWithSessionContext:(id)arg1 ;
-(UIViewController *)visibleTermsVC;
-(id)delayedOpenBlock;
-(void)authenticationManager:(id)arg1 didSwitchToNeedsCredentialsWithAlertTitle:(id)arg2 message:(id)arg3 ;
-(void)authenticationManager:(id)arg1 didSwitchToAuthorizedWithForcedRefresh:(BOOL)arg2 ;
-(void)authenticationManager:(id)arg1 showTermsAndConditionsWithCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(UIWindow *)window;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(OASContainerViewController *)rootViewController;
-(void)setWindow:(UIWindow *)arg1 ;
-(BOOL)openURL:(id)arg1 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(OASMetrics *)metrics;
-(OASBag *)bag;
-(OASObjectCache *)objectCache;
-(void)dismissAllModalViewControllers;
@end
