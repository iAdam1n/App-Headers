/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCameraActionListener.h>
#import <Facebook/FBCameraAnalyticsPayloadProvider.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <Facebook/FBAudioBufferHandler.h>
#import <Facebook/FBMPInput.h>
#import <Facebook/FBCaptureSessionController.h>
#import <Facebook/FBCaptureCameraController.h>
#import <Facebook/FBCapturePerformanceTrackerController.h>

@protocol OS_dispatch_queue, FBOrientationTracking, FBCaptureManagerFilterHandlerProtocol, FBCameraActionListener, FBMPProducerPort;
@class FBCaptureManagerListenerAnnouncer, NSObject, AVCaptureAudioDataOutput, AVCaptureDeviceInput, FBAudioCapturer, FBCaptureSession, FBMPPreview, AVCaptureStillImageOutput, FBMPPhotoCapturer, AVCaptureVideoDataOutput, FBMPVideoRecorder, FBVideoProcessor, AVCaptureDevice, FBCaptureDevice, FBMPBaseProducerPort, FBMPLowLightDetector, NSString, NSDictionary, FBCameraProductionDebugLogger, FBFramePerformanceTracker, FBCameraStartReliabilityLogger, FBCameraActionPerformanceLogger;

@interface FBCaptureManager : NSObject <FBCameraActionListener, FBCameraAnalyticsPayloadProvider, AVCaptureVideoDataOutputSampleBufferDelegate, FBAudioBufferHandler, FBMPInput, FBCaptureSessionController, FBCaptureCameraController, FBCapturePerformanceTrackerController> {

	FBCaptureManagerListenerAnnouncer* _announcer;
	NSObject*<OS_dispatch_queue> _listenerQueue;
	NSObject*<OS_dispatch_queue> _audioBufferQueue;
	AVCaptureAudioDataOutput* _audioDataOutput;
	AVCaptureDeviceInput* _audioDeviceInput;
	FBAudioCapturer* _audioCapturer;
	FBCaptureSession* _captureSession;
	FBMPPreview* _capturePreview;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	unsigned long long _state;
	AVCaptureStillImageOutput* _stillImageOutput;
	FBMPPhotoCapturer* _photoCapturer;
	NSObject*<OS_dispatch_queue> _videoBufferQueue;
	NSObject*<OS_dispatch_queue> _videoDataOutputQueue;
	AVCaptureVideoDataOutput* _videoDataOutput;
	AVCaptureDeviceInput* _videoDeviceInput;
	FBMPVideoRecorder* _videoRecorder;
	id<FBOrientationTracking> _orientationTracker;
	FBVideoProcessor* _videoProcessor;
	id<FBCaptureManagerFilterHandlerProtocol> _filterHandler;
	AVCaptureDevice* _currentDevice;
	FBCaptureDevice* _fbCurrentDevice;
	FBCaptureManagerConfiguration _configuration;
	id<FBCameraActionListener> _cameraActionListener;
	FBMPBaseProducerPort* _videoProducerPort;
	FBMPLowLightDetector* _lowLightDetector;
	NSString* _normalLightPreset;
	long long _designatedCameraDeviceFPS;
	NSString* _analyticsModule;
	NSDictionary* _analyticsAnnotations;
	FBCameraAnalyticsPayload _analyticsPayload;
	mutex _analyticsPayloadLock;
	BOOL _isCaptureSessionFinishedLoading;
	int _waitingForFirstFrame;
	FBCameraProductionDebugLogger* _debugLogger;
	FBFramePerformanceTracker* _framePerformanceTracker;
	FBCameraStartReliabilityLogger* _startReliabilityLogger;
	NSObject*<OS_dispatch_queue> _loggerQueue;
	FBCameraActionPerformanceLogger* _cameraActionPerformanceLogger;
	unsigned long long _videoDataCounter;
	unsigned long long _audioDataCounter;
	id<FBMPProducerPort> _audioProducerPort;

}

