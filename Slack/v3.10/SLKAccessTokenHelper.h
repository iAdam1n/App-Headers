/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLKAccessTokenHelper : NSObject
+(id)accessTokenForAccount:(id)arg1 ;
+(void)deleteTokenForAccount:(id)arg1 ;
+(id)unarchiveObjectAtPath:(id)arg1 ;
+(id)accessTokenForAccount:(id)arg1 logoutIfNotFound:(BOOL)arg2 ;
+(BOOL)saveAccessToken:(id)arg1 forAccount:(id)arg2 ;
+(void)handleKeychainReadError:(id)arg1 ;
+(BOOL)isValidToken:(id)arg1 ;
+(void)old_deleteTokenForAccount:(id)arg1 ;
+(id)old_cachePathForAccount:(id)arg1 ;
+(void)logout;
@end
