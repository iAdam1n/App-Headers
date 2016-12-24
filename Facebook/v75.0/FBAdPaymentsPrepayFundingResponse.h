/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBAdPaymentsPrepayFundingResponse : FBValueObject <NSCopying> {

	NSString* _paymentId;
	NSURL* _altpayURI;

}

@property (nonatomic,copy,readonly) NSString * paymentId;              //@synthesize paymentId=_paymentId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * altpayURI;                 //@synthesize altpayURI=_altpayURI - In the implementation block
-(NSString *)paymentId;
-(id)initWithPaymentId:(id)arg1 altpayURI:(id)arg2 ;
-(NSURL *)altpayURI;
@end
