/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
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
