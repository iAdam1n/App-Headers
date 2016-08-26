/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNIncrementalPersistenceCoordinating.h>
#import <Messenger/FBMLongBackgroundJobStarting.h>

@protocol MNIncrementalPersistenceCoordinating, OS_dispatch_queue;
@class NSNotificationCenter, FBTimeThrottler, NSObject, NSArray, NSString;

@interface FBMIncrementalPersistenceCoordinatorThrottler : NSObject <MNIncrementalPersistenceCoordinating, FBMLongBackgroundJobStarting> {

	id<MNIncrementalPersistenceCoordinating> _persistenceCoordinator;
	NSNotificationCenter* _notificationCenter;
	FBTimeThrottler* _timeThrottler;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _throttlerJobQueue;
	unsigned long long _backgroundTaskId;

}

@property (assign) unsigned long long backgroundTaskId;              //@synthesize backgroundTaskId=_backgroundTaskId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIncrementalPersistenceCoordinator:(id)arg1 numberOfSecondsToThrottle:(double)arg2 queue:(id)arg3 ;
-(void)setBackgroundTaskId:(unsigned long long)arg1 ;
-(void)_flushThrottlerJobQueue;
-(void)_addThrottlerJob:(id)arg1 executeJobsImmediately:(BOOL)arg2 ;
-(void)runJobs:(id)arg1 ;
-(void)runJobsFromSyncProtocol:(id)arg1 withSequenceId:(long long)arg2 ;
-(unsigned long long)backgroundTaskId;
-(void)beginLongBackgroundJob;
-(id)initWithIncrementalPersistenceCoordinator:(id)arg1 queue:(id)arg2 ;
-(void)_endBackgroundTask;
@end
