/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol NSObject;
@class NSError, NSException, NSObject, NSCondition, NSMutableArray;

@interface FBTask : NSObject {

	id<NSObject> _result;
	NSError* _error;
	NSException* _exception;
	BOOL _cancelled;
	BOOL _completed;
	NSObject* _lock;
	NSCondition* _condition;
	NSMutableArray* _callbacks;

}

@property (nonatomic,retain) NSObject * lock;                         //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSCondition * condition;                 //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) BOOL completed;                          //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSMutableArray * callbacks;              //@synthesize callbacks=_callbacks - In the implementation block
+(id)taskWithResult:(id)arg1 ;
+(id)taskWithError:(id)arg1 ;
+(id)taskWithException:(id)arg1 ;
+(id)cancelledTask;
+(id)taskWithDelay:(unsigned long long)arg1 ;
+(id)taskDependentOnTasks:(id)arg1 ;
-(BOOL)trySetResult:(id)arg1 ;
-(void)runContinuations;
-(BOOL)trySetError:(id)arg1 ;
-(BOOL)trySetException:(id)arg1 ;
-(BOOL)trySetCancelled;
-(void)warnOperationOnMainThread;
-(id)dependentTaskWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)completionTaskWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)dependentTaskWithBlock:(/*^block*/id)arg1 ;
-(id)completionTaskWithBlock:(/*^block*/id)arg1 ;
-(void)warnOperationOnMainThreadNoOp;
-(id)waitForResult:(id*)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(id)exception;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSObject *)lock;
-(BOOL)isCancelled;
-(NSCondition *)condition;
-(void)setCondition:(NSCondition *)arg1 ;
-(id)result;
-(void)setLock:(NSObject *)arg1 ;
-(id)error;
-(void)waitUntilFinished;
-(NSMutableArray *)callbacks;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
-(void)setResult:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(void)setCompleted;
-(void)setException:(id)arg1 ;
@end

