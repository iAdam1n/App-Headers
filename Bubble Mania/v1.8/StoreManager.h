/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/StoreProductsRequestDelegate.h>
#import <BubbleMania/StoreTransactionRequestDelegate.h>

@protocol StoreManagerDelegate;
@class NSMutableDictionary, NSLocale, StoreProductRequestManager, StoreTransactionManager, NSDictionary, NSString;

@interface StoreManager : NSObject <StoreProductsRequestDelegate, StoreTransactionRequestDelegate> {

	NSMutableDictionary* _products;
	BOOL _hasProductsOnSale;
	BOOL _hasFetchedStoreProducts;
	BOOL _isPurchasing;
	NSLocale* _currencyLocale;
	StoreProductRequestManager* _storeProductRequestManager;
	StoreTransactionManager* _storeTransactionManager;
	id<StoreManagerDelegate> _delegate;

}

@property (nonatomic,readonly) NSDictionary * products;                                            //@synthesize products=_products - In the implementation block
@property (nonatomic,readonly) BOOL hasProductsOnSale;                                             //@synthesize hasProductsOnSale=_hasProductsOnSale - In the implementation block
@property (nonatomic,retain) NSLocale * currencyLocale;                                            //@synthesize currencyLocale=_currencyLocale - In the implementation block
@property (nonatomic,retain) StoreProductRequestManager * storeProductRequestManager;              //@synthesize storeProductRequestManager=_storeProductRequestManager - In the implementation block
@property (nonatomic,retain) StoreTransactionManager * storeTransactionManager;                    //@synthesize storeTransactionManager=_storeTransactionManager - In the implementation block
@property (nonatomic,retain) id<StoreManagerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedStoreProducts;                                         //@synthesize hasFetchedStoreProducts=_hasFetchedStoreProducts - In the implementation block
@property (assign,nonatomic) BOOL isPurchasing;                                                    //@synthesize isPurchasing=_isPurchasing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(void)onGameContextUpdatedNotification:(id)arg1 ;
-(BOOL)readyForTransaction;
-(void)requestProductInfo:(id)arg1 ;
-(BOOL)hasProductsOnSale;
-(id)baseProductOfProduct:(id)arg1 ;
-(id)localizedPrice:(id)arg1 ;
-(id)productsOfType:(int)arg1 ;
-(void)buyItem:(id)arg1 quantity:(int)arg2 withDelegate:(id)arg3 ;
-(void)transactionDidFail:(id)arg1 withError:(id)arg2 ;
-(id)discountedProduct:(id)arg1 ;
-(void)buyQAItem:(id)arg1 quantity:(int)arg2 withDelegate:(id)arg3 ;
-(BOOL)isProductValid:(id)arg1 ;
-(void)setHasFetchedStoreProducts:(BOOL)arg1 ;
-(void)setIsPurchasing:(BOOL)arg1 ;
-(BOOL)hasFetchedStoreProducts;
-(void)willSendStoreProductRequest;
-(StoreProductRequestManager *)storeProductRequestManager;
-(void)didFetchStoreProducts;
-(void)refreshWithNewGameData:(id)arg1 ;
-(StoreTransactionManager *)storeTransactionManager;
-(void)setCurrencyLocale:(NSLocale *)arg1 ;
-(void)processCachedTransactions;
-(BOOL)canBuyStoreProduct:(id)arg1 ;
-(void)showAppropriateProcessingView:(id)arg1 ;
-(void)didReceiveResponseWithValidProducts:(id)arg1 invalidProductIdentifiers:(id)arg2 ;
-(id)storeProductWithIdentifier:(id)arg1 ;
-(id)storeProducts;
-(void)didSendTransactionRequest:(BOOL)arg1 withTransactions:(id)arg2 ;
-(void)didReceiveTransactionResponse:(id)arg1 ;
-(id)localizedPriceFromProductId:(id)arg1 ;
-(id)localizedPriceWithBaseProduct:(id)arg1 amount:(double)arg2 ;
-(NSLocale *)currencyLocale;
-(void)setStoreProductRequestManager:(StoreProductRequestManager *)arg1 ;
-(void)setStoreTransactionManager:(StoreTransactionManager *)arg1 ;
-(void)setDelegate:(id<StoreManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<StoreManagerDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)isPurchasing;
-(NSDictionary *)products;
@end

