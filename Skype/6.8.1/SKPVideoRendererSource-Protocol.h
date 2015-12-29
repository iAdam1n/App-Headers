//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SKPVideoRendererSource <NSObject>
@property(readonly, nonatomic, getter=isLocal) _Bool local;
- (void)updateFeedbackWithSourceSize:(struct CGSize)arg1 regionOfInterest:(struct CGRect)arg2 renderedSize:(struct CGSize)arg3 screenSize:(struct CGSize)arg4 maxFps:(unsigned long long)arg5;
- (void)onNewFrameReady;
- (_Bool)onFrameArrived:(const struct IVideoFrame *)arg1 presentationTime:(unsigned int)arg2;
- (void)onBindingFailed;
- (void)onBindingReleased;
- (void)onBindingCreated;
@end
