/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBNWatchKitNetworkFetch.h>

@class NSDictionary;

@interface WatchKitFetchTransactions : EBNWatchKitNetworkFetch {

	/*^block*/id _completion;
	NSDictionary* _resultTransactions;
	NSDictionary* _transactionIDs;

}

@property (copy) id completion;                                              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSDictionary * resultTransactions;              //@synthesize resultTransactions=_resultTransactions - In the implementation block
@property (nonatomic,retain) NSDictionary * transactionIDs;                  //@synthesize transactionIDs=_transactionIDs - In the implementation block
+(void)getTransactionsForIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)completeOnMain;
-(void)getTransactionsForIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setTransactionIDs:(NSDictionary *)arg1 ;
-(void)transactionsComplete:(id)arg1 ;
-(NSDictionary *)transactionIDs;
-(void)setResultTransactions:(NSDictionary *)arg1 ;
-(NSDictionary *)resultTransactions;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end
