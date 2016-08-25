/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CurrencyAmount, NSString, EBNPaymentPromotion;

@interface EBUSimplePromotion : UIView {

	CurrencyAmount* _amount;
	NSString* _message;
	NSString* _promoID;
	EBNPaymentPromotion* _originalPromotion;

}

@property (nonatomic,retain) CurrencyAmount * amount;                              //@synthesize amount=_amount - In the implementation block
@property (nonatomic,retain) NSString * message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * promoID;                                   //@synthesize promoID=_promoID - In the implementation block
@property (nonatomic,retain) EBNPaymentPromotion * originalPromotion;              //@synthesize originalPromotion=_originalPromotion - In the implementation block
-(NSString *)promoID;
-(void)setPromoID:(NSString *)arg1 ;
-(EBNPaymentPromotion *)originalPromotion;
-(void)setOriginalPromotion:(EBNPaymentPromotion *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setAmount:(CurrencyAmount *)arg1 ;
-(CurrencyAmount *)amount;
@end

