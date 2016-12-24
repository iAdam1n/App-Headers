/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ECBCricketApp/ECBCricketApp-Structs.h>
#import <ECBCricketApp/UAChannelRegistrarDelegate.h>

@protocol UAPushNotificationDelegate, UARegistrationDelegate;
@class NSSet, NSDictionary, NSObject, UAChannelRegistrar, NSString, NSArray, NSTimeZone, UAPreferenceDataStore;

@interface UAPush : NSObject <UAChannelRegistrarDelegate> {

	BOOL _backgroundPushNotificationsEnabledByDefault;
	BOOL _allowUnregisteringUserNotificationTypes;
	BOOL _userPushNotificationsEnabledByDefault;
	BOOL _requireAuthorizationForDefaultCategories;
	BOOL _deviceTagsEnabled;
	BOOL _hasEnteredBackground;
	BOOL _shouldUpdateAPNSRegistration;
	unsigned long long _notificationTypes;
	unsigned long long _userNotificationTypes;
	NSSet* _userNotificationCategories;
	id<UAPushNotificationDelegate> _pushNotificationDelegate;
	id<UARegistrationDelegate> _registrationDelegate;
	NSDictionary* _launchNotification;
	NSObject*<UAPushNotificationDelegate> _defaultPushHandler;
	UAChannelRegistrar* _channelRegistrar;
	unsigned long long _registrationBackgroundTask;

}

