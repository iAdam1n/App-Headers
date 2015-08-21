/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGVideoWriterDelegate.h>

@protocol IGVideoRendererDelegate;
@class IGVideoComposition, IGMediaMetadata, IGVideoReader, IGVideoWriter, IGRenderer, IGSurface, IGStabilizationFilter, NSString;

@interface IGVideoRenderer : NSObject <IGVideoWriterDelegate> {

	double _prevTime;
	BOOL _finished;
	BOOL _saveWhenDone;
	BOOL _canceled;
	IGVideoComposition* _video;
	IGMediaMetadata* _metadata;
	unsigned long long _retryCount;
	id<IGVideoRendererDelegate> _delegate;
	IGVideoReader* _videoReader;
	IGVideoWriter* _videoWriter;
	IGRenderer* _renderer;
	IGSurface* _stabilizedFrame;
	IGStabilizationFilter* _stabilizationFilter;

}

@property (nonatomic,retain) IGVideoComposition * video;                               //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * metadata;                               //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                            //@synthesize retryCount=_retryCount - In the implementation block
@property (assign) BOOL finished;                                                      //@synthesize finished=_finished - In the implementation block
@property (assign) BOOL saveWhenDone;                                                  //@synthesize saveWhenDone=_saveWhenDone - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoRendererDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGVideoReader * videoReader;                              //@synthesize videoReader=_videoReader - In the implementation block
@property (nonatomic,retain) IGVideoWriter * videoWriter;                              //@synthesize videoWriter=_videoWriter - In the implementation block
@property (nonatomic,retain) IGRenderer * renderer;                                    //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) IGSurface * stabilizedFrame;                              //@synthesize stabilizedFrame=_stabilizedFrame - In the implementation block
@property (nonatomic,retain) IGStabilizationFilter * stabilizationFilter;              //@synthesize stabilizationFilter=_stabilizationFilter - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                            //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVideo:(id)arg1 ;
-(void)renderVideoWithMetadata:(id)arg1 ;
-(IGSurface *)stabilizedFrame;
-(void)setStabilizedFrame:(IGSurface *)arg1 ;
-(IGStabilizationFilter *)stabilizationFilter;
-(void)setStabilizationFilter:(IGStabilizationFilter *)arg1 ;
-(BOOL)saveWhenDone;
-(void)setSaveWhenDone:(BOOL)arg1 ;
-(IGVideoReader *)videoReader;
-(IGVideoWriter *)videoWriter;
-(CVBufferRef)nextRenderedPixelBufferForVideoWriter:(id)arg1 withAdaptor:(id)arg2 getPresentationTime:(SCD_Struct_IG45*)arg3 ;
-(opaqueCMSampleBufferRef)nextAudioSampleBufferForVideoWriter:(id)arg1 ;
-(void)videoWriter:(id)arg1 didFinishWritingVideoToURL:(id)arg2 ;
-(void)videoWriter:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setVideoReader:(IGVideoReader *)arg1 ;
-(void)setVideoWriter:(IGVideoWriter *)arg1 ;
-(void)setRenderer:(IGRenderer *)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<IGVideoRendererDelegate>)arg1 ;
-(id<IGVideoRendererDelegate>)delegate;
-(void)setVideo:(IGVideoComposition *)arg1 ;
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)canceled;
-(void)setFinished:(BOOL)arg1 ;
-(unsigned long long)retryCount;
-(BOOL)finished;
-(IGVideoComposition *)video;
-(void)setMetadata:(IGMediaMetadata *)arg1 ;
-(IGMediaMetadata *)metadata;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(IGRenderer *)renderer;
@end

