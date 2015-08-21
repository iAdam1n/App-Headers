/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface T1AppEventTracking : NSObject
+(id)refSrcParameters;
+(void)trackWithActionType:(id)arg1 integrationType:(id)arg2 account:(id)arg3 ;
+(id)landingRefSrcForWhoToFollowFromUserDefaults;
+(void)guestTrackWithRefSrc:(id)arg1 matClickId:(id)arg2 actionType:(id)arg3 integrationType:(id)arg4 ;
+(id)_parametersWithRefSrc:(id)arg1 matClickId:(id)arg2 actionType:(id)arg3 integrationType:(id)arg4 ;
+(void)_callAppEventTrackingWithAccount:(id)arg1 parameters:(id)arg2 ;
+(void)_callAppEventTrackingForGuestWithParameters:(id)arg1 ;
+(void)_callAppEventTrackingWithAPI:(id)arg1 parameters:(id)arg2 error:(id)arg3 ;
+(void)trackWithRefSrc:(id)arg1 matClickId:(id)arg2 actionType:(id)arg3 integrationType:(id)arg4 account:(id)arg5 ;
+(id)scribeParametersForRefSrcString:(id)arg1 ;
+(id)_scribeForAccount:(id)arg1 ;
+(void)storeRefSrcInUserDefaultsFromDictionary:(id)arg1 timestamp:(double)arg2 ;
+(void)storeLandingRefSrcInUserDefaults:(id)arg1 ;
+(id)_standardUserDefaults;
+(id)_refSrcParametersFromUserDefaults;
+(id)_accessSettings;
+(id)_refSrcParametersForAccess;
+(id)refSrc:(id)arg1 bySubKey:(id)arg2 ;
+(void)appEventTrackingCheckUrl:(id)arg1 account:(id)arg2 ;
+(id)landingRefSrcForUserTimelineFromUserDefaults;
@end

