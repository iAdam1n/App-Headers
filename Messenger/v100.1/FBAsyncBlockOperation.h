/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Foundation/NSOperation.h>

@interface FBAsyncBlockOperation : NSOperation {

	atomic<bool> _executing;
	atomic<bool> _finished;
	atomic<bool> _cancelled;
	/*^block*/id _operation;

}
-(void)completeOperation;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(BOOL)isConcurrent;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
