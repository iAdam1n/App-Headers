/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SQueue, NSMutableArray, STimer;

@interface TGAcceleratedVideoFrameQueue : NSObject {

	SQueue* _queue;
	unsigned long long _maxFrames;
	unsigned long long _fillFrames;
	double _previousFrameTimestamp;
	/*^block*/id _requestFrame;
	/*^block*/id _drawFrame;
	NSMutableArray* _frames;
	STimer* _timer;
	int _sessionId;

}
-(void)pauseRequests;
-(id)initWithRequestFrame:(/*^block*/id)arg1 drawFrame:(/*^block*/id)arg2 ;
-(void)beginRequests:(int)arg1 ;
-(void)dispatch:(/*^block*/id)arg1 ;
-(void)checkQueue;
@end
