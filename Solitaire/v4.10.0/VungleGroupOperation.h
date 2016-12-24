/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/VungleOperation.h>
#import <SolitaireFree/OperationQueueDelegate.h>

@class VungleOperationQueue, NSBlockOperation, NSMutableSet, NSString;

@interface VungleGroupOperation : VungleOperation <OperationQueueDelegate> {

	VungleOperationQueue* _internalQueue;
	NSBlockOperation* _finishingOperation;
	NSMutableSet* _aggregatedErrors;

}

@property (nonatomic,retain) VungleOperationQueue * internalQueue;               //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSBlockOperation * finishingOperation;              //@synthesize finishingOperation=_finishingOperation - In the implementation block
@property (nonatomic,retain) NSMutableSet * aggregatedErrors;                    //@synthesize aggregatedErrors=_aggregatedErrors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)aggregateError:(id)arg1 ;
-(void)operationQueue:(id)arg1 operationDidFinish:(id)arg2 errors:(id)arg3 ;
-(NSBlockOperation *)finishingOperation;
-(void)setFinishingOperation:(NSBlockOperation *)arg1 ;
-(void)setAggregatedErrors:(NSMutableSet *)arg1 ;
-(NSMutableSet *)aggregatedErrors;
-(void)operationDidFinish:(id)arg1 withErrors:(id)arg2 ;
-(void)cancel;
-(void)addOperation:(id)arg1 ;
-(void)operationQueue:(id)arg1 willAddOperation:(id)arg2 ;
-(void)execute;
-(id)initWithOperations:(id)arg1 ;
-(void)setInternalQueue:(VungleOperationQueue *)arg1 ;
-(VungleOperationQueue *)internalQueue;
@end
