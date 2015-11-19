/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSError, NSException, NSObject, NSCondition, NSMutableArray;

@interface BFTask : NSObject {

	id _result;
	NSError* _error;
	NSException* _exception;
	BOOL _cancelled;
	BOOL _faulted;
	BOOL _completed;
	NSObject* _lock;
	NSCondition* _condition;
	NSMutableArray* _callbacks;

}

@property (nonatomic,readonly) id result; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSException * exception; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isFaulted,nonatomic) BOOL faulted;                  //@synthesize faulted=_faulted - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSCondition * condition;                        //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) NSMutableArray * callbacks;                     //@synthesize callbacks=_callbacks - In the implementation block
+(id)taskWithError:(id)arg1 ;
+(id)taskWithResult:(id)arg1 ;
+(id)taskForCompletionOfAllTasks:(id)arg1 ;
+(id)cancelledTask;
+(id)taskWithException:(id)arg1 ;
+(id)taskForCompletionOfAllTasksWithResults:(id)arg1 ;
+(id)taskWithDelay:(int)arg1 ;
+(id)taskWithDelay:(int)arg1 cancellationToken:(id)arg2 ;
+(id)taskFromExecutor:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)continueWithExecutor:(id)arg1 withSuccessBlock:(/*^block*/id)arg2 ;
-(id)continueWithBlock:(/*^block*/id)arg1 ;
-(id)continueWithSuccessBlock:(/*^block*/id)arg1 ;
-(id)continueWithExecutor:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)trySetResult:(id)arg1 ;
-(void)runContinuations;
-(BOOL)trySetError:(id)arg1 ;
-(void)setFaulted:(BOOL)arg1 ;
-(BOOL)trySetException:(id)arg1 ;
-(BOOL)trySetCancelled;
-(id)continueWithExecutor:(id)arg1 block:(/*^block*/id)arg2 cancellationToken:(id)arg3 ;
-(id)continueWithExecutor:(id)arg1 successBlock:(/*^block*/id)arg2 cancellationToken:(id)arg3 ;
-(BOOL)isFaulted;
-(void)warnOperationOnMainThread;
-(id)continueWithBlock:(/*^block*/id)arg1 cancellationToken:(id)arg2 ;
-(id)continueWithSuccessBlock:(/*^block*/id)arg1 cancellationToken:(id)arg2 ;
-(void)waitUntilFinished;
-(NSMutableArray *)callbacks;
-(NSError *)error;
-(void)setException:(NSException *)arg1 ;
-(void)cancel;
-(id)init;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(NSObject *)lock;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(NSCondition *)condition;
-(void)setCondition:(NSCondition *)arg1 ;
-(id)result;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setLock:(NSObject *)arg1 ;
-(void)setCompleted;
-(NSException *)exception;
-(void)setResult:(id)arg1 ;
@end
