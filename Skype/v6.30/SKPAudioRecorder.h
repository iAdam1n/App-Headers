/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:37 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPAudioRecordable.h>

@protocol SKPAudioRecorderDelegate;
@class NSMapTable, NSTimer, NSString;

@interface SKPAudioRecorder : NSObject <SKPAudioRecordable> {

	BOOL _recording;
	BOOL _rendering;
	BOOL _waitForFinish;
	unsigned _sampleNumber;
	id<SKPAudioRecorderDelegate> _delegate;
	NSMapTable* _completionBlocksByClient;
	NSTimer* _checkRenderingStatusTimer;
	AudioStreamBasicDescription _streamFormat;

}

@property (assign,nonatomic) AudioStreamBasicDescription streamFormat;              //@synthesize streamFormat=_streamFormat - In the implementation block
@property (assign,nonatomic) BOOL recording;                                        //@synthesize recording=_recording - In the implementation block
@property (assign,nonatomic) BOOL rendering;                                        //@synthesize rendering=_rendering - In the implementation block
@property (assign,nonatomic) BOOL waitForFinish;                                    //@synthesize waitForFinish=_waitForFinish - In the implementation block
@property (nonatomic,copy) NSMapTable * completionBlocksByClient;                   //@synthesize completionBlocksByClient=_completionBlocksByClient - In the implementation block
@property (nonatomic,retain) NSTimer * checkRenderingStatusTimer;                   //@synthesize checkRenderingStatusTimer=_checkRenderingStatusTimer - In the implementation block
@property (assign,nonatomic) unsigned sampleNumber;                                 //@synthesize sampleNumber=_sampleNumber - In the implementation block
@property (__weak) id<SKPAudioRecorderDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL needsPlayback; 
@property (nonatomic,readonly) BOOL needsRecording; 
-(NSMapTable *)completionBlocksByClient;
-(AudioStreamBasicDescription)recordingStreamFormatWithSampleRate:(double)arg1 ;
-(void)onCheckRenderingStatusTimerFired;
-(void)setCheckRenderingStatusTimer:(NSTimer *)arg1 ;
-(void)resetRecording;
-(void)updateCompletionBlock;
-(void)setCompletionBlocksByClient:(NSMapTable *)arg1 ;
-(NSTimer *)checkRenderingStatusTimer;
-(void)recordForClient:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)stopForClient:(id)arg1 ;
-(BOOL)needsPlayback;
-(BOOL)needsRecording;
-(AudioStreamBasicDescription)streamFormat;
-(int)recordAudioWithIOActionFlags:(unsigned*)arg1 audioTimeStamp:(const AudioTimeStamp*)arg2 numberOfFrames:(unsigned)arg3 audioBufferList:(AudioBufferList*)arg4 ;
-(void)setStreamFormat:(AudioStreamBasicDescription)arg1 ;
-(void)setSampleNumber:(unsigned)arg1 ;
-(unsigned)sampleNumber;
-(void)setWaitForFinish:(BOOL)arg1 ;
-(BOOL)waitForFinish;
-(id)init;
-(void)setDelegate:(id<SKPAudioRecorderDelegate>)arg1 ;
-(void)dealloc;
-(id<SKPAudioRecorderDelegate>)delegate;
-(BOOL)rendering;
-(void)setRendering:(BOOL)arg1 ;
-(BOOL)isRecording;
-(void)setRecording:(BOOL)arg1 ;
-(BOOL)recording;
@end
