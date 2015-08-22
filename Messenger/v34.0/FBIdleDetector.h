/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSTimer;

@interface FBIdleDetector : NSObject {

	double _timeInterval;
	NSTimer* _idleTimer;
	/*^block*/id _idleTimeReachedBlock;

}

@property (nonatomic,retain) NSTimer * idleTimer;                //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,copy) id idleTimeReachedBlock;              //@synthesize idleTimeReachedBlock=_idleTimeReachedBlock - In the implementation block
-(void)_idleStatusDidChange:(id)arg1 ;
-(void)_onIdleTimerFired:(id)arg1 ;
-(void)setIdleTimeReachedBlock:(id)arg1 ;
-(void)stopIdleDetector;
-(void)startIdleDetectorWithTimeout:(double)arg1 idleTimeReachedBlock:(/*^block*/id)arg2 ;
-(id)idleTimeReachedBlock;
-(void)dealloc;
-(void)_rescheduleIdleTimer;
-(void)setIdleTimer:(NSTimer *)arg1 ;
-(NSTimer *)idleTimer;
@end
