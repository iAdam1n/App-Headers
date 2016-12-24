/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAudioRecording.h>
#import <Messenger/MNAudioQueueRecorderDelegate.h>

@protocol MNAudioQueueRecorder, MNAudioRecordingDelegate;
@class NSURL, NSString;

@interface MNAudioQueueRecorder : NSObject <MNAudioRecording, MNAudioQueueRecorderDelegate> {

	id<MNAudioQueueRecorder> _recorder;
	BOOL _meteringEnabled;
	BOOL _recording;
	double _currentTime;
	NSURL* _url;
	id<MNAudioRecordingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isMeteringEnabled,nonatomic) BOOL meteringEnabled;              //@synthesize meteringEnabled=_meteringEnabled - In the implementation block
@property (getter=isRecording,nonatomic,readonly) BOOL recording;                        //@synthesize recording=_recording - In the implementation block
@property (nonatomic,readonly) double currentTime;                                       //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) id<MNAudioRecordingDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,copy,readonly) NSString * fileMimeType; 
+(id)audioQueueRecorderWithURL:(id)arg1 error:(id*)arg2 ;
+(void)setImplementation:(Class)arg1 ;
-(NSString *)fileMimeType;
-(void)audioQueueRecorderDidFail:(id)arg1 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 usingAacExtension:(BOOL)arg3 ;
-(void)setDelegate:(id<MNAudioRecordingDelegate>)arg1 ;
-(void)dealloc;
-(id<MNAudioRecordingDelegate>)delegate;
-(NSURL *)url;
-(void)stop;
-(double)currentTime;
-(NSString *)fileExtension;
-(BOOL)record;
-(BOOL)isRecording;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(BOOL)isMeteringEnabled;
-(BOOL)prepareToRecord;
@end
