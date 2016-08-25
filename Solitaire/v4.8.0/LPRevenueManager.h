/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SKProductsRequestDelegate.h>

@class NSMutableDictionary, NSString;

@interface LPRevenueManager : NSObject <SKProductsRequestDelegate> {

	NSMutableDictionary* _transactions;
	NSMutableDictionary* _requests;
	NSString* _eventName;

}

@property (nonatomic,copy) NSString * eventName;                    //@synthesize eventName=_eventName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)loadTransactions;
-(void)saveTransactions;
-(void)addTransactionDictionary:(id)arg1 ;
-(void)trackRevenue;
-(id)init;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)addTransaction:(id)arg1 ;
@end

