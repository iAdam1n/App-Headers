//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SKProduct;

@interface SKPStoreProduct : NSObject
{
    SKProduct *_product;
    NSString *_currencyCode;
    NSString *_countryCode;
    NSString *_formattedPrice;
}

+ (id)formattedPriceForProduct:(id)arg1 currencyCode:(id)arg2;
+ (id)countryCodeForProduct:(id)arg1;
+ (id)currencyCodeForProduct:(id)arg1;
@property(retain, nonatomic) NSString *formattedPrice; // @synthesize formattedPrice=_formattedPrice;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) SKProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (id)initWithProduct:(id)arg1;

@end
