/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/SKPaymentTransactionObserver.h>

@class NSString;

@interface FBSDKPaymentObserver : NSObject <SKPaymentTransactionObserver> {

	BOOL _observingTransactions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)startObservingTransactions;
+(void)stopObservingTransactions;
+(id)singleton;
-(void)startObservingTransactions;
-(void)stopObservingTransactions;
-(void)handleTransaction:(id)arg1 ;
-(id)init;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
@end

