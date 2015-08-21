/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSRecursiveLock;

@interface CLSAsyncOperation : NSOperation {

	BOOL _internalExecuting;
	BOOL _internalFinished;
	/*^block*/id _asyncCompletion;
	NSRecursiveLock* _lock;

}

@property (nonatomic,copy) id asyncCompletion;                    //@synthesize asyncCompletion=_asyncCompletion - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;              //@synthesize lock=_lock - In the implementation block
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
-(BOOL)isAsynchronous;
-(id)init;
-(NSRecursiveLock *)lock;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(BOOL)isConcurrent;
@end

