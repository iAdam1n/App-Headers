/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SKPaymentTransactionObserver.h>

@class NSString;

@interface GADInAppPurchaseTransactionReporter : NSObject <SKPaymentTransactionObserver> {

	BOOL _reportingEnabled;
	BOOL _wasDisabled;

}

@property (nonatomic,readonly) BOOL shouldBeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)disableReporting;
-(void)reportTransactionsFromArray:(id)arg1 sharedParameters:(id)arg2 ;
-(void)reportTransactionsFromArray:(id)arg1 ;
-(void)enableReporting;
-(BOOL)shouldBeEnabled;
-(BOOL)wasDisabled;
-(void)dealloc;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
@end
