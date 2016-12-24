/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SolitaireFree/SolitaireFree-Structs.h>
@class CMMotionManager, NSObject;

@interface GADGLSphericalShader : NSObject {

	unsigned _glProgram;
	int _uniformColorConversionMatrix;
	int _uniformFOVx;
	int _uniformFOVy;
	int _uniformVMat;
	CVOpenGLESTextureCacheRef _videoTextureCache;
	CVBufferRef _lumaTexture;
	CVBufferRef _chromaTexture;
	CMMotionManager* _motionManager;
	GLKMatrix4 _externalPitchRotation;
	GLKMatrix4 _externalRollRotation;
	double _externalRollMultiplier;
	double _externalPitchMultiplier;
	long long _lastApplicationOrientation;
	GLKMatrix4 _orientationOffsetRotationY;
	BOOL _firstRenderingOrientationHandled;
	NSObject*<OS_dispatch_queue> _lockQueue;

}

@property (assign) long long lastApplicationOrientation; 
-(BOOL)setUpOpenGL;
-(void)stopMotionTracking;
-(void)cleanupTextures;
-(void)destroyOpenGLProgram;
-(void)updateApplicationOrientation;
-(CVBufferRef)createTextureWithPixelBuffer:(CVBufferRef)arg1 index:(int)arg2 format:(int)arg3 width:(int)arg4 height:(int)arg5 ;
-(_GLKMatrix4)deviceRotationMatrix;
-(long long)lastApplicationOrientation;
-(void)setLastApplicationOrientation:(long long)arg1 ;
-(void)startMotionTracking;
-(void)handleUserTouchMovedByVector:(CGVector)arg1 ;
-(void)displayPixelBuffer:(CVBufferRef)arg1 inViewPortRect:(CGRect)arg2 ;
-(id)init;
-(void)dealloc;
@end
