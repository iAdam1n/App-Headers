//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"
#import "SKRequestDelegate.h"

@class NSMutableArray, NSString, SKPStoreProduct, SKProductsRequest;

@interface SKPStoreManager : NSObject <SKPaymentTransactionObserver, SKRequestDelegate, SKProductsRequestDelegate>
{
    _Bool _transactionObserver;
    _Bool _invalidated;
    _Bool _hasFetchedProducts;
    id <SKPStoreManagerDelegate> _delegate;
    SKPStoreProduct *_smallTopupProduct;
    SKProductsRequest *_productRequest;
    NSMutableArray *_transactionWithoutOrderIdentifiers;
    NSMutableArray *_transactionWithOrderIdentifiers;
}

@property(retain, nonatomic) NSMutableArray *transactionWithOrderIdentifiers; // @synthesize transactionWithOrderIdentifiers=_transactionWithOrderIdentifiers;
@property(retain, nonatomic) NSMutableArray *transactionWithoutOrderIdentifiers; // @synthesize transactionWithoutOrderIdentifiers=_transactionWithoutOrderIdentifiers;
@property(retain, nonatomic) SKProductsRequest *productRequest; // @synthesize productRequest=_productRequest;
@property(nonatomic) _Bool hasFetchedProducts; // @synthesize hasFetchedProducts=_hasFetchedProducts;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic, getter=isTransactionObserver) _Bool transactionObserver; // @synthesize transactionObserver=_transactionObserver;
@property(retain, nonatomic) SKPStoreProduct *smallTopupProduct; // @synthesize smallTopupProduct=_smallTopupProduct;
@property(nonatomic) __weak id <SKPStoreManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)purchaseProduct:(id)arg1;
- (_Bool)canPurchaseProduct:(id)arg1 error:(id *)arg2;
- (id)createTransactionWithProduct:(id)arg1;
- (id)createProductWithProduct:(id)arg1;
- (id)createProductsRequestWithProductIdentifiers:(id)arg1;
- (id)hashedSaltedSkypeName;
- (id)applicationUsernameForOrderIdentifier:(id)arg1;
- (void)getOrderIdentifier:(id *)arg1 hashedSaltedSkypeName:(id *)arg2 fromApplicationUsername:(id)arg3;
- (id)transactionWithOrderIdentifier:(id)arg1;
- (id)productWithProductIdentifier:(id)arg1;
- (void)cancelTransaction:(id)arg1;
- (void)processTransaction:(id)arg1;
- (void)createOrderForProduct:(id)arg1;
- (void)fetchedProducts:(id)arg1;
- (void)fetchProductsForProductIdentifiers:(id)arg1;
- (void)fetchProducts;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
