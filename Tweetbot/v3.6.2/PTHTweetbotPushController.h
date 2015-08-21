/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface PTHTweetbotPushController : NSObject {

	NSMutableArray* _completions;
	NSObject*<OS_dispatch_queue> _networkQueue;
	BOOL _clearBadge;

}
+(long long)eventFromRemoteDictionary:(id)arg1 ;
+(id)alertStringFromRemoteDictionary:(id)arg1 ;
+(id)soundNameFromRemoteDictionary:(id)arg1 ;
+(long long)actionForIdentifier:(id)arg1 ;
+(long long)accountTIDFromRemoteDictionary:(id)arg1 ;
+(long long)statusTIDFromRemoteDictionary:(id)arg1 ;
+(long long)directMessageTIDFromRemoteDictionary:(id)arg1 ;
+(long long)userTIDFromRemoteDictionary:(id)arg1 ;
+(id)userNotificationsDisabledError;
+(long long)listTIDFromRemoteDictionary:(id)arg1 ;
+(id)sharedController;
-(void)_updateAccounts;
-(void)_updateAccountsIfNeeded;
-(void)setSettings:(id)arg1 forAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestTest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSettingsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearBadge:(/*^block*/id)arg1 ;
-(id)_stringForPushType:(long long)arg1 ;
-(void)registerForRemoteUserNotificationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_pushTypeForString:(id)arg1 ;
-(void)_setSettings:(id)arg1 forAccount:(id)arg2 ;
-(void)_sendRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestDeviceDictionary:(/*^block*/id)arg1 ;
-(void)__updateAccounts;
-(void)_clearApplicationBadge;
-(void)dealloc;
-(id)init;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(void)didEnterBackground;
@end

