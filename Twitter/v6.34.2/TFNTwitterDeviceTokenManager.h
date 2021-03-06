/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNRemoteNotificationCategoryProvider;
@class NSData, NSMutableDictionary, NSMutableArray, UIUserNotificationSettings;

@interface TFNTwitterDeviceTokenManager : NSObject {

	id<TFNRemoteNotificationCategoryProvider> _categoryProvider;
	NSData* _deviceToken;
	NSMutableDictionary* _pushSettingsUpdateDateMap;
	NSMutableArray* _completionBlocks;
	BOOL _registrationOutstanding;
	unsigned long long _deviceTokenHeartbeatGeneration;
	UIUserNotificationSettings* _notificationSettings;

}

@property (nonatomic,retain) UIUserNotificationSettings * notificationSettings;              //@synthesize notificationSettings=_notificationSettings - In the implementation block
+(id)defaultManager;
-(BOOL)needsAppBadgeFix;
-(void)acquireDeviceToken:(/*^block*/id)arg1 ;
-(void)fixAppBadge;
-(void)deviceTokenHeartbeatForAccount:(id)arg1 force:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNotificationSettings:(UIUserNotificationSettings *)arg1 ;
-(void)deviceTokenHeartbeat:(BOOL)arg1 ;
-(void)_accountDidBecomeActive:(id)arg1 ;
-(void)setCategoryProvider:(id)arg1 ;
-(void)_deviceTokenRegistrationNotificationReceived:(id)arg1 ;
-(void)_userNotificationSettingsRegistrationNotificationReceived;
-(id)_heartbeatAccountsForce:(BOOL)arg1 ;
-(void)_deviceTokenHeartbeatAccountEnumerator:(id)arg1 force:(BOOL)arg2 generation:(unsigned long long)arg3 ;
-(BOOL)_appBadgeIsPossiblyBroken;
-(void)_apnsRegistration;
-(BOOL)_accountIsOutsideHeartbeatGracePeriod:(id)arg1 ;
-(void)_acquireDeviceTokenAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateLastSettingsUpdateForAccount:(id)arg1 ;
-(unsigned long long)_userNotificationTypesUsed;
-(unsigned long long)_notificationTypesUsed;
-(void)_registrationCompletedWithToken:(id)arg1 error:(id)arg2 ;
-(BOOL)hasDeviceToken;
-(UIUserNotificationSettings *)notificationSettings;
-(void)dealloc;
-(id)init;
@end

