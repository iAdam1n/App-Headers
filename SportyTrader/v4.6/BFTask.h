/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSError, NSException, NSObject, NSCondition, NSMutableArray;

@interface BFTask : NSObject {

	id _result;
	NSError* _error;
	NSException* _exception;
	BOOL _cancelled;
	BOOL _completed;
	NSObject* _lock;
	NSCondition* _condition;
	NSMutableArray* _callbacks;

}

@property (nonatomic,readonly) id result; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSException * exception; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSCondition * condition;                        //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) NSMutableArray * callbacks;                     //@synthesize callbacks=_callbacks - In the implementation block
+(id)taskWithError:(id)arg1 ;
+(id)taskWithException:(id)arg1 ;
+(id)cancelledTask;
+(id)taskWithDelay:(int)arg1 ;
+(id)taskWithResult:(id)arg1 ;
+(id)taskForCompletionOfAllTasks:(id)arg1 ;
+(id)taskFromExecutor:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)runContinuations;
-(void)warnOperationOnMainThread;
-(id)continueWithSuccessBlock:(/*^block*/id)arg1 ;
-(BOOL)trySetResult:(id)arg1 ;
-(BOOL)trySetError:(id)arg1 ;
-(BOOL)trySetException:(id)arg1 ;
-(BOOL)trySetCancelled;
-(id)continueWithExecutor:(id)arg1 withSuccessBlock:(/*^block*/id)arg2 ;
-(id)continueWithBlock:(/*^block*/id)arg1 ;
-(id)continueWithExecutor:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(NSException *)exception;
-(void)cancel;
-(id)init;
-(NSObject *)lock;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(NSCondition *)condition;
-(void)setCondition:(NSCondition *)arg1 ;
-(id)result;
-(void)setLock:(NSObject *)arg1 ;
-(NSError *)error;
-(void)waitUntilFinished;
-(NSMutableArray *)callbacks;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
-(void)setResult:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setCompleted;
-(void)setException:(NSException *)arg1 ;
@end
