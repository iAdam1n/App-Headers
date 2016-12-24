/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFramePerformanceResultDisplayer.h>

@protocol FBFramePerformanceTrackerLogger;
@class NSString;

@interface FBFramePerformanceTracker : NSObject <FBFramePerformanceResultDisplayer> {

	id<FBFramePerformanceTrackerLogger> _logger;
	FBFramePerformanceTrackerConfig _config;
	mutex _lock;
	BOOL _tracking;
	long long _updateCount;
	unsigned long long _firstUpdateTime;
	unsigned long long _startTime;
	unsigned long long _previousFrameTimestamp;
	unsigned long long _targetFrameTime;
	FrameDrops _frameDrops;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startTrackingWithTargetFPS:(long long)arg1 ;
-(void)updateFrameWithTimestamp:(unsigned long long)arg1 ;
-(FBFramePerformanceResult)currentPerformanceResult;
-(FBFramePerformanceResult)_trackingResult;
-(id)init;
-(void)_reset;
-(void)stopTracking;
-(id)initWithConfig:(FBFramePerformanceTrackerConfig)arg1 ;
-(void)setLogger:(id)arg1 ;
@end
