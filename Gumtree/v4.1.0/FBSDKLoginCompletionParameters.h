/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSSet, NSError, NSDate;

@interface FBSDKLoginCompletionParameters : NSObject {

	BOOL _systemAccount;
	NSString* _accessTokenString;
	NSSet* _permissions;
	NSSet* _declinedPermissions;
	NSString* _appID;
	NSString* _userID;
	NSError* _error;
	NSDate* _expirationDate;
	NSString* _challenge;

}

@property (nonatomic,copy) NSString * accessTokenString;                             //@synthesize accessTokenString=_accessTokenString - In the implementation block
@property (nonatomic,copy) NSSet * permissions;                                      //@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy) NSSet * declinedPermissions;                              //@synthesize declinedPermissions=_declinedPermissions - In the implementation block
@property (nonatomic,copy) NSString * appID;                                         //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * userID;                                        //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (assign,getter=isSystemAccount,nonatomic) BOOL systemAccount;              //@synthesize systemAccount=_systemAccount - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * challenge;                                     //@synthesize challenge=_challenge - In the implementation block
-(NSSet *)declinedPermissions;
-(NSString *)accessTokenString;
-(void)setAccessTokenString:(NSString *)arg1 ;
-(void)setDeclinedPermissions:(NSSet *)arg1 ;
-(BOOL)isSystemAccount;
-(void)setSystemAccount:(BOOL)arg1 ;
-(NSError *)error;
-(id)init;
-(NSString *)challenge;
-(void)setChallenge:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(NSSet *)permissions;
-(void)setPermissions:(NSSet *)arg1 ;
-(NSString *)appID;
@end
