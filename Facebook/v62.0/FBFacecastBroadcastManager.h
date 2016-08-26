/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBVideoBroadcastSessionDelegate.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <Facebook/AVCaptureAudioDataOutputSampleBufferDelegate.h>
#import <Facebook/FBVideoCreativeToolsApplier.h>

@protocol OS_dispatch_queue, FBVideoBroadcastSessionDelegateFBFacecastBroadcastManagerDelegate, FBVideoCreativeToolsApplierVideoOutputDelegate;
@class NSMutableDictionary, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureAudioDataOutput, NSObject, FBFacecastBroadcasterConfig, FBVideoBroadcastSession, NSString, FBVideoProcessor, FBVideoProcessorConfig, FBUserSession, NSDictionary;

@interface FBFacecastBroadcastManager : NSObject <FBVideoBroadcastSessionDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, FBVideoCreativeToolsApplier> {

	SCD_Struct_FB257 _recordingStartPTS;
	SCD_Struct_FB257 _recordingLastPTS;
	SCD_Struct_FB257 _mostRecentAudioPTS;
	SCD_Struct_FB257 _mostRecentVideoPTS;
	SCD_Struct_FB257 _baseTimestamp;
	double _recordedAudioDuration;
	unsigned long long _recordedAudioSamples;
	unsigned long long _recordedVideoFrames;
	NSMutableDictionary* _videoIngestionLoggingInfo;
	AVCaptureSession* _captureSession;
	AVCaptureVideoDataOutput* _writeVideoOut;
	AVCaptureAudioDataOutput* _writeAudioOut;
	NSObject*<OS_dispatch_queue> _sampleBufferQueue;
	FBFacecastBroadcasterConfig* _broadcasterConfig;
	FBVideoBroadcastSession* _streamBroadcastSession;
	atomic<bool> _isUploadingPaused;
	atomic<bool> _hasStartedUploading;
	atomic<bool> _ignoreFrameDrops;
	NSString* _broadcastID;
	long long _videoOrientation;
	long long _captureDevicePosition;
	unsigned long long _consecutiveFramesDroppedBecauseOfDiscontinuity;
	FBVideoProcessor* _videoProcessor;
	FBVideoProcessorConfig* _videoProcessorConfig;
	StreamTimestampGapDetector _gapDetector;
	BOOL _streamRemoveGapsInTimestamps;
	FBUserSession* _session;
	BOOL _overlayFilterIsApplied;
	id<FBVideoBroadcastSessionDelegate><FBFacecastBroadcastManagerDelegate> _broadcastDelegate;
	id<FBVideoCreativeToolsApplierVideoOutputDelegate> _cameraOutputDelegate;
	long long _numCurrentViewers;
	unsigned long long _selectedFilterIndex;
	long long _numMaxViewers;

}

