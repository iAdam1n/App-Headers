/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:21:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6DE74A4E-11EF-47B8-8E27-4C42F9CB282C/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, PLVUserPreferences, PLVIRCConnectionManager, _TtC7Palaver12PLVAPIClient, NSDate, PLVQueryListViewController, QueryController, NSString;

@interface PLVAppDelegate : UIResponder <UIApplicationDelegate> {

	UIWindow* _window;
	PLVUserPreferences* _userPreferences;
	PLVIRCConnectionManager* _ircConnectionManager;
	_TtC7Palaver12PLVAPIClient* _apiClient;
	NSDate* _startTime;

}

@property (nonatomic,retain) PLVUserPreferences * userPreferences;                                //@synthesize userPreferences=_userPreferences - In the implementation block
@property (nonatomic,retain) PLVIRCConnectionManager * ircConnectionManager;                      //@synthesize ircConnectionManager=_ircConnectionManager - In the implementation block
@property (nonatomic,retain) _TtC7Palaver12PLVAPIClient * apiClient;                              //@synthesize apiClient=_apiClient - In the implementation block
@property (nonatomic,readonly) PLVQueryListViewController * queryListViewController; 
@property (nonatomic,readonly) unsigned long long totalUnreadBadgeCount; 
@property (nonatomic,retain) NSDate * startTime;                                                  //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                   //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) QueryController * queryListController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUserPreferences;
+(id)sharedIRCConnectionManager;
+(id)sharedAppDelegate;
+(id)sharedAPIClient;
-(QueryController *)queryListController;
-(PLVIRCConnectionManager *)ircConnectionManager;
-(_TtC7Palaver12PLVAPIClient *)apiClient;
-(void)setIrcConnectionManager:(PLVIRCConnectionManager *)arg1 ;
-(PLVQueryListViewController *)queryListViewController;
-(void)setApiClient:(_TtC7Palaver12PLVAPIClient *)arg1 ;
-(void)ircConnectionDisconnected:(id)arg1 ;
-(void)newPrivateMessage:(id)arg1 ;
-(void)newChannelMessage:(id)arg1 ;
-(void)openQueryForNotificationUserInfo:(id)arg1 ;
-(unsigned long long)totalUnreadBadgeCount;
-(void)dealloc;
-(UIWindow *)window;
-(id)init;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(NSDate *)startTime;
-(PLVUserPreferences *)userPreferences;
-(void)setUserPreferences:(PLVUserPreferences *)arg1 ;
@end

