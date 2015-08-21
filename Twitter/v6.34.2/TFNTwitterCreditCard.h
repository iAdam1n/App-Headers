/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterCreditCardBase.h>
#import <Twitter/NSCopying.h>

@class NSString;

@interface TFNTwitterCreditCard : TFNTwitterCreditCardBase <NSCopying> {

	NSString* _cardId;
	NSString* _last4;
	BOOL _isUpgrade;
	NSString* _cardNumber;
	NSString* _verificationCode;
	NSString* _billingZip;

}

@property (nonatomic,readonly) NSString * cardId; 
@property (nonatomic,readonly) BOOL isUpgrade; 
@property (nonatomic,retain) NSString * cardNumber;                             //@synthesize cardNumber=_cardNumber - In the implementation block
@property (nonatomic,retain) NSString * verificationCode;                       //@synthesize verificationCode=_verificationCode - In the implementation block
@property (nonatomic,retain) NSString * billingZip;                             //@synthesize billingZip=_billingZip - In the implementation block
@property (nonatomic,readonly) BOOL validCardNumber; 
@property (nonatomic,readonly) BOOL validExpiryDate; 
@property (nonatomic,readonly) BOOL validVerificationCode; 
@property (nonatomic,readonly) BOOL validBillingZip; 
@property (nonatomic,readonly) BOOL preValidated; 
@property (nonatomic,readonly) unsigned long long validationState; 
@property (nonatomic,readonly) NSString * formattedCardNumber; 
@property (nonatomic,readonly) NSString * last4; 
@property (nonatomic,readonly) BOOL expirationEdited; 
+(id)formattedCreditCardNumberFromString:(id)arg1 ;
+(BOOL)validCardNumberString:(id)arg1 ;
+(unsigned long long)creditCardTypeFromNumberString:(id)arg1 ;
+(unsigned long long)creditCardTypeFromString:(id)arg1 ;
+(unsigned long long)cardNumberValidationStateForString:(id)arg1 ;
+(BOOL)isLuhnValidString:(id)arg1 ;
+(BOOL)dateMatchesReferenceDate:(id)arg1 ;
+(id)referenceDate;
-(id)initWithProxyCard:(id)arg1 ;
-(BOOL)isUpgrade;
-(NSString *)cardId;
-(NSString *)last4;
-(unsigned long long)creditCardType;
-(NSString *)billingZip;
-(NSString *)formattedCardNumber;
-(BOOL)validExpiryDate;
-(void)setVerificationCode:(NSString *)arg1 ;
-(BOOL)validVerificationCode;
-(void)setBillingZip:(NSString *)arg1 ;
-(BOOL)validBillingZip;
-(id)initWithCardNumber:(id)arg1 expiryMonth:(long long)arg2 expiryYear:(long long)arg3 cvv:(id)arg4 billingZip:(id)arg5 shippingAddress:(id)arg6 ;
-(BOOL)validCardNumber;
-(BOOL)preValidated;
-(NSString *)verificationCode;
-(BOOL)expirationEdited;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(unsigned long long)validationState;
-(void)setExpirationDate:(id)arg1 ;
-(NSString *)cardNumber;
-(void)setCardNumber:(NSString *)arg1 ;
@end