@property (assign,nonatomic) BOOL backgroundPushNotificationsEnabled; 
@property (assign,nonatomic) BOOL backgroundPushNotificationsEnabledByDefault;                            //@synthesize backgroundPushNotificationsEnabledByDefault=_backgroundPushNotificationsEnabledByDefault - In the implementation block
@property (assign,nonatomic) BOOL userPushNotificationsEnabled; 
@property (assign,nonatomic) BOOL allowUnregisteringUserNotificationTypes;                                //@synthesize allowUnregisteringUserNotificationTypes=_allowUnregisteringUserNotificationTypes - In the implementation block
@property (assign,nonatomic) BOOL userPushNotificationsEnabledByDefault;                                  //@synthesize userPushNotificationsEnabledByDefault=_userPushNotificationsEnabledByDefault - In the implementation block
@property (nonatomic,copy) NSString * deviceToken; 
@property (nonatomic,copy) NSString * channelID; 
@property (assign,nonatomic) unsigned long long notificationTypes;                                        //@synthesize notificationTypes=_notificationTypes - In the implementation block
@property (assign,nonatomic) unsigned long long userNotificationTypes;                                    //@synthesize userNotificationTypes=_userNotificationTypes - In the implementation block
@property (nonatomic,retain) NSSet * userNotificationCategories;                                          //@synthesize userNotificationCategories=_userNotificationCategories - In the implementation block
@property (assign,nonatomic) BOOL requireAuthorizationForDefaultCategories;                               //@synthesize requireAuthorizationForDefaultCategories=_requireAuthorizationForDefaultCategories - In the implementation block
@property (assign,nonatomic,__weak) id<UAPushNotificationDelegate> pushNotificationDelegate;              //@synthesize pushNotificationDelegate=_pushNotificationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UARegistrationDelegate> registrationDelegate;                      //@synthesize registrationDelegate=_registrationDelegate - In the implementation block
@property (nonatomic,retain) NSDictionary * launchNotification;                                           //@synthesize launchNotification=_launchNotification - In the implementation block
@property (assign,nonatomic) BOOL autobadgeEnabled; 
@property (nonatomic,copy) NSString * alias; 
@property (nonatomic,copy) NSArray * tags; 
@property (assign,nonatomic) BOOL deviceTagsEnabled;                                                      //@synthesize deviceTagsEnabled=_deviceTagsEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * quietTime; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (assign,nonatomic) BOOL quietTimeEnabled; 
@property (nonatomic,retain) NSObject*<UAPushNotificationDelegate> defaultPushHandler;                    //@synthesize defaultPushHandler=_defaultPushHandler - In the implementation block
@property (nonatomic,copy) NSString * channelLocation; 
@property (assign,nonatomic) BOOL hasEnteredBackground;                                                   //@synthesize hasEnteredBackground=_hasEnteredBackground - In the implementation block
@property (nonatomic,retain) UAChannelRegistrar * channelRegistrar;                                       //@synthesize channelRegistrar=_channelRegistrar - In the implementation block
@property (assign,nonatomic) unsigned long long registrationBackgroundTask;                               //@synthesize registrationBackgroundTask=_registrationBackgroundTask - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateAPNSRegistration;                                           //@synthesize shouldUpdateAPNSRegistration=_shouldUpdateAPNSRegistration - In the implementation block
@property (nonatomic,readonly) UAPreferenceDataStore * dataStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)land;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)shared;
-(void)setAutobadgeEnabled:(BOOL)arg1 ;
-(void)resetBadge;
-(void)setPushNotificationDelegate:(id<UAPushNotificationDelegate>)arg1 ;
-(void)setUserNotificationTypes:(unsigned long long)arg1 ;
-(void)setUserPushNotificationsEnabled:(BOOL)arg1 ;
-(void)removeTag:(id)arg1 ;
-(void)removeTags:(id)arg1 ;
-(unsigned long long)notificationTypes;
-(void)setChannelLocation:(NSString *)arg1 ;
-(void)appReceivedRemoteNotification:(id)arg1 applicationState:(long long)arg2 ;
-(id<UAPushNotificationDelegate>)pushNotificationDelegate;
-(NSDictionary *)quietTime;
-(void)setQuietTime:(NSDictionary *)arg1 ;
-(BOOL)autobadgeEnabled;
-(void)appRegisteredForRemoteNotificationsWithDeviceToken:(id)arg1 ;
-(void)appRegisteredUserNotificationSettings;
-(void)appReceivedRemoteNotification:(id)arg1 applicationState:(long long)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(void)appReceivedActionWithIdentifier:(id)arg1 notification:(id)arg2 applicationState:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)userPushNotificationsAllowed;
-(BOOL)backgroundPushNotificationsAllowed;
-(void)channelCreated:(id)arg1 channelLocation:(id)arg2 ;
-(void)registrationFailedWithPayload:(id)arg1 ;
-(void)registrationSucceededWithPayload:(id)arg1 ;
-(unsigned long long)currentEnabledNotificationTypes;
-(void)setDefaultPushHandler:(NSObject*<UAPushNotificationDelegate>)arg1 ;
-(void)setDeviceTagsEnabled:(BOOL)arg1 ;
-(void)setRequireAuthorizationForDefaultCategories:(BOOL)arg1 ;
-(void)setBackgroundPushNotificationsEnabledByDefault:(BOOL)arg1 ;
-(void)setRegistrationBackgroundTask:(unsigned long long)arg1 ;
-(void)applicationBackgroundRefreshStatusChanged;
-(void)migratePushSettings;
-(void)setChannelRegistrar:(UAChannelRegistrar *)arg1 ;
-(UAChannelRegistrar *)channelRegistrar;
-(id)normalizeTags:(id)arg1 ;
-(BOOL)userPushNotificationsEnabledByDefault;
-(BOOL)userPushNotificationsEnabled;
-(void)setShouldUpdateAPNSRegistration:(BOOL)arg1 ;
-(BOOL)backgroundPushNotificationsEnabledByDefault;
-(BOOL)backgroundPushNotificationsEnabled;
-(id)defaultTimeZoneForQuietTime;
-(void)updateRegistrationForcefully:(BOOL)arg1 ;
-(void)updateBadgeFromNotification:(id)arg1 ;
-(void)setLaunchNotification:(NSDictionary *)arg1 ;
-(id)createActionsFromPayload:(id)arg1 situation:(long long)arg2 metadata:(id)arg3 ;
-(BOOL)hasEnteredBackground;
-(void)setHasEnteredBackground:(BOOL)arg1 ;
-(BOOL)deviceTagsEnabled;
-(BOOL)quietTimeEnabled;
-(BOOL)beginRegistrationBackgroundTask;
-(NSString *)channelLocation;
-(id)createChannelPayload;
-(BOOL)shouldUpdateAPNSRegistration;
-(void)updateAPNSRegistration;
-(BOOL)requireAuthorizationForDefaultCategories;
-(NSSet *)userNotificationCategories;
-(unsigned long long)userNotificationTypes;
-(BOOL)allowUnregisteringUserNotificationTypes;
-(id<UARegistrationDelegate>)registrationDelegate;
-(void)endRegistrationBackgroundTask;
-(unsigned long long)registrationBackgroundTask;
-(void)setBackgroundPushNotificationsEnabled:(BOOL)arg1 ;
-(void)setUserNotificationCategories:(NSSet *)arg1 ;
-(void)setQuietTimeEnabled:(BOOL)arg1 ;
-(void)setNotificationTypes:(unsigned long long)arg1 ;
-(void)setAllowUnregisteringUserNotificationTypes:(BOOL)arg1 ;
-(void)setQuietTimeStartHour:(unsigned long long)arg1 startMinute:(unsigned long long)arg2 endHour:(unsigned long long)arg3 endMinute:(unsigned long long)arg4 ;
-(void)addTagToCurrentDevice:(id)arg1 ;
-(void)addTagsToCurrentDevice:(id)arg1 ;
-(void)removeTagFromCurrentDevice:(id)arg1 ;
-(void)removeTagsFromCurrentDevice:(id)arg1 ;
-(void)setUserPushNotificationsEnabledByDefault:(BOOL)arg1 ;
-(void)setRegistrationDelegate:(id<UARegistrationDelegate>)arg1 ;
-(NSDictionary *)launchNotification;
-(NSObject*<UAPushNotificationDelegate>)defaultPushHandler;
-(NSArray *)tags;
-(id)init;
-(void)dealloc;
-(void)setBadgeNumber:(long long)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSTimeZone *)timeZone;
-(void)applicationDidBecomeActive;
-(void)updateRegistration;
-(NSString *)alias;
-(void)setAlias:(NSString *)arg1 ;
-(void)applicationDidEnterBackground;
-(void)addTags:(id)arg1 ;
-(void)setTags:(NSArray *)arg1 ;
-(void)addTag:(id)arg1 ;
-(UAPreferenceDataStore *)dataStore;
-(void)setup;
-(NSString *)channelID;
-(NSString *)deviceToken;
-(void)setDeviceToken:(NSString *)arg1 ;
-(void)setChannelID:(NSString *)arg1 ;
@end
