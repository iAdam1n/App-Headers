/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:55 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, PTHWindow, NSMutableArray, UINavigationController, NSString;

@interface PTHTweetbotAppDelegate : NSObject <UIApplicationDelegate> {

	BOOL _hasLaunched;
	PTHWindow* _window;
	NSMutableArray* _becomeActiveBlocks;
	UINavigationController* _navigationController;

}

@property (nonatomic,retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)runBecomeActiveBlocks;
-(void)addAfterBecomeActiveBlock:(/*^block*/id)arg1 ;
-(void)addDelayedAfterBecomeActiveBlock:(/*^block*/id)arg1 ;
-(void)configureSupportMailController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end
