/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(id)init;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setAppID:(NSString *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(NSSet *)permissions;
-(void)setPermissions:(NSSet *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSString *)appID;
-(NSString *)challenge;
-(void)setChallenge:(NSString *)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end

