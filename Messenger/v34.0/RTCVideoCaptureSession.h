/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@protocol OS_dispatch_queue, RTCVideoCaptureSessionDelegate;
@class NSObject, AVCaptureVideoPreviewLayer, AVCaptureSession, AVCaptureVideoDataOutput, NSMutableArray, NSString;

@interface RTCVideoCaptureSession : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {

	NSObject*<OS_dispatch_queue> _captureSessionQueue;
	long long _videoOrientation;
	AVCaptureVideoPreviewLayer* _videoPreviewLayer;
	AVCaptureSession* _captureSession;
	AVCaptureVideoDataOutput* _captureOutput;
	BOOL _running;
	NSMutableArray* _activeListeners;
	NSMutableArray* _pendingDeviceChanges;
	id<RTCVideoCaptureSessionDelegate> _delegate;
	double _basePortraitAspectRatio;

}

@property (assign,nonatomic,__weak) id<RTCVideoCaptureSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) double basePortraitAspectRatio;                                          //@synthesize basePortraitAspectRatio=_basePortraitAspectRatio - In the implementation block
@property (readonly) BOOL isRunning; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activeSession;
+(void)clearActiveSession:(id)arg1 ;
+(void)setActiveSession:(id)arg1 ;
-(void)setCaptureVideoOrientation:(long long)arg1 ;
-(void)_updatePreviewLayer:(id)arg1 ;
-(void)_changeInputDevice;
-(void)_updateToVideoOrientation:(long long)arg1 ;
-(void)_addToCapture:(id)arg1 ;
-(id)_itemForListener:(id)arg1 ;
-(void)_removeFromCapture:(id)arg1 ;
-(void)_stopCaptureAndClose;
-(void)_createSessionIfNeeded;
-(void)_updateSessionWithListeners:(id)arg1 ;
-(void)_updateVideoCaptureToWidth:(long long)arg1 height:(long long)arg2 maxFPS:(long long)arg3 ;
-(void)_setBasePortraitAspectRatio:(double)arg1 ;
-(void)_setInput:(id)arg1 ;
-(void)setInputByDeviceId:(id)arg1 ;
-(void)startCaptureForListener:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 maxFPS:(unsigned long long)arg4 ;
-(void)stopCaptureForListener:(id)arg1 ;
-(void)closeWithCompletion:(/*^block*/id)arg1 ;
-(double)basePortraitAspectRatio;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)setVideoPreviewLayer:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<RTCVideoCaptureSessionDelegate>)arg1 ;
-(id)init;
-(id<RTCVideoCaptureSessionDelegate>)delegate;
-(BOOL)isRunning;
-(void)_setRunning:(BOOL)arg1 ;
@end

