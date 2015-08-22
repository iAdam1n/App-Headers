/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@class TFNTimer;

@interface T1DirectMessageDeferrableOperationQueue : NSOperationQueue {

	BOOL _suspended;
	TFNTimer* _suspendForDurationTimer;

}

@property (getter=isSuspendedForDuration,nonatomic,readonly) BOOL suspendedForDuration; 
@property (nonatomic,retain) TFNTimer * suspendForDurationTimer;                                     //@synthesize suspendForDurationTimer=_suspendForDurationTimer - In the implementation block
-(void)_cancelSuspendForDurationTimer;
-(void)setSuspended:(BOOL)arg1 cancelSuspendForDuration:(BOOL)arg2 ;
-(void)_updateSuspendedState;
-(TFNTimer *)suspendForDurationTimer;
-(void)_scheduleSuspendForDurationTimerWithDuration:(double)arg1 ;
-(void)_suspendForDurationTimerDidFire;
-(void)setSuspendForDurationTimer:(TFNTimer *)arg1 ;
-(BOOL)isSuspendedForDuration;
-(void)suspendForDuration:(double)arg1 ;
-(void)addMainQueueOperationWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setSuspended:(BOOL)arg1 ;
@end
