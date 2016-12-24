/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBTipCurrencyAmount : FBGraphQLInput {

	NSString* _currency;
	NSNumber* _amount;
	NSString* _useCash;

}

@property (nonatomic,copy) NSString * currency;              //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSNumber * amount;                //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * useCash;               //@synthesize useCash=_useCash - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)useCash;
-(void)setUseCash:(NSString *)arg1 ;
-(void)setAmount:(NSNumber *)arg1 ;
-(NSNumber *)amount;
-(void)setCurrency:(NSString *)arg1 ;
-(NSString *)currency;
@end
