/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <Facebook/FBConnectionPageInfoProtocol.h>

@class NSString, NSNumber;

@interface FBGraphQLConnectionStorePageInfo : NSObject <NSCoding, NSCopying, FBConnectionPageInfoProtocol> {

	NSString* _startCursor;
	NSString* _endCursor;
	NSNumber* _hasNextPage;
	NSNumber* _hasPreviousPage;

}

@property (nonatomic,copy,readonly) NSString * startCursor;                  //@synthesize startCursor=_startCursor - In the implementation block
@property (nonatomic,copy,readonly) NSString * endCursor;                    //@synthesize endCursor=_endCursor - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * hasNextPage;                  //@synthesize hasNextPage=_hasNextPage - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * hasPreviousPage;              //@synthesize hasPreviousPage=_hasPreviousPage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pageInfoWithPageInfo:(id)arg1 ;
-(BOOL)hasNextPageValue;
-(NSString *)endCursor;
-(BOOL)hasPreviousPageValue;
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasNextPage:(BOOL)arg3 hasPreviousPage:(BOOL)arg4 ;
-(id)initWithPageInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)hasNextPage;
-(NSNumber *)hasPreviousPage;
-(NSString *)startCursor;
@end
