/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/AVAudioRecorderDelegate.h>

@class AVAudioRecorder, AdMarvelAudioRecordingSettings, NSString;

@interface AdMarvelAudioRecordingManager : NSObject <AVAudioRecorderDelegate> {

	AVAudioRecorder* recorder;
	AdMarvelAudioRecordingSettings* recordSettings;
	int webViewTypeResponsibleForAudioRecording;
	int audioRecordingCurrentStatus;

}

@property (nonatomic,retain) AVAudioRecorder * recorder; 
@property (assign,nonatomic) int webViewTypeResponsibleForAudioRecording; 
@property (assign,nonatomic) int audioRecordingCurrentStatus; 
@property (nonatomic,retain) AdMarvelAudioRecordingSettings * recordSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)webViewTypeResponsibleForAudioRecording;
-(void)setWebViewTypeResponsibleForAudioRecording:(int)arg1 ;
-(int)audioRecordingCurrentStatus;
-(void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)setAudioRecordingCurrentStatus:(int)arg1 ;
-(void)dealloc;
-(void)setRecorder:(AVAudioRecorder *)arg1 ;
-(AVAudioRecorder *)recorder;
-(BOOL)stopRecording;
-(void)audioRecorderDidFinishRecording:(id)arg1 successfully:(BOOL)arg2 ;
-(void)audioRecorderBeginInterruption:(id)arg1 ;
-(void)audioRecorderEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)audioRecorderEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2 ;
-(void)audioRecorderEndInterruption:(id)arg1 ;
-(BOOL)deleteRecording;
-(BOOL)pauseRecording;
-(BOOL)resumeRecording;
-(id)initWithParameters:(id)arg1 ;
-(void)setRecordSettings:(AdMarvelAudioRecordingSettings *)arg1 ;
-(AdMarvelAudioRecordingSettings *)recordSettings;
-(BOOL)startRecording;
@end

