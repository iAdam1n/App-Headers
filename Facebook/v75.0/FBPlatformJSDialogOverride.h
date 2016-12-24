/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary;

@interface FBPlatformJSDialogOverride : NSObject <NSCopying, NSSecureCoding> {

	NSString* _method;
	NSURL* _URL;
	NSString* _version;
	NSDictionary* _readonlyExtras;
	NSDictionary* _extras;

}

@property (nonatomic,copy,readonly) NSDictionary * extras;              //@synthesize extras=_extras - In the implementation block
@property (nonatomic,readonly) BOOL enableScroll; 
@property (nonatomic,readonly) BOOL hideNavBar; 
@property (nonatomic,copy,readonly) NSString * method; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * version; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)extras;
-(BOOL)enableScroll;
-(BOOL)hideNavBar;
-(id)manifestRepresentation;
-(id)overrideManifestRepresentation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopy;
-(NSURL *)URL;
-(NSString *)method;
-(NSString *)version;
@end
