/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITabBarControllerDelegate.h>
#import <UIKit/UIApplicationDelegate.h>
#import <Gumtree/EMFModuleManagerDelegate.h>

@protocol ECRootViewControllerProtocolECRouterProtocol;
@class ECNotificationRegistrationManager, ECNotificationHandlingManager, UIWindow, UIViewController, ECHomeRootViewController, EMFModule, NSDictionary, ECDCSManager, Reachability, ECNotificationObserver, ECDeepLinkObject, NSArray, NSString;

@interface ECGAppDelegate : NSObject <UITabBarControllerDelegate, UIApplicationDelegate, EMFModuleManagerDelegate> {

	ECNotificationRegistrationManager* _notificationRegistrationManager;
	BOOL _appIsTerminated;
	BOOL _applicationIsInBackground;
	BOOL _applicationFinishStartupWhenInForeground;
	ECNotificationHandlingManager* _notificationHandlingManager;
	UIWindow* _window;
	UIViewController*<ECRootViewControllerProtocol>*<ECRouterProtocol> _rootViewController;
	ECHomeRootViewController* _homePageController;
	EMFModule* _currentModule;
	NSDictionary* _launchOptions;
	ECDCSManager* _dcsManager;
	Reachability* _reachability;
	double _timeApplicationWillResignActive;
	double _applicationDidBecomeActiveTime;
	NSDictionary* _startupStepDictionary;
	ECNotificationObserver* _loginObserver;
	ECDeepLinkObject* _deepLinkObject;

}

@property (nonatomic,retain) ECNotificationRegistrationManager * notificationRegistrationManager;                                //@synthesize notificationRegistrationManager=_notificationRegistrationManager - In the implementation block
@property (nonatomic,retain) ECNotificationHandlingManager * notificationHandlingManager;                                        //@synthesize notificationHandlingManager=_notificationHandlingManager - In the implementation block
@property (nonatomic,readonly) NSArray * appConfigsClasses; 
@property (nonatomic,retain) UIWindow * window;                                                                                  //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) UIViewController*<ECRootViewControllerProtocol>*<ECRouterProtocol> rootViewController;              //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,nonatomic,__weak) ECHomeRootViewController * homePageController;                                               //@synthesize homePageController=_homePageController - In the implementation block
@property (nonatomic,retain) EMFModule * currentModule;                                                                          //@synthesize currentModule=_currentModule - In the implementation block
@property (assign) BOOL appIsTerminated;                                                                                         //@synthesize appIsTerminated=_appIsTerminated - In the implementation block
@property (nonatomic,retain) NSDictionary * launchOptions;                                                                       //@synthesize launchOptions=_launchOptions - In the implementation block
@property (nonatomic,retain) ECDCSManager * dcsManager;                                                                          //@synthesize dcsManager=_dcsManager - In the implementation block
@property (nonatomic,retain) Reachability * reachability;                                                                        //@synthesize reachability=_reachability - In the implementation block
@property (assign,nonatomic) double timeApplicationWillResignActive;                                                             //@synthesize timeApplicationWillResignActive=_timeApplicationWillResignActive - In the implementation block
@property (assign,nonatomic) BOOL applicationIsInBackground;                                                                     //@synthesize applicationIsInBackground=_applicationIsInBackground - In the implementation block
@property (assign,nonatomic) BOOL applicationFinishStartupWhenInForeground;                                                      //@synthesize applicationFinishStartupWhenInForeground=_applicationFinishStartupWhenInForeground - In the implementation block
@property (assign,nonatomic) double applicationDidBecomeActiveTime;                                                              //@synthesize applicationDidBecomeActiveTime=_applicationDidBecomeActiveTime - In the implementation block
@property (nonatomic,retain) NSDictionary * startupStepDictionary;                                                               //@synthesize startupStepDictionary=_startupStepDictionary - In the implementation block
@property (nonatomic,copy) ECNotificationObserver * loginObserver;                                                               //@synthesize loginObserver=_loginObserver - In the implementation block
@property (nonatomic,retain) ECDeepLinkObject * deepLinkObject;                                                                  //@synthesize deepLinkObject=_deepLinkObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegate;
-(void)createSingletons;
-(void)createSingletonsDependingOnAppConfig;
-(void)createAppConfig;
-(void)createAPISingletons;
-(void)basicApplicationSetup;
-(NSArray *)appConfigsClasses;
-(void)setUpComScore;
-(BOOL)moduleManager:(id)arg1 shouldAutoInstallModule:(id)arg2 ;
-(void)setAppIsTerminated:(BOOL)arg1 ;
-(BOOL)appIsTerminated;
-(void)setHomePageController:(ECHomeRootViewController *)arg1 ;
-(ECHomeRootViewController *)homePageController;
-(void)setLoginObserver:(ECNotificationObserver *)arg1 ;
-(ECNotificationObserver *)loginObserver;
-(ECNotificationRegistrationManager *)notificationRegistrationManager;
-(EMFModule *)currentModule;
-(void)reloadApplication;
-(void)applyCrittercismFilterToEmail:(id)arg1 ;
-(id)createSplashScreenController;
-(BOOL)applicationIsInBackground;
-(void)setApplicationFinishStartupWhenInForeground:(BOOL)arg1 ;
-(id)createMainRootViewController;
-(void)handleLaunchOptionsWithApplication:(id)arg1 ;
-(void)setLaunchOptions:(NSDictionary *)arg1 ;
-(ECDeepLinkObject *)deepLinkObject;
-(void)setDeepLinkObject:(ECDeepLinkObject *)arg1 ;
-(void)setDcsManager:(ECDCSManager *)arg1 ;
-(void)setupCrittercism;
-(void)initializeMilenailMedia;
-(void)addABTests;
-(void)setupOptimizely;
-(void)setupGemius;
-(void)experimentDidGetViewed:(id)arg1 ;
-(void)setApplicationIsInBackground:(BOOL)arg1 ;
-(BOOL)applicationFinishStartupWhenInForeground;
-(void)startAppAfterStartupComplete;
-(ECDCSManager *)dcsManager;
-(void)setApplicationDidBecomeActiveTime:(double)arg1 ;
-(double)timeApplicationWillResignActive;
-(double)applicationDidBecomeActiveTime;
-(void)setTimeApplicationWillResignActive:(double)arg1 ;
-(void)freeGemius;
-(id)itemPlistCustomizingDictionary;
-(void)setNotificationRegistrationManager:(ECNotificationRegistrationManager *)arg1 ;
-(ECNotificationHandlingManager *)notificationHandlingManager;
-(void)setNotificationHandlingManager:(ECNotificationHandlingManager *)arg1 ;
-(void)setCurrentModule:(EMFModule *)arg1 ;
-(NSDictionary *)startupStepDictionary;
-(void)setStartupStepDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)launchOptions;
-(void)dealloc;
-(UIWindow *)window;
-(id)init;
-(BOOL)application:(id)arg1 handleOpenURL:(id)arg2 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setRootViewController:(UIViewController*<ECRootViewControllerProtocol>*<ECRouterProtocol>)arg1 ;
-(UIViewController*<ECRootViewControllerProtocol>*<ECRouterProtocol>)rootViewController;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(Reachability *)reachability;
-(void)setReachability:(Reachability *)arg1 ;
@end

