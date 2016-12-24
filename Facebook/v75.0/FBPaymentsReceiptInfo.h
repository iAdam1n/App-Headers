/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsReceiptInfo : FBValueObject <NSCopying> {

	NSString* _productID;
	NSString* _clientType;

}

@property (nonatomic,copy,readonly) NSString * productID;               //@synthesize productID=_productID - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientType;              //@synthesize clientType=_clientType - In the implementation block
-(id)initWithProductID:(id)arg1 clientType:(id)arg2 ;
-(NSString *)clientType;
-(NSString *)productID;
@end
