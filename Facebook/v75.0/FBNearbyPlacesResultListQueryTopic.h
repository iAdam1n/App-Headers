/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBNearbyPlacesResultListQueryTopic : FBValueObject <NSCopying> {

	NSString* _title;
	NSArray* _fbids;
	NSString* _queryString;

}

@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fbids;                     //@synthesize fbids=_fbids - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
-(id)initWithTitle:(id)arg1 fbids:(id)arg2 queryString:(id)arg3 ;
-(NSArray *)fbids;
-(NSString *)title;
-(NSString *)queryString;
@end
