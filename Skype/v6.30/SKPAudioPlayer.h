/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPAudioPlayable.h>

@protocol SKPAudioPlayerDelegate;
@class SKPAudioAsset, SKPAudioHost, NSString;

@interface SKPAudioPlayer : NSObject <SKPAudioPlayable> {

	BOOL _playing;
	BOOL _isPaused;
	BOOL _rendering;
	BOOL _waitForFinish;
	BOOL _isPreparedToPlay;
	unsigned _sampleNumber;
	id<SKPAudioPlayerDelegate> _delegate;
	SKPAudioAsset* _audioAsset;
	SKPAudioHost* _audioHost;
	long long _loopCounter;
	long long _numberOfLoops;
	double _startTime;
	AudioStreamBasicDescription _streamFormat;

}

@property (nonatomic,retain) SKPAudioAsset * audioAsset;                                    //@synthesize audioAsset=_audioAsset - In the implementation block
@property (nonatomic,readonly) SKPAudioHost * audioHost;                                    //@synthesize audioHost=_audioHost - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription streamFormat;                      //@synthesize streamFormat=_streamFormat - In the implementation block
@property (assign,nonatomic) unsigned sampleNumber;                                         //@synthesize sampleNumber=_sampleNumber - In the implementation block
@property (assign,nonatomic) BOOL playing;                                                  //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) BOOL isPaused;                                                 //@synthesize isPaused=_isPaused - In the implementation block
@property (assign,nonatomic) BOOL rendering;                                                //@synthesize rendering=_rendering - In the implementation block
@property (assign,nonatomic) long long loopCounter;                                         //@synthesize loopCounter=_loopCounter - In the implementation block
@property (assign,nonatomic) BOOL waitForFinish;                                            //@synthesize waitForFinish=_waitForFinish - In the implementation block
@property (assign,nonatomic) BOOL isPreparedToPlay;                                         //@synthesize isPreparedToPlay=_isPreparedToPlay - In the implementation block
@property (assign,setter=setNumberOfLoops:,nonatomic) long long numberOfLoops;              //@synthesize numberOfLoops=_numberOfLoops - In the implementation block
@property (assign,setter=setStartTime:,nonatomic) double startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (__weak) id<SKPAudioPlayerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL needsPlayback; 
@property (nonatomic,readonly) BOOL needsRecording; 
-(BOOL)needsPlayback;
-(BOOL)needsRecording;
-(AudioStreamBasicDescription)streamFormat;
-(int)renderAudioWithIOActionFlags:(unsigned*)arg1 audioTimeStamp:(const AudioTimeStamp*)arg2 numberOfFrames:(unsigned)arg3 audioBufferList:(AudioBufferList*)arg4 ;
-(SKPAudioHost *)audioHost;
-(long long)loopCounter;
-(void)setLoopCounter:(long long)arg1 ;
-(void)setStreamFormat:(AudioStreamBasicDescription)arg1 ;
-(void)setIsPreparedToPlay:(BOOL)arg1 ;
-(void)setSampleNumber:(unsigned)arg1 ;
-(unsigned)sampleNumber;
-(void)setWaitForFinish:(BOOL)arg1 ;
-(AudioStreamBasicDescription)renderStreamFormatWithSampleRate:(double)arg1 ;
-(BOOL)waitForFinish;
-(void)setAudioAsset:(SKPAudioAsset *)arg1 ;
-(void)stopLooping;
-(id)initWithAudioAsset:(id)arg1 ;
-(BOOL)prepareToPlayWithError:(id*)arg1 ;
-(BOOL)playAtTime:(double)arg1 withError:(id*)arg2 ;
-(BOOL)playWithError:(id*)arg1 ;
-(void)setDelegate:(id<SKPAudioPlayerDelegate>)arg1 ;
-(id<SKPAudioPlayerDelegate>)delegate;
-(void)setStartTime:(double)arg1 ;
-(void)stop;
-(BOOL)isPlaying;
-(BOOL)rendering;
-(void)setRendering:(BOOL)arg1 ;
-(double)startTime;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)pause;
-(BOOL)isPaused;
-(long long)numberOfLoops;
-(BOOL)isPreparedToPlay;
-(void)setIsPaused:(BOOL)arg1 ;
-(BOOL)playing;
-(void)setPlaying:(BOOL)arg1 ;
-(SKPAudioAsset *)audioAsset;
-(void)finishedPlaying;
-(void)setNumberOfLoops:(long long)arg1 ;
@end