@property (assign,nonatomic) long long numMaxViewers;                                                                                       //@synthesize numMaxViewers=_numMaxViewers - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * videoIngestionLoggingInfo; 
@property (assign,nonatomic,__weak) id<FBVideoBroadcastSessionDelegate><FBFacecastBroadcastManagerDelegate> broadcastDelegate;              //@synthesize broadcastDelegate=_broadcastDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoCreativeToolsApplierVideoOutputDelegate> cameraOutputDelegate;                                //@synthesize cameraOutputDelegate=_cameraOutputDelegate - In the implementation block
@property (readonly) FBFacecastBroadcasterConfig * broadcasterConfig;                                                                       //@synthesize broadcasterConfig=_broadcasterConfig - In the implementation block
@property (assign,nonatomic) long long numCurrentViewers;                                                                                   //@synthesize numCurrentViewers=_numCurrentViewers - In the implementation block
@property (assign,nonatomic) unsigned long long selectedFilterIndex;                                                                        //@synthesize selectedFilterIndex=_selectedFilterIndex - In the implementation block
@property (assign,nonatomic) BOOL overlayFilterIsApplied;                                                                                   //@synthesize overlayFilterIsApplied=_overlayFilterIsApplied - In the implementation block
@property (nonatomic,readonly) BOOL networkBecameWeak; 
@property (nonatomic,readonly) BOOL networkRecoveredFromWeak; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_enableFiltersModeWithFilter:(id)arg1 ;
-(void)removeFilterAtIndex:(unsigned long long)arg1 ;
-(FBFacecastBroadcasterConfig *)broadcasterConfig;
-(SCD_Struct_FB257)lastRecordedAudioTimestamp;
-(void)setOverlayFilterIsApplied:(BOOL)arg1 ;
-(id)getRenderQueue;
-(void)insertFilter:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2 ;
-(BOOL)isConnectedToServerAndReadyToUpload;
-(id)initWithSession:(id)arg1 broadcastID:(id)arg2 broadcasterConfig:(id)arg3 messageChannel:(id)arg4 sslFactory:(shared_ptr<facebook::livestreaming::RtmpSSLFactory>*)arg5 ;
-(void)setBroadcastDelegate:(id<FBVideoBroadcastSessionDelegate><FBFacecastBroadcastManagerDelegate>)arg1 ;
-(void)setCaptureSession:(id)arg1 withCaptureDevicePosition:(long long)arg2 videoOrientation:(long long)arg3 videoDataOutput:(id)arg4 audioDataOutput:(id)arg5 ;
-(void)connectCaptureSession;
-(void)updateVideoConfigWithSettings:(id)arg1 ;
-(void)broadcastSessionDidStart:(id)arg1 withSpeedTestStatus:(FBNetworkSpeedTestStatus)arg2 ;
-(void)broadcastSessionDidFinish:(id)arg1 withResult:(id)arg2 ;
-(void)broadcastSessionDidChangeBitrate:(shared_ptr<FBVideoBroadcastSessionStats>*)arg1 ;
-(void)broadcastSessionDidFail:(id)arg1 withError:(id)arg2 ;
-(void)broadcastSessionDidLoseConnection:(id)arg1 withError:(id)arg2 ;
-(void)broadcastSessionSendDidTimeout:(id)arg1 ;
-(void)broadcastSession:(id)arg1 didDropPackets:(shared_ptr<std::__1::vector<FBDroppedFrame, std::__1::allocator<FBDroppedFrame> > >*)arg2 dropReason:(id)arg3 ;
-(void)broadcastSession:(id)arg1 completedSpeedTestWithStatus:(FBNetworkSpeedTestStatus)arg2 ;
-(void)broadcastSession:(id)arg1 didUpdateStreamingInfo:(compressed_pair<NSString *__strong *, std::__1::allocator<NSString *> >)arg2 ;
-(void)initializeSessionOutputsWithVideoDataOutput:(id)arg1 audioDataOutput:(id)arg2 ;
-(BOOL)_isSwitchingBetweenPortraitAndLandscapeFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(void)_didDropFrameWithType:(id)arg1 pts:(SCD_Struct_FB257)arg2 droppedReason:(id)arg3 ;
-(id<FBVideoBroadcastSessionDelegate><FBFacecastBroadcastManagerDelegate>)broadcastDelegate;
-(BOOL)_isPortraitVideoOrientation:(long long)arg1 ;
-(BOOL)_isLandscapeVideoOrientation:(long long)arg1 ;
-(void)sendFilterCommand:(id)arg1 toFilterAtIndex:(unsigned long long)arg2 ;
-(BOOL)isConnectedToServer;
-(void)_addNetworkCountersToLoggingInfo;
-(long long)numMaxViewers;
-(long long)numCurrentViewers;
-(void)setNumMaxViewers:(long long)arg1 ;
-(double)_adaptationFromInitialBitrateInKbps;
-(void)dispatchOnCameraThread:(/*^block*/id)arg1 ;
-(id<FBVideoCreativeToolsApplierVideoOutputDelegate>)cameraOutputDelegate;
-(void)setCameraOutputDelegate:(id<FBVideoCreativeToolsApplierVideoOutputDelegate>)arg1 ;
-(unsigned long long)selectedFilterIndex;
-(void)setSelectedFilterIndex:(unsigned long long)arg1 ;
-(BOOL)overlayFilterIsApplied;
-(void)disconnectCaptureSession;
-(void)setCaptureSession:(id)arg1 withCaptureDevicePosition:(long long)arg2 videoOrientation:(long long)arg3 ;
-(void)onInterruption;
-(void)onInterruptionEnded;
-(void)setNumCurrentViewers:(long long)arg1 ;
-(void)startUploading;
-(void)stopUploading:(BOOL)arg1 ;
-(void)cameraDidChangeToPosition:(long long)arg1 ;
-(double)networkLatencyInSeconds;
-(BOOL)networkBecameWeak;
-(BOOL)networkRecoveredFromWeak;
-(SCD_Struct_FB260*)broadcastStats;
-(void)resetVideoIngestionLoggingInfoDeltas;
-(NSDictionary *)videoIngestionLoggingInfo;
-(id)videoIngestionLoggingInfoForBroadcastStats:(shared_ptr<FBVideoBroadcastSessionStats>*)arg1 ;
-(void)dealloc;
-(void)cameraWillChange;
-(void)setVideoOrientation:(long long)arg1 ;
-(id)sampleBufferQueue;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end
