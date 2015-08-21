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

@class NSString, UIImage;

@interface TFNTwitterCreditCardProxy : TFNTwitterCreditCardBase <NSCopying> {

	BOOL _isDefault;
	BOOL _isAvailableBuyNow;
	BOOL _isAvailableOffers;
	NSString* _cardId;
	NSString* _last4;

}

@property (nonatomic,readonly) NSString * obfuscatedCardNumber; 
@property (nonatomic,readonly) NSString * cardNameAndObfuscatedNumber; 
@property (nonatomic,readonly) NSString * obfuscatedAccessibilityCardNumber; 
@property (nonatomic,readonly) UIImage * creditCardImage; 
@property (nonatomic,readonly) NSString * cardId;                                         //@synthesize cardId=_cardId - In the implementation block
@property (nonatomic,readonly) NSString * last4;                                          //@synthesize last4=_last4 - In the implementation block
@property (assign,nonatomic) BOOL isDefault;                                              //@synthesize isDefault=_isDefault - In the implementation block
@property (assign,nonatomic) BOOL isAvailableBuyNow;                                      //@synthesize isAvailableBuyNow=_isAvailableBuyNow - In the implementation block
@property (assign,nonatomic) BOOL isAvailableOffers;                                      //@synthesize isAvailableOffers=_isAvailableOffers - In the implementation block
+(id)creditCardImageForCreditCardType:(unsigned long long)arg1 ;
-(NSString *)obfuscatedCardNumber;
-(id)_cardNameAndNumberFormat;
-(NSString *)cardNameAndObfuscatedNumber;
-(NSString *)obfuscatedAccessibilityCardNumber;
-(UIImage *)creditCardImage;
-(NSString *)last4;
-(BOOL)isAvailableBuyNow;
-(BOOL)isAvailableOffers;
-(NSString *)cardId;
-(id)initWithCard:(id)arg1 cardId:(id)arg2 ;
-(id)initWithCardId:(id)arg1 last4:(id)arg2 cardType:(unsigned long long)arg3 expiryMonth:(long long)arg4 expiryYear:(long long)arg5 shippingAddress:(id)arg6 billingAddress:(id)arg7 isDefault:(BOOL)arg8 isAvailableBuyNow:(BOOL)arg9 isAvailableOffers:(BOOL)arg10 ;
-(void)setIsAvailableBuyNow:(BOOL)arg1 ;
-(void)setIsAvailableOffers:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsDefault:(BOOL)arg1 ;
-(BOOL)isDefault;
@end

