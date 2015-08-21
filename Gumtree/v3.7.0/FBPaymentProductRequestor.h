/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/SKProductsRequestDelegate.h>

@class SKPaymentTransaction, SKProductsRequest, NSString;

@interface FBPaymentProductRequestor : NSObject <SKProductsRequestDelegate> {

	SKPaymentTransaction* _transaction;
	SKProductsRequest* _productRequest;

}

@property (nonatomic,retain) SKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) SKProductsRequest * productRequest;              //@synthesize productRequest=_productRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)resolveProducts;
-(void)setProductRequest:(SKProductsRequest *)arg1 ;
-(SKProductsRequest *)productRequest;
-(id)getTruncatedString:(id)arg1 ;
-(void)logTransactionEvent:(id)arg1 ;
-(void)setTransaction:(SKPaymentTransaction *)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(SKPaymentTransaction *)transaction;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)dealloc;
-(void)cleanUp;
@end

