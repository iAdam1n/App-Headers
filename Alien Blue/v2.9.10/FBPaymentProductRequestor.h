/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/SKProductsRequestDelegate.h>

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
-(void)dealloc;
-(void)cleanUp;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)setTransaction:(SKPaymentTransaction *)arg1 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithTransaction:(id)arg1 ;
-(SKPaymentTransaction *)transaction;
@end

