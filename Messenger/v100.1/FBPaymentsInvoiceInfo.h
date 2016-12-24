/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage;

@interface FBPaymentsInvoiceInfo : FBValueObject <NSCopying> {

	NSString* _buyerID;
	NSString* _buyerDisplayName;
	UIImage* _buyerProfileImage;
	NSString* _sellerID;
	NSString* _clientType;

}

@property (nonatomic,copy,readonly) NSString * buyerID;                       //@synthesize buyerID=_buyerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * buyerDisplayName;              //@synthesize buyerDisplayName=_buyerDisplayName - In the implementation block
@property (nonatomic,copy,readonly) UIImage * buyerProfileImage;              //@synthesize buyerProfileImage=_buyerProfileImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * sellerID;                      //@synthesize sellerID=_sellerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientType;                    //@synthesize clientType=_clientType - In the implementation block
-(NSString *)buyerID;
-(NSString *)sellerID;
-(NSString *)buyerDisplayName;
-(UIImage *)buyerProfileImage;
-(id)initWithBuyerID:(id)arg1 buyerDisplayName:(id)arg2 buyerProfileImage:(id)arg3 sellerID:(id)arg4 clientType:(id)arg5 ;
-(NSString *)clientType;
@end
