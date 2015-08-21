/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, SKPaymentTransaction, GADInAppPurchase;

@interface GADDefaultInAppPurchase : NSObject {

	NSString* _productID;
	long long _quantity;
	SKPaymentTransaction* _paymentTransaction;
	GADInAppPurchase* _inAppPurchase;

}

@property (nonatomic,copy) NSString * productID;                                     //@synthesize productID=_productID - In the implementation block
@property (assign,nonatomic) long long quantity;                                     //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,retain) SKPaymentTransaction * paymentTransaction;              //@synthesize paymentTransaction=_paymentTransaction - In the implementation block
@property (nonatomic,retain) GADInAppPurchase * inAppPurchase;                       //@synthesize inAppPurchase=_inAppPurchase - In the implementation block
+(void)enableDefaultPurchaseFlowWithDelegate:(id)arg1 ;
+(void)disableDefaultPurchaseFlow;
-(void)setProductID:(NSString *)arg1 ;
-(void)setPaymentTransaction:(SKPaymentTransaction *)arg1 ;
-(SKPaymentTransaction *)paymentTransaction;
-(void)finishTransaction;
-(void)setQuantity:(long long)arg1 ;
-(long long)quantity;
-(NSString *)productID;
-(GADInAppPurchase *)inAppPurchase;
-(void)setInAppPurchase:(GADInAppPurchase *)arg1 ;
@end

