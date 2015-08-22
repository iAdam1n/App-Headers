/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface IGUserDefaults : NSObject
+(id)sharedIGUserDefaults;
-(id)objectForKey:(id)arg1 andService:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 andService:(id)arg3 ;
-(void)removeObjectForKey:(id)arg1 inUserInfoForService:(id)arg2 ;
-(id)accessTokenForService:(id)arg1 ;
-(id)refreshTokenForService:(id)arg1 ;
-(BOOL)hasAccessTokenExpiredForService:(id)arg1 ;
-(void)setAccessTokenWithExpiration:(id)arg1 expirationInSeconds:(int)arg2 forService:(id)arg3 ;
-(void)setRefreshToken:(id)arg1 forService:(id)arg2 ;
-(void)deleteAccessTokenForService:(id)arg1 ;
-(void)deleteUserInfoForService:(id)arg1 ;
-(void)setAccessToken:(id)arg1 forService:(id)arg2 ;
-(void)expireAccessTokenForService:(id)arg1 ;
-(id)userInfoForService:(id)arg1 ;
-(id)userPrefixedKey:(id)arg1 ;
-(id)passwordForUsername:(id)arg1 andService:(id)arg2 ;
-(void)setAccessTokenExpiration:(int)arg1 forService:(id)arg2 ;
-(void)setUsername:(id)arg1 andPassword:(id)arg2 forService:(id)arg3 ;
-(void)deletePasswordForUsername:(id)arg1 andService:(id)arg2 ;
-(id)userInfoKeyForService:(id)arg1 ;
-(void)setUserInfo:(id)arg1 forService:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
