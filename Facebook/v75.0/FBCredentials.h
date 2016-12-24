/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBCredentials : FBValueObject <NSCopying> {

	NSString* _loginUUID;
	NSString* _accessToken;
	NSString* _loggedInUserFBID;
	NSString* _actingAccessToken;
	NSString* _actingUserFBID;

}

@property (nonatomic,copy,readonly) NSString * loginUUID;                      //@synthesize loginUUID=_loginUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessToken;                    //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggedInUserFBID;               //@synthesize loggedInUserFBID=_loggedInUserFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * actingAccessToken;              //@synthesize actingAccessToken=_actingAccessToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * actingUserFBID;                 //@synthesize actingUserFBID=_actingUserFBID - In the implementation block
-(NSString *)loggedInUserFBID;
-(NSString *)actingAccessToken;
-(NSString *)actingUserFBID;
-(NSString *)loginUUID;
-(id)initWithLoginUUID:(id)arg1 accessToken:(id)arg2 loggedInUserFBID:(id)arg3 actingAccessToken:(id)arg4 actingUserFBID:(id)arg5 ;
-(NSString *)accessToken;
@end
