/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Skype/Skype-Structs.h>
@class NSDate;

@interface SKPDTMFPlayer : NSObject {

	BOOL _running;
	BOOL _requestUpdateAudioSessionSettings;
	OpaqueAudioComponentInstanceRef _audioUnit;
	double _sampleRate;
	double _ioBufferDuration;
	double _theta1;
	double _freq1;
	double _theta2;
	double _freq2;
	double _amplitude;
	unsigned long long _lastToneID;
	NSDate* _currentDialtoneStartTimestamp;

}

@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef audioUnit;              //@synthesize audioUnit=_audioUnit - In the implementation block
@property (assign,nonatomic) double sampleRate;                                        //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) double ioBufferDuration;                                  //@synthesize ioBufferDuration=_ioBufferDuration - In the implementation block
@property (assign,nonatomic) double theta1;                                            //@synthesize theta1=_theta1 - In the implementation block
@property (assign,nonatomic) double freq1;                                             //@synthesize freq1=_freq1 - In the implementation block
@property (assign,nonatomic) double theta2;                                            //@synthesize theta2=_theta2 - In the implementation block
@property (assign,nonatomic) double freq2;                                             //@synthesize freq2=_freq2 - In the implementation block
@property (assign,nonatomic) double amplitude;                                         //@synthesize amplitude=_amplitude - In the implementation block
@property (nonatomic,readonly) double defaultAmplitude; 
@property (assign,nonatomic) unsigned long long lastToneID;                            //@synthesize lastToneID=_lastToneID - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                            //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSDate * currentDialtoneStartTimestamp;                   //@synthesize currentDialtoneStartTimestamp=_currentDialtoneStartTimestamp - In the implementation block
@property (assign,nonatomic) BOOL requestUpdateAudioSessionSettings;                   //@synthesize requestUpdateAudioSessionSettings=_requestUpdateAudioSessionSettings - In the implementation block
-(void)stopNow;
-(unsigned long long)playDTMFTone:(long long)arg1 ;
-(void)stopTone:(unsigned long long)arg1 ;
-(double)ioBufferDuration;
-(BOOL)updateAudioSessionSettings;
-(BOOL)requestUpdateAudioSessionSettings;
-(void)setRequestUpdateAudioSessionSettings:(BOOL)arg1 ;
-(void)setFreq1:(double)arg1 ;
-(void)setFreq2:(double)arg1 ;
-(double)defaultAmplitude;
-(void)setAmplitude:(double)arg1 ;
-(void)setCurrentDialtoneStartTimestamp:(NSDate *)arg1 ;
-(unsigned long long)lastToneID;
-(void)setLastToneID:(unsigned long long)arg1 ;
-(NSDate *)currentDialtoneStartTimestamp;
-(void)setIoBufferDuration:(double)arg1 ;
-(double)theta1;
-(void)setTheta1:(double)arg1 ;
-(double)freq1;
-(double)theta2;
-(void)setTheta2:(double)arg1 ;
-(double)freq2;
-(double)amplitude;
-(id)init;
-(void)dealloc;
-(void)stop;
-(BOOL)isRunning;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(void)setRunning:(BOOL)arg1 ;
-(OpaqueAudioComponentInstanceRef)audioUnit;
@end
