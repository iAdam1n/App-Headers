/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Facebook/POPAnimatorDelegate.h>
#import <Facebook/FBURLSessionNotificationPresenting.h>
#import <UIKit/UIApplicationDelegate.h>

@protocol FBEventListener, FBBackgroundURLSessionHandlingListener;
@class UIWindow, FBExceptionHandler, FBDependencyManager, FBBaseAppNotificationsHandler, NSArray, NSDictionary, FBApplicationActivityMonitorCoordinator, FBUsageTimeMonitor, FBPushEventListenerAnnouncer, FBApplicationTerminationTracker, NSString;

@interface FBBaseAppDelegate : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate, POPAnimatorDelegate, FBURLSessionNotificationPresenting, UIApplicationDelegate> {

	FBExceptionHandler* _exceptionHandler;
	FBDependencyManager* _dependencyManager;
	id<FBEventListener> _timeSpentListener;
	BOOL _backgroundInit;
	FBBaseAppNotificationsHandler* _appNotificationsHandler;
	NSArray* _uiapplicationSendEventListeners;
	NSDictionary* _launchOptions;
	BOOL _didColdStart;
	FBApplicationActivityMonitorCoordinator* _activityMonitorCoordinator;
	FBUsageTimeMonitor* _usageTimeMonitor;
	id<FBBackgroundURLSessionHandlingListener> _backgroundURLSessionAnnouncer;
	FBPushEventListenerAnnouncer* _pushEventAnnouncer;
	FBApplicationTerminationTracker* _terminationTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(void)setSplashScreenProvider:(/*^block*/id)arg1 ;
+(void)setExceptionHandlerFactory:(id)arg1 ;
+(void)setExceptionHandler:(id)arg1 ;
-(id)initWithExceptionHandler:(id)arg1 ;
-(id)backgroundTaskHandler;
-(void)animatorWillAnimate:(id)arg1 ;
-(void)animatorDidAnimate:(id)arg1 ;
-(void)presentNotificationWithTitle:(id)arg1 message:(id)arg2 ;
-(id)init;
-(UIWindow *)window;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
@end
