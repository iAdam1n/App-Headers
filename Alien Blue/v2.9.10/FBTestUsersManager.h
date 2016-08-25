/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface FBTestUsersManager : NSObject {

	NSString* _appId;
	NSString* _appSecret;
	NSMutableDictionary* _accounts;

}
+(id)sharedInstanceForAppId:(id)arg1 appSecret:(id)arg2 ;
-(id)appAccessToken;
-(id)initWithAppId:(id)arg1 appSecret:(id)arg2 ;
-(id)userIdAndTokenOfExistingAccountWithPermissions:(id)arg1 skip:(id)arg2 ;
-(void)requestTestAccountTokensWithArraysOfPermissions:(id)arg1 createIfNotFound:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addTestAccountWithPermissions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)tokenDataForTokenString:(id)arg1 permissions:(id)arg2 userId:(id)arg3 ;
-(void)fetchExistingTestAccounts:(/*^block*/id)arg1 ;
-(void)removeTestAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

