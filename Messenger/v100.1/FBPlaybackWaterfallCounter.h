/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface FBPlaybackWaterfallCounter : NSObject {

	double _stallTime;
	double _lastPlayedTime;
	BOOL _stalled;
	BOOL _firstStall;
	double _firstStallTime;
	double _interruptStartedTime;
	BOOL _interrupted;
	double _interruptTime;
	NSMutableArray* _stallTimePositions;
	unsigned long long _stallCount;
	NSString* _waterfallID;
	double _firstStallStartPositionMS;
	unsigned long long _interruptCount;

}

@property (nonatomic,readonly) unsigned long long stallCount;                  //@synthesize stallCount=_stallCount - In the implementation block
@property (nonatomic,readonly) double stallTime; 
@property (nonatomic,copy,readonly) NSString * waterfallID;                    //@synthesize waterfallID=_waterfallID - In the implementation block
@property (nonatomic,readonly) double firstStallStartPositionMS;               //@synthesize firstStallStartPositionMS=_firstStallStartPositionMS - In the implementation block
@property (nonatomic,readonly) unsigned long long interruptCount;              //@synthesize interruptCount=_interruptCount - In the implementation block
-(double)stallTime;
-(void)stallAtPlaybackTime:(double)arg1 ;
-(void)interruptReceived;
-(void)resetForPlayRequested;
-(void)resetForPlayStarted;
-(double)firstStallTime;
-(double)interruptTime;
-(void)beginWaterfall;
-(void)endWaterfall;
-(int)recentStallCountForPlaybackTime:(double)arg1 ;
-(NSString *)waterfallID;
-(double)firstStallStartPositionMS;
-(unsigned long long)interruptCount;
-(id)init;
-(void)play;
-(BOOL)isStalled;
-(unsigned long long)stallCount;
@end
