/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
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
-(SKPaymentTransaction *)transaction;
-(void)setTransaction:(SKPaymentTransaction *)arg1 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithTransaction:(id)arg1 ;
@end
