/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsCartItemInfo, FBPaymentsCurrencyQuantity;

@interface FBPaymentsCartItem : FBValueObject <NSCopying> {

	FBPaymentsCartItemInfo* _cartItemInfo;
	long long _selectedQuantity;
	FBPaymentsCurrencyQuantity* _customizedItemPrice;

}

@property (nonatomic,copy,readonly) FBPaymentsCartItemInfo * cartItemInfo;                         //@synthesize cartItemInfo=_cartItemInfo - In the implementation block
@property (nonatomic,readonly) long long selectedQuantity;                                         //@synthesize selectedQuantity=_selectedQuantity - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * customizedItemPrice;              //@synthesize customizedItemPrice=_customizedItemPrice - In the implementation block
-(long long)selectedQuantity;
-(FBPaymentsCurrencyQuantity *)customizedItemPrice;
-(FBPaymentsCartItemInfo *)cartItemInfo;
-(id)initWithCartItemInfo:(id)arg1 selectedQuantity:(long long)arg2 customizedItemPrice:(id)arg3 ;
@end
