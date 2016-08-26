/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:12:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/CF12D463-F5F0-40C2-A761-CC2E709AB052/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Crystal/Crystal-Structs.h>
#import <Crystal/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, NSDate;

@interface FBSDKAccessToken : NSObject <FBSDKCopying, NSSecureCoding> {

	NSString* _appID;
	NSSet* _declinedPermissions;
	NSDate* _expirationDate;
	NSSet* _permissions;
	NSDate* _refreshDate;
	NSString* _tokenString;
	NSString* _userID;

}

@property (nonatomic,copy,readonly) NSString * appID;                         //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * declinedPermissions;              //@synthesize declinedPermissions=_declinedPermissions - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * permissions;                      //@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy,readonly) NSDate * refreshDate;                     //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * tokenString;                   //@synthesize tokenString=_tokenString - In the implementation block
@property (nonatomic,copy,readonly) NSString * userID;                        //@synthesize userID=_userID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setCurrentAccessToken:(id)arg1 ;
+(void)refreshCurrentAccessToken:(/*^block*/id)arg1 ;
+(id)currentAccessToken;
+(BOOL)supportsSecureCoding;
-(NSSet *)declinedPermissions;
-(NSDate *)refreshDate;
-(BOOL)isEqualToAccessToken:(id)arg1 ;
-(id)initWithTokenString:(id)arg1 permissions:(id)arg2 declinedPermissions:(id)arg3 appID:(id)arg4 userID:(id)arg5 expirationDate:(id)arg6 refreshDate:(id)arg7 ;
-(BOOL)hasGranted:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)tokenString;
-(NSSet *)permissions;
-(NSString *)appID;
-(NSString *)userID;
@end
