//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureVideoDataOutput, FBKVOController, NSString, SCManagedVideoStreamerListenerAnnouncer, SCQueuePerformer;

@interface SCManagedVideoStreamer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    SCManagedVideoStreamerListenerAnnouncer *_announcer;
    AVCaptureVideoDataOutput *_videoDataOutput;
    FBKVOController *_observeController;
    _Bool _stabilizationLogged;
    _Bool _performingConfigurations;
    unsigned long long _devicePosition;
    _Bool _videoStablizationEnabled;
    _Bool _isStreaming;
    SCQueuePerformer *_performer;
}

@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) _Bool isStreaming; // @synthesize isStreaming=_isStreaming;
- (void).cxx_destruct;
- (void)_enableVideoStablizationIfSupported;
- (_Bool)_canEnableVideoStablizationForFastiOS9DevicesWhenStartup;
- (void)_enableVideoMirrorForDevicePosition:(unsigned long long)arg1;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)commitConfiguration;
- (void)setDevicePosition:(unsigned long long)arg1;
- (void)beginConfiguration;
- (void)stopStreaming;
- (void)removeAsOutput:(id)arg1;
- (void)setAsOutput:(id)arg1 devicePosition:(unsigned long long)arg2;
- (void)enableVideoStablizationIfSupported;
- (void)startStreaming;
- (id)initWithSession:(id)arg1 devicePosition:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
