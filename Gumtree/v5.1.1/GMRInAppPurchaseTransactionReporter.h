/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/SKPaymentTransactionObserver.h>

@class NSString;

@interface GMRInAppPurchaseTransactionReporter : NSObject <SKPaymentTransactionObserver> {

	BOOL _reportingEnabled;
	BOOL _reportingWasDisabled;

}

@property (nonatomic,readonly) BOOL reportingWasDisabled;              //@synthesize reportingWasDisabled=_reportingWasDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)reportingWasDisabled;
-(void)enableReporting;
-(void)disableReporting;
-(void)reportTransactionsFromArray:(id)arg1 ;
-(void)dealloc;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
@end

