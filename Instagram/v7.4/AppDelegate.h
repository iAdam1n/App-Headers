/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSMutableSet, NSString;

@interface AppDelegate : NSObject <UIApplicationDelegate> {

	BOOL _handledPushNoteInDidFinishLaunching;
	UIWindow* _window;
	NSMutableSet* _seenErrorURLs;

}

@property (nonatomic,retain) UIWindow * window;                                     //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) BOOL handledPushNoteInDidFinishLaunching;              //@synthesize handledPushNoteInDidFinishLaunching=_handledPushNoteInDidFinishLaunching - In the implementation block
@property (nonatomic,retain) NSMutableSet * seenErrorURLs;                          //@synthesize seenErrorURLs=_seenErrorURLs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logMemoryCrashAndPromptToRestartIfNeeded;
-(void)setUpInstagramNotifications;
-(void)setUpDefaults;
-(void)startMainAppWithMainFeedSource:(id)arg1 animated:(BOOL)arg2 ;
-(void)setHandledPushNoteInDidFinishLaunching:(BOOL)arg1 ;
-(void)exitIfSafe;
-(void)applicationLifecycleChange:(id)arg1 ;
-(void)userLoginCompleted:(id)arg1 ;
-(void)userLogout:(id)arg1 ;
-(void)networkRequestDidFail:(id)arg1 ;
-(void)registerForPush;
-(BOOL)handledPushNoteInDidFinishLaunching;
-(NSMutableSet *)seenErrorURLs;
-(void)setSeenErrorURLs:(NSMutableSet *)arg1 ;
-(void)willHandleException:(id)arg1 ;
-(void)dealloc;
-(UIWindow *)window;
-(id)init;
-(BOOL)application:(id)arg1 handleOpenURL:(id)arg2 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
@end
