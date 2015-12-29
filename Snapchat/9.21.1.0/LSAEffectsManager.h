//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface LSAEffectsManager : NSObject
{
    struct LSCoreManager *_coreManager;
    struct LSAAudioDelegate *_audioDelegate;
    struct LSRGB2NV21Convertor *_rgb2NV21Convertor;
    struct LSFrameBuffer *_frameBuffer;
    struct CGSize _textureSize;
    NSObject<OS_dispatch_queue> *_videoProcessingQueue;
    long long _videoOrientation;
    _Bool _videoMirrored;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setShouldAnimateNextInit;
- (void)setInitAnimationEnabled:(_Bool)arg1;
- (void)clearUnusedFiltersAndWait;
- (void)clearMemoryAndWait;
- (void)clearMemory;
- (void)removeAllLenses;
- (void)pushFilter:(id)arg1 resourcesPath:(id)arg2 paramNames:(id)arg3 paramValues:(id)arg4;
- (void)updateFilter:(id)arg1 paramNames:(id)arg2 paramValues:(id)arg3;
- (void)tryToExecuteUnsafeBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLensWithConfigFilePath:(id)arg1 contentPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCurrentMediaSourceIsCamera:(_Bool)arg1;
- (void)setRunTrackingAsync:(_Bool)arg1;
- (void)checkPointInsideFaceRegion:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPreferableFacePosition:(struct CGPoint)arg1;
- (void)restartTracking;
- (long long)processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setOriginalTextureTransform:(struct LSTransform *)arg1 modifiedTextureTransform:(struct LSTransform *)arg2 modifiedImageSize:(struct CGSize *)arg3 forImage:(id)arg4;
- (id)processImage:(id)arg1 error:(id *)arg2;
- (id)processTexture:(int)arg1 textureSize:(struct CGSize)arg2 data:(void *)arg3 error:(id *)arg4;
- (void)prepareFrameBufferForTextureSize:(struct CGSize)arg1;
- (id)processPixelBuffer:(struct __CVBuffer *)arg1 modifySource:(_Bool)arg2 error:(id *)arg3;
- (id)processYUVPixelBuffer:(struct __CVBuffer *)arg1 modifySource:(_Bool)arg2 error:(id *)arg3;
- (id)processBGRAPixelBuffer:(struct __CVBuffer *)arg1 modifySource:(_Bool)arg2 error:(id *)arg3;
- (void)prepareConvertorsForInputSize:(struct CGSize)arg1;
- (void)broadcastIfTriggerWasActivated;
- (long long)activatedTrigger;
- (void)updateTextureOrientation;
- (void)setVideoMirrored:(_Bool)arg1;
- (void)setVideoOrientation:(long long)arg1;
- (void)setFillColor:(id)arg1;
- (void)setOutputSize:(struct CGSize)arg1;
- (void)setCropRect:(struct CGRect)arg1;
- (id)getSharedContext;
- (void)dealloc;
- (id)init;

@end
