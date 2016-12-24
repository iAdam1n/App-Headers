/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface FBNetworkIdleDetector_DEPRECATED : NSObject {

	double _timeInterval;
	/*^block*/id _idleTimeReachedBlock;
	NSTimer* _idleTimer;

}

@property (nonatomic,copy) id idleTimeReachedBlock;              //@synthesize idleTimeReachedBlock=_idleTimeReachedBlock - In the implementation block
@property (nonatomic,retain) NSTimer * idleTimer;                //@synthesize idleTimer=_idleTimer - In the implementation block
-(void)stopIdleDetector;
-(void)startIdleDetectorWithTimeout:(double)arg1 idleTimeReachedBlock:(/*^block*/id)arg2 ;
-(void)_idleStatusDidChange:(id)arg1 ;
-(void)_onIdleTimerFired:(id)arg1 ;
-(void)setIdleTimeReachedBlock:(id)arg1 ;
-(void)rescheduleIdleDetector;
-(id)idleTimeReachedBlock;
-(void)dealloc;
-(NSTimer *)idleTimer;
-(void)setIdleTimer:(NSTimer *)arg1 ;
@end
