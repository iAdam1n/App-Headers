/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
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
-(BOOL)isAppUpgrade;
-(void)setUserLastUsedVersion;
-(BOOL)didFinishTutorial;
-(BOOL)isNotificationSettingWithKeyEnabled:(id)arg1 ;
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
-(void)setHomePageVisibleSort:(id)arg1 ;
-(id)getHomePageVisibleSort;
-(void)setEULAAgreed;
-(void)setUserReplyToAdName:(id)arg1 ;
-(void)resetServerNotifications;
-(void)incrementLaunchCount;
-(int)getCurrentLaunchCount;
-(id)getUserReplyToAdName;
-(void)handleDidEnterBackgroundNotification:(id)arg1 ;
-(id)userLastUsedVersion;
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
-(void)setHomePageHiddenSort:(id)arg1 ;
-(id)getHomePageHiddenSort;
-(void)setDidFinishTutorial;
-(unsigned long long)searchHintCount;
-(void)setSearchHintCount:(unsigned long long)arg1 ;
-(void)setPostTrackingDict:(id)arg1 ;
-(id)getPostTrackingDict;
-(void)setNotificationsDeviceTokenRegistered:(id)arg1 dataToken:(id)arg2 ;
-(id)trackingUUIDForUser:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)notificationsEnabled;
@end
