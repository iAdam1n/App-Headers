/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <GLKit/GLKView.h>
#import <WhatsApp/WASampleBufferDisplayViewDelegate.h>

@protocol WASampleBufferDisplayViewDelegate, OS_dispatch_queue;
@class CADisplayLink, WASampleBufferDisplayViewRenderer, NSObject, NSString;

@interface WASampleBufferDisplayView : GLKView <WASampleBufferDisplayViewDelegate> {

	CADisplayLink* _displayLink;
	WASampleBufferDisplayViewRenderer* _renderer;
	opaqueCMBufferQueueTriggerTokenRef _highWaterMarkTrigger;
	opaqueCMBufferQueueTriggerTokenRef _lowWaterMarkTrigger;
	BOOL _haveRequestedContext;
	BOOL _readyForMoreMediaData;
	OpaqueCMTimebaseRef _controlTimebase;
	long long _status;
	id<WASampleBufferDisplayViewDelegate> _sampleBufferDisplayViewDelegate;
	NSObject*<OS_dispatch_queue> _mediaProviderQueue;
	/*^block*/id _mediaProviderBlock;
	opaqueCMBufferQueueRef _bufferQueue;

}

@property (assign,nonatomic) long long status;                                                                          //@synthesize status=_status - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> mediaProviderQueue;                                                     //@synthesize mediaProviderQueue=_mediaProviderQueue - In the implementation block
@property (copy) id mediaProviderBlock;                                                                                 //@synthesize mediaProviderBlock=_mediaProviderBlock - In the implementation block
@property (assign,nonatomic) opaqueCMBufferQueueRef bufferQueue;                                                        //@synthesize bufferQueue=_bufferQueue - In the implementation block
@property (getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;                                                  //@synthesize readyForMoreMediaData=_readyForMoreMediaData - In the implementation block
@property (nonatomic,readonly) OpaqueCMTimebaseRef controlTimebase;                                                     //@synthesize controlTimebase=_controlTimebase - In the implementation block
@property (assign,nonatomic,__weak) id<WASampleBufferDisplayViewDelegate> sampleBufferDisplayViewDelegate;              //@synthesize sampleBufferDisplayViewDelegate=_sampleBufferDisplayViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStartTime:(SCD_Struct_WA8)arg1 ;
-(void)setSampleBufferDisplayViewDelegate:(id<WASampleBufferDisplayViewDelegate>)arg1 ;
-(void)removeFramesOlderThan:(SCD_Struct_WA8)arg1 ;
-(void)sampleBufferDisplayViewDidDrawFrameWithSourceTime:(SCD_Struct_WA8)arg1 ;
-(void)redraw:(id)arg1 ;
-(id<WASampleBufferDisplayViewDelegate>)sampleBufferDisplayViewDelegate;
-(BOOL)createBufferQueue;
-(void)updatePaused;
-(void)loadContext;
-(void)setMediaProviderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMediaProviderBlock:(id)arg1 ;
-(void)setReadyForMoreMediaDataIfPossible;
-(NSObject*<OS_dispatch_queue>)mediaProviderQueue;
-(id)mediaProviderBlock;
-(void)setReadyForMoreMediaData:(BOOL)arg1 ;
-(opaqueCMBufferQueueRef)bufferQueue;
-(void)setBufferQueue:(opaqueCMBufferQueueRef)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(OpaqueCMTimebaseRef)controlTimebase;
-(void)stopRequestingMediaData;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)clearQueue;
-(BOOL)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)requestContext;
@end
