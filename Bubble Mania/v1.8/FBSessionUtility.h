/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSessionUtility : NSObject
+(BOOL)logIfFoundUnexpectedPermissions:(id)arg1 isRead:(BOOL)arg2 ;
+(BOOL)areRequiredPermissions:(id)arg1 aSubsetOfPermissions:(id)arg2 ;
+(id)userIDFromSignedRequest:(id)arg1 ;
+(BOOL)isOpenSessionResponseURL:(id)arg1 ;
+(unsigned long long)loginBehaviorForLoginType:(unsigned long long)arg1 ;
+(void)validateRequestForPermissions:(id)arg1 defaultAudience:(unsigned long long)arg2 allowSystemAccount:(BOOL)arg3 isRead:(BOOL)arg4 ;
+(id)clientStateFromQueryParams:(id)arg1 ;
+(id)queryParamsFromLoginURL:(id)arg1 appID:(id)arg2 urlSchemeSuffix:(id)arg3 ;
+(id)sessionStateDescription:(unsigned long long)arg1 ;
+(id)audienceNameWithAudience:(unsigned long long)arg1 ;
+(void)addWebLoginStartTimeToParams:(id)arg1 ;
+(id)expirationDateFromResponseParams:(id)arg1 ;
+(void)extractPermissionsFromResponse:(id)arg1 allPermissions:(id)arg2 grantedPermissions:(id)arg3 declinedPermissions:(id)arg4 ;
@end
