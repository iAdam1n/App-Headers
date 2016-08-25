/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/FABAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSArray, NSOperationQueue, NSMutableArray, NSObject;

@interface FABCompoundOperation : FABAsyncOperation {

	NSArray* _operations;
	NSOperationQueue* _compoundQueue;
	unsigned long long _completedOperations;
	NSMutableArray* _errors;
	NSObject*<OS_dispatch_queue> _countingQueue;

}

@property (nonatomic,copy) NSArray * operations;                                      //@synthesize operations=_operations - In the implementation block
@property (nonatomic,retain) NSOperationQueue * compoundQueue;                        //@synthesize compoundQueue=_compoundQueue - In the implementation block
@property (assign,nonatomic) unsigned long long completedOperations;                  //@synthesize completedOperations=_completedOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * errors;                                 //@synthesize errors=_errors - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> countingQueue;              //@synthesize countingQueue=_countingQueue - In the implementation block
-(void)addCompoundCompletionCheckToOriginalCompletion:(/*^block*/id)arg1 operation:(id)arg2 ;
-(NSOperationQueue *)compoundQueue;
-(void)attemptCompoundCompletionWithCompletedOperations:(unsigned long long)arg1 ;
-(unsigned long long)updateCompletionCountsWithError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)countingQueue;
-(unsigned long long)completedOperations;
-(void)setCompletedOperations:(unsigned long long)arg1 ;
-(void)setCompoundQueue:(NSOperationQueue *)arg1 ;
-(void)setCountingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cancel;
-(id)init;
-(void)main;
-(void)setOperations:(NSArray *)arg1 ;
-(NSArray *)operations;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)errors;
@end

