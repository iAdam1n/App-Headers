/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:51:08 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/AA3738EF-C276-423D-BBB1-85BEAAD70331/Crystal.app/Crystal
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

@property (nonatomic,retain) NSRecursiveLock * lock;              //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) id asyncCompletion;                    //@synthesize asyncCompletion=_asyncCompletion - In the implementation block
-(BOOL)checkForCancellation;
-(void)markStarted;
-(void)markDone;
-(void)changeValueForKey:(id)arg1 inBlock:(/*^block*/id)arg2 ;
-(void)unlockedMarkStarted;
-(void)lock:(/*^block*/id)arg1 ;
-(void)unlockedMarkComplete;
-(void)unlockedMarkFinished;
-(id)asyncCompletion;
-(void)setAsyncCompletion:(id)arg1 ;
-(id)init;
-(NSRecursiveLock *)lock;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(BOOL)isConcurrent;
-(void)finishWithError:(id)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
@end
