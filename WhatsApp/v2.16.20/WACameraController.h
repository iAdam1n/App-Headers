/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>
#import <WhatsApp/AVCaptureAudioDataOutputSampleBufferDelegate.h>
#import <WhatsApp/WACameraPreviewViewDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group, WACameraControllerDelegate;
@class WACameraPreviewView, NSObject, NSMutableDictionary, AVCaptureSession, AVCaptureDeviceInput, AVCaptureOutput, AVCaptureVideoDataOutput, AVCaptureAudioDataOutput, AVCaptureMetadataOutput, AVAssetWriterInput, AVAssetWriter, NSSet, UIView, NSArray, WACameraFilter, NSString;

@interface WACameraController : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, WACameraPreviewViewDelegate> {

	WACameraPreviewView* _previewView;
	NSObject*<OS_dispatch_queue> _captureQueue;
	NSObject*<OS_dispatch_queue> _audioCaptureQueue;
	NSObject*<OS_dispatch_queue> _videoCaptureQueue;
	NSObject*<OS_dispatch_group> _cameraConfigGroup;
	NSMutableDictionary* _faceObjects;
	BOOL _isChangingCamerasInteractively;
	double _lastAutoFocusOnFaceTime;
	BOOL _startSessionOnDidEnterForeground;
	id _audioActivity;
	unsigned long long _recordingState;
	double _startTimeInLowLightEnvironment;
	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _videoDeviceInput;
	AVCaptureDeviceInput* _audioDeviceInput;
	AVCaptureOutput* _photoOutput;
	AVCaptureVideoDataOutput* _videoDataOutput;
	AVCaptureAudioDataOutput* _audioDataOutput;
	AVCaptureMetadataOutput* _metadataOutput;
	AVAssetWriterInput* _audioWriterInput;
	AVAssetWriterInput* _videoWriterInput;
	opaqueCMFormatDescriptionRef _audioFormatDescription;
	opaqueCMFormatDescriptionRef _videoFormatDescription;
	BOOL _lockExposureAfterAutoExposure;
	BOOL _needsReexposure;
	double _lastExposureLockTime;
	CGPoint _exposurePointOfInterest;
	unsigned long long _exposureLockID;
	AVAssetWriter* _assetWriter;
	BOOL _isAssetWriterSessionStarted;
	BOOL _needsFinishAssetWriterSession;
	int _acceptSampleBuffersLock;
	BOOL _isAssetWriterAcceptingSampleBuffers;
	int _videoSampleTimeLock;
	SCD_Struct_WA8 _timeOfFirstAppendedVideoSampleBuffer;
	SCD_Struct_WA8 _timeOfLastAppendedVideoSampleBuffer;
	SCD_Struct_WA8 _maximumRecordingDuration;
	SCD_Struct_WA87 _sampleTimingInfo;
	BOOL _needsStartAssetWriterWhenAudioFormatDescriptionIsReady;
	long long _videoOrientationForAssetWriter;
	int _startSessionCounter;
	BOOL _useBackCamera;
	BOOL _exposurePointOfInterestSupported;
	BOOL _focusPointOfInterestSupported;
	BOOL _pretendingToSupportFlash;
	BOOL _flashActive;
	BOOL _running;
	id<WACameraControllerDelegate> _delegate;
	long long _cameraMode;
	NSSet* _supportedFlashModes;
	long long _flashMode;
	double _maximumZoomFactor;
	double _currentZoomFactor;

}

