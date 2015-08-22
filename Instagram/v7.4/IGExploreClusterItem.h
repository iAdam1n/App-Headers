/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/NSCopying.h>
#import <Instagram/NSCoding.h>

@class NSString, IGUser, IGLocation, NSArray;

@interface IGExploreClusterItem : NSObject <NSCopying, NSCoding> {

	NSString* _pk;
	NSString* _type;
	IGUser* _user;
	IGLocation* _location;
	NSArray* _mediaBundles;

}

@property (nonatomic,copy,readonly) NSString * pk;                  //@synthesize pk=_pk - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) IGUser * user;                       //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IGLocation * location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSArray * mediaBundles;              //@synthesize mediaBundles=_mediaBundles - In the implementation block
-(id)title;
-(id)subtitle;
-(NSString *)pk;
-(NSArray *)mediaBundles;
-(id)initWithPk:(id)arg1 type:(id)arg2 location:(id)arg3 user:(id)arg4 mediaBundles:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IGLocation *)location;
-(IGUser *)user;
@end
