/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBAccelerometerTrackerDelegate;
@class CMMotionManager, FBAccelerometerDataToActivityPredictor, FBMotionActivityLogger, NSObject, NSOperationQueue;

@interface FBAccelerometerTracker : NSObject {

	CMMotionManager* _motionManager;
	FBAccelerometerDataToActivityPredictor* _predictor;
	FBMotionActivityLogger* _logger;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSOperationQueue* _operationQueue;
	id<FBAccelerometerTrackerDelegate> _delegate;
	BOOL _trackerInAction;

}

@property (assign) BOOL trackerInAction;              //@synthesize trackerInAction=_trackerInAction - In the implementation block
-(id)initWithMotionManager:(id)arg1 predictor:(id)arg2 delegate:(id)arg3 logger:(id)arg4 ;
-(void)abandonCurrentTrackingSession;
-(void)startToTrackActivity:(id)arg1 ;
-(void)_startToTrackActivity:(id)arg1 ;
-(void)_reportActivityToDelegate:(id)arg1 error:(id)arg2 ;
-(void)endTrackActivity:(id)arg1 ;
-(void)_endTrackActivity:(id)arg1 ;
-(void)_abandonCurrentTrackingSession;
-(BOOL)trackerInAction;
-(void)setTrackerInAction:(BOOL)arg1 ;
-(void)dealloc;
@end

