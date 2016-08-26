/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@interface ECAPIWorldPayRequest : ECAPIRequestBase
+(id)createHttpBody:(id)arg1 paymentName:(id)arg2 paymentType:(id)arg3 paymentId:(id)arg4 saveForFuture:(BOOL)arg5 ccName:(id)arg6 ccNumber:(id)arg7 ccExpire:(id)arg8 ccVerificationNumber:(id)arg9 ;
+(id)paymentMethodNodeWithPaymentId:(id)arg1 paymentType:(id)arg2 paymentName:(id)arg3 ;
+(id)createCreditCardNode:(BOOL)arg1 ccName:(id)arg2 ccNumber:(id)arg3 ccExpire:(id)arg4 ccVerificationNumber:(id)arg5 ;
+(id)requestWithPaymentId:(id)arg1 paymentType:(id)arg2 paymentName:(id)arg3 name:(id)arg4 number:(id)arg5 expirationDate:(id)arg6 verificationNumber:(id)arg7 saveForFuture:(BOOL)arg8 invoiceId:(id)arg9 ;
-(id)initWithPaymentId:(id)arg1 paymentType:(id)arg2 paymentName:(id)arg3 name:(id)arg4 number:(id)arg5 expirationDate:(id)arg6 verificationNumber:(id)arg7 saveForFuture:(BOOL)arg8 invoiceId:(id)arg9 ;
@end