@property (nonatomic,readonly) double maxZoomFactor; 
@property (nonatomic,readonly) UIView*<FBMPOutput> capturePreview; 
@property (nonatomic,copy,readonly) NSString * cameraSessionID; 
@property (nonatomic,readonly) id<FBMPProducerPort> audioProducerPort;              //@synthesize audioProducerPort=_audioProducerPort - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addCaptureManagerListener:(id)arg1 ;
-(UIView*<FBMPOutput>)capturePreview;
-(void)removeCaptureManagerListener:(id)arg1 ;
-(BOOL)supportsCaptureSessionPreset:(id)arg1 cameraPosition:(long long)arg2 ;
-(void)performCameraAction:(id)arg1 ;
-(id)framePerformanceResultDisplayer;
-(void)cancelRecordingIfAny;
-(void)captureImageWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(BOOL)doesCurrentDeviceSupportTorchMode:(long long)arg1 ;
-(void)startRecordingWithCompletion:(/*^block*/id)arg1 ;
-(void)stopRecordingWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(BOOL)canZoomToZoomFactor:(double)arg1 ;
-(void)startAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(id<FBMPProducerPort>)audioProducerPort;
-(NSString *)cameraSessionID;
-(id)initWithDirectoryPathForVideoStorage:(id)arg1 orientationTracker:(id)arg2 filterHandler:(id)arg3 configuration:(FBCaptureManagerConfiguration)arg4 listenerQueue:(id)arg5 cameraAnalyticsType:(id)arg6 captureSession:(id)arg7 framePerformanceTracker:(id)arg8 ;
-(void)captureImageWithCompletion:(/*^block*/id)arg1 callbackQueue:(id)arg2 previewSize:(CGSize)arg3 ;
-(double)maxZoomFactor;
-(BOOL)doesCurrentDeviceSupportSessionPreset:(id)arg1 ;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(void)setCaptureDevicePosition:(long long)arg1 cameraActionResult:(id)arg2 ;
-(void)setFlashMode:(long long)arg1 cameraActionResult:(id)arg2 ;
-(void)setFrameRate:(long long)arg1 cameraActionResult:(id)arg2 ;
-(void)setScaledPoint:(CGPoint)arg1 cameraActionResult:(id)arg2 ;
-(void)setSessionPreset:(id)arg1 cameraActionResult:(id)arg2 ;
-(void)setTorchMode:(long long)arg1 cameraActionResult:(id)arg2 ;
-(void)setZoomFactor:(double)arg1 cameraActionResult:(id)arg2 ;
-(void)switchToDeviceWithID:(id)arg1 cameraActionResult:(id)arg2 ;
-(void)setLowLightModeEnabled:(BOOL)arg1 cameraActionResult:(id)arg2 ;
-(void)_lowLightModeDidChange:(long long)arg1 ;
-(void)_announce:(/*^block*/id)arg1 ;
-(void)_ensureCaptureDeviceIsCreated;
-(BOOL)_useSampleBufferPhotoCapturer;
-(void)_completeCaptureImageAction:(id)arg1 bufferImage:(id)arg2 metatdata:(id)arg3 orientation:(long long)arg4 ;
-(void)_startCaptureImageActionUsingStillImageOuput:(id)arg1 cameraActionResult:(id)arg2 ;
-(void)_startNewCameraLoggingSession;
-(BOOL)_setFrameRate:(long long)arg1 ;
-(void)_updateCurrentDeviceForLowLightMode:(long long)arg1 ;
-(BOOL)_ensureState:(unsigned long long)arg1 ;
-(void)_startAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)videoDataOutput;
-(void)_completeVideoCapture:(id)arg1 context:(StopRecordingContext)arg2 ;
-(void)_setCurrentCaptureDevice:(id)arg1 ;
-(void)_updateDefaultVideoOrientationAndMirrorSettings;
-(void)_updateDeviceFrameRate;
-(long long)_trackerTargetFPS;
-(void)_completeFailedCaptureImageAction:(id)arg1 ;
-(void)_captureImageAction:(id)arg1 handleStillDataSampleBuffer:(opaqueCMSampleBufferRef)arg2 orientation:(long long)arg3 error:(id)arg4 ;
-(void)_setUpCaptureConnectionForVideoRecording;
-(void)handleAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleVideoSampleBufferWithFiltersConsidered:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 filteredBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_completeSuccessfulCaptureImageAction:(id)arg1 image:(id)arg2 metatdata:(id)arg3 orientation:(long long)arg4 ;
-(void)_finishVideoCaptureWithLoadedAsset:(id)arg1 context:(StopRecordingContext)arg2 ;
-(void)_handleVideoRecordFailedWithContext:(StopRecordingContext)arg1 ;
-(void)_configureInputsAndOutputs;
-(void)_initializeVideoProcessor;
-(void)_startCameraSession;
-(void)_didFinishStartingCaptureSessionWithCameraActionResult:(id)arg1 ;
-(void)_configureCaptureSession;
-(id)audioDataOutput;
-(void)_updateDefaultVideoOrientation;
-(void)_updateConnectionMirrorSettings;
-(void)_startCaptureSessionWithCameraActionResult:(id)arg1 ;
-(void)_endSessionWithCameraActionResult:(id)arg1 ;
-(void)_captureImageWithAction:(id)arg1 result:(id)arg2 ;
-(void)_startRecordingWithCameraActionResult:(id)arg1 ;
-(void)_stopRecordingWithContext:(StopRecordingContext)arg1 ;
-(FBCameraAnalyticsPayload)cameraAnalyticsPayload;
-(id)producerPorts;
-(id)currentDevice;
-(void)dealloc;
-(BOOL)isRunning;
-(void)startSession;
-(void)stopSession;
-(id)stillImageOutput;
-(id)audioDeviceInput;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end