@property (assign,nonatomic,__weak) id<WACameraControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * previewView;                                                         //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,readonly) CGSize previewImageSize; 
@property (nonatomic,readonly) BOOL useBackCamera;                                                           //@synthesize useBackCamera=_useBackCamera - In the implementation block
@property (getter=isReadyForPhotoCapture,nonatomic,readonly) BOOL readyForPhotoCapture; 
@property (getter=isReadyForVideoRecording,nonatomic,readonly) BOOL readyForVideoRecording; 
@property (nonatomic,readonly) long long cameraMode;                                                         //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,readonly) BOOL exposurePointOfInterestSupported;                                        //@synthesize exposurePointOfInterestSupported=_exposurePointOfInterestSupported - In the implementation block
@property (nonatomic,readonly) BOOL focusPointOfInterestSupported;                                           //@synthesize focusPointOfInterestSupported=_focusPointOfInterestSupported - In the implementation block
@property (nonatomic,readonly) NSSet * supportedFlashModes;                                                  //@synthesize supportedFlashModes=_supportedFlashModes - In the implementation block
@property (getter=isPretendingToSupportFlash,nonatomic,readonly) BOOL pretendingToSupportFlash;              //@synthesize pretendingToSupportFlash=_pretendingToSupportFlash - In the implementation block
@property (nonatomic,readonly) long long flashMode;                                                          //@synthesize flashMode=_flashMode - In the implementation block
@property (getter=isFlashActive,nonatomic,readonly) BOOL flashActive;                                        //@synthesize flashActive=_flashActive - In the implementation block
@property (nonatomic,readonly) double maximumZoomFactor;                                                     //@synthesize maximumZoomFactor=_maximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double currentZoomFactor;                                                     //@synthesize currentZoomFactor=_currentZoomFactor - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running;                                                //@synthesize running=_running - In the implementation block
@property (nonatomic,copy,readonly) NSArray * faceObjects; 
@property (nonatomic,retain) WACameraFilter * filter; 
@property (readonly) SCD_Struct_WA8 durationOfCurrentVideoRecording; 
@property (getter=isRecordingVideo,nonatomic,readonly) BOOL recordingVideo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)recoverUnsavedMediaIfNeeded;
+(void)requestCameraPermissionWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)showCameraAccessReminderScreenForSource:(long long)arg1 ;
+(BOOL)hasActiveInstances;
+(id)cameraMediaDirectory;
+(id)videoCaptureDeviceWithPreferredPosition:(long long)arg1 ;
+(id)temporaryMediaPathWithExtension:(id)arg1 ;
+(int)numberOfRightAnglesForVideoOrientation:(long long)arg1 ;
+(id)videoCaptureDeviceWithPreferredPositioniOS10:(long long)arg1 ;
+(id)videoCaptureDeviceWithPreferredPositioniOS9:(long long)arg1 ;
+(long long)videoOrientationForDeviceOrientation:(long long)arg1 ;
+(long long)imageOrientationForSourceVideoOrientation:(long long)arg1 targetVideoOrientation:(long long)arg2 backFacingCamera:(BOOL)arg3 ;
-(void)setPointOfInterest:(CGPoint)arg1 ;
-(void)mediaServicesWereLost:(id)arg1 ;
-(BOOL)useBackCamera;
-(BOOL)isRecordingVideo;
-(void)prepareToTearDownCameraWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isReadyForPhotoCapture;
-(BOOL)isPretendingToSupportFlash;
-(void)performStillImageCaptureAnimation;
-(void)setFlashMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUseBackCamera:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(double)currentZoomFactor;
-(void)setZoomFactor:(double)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)startVideoRecordingWithVideoOrientation:(long long)arg1 ;
-(void)stopVideoRecording;
-(void)cancelVideoRecording;
-(SCD_Struct_WA8)durationOfCurrentVideoRecording;
-(BOOL)exposurePointOfInterestSupported;
-(BOOL)focusPointOfInterestSupported;
-(NSArray *)faceObjects;
-(BOOL)isReadyForVideoRecording;
-(void)cameraPreviewViewDidChangeImageSize:(id)arg1 ;
-(void)performAnimationWithDuration:(double)arg1 key:(id)arg2 callback:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithCameraMode:(long long)arg1 useBackCamera:(BOOL)arg2 ;
-(void)handleCaptureSessionRuntimeError:(id)arg1 ;
-(void)setUseBackCamera:(BOOL)arg1 preserveRelativeZoomFactor:(BOOL)arg2 forCameraMode:(long long)arg3 fromQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(double)maximumZoomFactorForCaptureDeviceInput:(id)arg1 ;
-(void)stopObservingCaptureDevice:(id)arg1 ;
-(void)setUpAudioInputIfNeeded;
-(void)tryToUnstickCamera;
-(void)internalSetUseBackCamera:(BOOL)arg1 preserveRelativeZoomFactor:(BOOL)arg2 forCameraMode:(long long)arg3 ;
-(id)supportedFlashModesForCurrentDevice;
-(void)internalSetFlashMode:(long long)arg1 ;
-(void)setUpMicrophoneForCameraPosition:(BOOL)arg1 ;
-(void)reallySetUpMicrophoneForCameraPosition:(BOOL)arg1 ;
-(void)captureDeviceSubjectAreaDidChange:(id)arg1 ;
-(void)startObservingCaptureDevice:(id)arg1 ;
-(void)setUpMetadataOutputForCameraMode:(long long)arg1 ;
-(void)internalSetZoomFactor:(double)arg1 ofCaptureDeviceInput:(id)arg2 ;
-(void)resetPointOfInterest;
-(void)exposeAndFocusWithMode:(long long)arg1 atDevicePoint:(CGPoint)arg2 monitorSubjectAreaChange:(BOOL)arg3 ;
-(void)unlockExposure;
-(void)exposeAtPoint:(CGPoint)arg1 ;
-(void)prepareCaptureDeviceForVideoRecording:(id)arg1 ;
-(void)startAssetWriterSessionWithVideoOrientation:(long long)arg1 ;
-(void)didFailToPrepareRecording;
-(void)cleanUpAfterRecording;
-(void)resetCaptureDeviceAfterVideoRecording:(id)arg1 ;
-(void)finishAssetWriterSession;
-(id)qrCodeObjectWithMetadataObject:(id)arg1 ;
-(id)faceObjectWithMetadataObject:(id)arg1 fromConnection:(id)arg2 ;
-(void)updatePointOfInterestWithFaceMetadata;
-(BOOL)isHoldingExposureLock;
-(void)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 toWriterInput:(id)arg2 ;
-(void)lockExposure;
-(void)performPhotoCaptureBlock:(/*^block*/id)arg1 ;
-(void)getZoomFactorWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)redrawPreviewAndSnapshot;
-(id)init;
-(void)setDelegate:(id<WACameraControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<WACameraControllerDelegate>)delegate;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)setFilter:(WACameraFilter *)arg1 ;
-(BOOL)isRunning;
-(void)stopRunning;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)previewImageSize;
-(long long)cameraMode;
-(WACameraFilter *)filter;
-(void)startRunning;
-(UIView *)previewView;
-(void)mediaServicesWereReset:(id)arg1 ;
-(long long)flashMode;
-(NSSet *)supportedFlashModes;
-(double)maximumZoomFactor;
-(BOOL)isFlashActive;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(void)handleAudioSessionRouteChangeNotification:(id)arg1 ;
@end
