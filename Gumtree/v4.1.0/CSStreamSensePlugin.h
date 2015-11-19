/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:22 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/CSStreamSense.h>

@class NSString, NSMutableArray;

@interface CSStreamSensePlugin : CSStreamSense {

	NSString* _smartDetectionTimerId;
	long long _lastPlaybackPosition;
	BOOL _sendSeekLabel;
	NSMutableArray* _onGetLabelsHandlers;
	BOOL _detectSeek;
	BOOL _detectPause;
	BOOL _detectPlay;
	BOOL _detectEnd;
	BOOL _smartStateDetection;
	unsigned long long _pauseDetectionErrorMargin;
	unsigned long long _endDetectionErrorMargin;
	float _seekDetectionMinQuotient;
	unsigned long long _pulseSamplingInterval;
	unsigned long long _maximumNumberOfEntriesInHistory;
	unsigned long long _minimumNumberOfTimeUpdateEventsBeforeSensingAnything;
	BOOL _endMeasurementSent;
	BOOL _ignoreNextPulse;
	BOOL _clipStartedPlaying;
	NSMutableArray* _previousPlaybackPositions;
	NSMutableArray* _previousPlaybackPositionsTimestamps;

}

@property (retain) NSMutableArray * previousPlaybackPositions;                        //@synthesize previousPlaybackPositions=_previousPlaybackPositions - In the implementation block
@property (retain) NSMutableArray * previousPlaybackPositionsTimestamps;              //@synthesize previousPlaybackPositionsTimestamps=_previousPlaybackPositionsTimestamps - In the implementation block
-(void)setPreviousPlaybackPositions:(NSMutableArray *)arg1 ;
-(void)setPreviousPlaybackPositionsTimestamps:(NSMutableArray *)arg1 ;
-(void)stopSmartStateDetection;
-(NSMutableArray *)previousPlaybackPositions;
-(NSMutableArray *)previousPlaybackPositionsTimestamps;
-(BOOL)notify:(int)arg1 position:(long long)arg2 labels:(id)arg3 ;
-(BOOL)setClip:(id)arg1 playlistLoop:(BOOL)arg2 ;
-(void)startSmartStateDetection;
-(void)pulseTimerCallback;
-(BOOL)isSeekInProgress;
-(BOOL)isReachedEndOfClip:(long long)arg1 ;
-(id)initWithPluginName:(id)arg1 andPluginVersion:(id)arg2 andPlayerVersion:(id)arg3 ;
-(void)addLabelHandler:(/*^block*/id)arg1 ;
-(void)clearAllLabelHandlers;
-(void)setDetectSeek:(BOOL)arg1 ;
-(void)setDetectPause:(BOOL)arg1 ;
-(void)setDetectPlay:(BOOL)arg1 ;
-(void)setDetectEnd:(BOOL)arg1 ;
-(void)setSmartStateDetection:(BOOL)arg1 ;
-(void)setPauseDetectionErrorMargin:(unsigned long long)arg1 ;
-(void)setEndDetectionErrorMargin:(unsigned long long)arg1 ;
-(void)setSeekDetectionMinQuotient:(float)arg1 ;
-(void)setPulseSamplingInterval:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfEntriesInHistory:(unsigned long long)arg1 ;
-(void)setMinimumNumberOfTimeUpdateEventsBeforeSensingAnything:(unsigned long long)arg1 ;
-(void)setVideoSize:(id)arg1 ;
-(void)setVolume:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDuration:(long long)arg1 ;
-(BOOL)setClip:(id)arg1 ;
-(void)setBitRate:(long long)arg1 ;
-(void)setIsFullScreen:(BOOL)arg1 ;
@end

