/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNTwitterVideoSegmentWriterDelegate, OS_dispatch_queue;
#import <Twitter/Twitter-Structs.h>
@class AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSURL, NSObject, AVAssetWriter;

@interface TFNTwitterVideoSegmentWriter : NSObject {

	AVAssetWriterInput* _videoInput;
	AVAssetWriterInput* _audioInput;
	AVAssetWriterInputPixelBufferAdaptor* _pixelBufferAdapter;
	unsigned char _rotation;
	BOOL _useAudio;
	id<TFNTwitterVideoSegmentWriterDelegate> _delegate;
	NSURL* _segmentURL;
	NSObject*<OS_dispatch_queue> _queue;
	CFArrayRef _bufferedAudioSamples;
	long long _orientation;
	long long _status;
	AVAssetWriter* _writer;
	SCD_Struct_T111 _videoFrameDuration;
	SCD_Struct_T111 _bufferedAudioStartTime;
	SCD_Struct_T111 _cutoffTime;
	SCD_Struct_T111 _endTime;
	SCD_Struct_T111 _maxRecordingInterval;
	SCD_Struct_T111 _minRecordingInterval;
	SCD_Struct_T111 _startTime;

}

@property (assign,nonatomic,__weak) id<TFNTwitterVideoSegmentWriterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * segmentURL;                                                  //@synthesize segmentURL=_segmentURL - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) SCD_Struct_T111 videoFrameDuration;                                    //@synthesize videoFrameDuration=_videoFrameDuration - In the implementation block
@property (assign,nonatomic) CFArrayRef bufferedAudioSamples;                                       //@synthesize bufferedAudioSamples=_bufferedAudioSamples - In the implementation block
@property (assign,nonatomic) SCD_Struct_T111 bufferedAudioStartTime;                                //@synthesize bufferedAudioStartTime=_bufferedAudioStartTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_T111 cutoffTime;                                            //@synthesize cutoffTime=_cutoffTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_T111 endTime;                                               //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_T111 maxRecordingInterval;                                  //@synthesize maxRecordingInterval=_maxRecordingInterval - In the implementation block
@property (assign,nonatomic) SCD_Struct_T111 minRecordingInterval;                                  //@synthesize minRecordingInterval=_minRecordingInterval - In the implementation block
@property (assign,nonatomic) long long orientation;                                                 //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) unsigned char rotation;                                                //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) SCD_Struct_T111 startTime;                                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) long long status;                                                      //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL useAudio;                                                         //@synthesize useAudio=_useAudio - In the implementation block
@property (nonatomic,retain) AVAssetWriter * writer;                                                //@synthesize writer=_writer - In the implementation block
-(void)didCaptureAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)didCaptureVideoPixelBuffer:(CVBufferRef)arg1 presentationTime:(SCD_Struct_T111)arg2 ;
-(void)setMinRecordingInterval:(SCD_Struct_T111)arg1 ;
-(void)setMaxRecordingInterval:(SCD_Struct_T111)arg1 ;
-(void)setUseAudio:(BOOL)arg1 ;
-(NSURL *)segmentURL;
-(BOOL)_configureVideoInput;
-(BOOL)useAudio;
-(BOOL)_configureAudioInput;
-(void)_didFinishRecording;
-(void)_finishRecording;
-(void)_checkReadyToRecordAtPresentationTime:(SCD_Struct_T111)arg1 ;
-(void)_appendPixelBuffer:(CVBufferRef)arg1 presentationTime:(SCD_Struct_T111)arg2 ;
-(SCD_Struct_T111)videoFrameDuration;
-(void)_updateRecordingProgress;
-(SCD_Struct_T111)cutoffTime;
-(void)_cropAndRotatePlane:(unsigned long long)arg1 srcPixelBuffer:(CVBufferRef)arg2 dstPixelBuffer:(CVBufferRef)arg3 ;
-(CFArrayRef)bufferedAudioSamples;
-(void)setBufferedAudioStartTime:(SCD_Struct_T111)arg1 ;
-(void)setBufferedAudioSamples:(CFArrayRef)arg1 ;
-(void)_appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_startRecordingAtPresentationTime:(SCD_Struct_T111)arg1 ;
-(void)_destroy;
-(id)initWithMovieDirectoryURL:(id)arg1 ;
-(void)startRecordingWithVideoOrientation:(long long)arg1 devicePosition:(long long)arg2 useAudio:(BOOL)arg3 minRecordingInterval:(SCD_Struct_T111)arg4 maxRecordingInterval:(SCD_Struct_T111)arg5 ;
-(void)setVideoFrameDuration:(SCD_Struct_T111)arg1 ;
-(SCD_Struct_T111)bufferedAudioStartTime;
-(void)setCutoffTime:(SCD_Struct_T111)arg1 ;
-(SCD_Struct_T111)maxRecordingInterval;
-(SCD_Struct_T111)minRecordingInterval;
-(void)_stopRecording;
-(void)setEndTime:(SCD_Struct_T111)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TFNTwitterVideoSegmentWriterDelegate>)arg1 ;
-(id<TFNTwitterVideoSegmentWriterDelegate>)delegate;
-(void)setStartTime:(SCD_Struct_T111)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)setRotation:(unsigned char)arg1 ;
-(unsigned char)rotation;
-(void)stopRecording;
-(SCD_Struct_T111)startTime;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(AVAssetWriter *)writer;
-(void)setWriter:(AVAssetWriter *)arg1 ;
-(SCD_Struct_T111)endTime;
@end

