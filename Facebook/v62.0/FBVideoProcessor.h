/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMediaProcessor.h>

@class FBVideoProcessorConfig, FBFilterContext, FBFilterGroup, NSMutableArray, FBGLContext, FBFilter, FBFilterAssetManager, NSString;

@interface FBVideoProcessor : NSObject <FBMediaProcessor> {

	FBVideoProcessorConfig* _videoProcessorConfig;
	FBFilterContext* _filterContext;
	FBFilterGroup* _filterGroup;
	NSMutableArray* _filterCoordinators;
	FBGLContext* _openGLContext;
	FBFilterGroup* _copyFilterGroup;
	CVPixelBufferPoolRef _pixelBufferPool;
	CGSize _pixelBufferSize;
	CGSize _configureCacheInputSize;
	CGSize _configureCacheOutputSize;
	FBFilter* _configureCacheFilter;
	BOOL _needsConfigure;
	mutex _lock;
	BOOL _canUseOpenGL;
	FBFilterAssetManager* _assetManager;

}

@property (nonatomic,readonly) FBGLContext * openGLContext;                    //@synthesize openGLContext=_openGLContext - In the implementation block
@property (nonatomic,retain) FBFilterAssetManager * assetManager;              //@synthesize assetManager=_assetManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVideoProcessorConfig:(id)arg1 openGLContext:(id)arg2 ;
-(void)removeFilterAtIndex:(unsigned long long)arg1 ;
-(void)insertFilterWithConfig:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(opaqueCMSampleBufferRef)createProcessedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setAssetManager:(FBFilterAssetManager *)arg1 ;
-(void)sendFilterCommand:(id)arg1 toFilterAtIndex:(unsigned long long)arg2 ;
-(void)setContentTransform:(GLKMatrix4)arg1 ;
-(void)display:(opaqueCMSampleBufferRef)arg1 toSurface:(id)arg2 ;
-(void)displaySurface:(id)arg1 toSurface:(id)arg2 ;
-(void)render:(CVBufferRef)arg1 toSurfaces:(id)arg2 ;
-(void)pushReusableSurface:(id)arg1 ;
-(id)popReusableSurfaceWithSize:(CGSize)arg1 ;
-(void)_applyVideoProcessorConfig:(id)arg1 ;
-(void)_handleBackgroundNotification:(id)arg1 ;
-(void)_handleForegroundNotification:(id)arg1 ;
-(void)_insertFilterConfig:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(opaqueCMSampleBufferRef)createProcessedSampleBuffer:(opaqueCMSampleBufferRef)arg1 outputSize:(CGSize)arg2 ;
-(CVPixelBufferPoolRef)pixelBufferPoolForPixelBufferOfSize:(CGSize)arg1 ;
-(void)_render:(CVBufferRef)arg1 toSurface:(id)arg2 ;
-(void)_display:(opaqueCMSampleBufferRef)arg1 toSurface:(id)arg2 ;
-(void)_displaySurface:(id)arg1 toSurface:(id)arg2 ;
-(void)_renderSurface:(id)arg1 toSurface:(id)arg2 usingFilter:(id)arg3 ;
-(GLKMatrix4)_computeTextureTransformForInputSize:(CGSize)arg1 cropRectangle:(CGRect)arg2 ;
-(void)_configureFilter:(id)arg1 forInputSize:(CGSize)arg2 outputSize:(CGSize)arg3 ;
-(void)_render:(CVBufferRef)arg1 toSurfaces:(id)arg2 ;
-(void)render:(CVBufferRef)arg1 toSurface:(id)arg2 ;
-(void)dealloc;
-(FBFilterAssetManager *)assetManager;
-(void)setScalingMode:(unsigned long long)arg1 ;
-(void)setCropRectangle:(CGRect)arg1 ;
-(unsigned long long)filtersCount;
-(FBGLContext *)openGLContext;
@end
