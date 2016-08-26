/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBAdPaymentsAddressCollectedData, NSString;

@interface FBAdPaymentsBusinessEntityCollectedData : FBValueObject <NSCopying> {

	FBAdPaymentsAddressCollectedData* _addressCollectedData;
	NSString* _legalName;
	NSString* _businessName;
	NSString* _taxId;
	NSString* _taxIdCountryCode;

}

@property (nonatomic,copy,readonly) FBAdPaymentsAddressCollectedData * addressCollectedData;              //@synthesize addressCollectedData=_addressCollectedData - In the implementation block
@property (nonatomic,copy,readonly) NSString * legalName;                                                 //@synthesize legalName=_legalName - In the implementation block
@property (nonatomic,copy,readonly) NSString * businessName;                                              //@synthesize businessName=_businessName - In the implementation block
@property (nonatomic,copy,readonly) NSString * taxId;                                                     //@synthesize taxId=_taxId - In the implementation block
@property (nonatomic,copy,readonly) NSString * taxIdCountryCode;                                          //@synthesize taxIdCountryCode=_taxIdCountryCode - In the implementation block
-(id)initWithAddressCollectedData:(id)arg1 legalName:(id)arg2 businessName:(id)arg3 taxId:(id)arg4 taxIdCountryCode:(id)arg5 ;
-(FBAdPaymentsAddressCollectedData *)addressCollectedData;
-(NSString *)legalName;
-(NSString *)businessName;
-(NSString *)taxId;
-(NSString *)taxIdCountryCode;
@end
