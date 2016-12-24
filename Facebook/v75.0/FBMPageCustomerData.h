/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBMPageCustomerData : FBValueObject <NSCoding, NSCopying> {

	NSArray* _userTags;

}

@property (nonatomic,copy,readonly) NSArray * userTags;              //@synthesize userTags=_userTags - In the implementation block
-(id)initWithUserTags:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)userTags;
@end
