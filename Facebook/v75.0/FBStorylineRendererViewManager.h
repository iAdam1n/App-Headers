/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableOrderedSet, EAGLContext, FBStorylineRendererTextureLoader, FBStorylineRendererProgramManager, RCTSGView;

@interface FBStorylineRendererViewManager : NSObject {

	NSMutableDictionary* _viewCache;
	NSMutableOrderedSet* _lastViewGraphIds;
	EAGLContext* _context;
	NSMutableDictionary* _videoTimingInfo;
	BOOL _enabledVideoInVideo;
	double _fps;
	FBStorylineRendererTextureLoader* _textureLoader;
	FBStorylineRendererProgramManager* _programManager;
	BOOL _seeking;
	RCTSGView* _rootView;

}

@property (nonatomic,retain) RCTSGView * rootView;              //@synthesize rootView=_rootView - In the implementation block
@property (assign,nonatomic) BOOL seeking;                      //@synthesize seeking=_seeking - In the implementation block
-(void)updateFrameInfo:(id)arg1 frameIndex:(unsigned long long)arg2 ;
-(void)setupWithContext:(id)arg1 textureloader:(id)arg2 programManager:(id)arg3 assetsMetaData:(id)arg4 moodAssets:(id)arg5 enabledVideoInVideo:(BOOL)arg6 fps:(unsigned long long)arg7 ;
-(id)_parseFrame:(id)arg1 frameIndex:(unsigned long long)arg2 ;
-(void)_parseFrameElement:(id)arg1 parentView:(id)arg2 thisGraphNodeId:(id)arg3 frameIndex:(unsigned long long)arg4 ;
-(void)_tearDownUnsedView:(id)arg1 ;
-(id)_parseProps:(id)arg1 frameIndex:(unsigned long long)arg2 ;
-(id)_updateShader:(id)arg1 ;
-(id)_updateTexture:(id)arg1 frameIndex:(unsigned long long)arg2 ;
-(RCTSGView *)rootView;
-(void)setRootView:(RCTSGView *)arg1 ;
-(void)setSeeking:(BOOL)arg1 ;
-(BOOL)seeking;
-(void)tearDown;
@end
