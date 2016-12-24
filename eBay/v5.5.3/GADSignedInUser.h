/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:16 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface GADSignedInUser : NSObject <NSCopying, NSCoding> {

	NSString* _issuer;
	NSString* _userID;
	NSString* _refreshToken;
	NSString* _applicationID;

}

@property (nonatomic,copy,readonly) NSString * issuer;                     //@synthesize issuer=_issuer - In the implementation block
@property (nonatomic,copy,readonly) NSString * userID;                     //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy,readonly) NSString * refreshToken;               //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationID;              //@synthesize applicationID=_applicationID - In the implementation block
-(id)initWithIssuer:(id)arg1 userID:(id)arg2 applicationID:(id)arg3 refreshToken:(id)arg4 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)issuer;
-(NSString *)userID;
-(NSString *)applicationID;
-(NSString *)refreshToken;
@end
