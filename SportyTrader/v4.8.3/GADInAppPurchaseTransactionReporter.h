/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SKPaymentTransactionObserver.h>

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
-(BOOL)shouldBeEnabled;
-(void)enableReporting;
-(void)reportTransactionsFromArray:(id)arg1 sharedParameters:(id)arg2 ;
-(void)reportTransactionsFromArray:(id)arg1 ;
-(BOOL)wasDisabled;
-(void)dealloc;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
@end

