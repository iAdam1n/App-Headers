/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/SKPaymentTransactionObserver.h>

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
