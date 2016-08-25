/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSRecursiveLock;

@interface FABAsyncOperation : NSOperation {

	BOOL _internalExecuting;
	BOOL _internalFinished;
	/*^block*/id _asyncCompletion;
	NSRecursiveLock* _lock;

}

@property (nonatomic,copy) id asyncCompletion;                    //@synthesize asyncCompletion=_asyncCompletion - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;              //@synthesize lock=_lock - In the implementation block
-(void)markDone;
-(BOOL)checkForCancellation;
-(void)markStarted;
-(void)changeValueForKey:(id)arg1 inBlock:(/*^block*/id)arg2 ;
-(void)unlockedMarkStarted;
-(void)lock:(/*^block*/id)arg1 ;
-(void)unlockedMarkComplete;
-(void)unlockedMarkFinished;
-(id)asyncCompletion;
-(void)setAsyncCompletion:(id)arg1 ;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(id)init;
-(NSRecursiveLock *)lock;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setLock:(NSRecursiveLock *)arg1 ;
@end

