/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSData, NSDictionary;

@interface ECGUserSettings : NSObject

@property (nonatomic,retain) NSString * notificationsDeviceTokenRegistered; 
@property (nonatomic,retain) NSData * notificationsDeviceDataTokenRegistered; 
@property (nonatomic,retain) NSDictionary * notificationsEnabledOnCAPI; 
@property (nonatomic,retain) NSDictionary * notificationsEnabledOnMDNS; 
+(id)activeReference;
+(BOOL)getLocationQueried;
+(void)setLocationQueried;
-(BOOL)getEulaAgreed;
-(id)getUserReplyToAdName;
-(BOOL)getPromotedThePromoteFeature;
-(void)setPromotedThePromoteFeature;
-(void)setEULAAgreed;
-(void)setHomePageVisibleSort:(id)arg1 ;
-(void)setHomePageHiddenSort:(id)arg1 ;
-(id)getHomePageVisibleSort;
-(unsigned long long)getReminderComeBackState;
-(void)setReminderComeBackState:(unsigned long long)arg1 ;
-(NSString *)notificationsDeviceTokenRegistered;
-(void)setNotificationsDeviceTokenRegistered:(NSString *)arg1 ;
-(void)setNotificationsDeviceDataTokenRegistered:(NSData *)arg1 ;
-(void)setNotificationsEnabledOnCAPI:(NSDictionary *)arg1 ;
-(void)setNotificationsEnabledOnMDNS:(NSDictionary *)arg1 ;
-(void)setNotificationSettingForKey:(id)arg1 value:(id)arg2 ;
-(void)resetNotificationsEnabled;
-(NSData *)notificationsDeviceDataTokenRegistered;
-(NSDictionary *)notificationsEnabledOnMDNS;
-(NSDictionary *)notificationsEnabledOnCAPI;
-(BOOL)isNotificationSettingWithKeyEnabled:(id)arg1 ;
-(id)getPostTrackingDict;
-(void)setPostTrackingDict:(id)arg1 ;
-(void)setUserReplyToAdName:(id)arg1 ;
-(id)trackingUUIDForUser:(id)arg1 ;
-(void)setPreferredLanguage:(id)arg1 ;
-(void)resetServerNotifications;
-(void)handleDidEnterBackgroundNotification:(id)arg1 ;
-(int)getCurrentLaunchCount;
-(id)userLastUsedVersion;
-(void)incrementLaunchCount;
-(void)setUserLastUsedVersion;
-(void)setUserUpgradeFlag;
-(BOOL)getUserUpgradeFlag;
-(void)setUDIDTrackSuccessful;
-(BOOL)getUDIDTrackSuccessful;
-(void)setAmobeeFirstLaunchSuccessful;
-(BOOL)getAmobeeFirstLaunchSuccessful;
-(void)setRetainLoginBetweenSessions:(BOOL)arg1 ;
-(BOOL)getRetainLoginBetweenSessions;
-(void)setLocationTooltipFlag;
-(BOOL)getLocationTooltipFlag;
-(void)setRefineTooltipFlag;
-(BOOL)getRefineTooltipFlag;
-(id)getHomePageHiddenSort;
-(unsigned long long)searchHintCount;
-(void)setSearchHintCount:(unsigned long long)arg1 ;
-(BOOL)isAppUpgrade;
-(void)setSendCopySwitchOptionWithValue:(BOOL)arg1 ;
-(BOOL)getSendCopySwitchOption;
-(void)setNotificationsDeviceTokenRegistered:(id)arg1 dataToken:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)preferredLanguage;
-(id)notificationsEnabled;
@end
