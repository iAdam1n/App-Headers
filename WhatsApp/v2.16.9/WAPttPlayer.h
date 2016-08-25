/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@class AVAudioPlayer, NSTimer, UIView, NSDate, NSString;

@interface WAPttPlayer : NSObject <AVAudioPlayerDelegate> {

	AVAudioPlayer* _pttAudioPlayer;
	NSTimer* _pttAudioPlayerUpdateTimer;
	unsigned long long _pttAudioPlayerUpdateTimerNumberOfTimersFired;
	double _pttStartTime;
	UIView* _lowVolumeHintView;
	BOOL _lowVolumeHintViewAnimating;
	BOOL _proximityMonitoringRequested;
	id _pttAudioActivity;
	NSDate* _allowAutorotateTime;
	OpaqueAudioQueueRef _audioQueueRef;
	AudioQueueBuffer* _audioQueueBufferRefs[3];
	BOOL _playerIsAboutToPlay;
	opusInfo* _opusInfo;
	amrNBInfo* _amrNBInfo;
	amrWBInfo* _amrWBInfo;
	BOOL _idleTimerDisabled;
	BOOL _infoProcessAqCallbacks;
	double _duration;
	double _progress;
	unsigned long long _state;
	NSString* _path;
	double _infoCurrentTime;

}

@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double progress;                       //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign) double infoCurrentTime;                          //@synthesize infoCurrentTime=_infoCurrentTime - In the implementation block
@property (assign) BOOL infoProcessAqCallbacks;                     //@synthesize infoProcessAqCallbacks=_infoProcessAqCallbacks - In the implementation block
@property (nonatomic,copy) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)seekAndValidateAMRNBHeaderForFile:(_sFILE*)arg1 ;
+(BOOL)seekAndValidateAMRWBHeaderForFile:(_sFILE*)arg1 ;
-(void)audioSessionInterrupted:(id)arg1 ;
-(void)cleanupState;
-(void)handleAudioSessionInterrupted;
-(void)audioSessionVolumeChanged:(id)arg1 ;
-(void)audioSessionRouteChanged:(id)arg1 ;
-(BOOL)playPTTAtPath:(id)arg1 ;
-(void)seekToPositionAMRNB:(int)arg1 ;
-(void)seekToPositionAMRWB:(int)arg1 ;
-(void)checkUpdateProximityMonitoringState;
-(void)routeAudioPlaybackAccordingProximitySensor;
-(void)showLowVolumeHint;
-(void)updatePushToTalkPlayProgress;
-(void)dismissLowVolumeView:(BOOL)arg1 ;
-(void)positionLowVolumeHint;
-(void)setInfoProcessAqCallbacks:(BOOL)arg1 ;
-(void)delayDeactivateAudioSession;
-(void)showRebootDeviceHint;
-(BOOL)infoProcessAqCallbacks;
-(void)aqPlayerPause;
-(void)aqPlayerHandlePlayerDidFinishPlaying;
-(void)setInfoCurrentTime:(double)arg1 ;
-(void)handlePlayerDidFinishPlaying;
-(double)infoCurrentTime;
-(BOOL)playPTTAtPath:(id)arg1 progress:(double)arg2 ;
-(void)seekToProgress:(double)arg1 ;
-(BOOL)rotationNotDesired;
-(void)updateLayoutForCurrentOrientation;
-(void)dealloc;
-(id)init;
-(unsigned long long)state;
-(double)duration;
-(void)setState:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)proximityStateChanged:(id)arg1 ;
-(NSString *)path;
-(void)setProgress:(double)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(double)progress;
-(void)pause;
-(void)finish;
-(double)currentTime;
-(BOOL)play;
-(void)stopPlayback;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)audioPlayerBeginInterruption:(id)arg1 ;
-(void)audioPlayerEndInterruption:(id)arg1 ;
@end

