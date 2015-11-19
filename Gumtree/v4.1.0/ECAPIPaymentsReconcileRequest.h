/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@class ECAPIPaymentMethod, NSDictionary, NSString;

@interface ECAPIPaymentsReconcileRequest : ECAPIRequestBase {

	ECAPIPaymentMethod* _paymentMethod;
	NSDictionary* _payflowResponseDict;
	NSString* _orderID;

}

@property (nonatomic,retain) ECAPIPaymentMethod * paymentMethod;              //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,retain) NSDictionary * payflowResponseDict;              //@synthesize payflowResponseDict=_payflowResponseDict - In the implementation block
@property (nonatomic,retain) NSString * orderID;                              //@synthesize orderID=_orderID - In the implementation block
-(id)httpBody;
-(void)addPostRootAttributes:(id)arg1 ;
-(void)setPayflowResponseDict:(NSDictionary *)arg1 ;
-(void)setOrderID:(NSString *)arg1 ;
-(NSString *)orderID;
-(id)paymentMethodNode;
-(id)payflowResponseNode;
-(NSDictionary *)payflowResponseDict;
-(id)initWithPaymentMethod:(id)arg1 payFlowResponse:(id)arg2 orderID:(id)arg3 ;
-(id)init;
-(void)setPaymentMethod:(ECAPIPaymentMethod *)arg1 ;
-(ECAPIPaymentMethod *)paymentMethod;
@end

