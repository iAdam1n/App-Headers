/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ECNotificationRegistrationServiceProtocol;
@interface ECNotificationRegistrationManager : NSObject {

	id<ECNotificationRegistrationServiceProtocol> _registrationService;
	unsigned long long _currentNotificationTypesEnabled;
	unsigned long long _registeredTypes;

}

@property (nonatomic,retain) id<ECNotificationRegistrationServiceProtocol> registrationService;              //@synthesize registrationService=_registrationService - In the implementation block
@property (assign,nonatomic) unsigned long long currentNotificationTypesEnabled;                             //@synthesize currentNotificationTypesEnabled=_currentNotificationTypesEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long registeredTypes;                                             //@synthesize registeredTypes=_registeredTypes - In the implementation block
-(void)setCurrentNotificationTypesEnabled:(unsigned long long)arg1 ;
-(unsigned long long)currentNotificationTypesEnabled;
-(unsigned long long)registeredTypes;
-(void)setRegisteredTypes:(unsigned long long)arg1 ;
-(void)updateServerNotificationsFromLocalSettings:(id)arg1 dataToken:(id)arg2 user:(id)arg3 ;
-(id)notificationsToUpdateForUser:(id)arg1 ;
-(void)clearAllNotificationSettings;
-(id<ECNotificationRegistrationServiceProtocol>)registrationService;
-(BOOL)isDeviceNotificationsEnabled;
-(void)turnOffNotificationsForUser:(id)arg1 ;
-(void)updateServerNotificationsForUser:(id)arg1 ;
-(BOOL)usesNewNotificationMethods;
-(id)notificationsAvailableForApp;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 user:(id)arg3 ;
-(void)updateNotificationStatusForUser:(id)arg1 ;
-(id)nameForECRemoteNotificationType:(long long)arg1 ;
-(void)setRegistrationService:(id<ECNotificationRegistrationServiceProtocol>)arg1 ;
-(id)init;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(unsigned long long)enabledRemoteNotificationTypes;
-(void)registerForNotifications:(unsigned long long)arg1 ;
@end
