/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/AVAudioRecorderDelegate.h>

@protocol TGAudioRecorderDelegate;
@class TGTimer, TGOpusAudioRecorder, AVAudioPlayer, SMetaDisposable, NSString;

@interface TGAudioRecorder : NSObject <AVAudioRecorderDelegate> {

	TGTimer* _timer;
	BOOL _stopped;
	TGOpusAudioRecorder* _modernRecorder;
	AVAudioPlayer* _tonePlayer;
	id _activityHolder;
	SMetaDisposable* _activityDisposable;
	id<TGAudioRecorderDelegate> _delegate;
	/*^block*/id _requestActivityHolder;
	/*^block*/id _pauseRecording;
	/*^block*/id _micLevel;

}

@property (assign,nonatomic,__weak) id<TGAudioRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id requestActivityHolder;                                   //@synthesize requestActivityHolder=_requestActivityHolder - In the implementation block
@property (nonatomic,copy) id pauseRecording;                                          //@synthesize pauseRecording=_pauseRecording - In the implementation block
@property (nonatomic,copy) id micLevel;                                                //@synthesize micLevel=_micLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioRecorderQueue;
-(id)initWithFileEncryption:(BOOL)arg1 ;
-(void)setPauseRecording:(id)arg1 ;
-(void)setMicLevel:(id)arg1 ;
-(void)_prepareRecord:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_commitRecord;
-(void)startWithSpeaker:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)requestActivityHolder;
-(void)setRequestActivityHolder:(id)arg1 ;
-(id)micLevel;
-(void)cancel;
-(void)setDelegate:(id<TGAudioRecorderDelegate>)arg1 ;
-(void)dealloc;
-(id<TGAudioRecorderDelegate>)delegate;
-(void)cleanup;
-(id)pauseRecording;
-(void)finish:(/*^block*/id)arg1 ;
-(double)currentDuration;
@end
