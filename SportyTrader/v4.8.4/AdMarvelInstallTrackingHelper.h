/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AdMarvelInstallTrackingHelper : NSObject
+(void)checkClickToInstallEvents;
+(void)recordClickToInstallEventToApp:(id)arg1 siteId:(id)arg2 bannerId:(id)arg3 trackerURLs:(id)arg4 ;
+(id)generateSecondsSinceEpochTimestampString;
+(void)recordClickToInstallEventToApp:(id)arg1 trackingValues:(id)arg2 ;
+(id)getClickToInstallEventTrackingKey;
+(id)deserializeObject:(id)arg1 withKey:(id)arg2 ;
+(id)seriaizeObject:(id)arg1 withKey:(id)arg2 ;
+(void)checkClickToInstallEventsForApp:(id)arg1 ;
+(void)backgroundThreadCheckClickToInstallEventsForApp:(id)arg1 ;
+(BOOL)cleanupExpiredClickToInstallEvents:(id)arg1 ;
+(BOOL)fireTrackerURLs:(id)arg1 ;
+(id)md5HashString:(id)arg1 ;
+(int)generateSecondsSinceEpochTimestampInteger;
@end
