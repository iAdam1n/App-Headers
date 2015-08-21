/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OASBackgroundTaskDelegate, OS_dispatch_queue;
@class NSObject, NSError;

@interface OASBackgroundTask : NSObject {

	id<OASBackgroundTaskDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSError* _backgroundFailureError;
	NSError* _foregroundFailureError;
	unsigned long long _backgroundTaskId;

}

@property (assign,nonatomic,__weak) id<OASBackgroundTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSError * backgroundFailureError;                           //@synthesize backgroundFailureError=_backgroundFailureError - In the implementation block
@property (nonatomic,retain) NSError * foregroundFailureError;                           //@synthesize foregroundFailureError=_foregroundFailureError - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskId;                        //@synthesize backgroundTaskId=_backgroundTaskId - In the implementation block
-(BOOL)taskIsInBackground;
-(NSError *)backgroundFailureError;
-(NSError *)foregroundFailureError;
-(id)initUsingQueue:(id)arg1 ;
-(void)setForegroundFailureError:(NSError *)arg1 ;
-(void)setBackgroundFailureError:(NSError *)arg1 ;
-(void)performBackgroundWork;
-(unsigned long long)backgroundTaskId;
-(void)setBackgroundTaskId:(unsigned long long)arg1 ;
-(void)spawnFailureNotification;
-(void)spawnBackgroundFailureNotification;
-(void)spawnForegroundFailureNotification;
-(void)succeeded;
-(void)setDelegate:(id<OASBackgroundTaskDelegate>)arg1 ;
-(id)init;
-(id<OASBackgroundTaskDelegate>)delegate;
-(void)resume;
-(void)failed;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end
