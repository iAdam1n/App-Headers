/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMigrationScope;

@interface FBMigrationConfig : FBValueObject <NSCopying> {

	NSString* _identifier;
	FBMigrationScope* _scope;

}

@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) FBMigrationScope * scope;              //@synthesize scope=_scope - In the implementation block
-(id)initWithIdentifier:(id)arg1 scope:(id)arg2 ;
-(NSString *)identifier;
-(FBMigrationScope *)scope;
@end
