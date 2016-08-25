/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@protocol WACameraPreviewViewDelegate;
@class EAGLContext, CIContext, CADisplayLink, NSConditionLock, NSMutableDictionary, GLKView, WACameraFilter;

@interface WACameraPreviewView : UIView {

	EAGLContext* _eaglContext;
	CIContext* _ciContext;
	CADisplayLink* _displayLink;
	opaqueCMBufferQueueRef _bufferQueue;
	opaqueCMSampleBufferRef _lastPresentedSampleBuffer;
	CGSize _imageSize;
	BOOL _updatePaused;
	NSConditionLock* _conditionLock;
	NSMutableDictionary* _animations;
	BOOL _alwaysRedraw;
	int _mediaServicesUnavailableLock;
	BOOL _mediaServicesUnavailable;
	BOOL _acceptingSampleBuffers;
	GLKView* _eaglView;
	WACameraFilter* _filter;
	id<WACameraPreviewViewDelegate> _delegate;
	CGSize _displayedImageSize;
	CGAffineTransform _videoTransform;

}

@property (assign,getter=isAcceptingSampleBuffers,nonatomic) BOOL acceptingSampleBuffers;              //@synthesize acceptingSampleBuffers=_acceptingSampleBuffers - In the implementation block
@property (nonatomic,readonly) GLKView * eaglView;                                                     //@synthesize eaglView=_eaglView - In the implementation block
@property (nonatomic,retain) WACameraFilter * filter;                                                  //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) CGAffineTransform videoTransform;                                         //@synthesize videoTransform=_videoTransform - In the implementation block
@property (nonatomic,readonly) CGSize displayedImageSize;                                              //@synthesize displayedImageSize=_displayedImageSize - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic,__weak) id<WACameraPreviewViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
-(void)mediaServicesWereLost:(id)arg1 ;
-(void)blockCurrentThreadUntilDisplay;
-(void)setVideoTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)videoTransform;
-(void)applyAnimationsAtTime:(double)arg1 ;
-(void)displayImageBuffer:(CVBufferRef)arg1 ;
-(void)redraw:(id)arg1 ;
-(void)setAcceptingSampleBuffers:(BOOL)arg1 ;
-(id)snapshotViewOfLastSampleBuffer;
-(void)performAnimationWithDuration:(double)arg1 key:(id)arg2 callback:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(GLKView *)eaglView;
-(CGSize)displayedImageSize;
-(BOOL)isAcceptingSampleBuffers;
-(void)setDelegate:(id<WACameraPreviewViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id<WACameraPreviewViewDelegate>)delegate;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)setFilter:(WACameraFilter *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)clear;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(WACameraFilter *)filter;
-(BOOL)isPaused;
-(void)mediaServicesWereReset:(id)arg1 ;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
@end

