/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SKProductsRequestDelegate.h>

@class SKPaymentTransaction, SKProductsRequest, NSString;

@interface CBPaymentProductRequestor : NSObject <SKProductsRequestDelegate> {

	SKPaymentTransaction* _transaction;
	SKProductsRequest* _productRequest;

}

@property (nonatomic,retain) SKProductsRequest * productRequest;              //@synthesize productRequest=_productRequest - In the implementation block
@property (nonatomic,retain) SKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)resolveProducts;
-(void)setProductRequest:(SKProductsRequest *)arg1 ;
-(SKProductsRequest *)productRequest;
-(void)setTransaction:(SKPaymentTransaction *)arg1 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithTransaction:(id)arg1 ;
-(SKPaymentTransaction *)transaction;
@end

