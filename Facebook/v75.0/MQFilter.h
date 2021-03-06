/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MQFilter <NSObject>
@property (assign,nonatomic,__weak) id<MQFilterDelegate> delegate; 
@property (assign,nonatomic,__weak) id<MQFilterLogger> logger; 
@property (assign,nonatomic) CVOpenGLESTextureCacheRef textureCache; 
@property (assign,nonatomic) BOOL shouldShowDebugOverlay; 
@property (nonatomic,readonly) BOOL isFaceTrackerConfigured; 
@required
-(BOOL)shouldShowDebugOverlay;
-(void)setShouldShowDebugOverlay:(BOOL)arg1;
-(BOOL)isFaceTrackerConfigured;
-(CVOpenGLESTextureCacheRef)textureCache;
-(void)setTextureCache:(CVOpenGLESTextureCacheRef)arg1;
-(void)renderWithInputBuffer:(CVBufferRef)arg1 outputSize:(CGSize)arg2;
-(void)setEffectAssetsPath:(id)arg1;
-(void)setEffectConstructor:(/*^block*/id)arg1;
-(void)setStillImageCapture:(BOOL)arg1;
-(BOOL)currentEffectNeedsFaceTracker;
-(void)suppressRandomFaceTrackingSampling;
-(void)setDelegate:(id)arg1;
-(id<MQFilterDelegate>)delegate;
-(id<MQFilterLogger>)logger;
-(void)setLogger:(id)arg1;

@end

