/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_source, MGXViewDelegate;
@class NSObject, MGXComposition, MGXCompositionController;

@interface MGXView : UIView {

	NSObject*<OS_dispatch_source> _dispatchTimer;
	BOOL _renderCompositionBackground;
	BOOL _playing;
	BOOL _autoRepeat;
	BOOL _sizeToFit;
	BOOL _renderUsingHeartbeat;
	BOOL _debugRendering;
	id<MGXViewDelegate> _delegate;
	MGXComposition* _composition;
	double _time;
	double _scaleFactor;
	MGXCompositionController* _compositionController;
	double _lastUpdateTime;

}

@property (assign,nonatomic,__weak) id<MGXViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MGXComposition * composition;                                  //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) double time;                                                   //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL renderCompositionBackground;                              //@synthesize renderCompositionBackground=_renderCompositionBackground - In the implementation block
@property (assign,nonatomic) BOOL playing;                                                  //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) BOOL autoRepeat;                                               //@synthesize autoRepeat=_autoRepeat - In the implementation block
@property (assign,nonatomic) double scaleFactor;                                            //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) BOOL sizeToFit;                                                //@synthesize sizeToFit=_sizeToFit - In the implementation block
@property (assign,nonatomic) BOOL renderUsingHeartbeat;                                     //@synthesize renderUsingHeartbeat=_renderUsingHeartbeat - In the implementation block
@property (assign,nonatomic) BOOL debugRendering;                                           //@synthesize debugRendering=_debugRendering - In the implementation block
@property (nonatomic,retain) MGXCompositionController * compositionController;              //@synthesize compositionController=_compositionController - In the implementation block
@property (assign,nonatomic) double lastUpdateTime;                                         //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
-(void)layoutCompositionLayer;
-(void)setDebugRendering:(BOOL)arg1 ;
-(void)heartbeatFired;
-(void)startHeartbeat;
-(void)startCAKeyframeAnimation;
-(void)stopHeartbeat;
-(void)animationDidStart;
-(void)setRenderUsingHeartbeat:(BOOL)arg1 ;
-(void)setRenderCompositionBackground:(BOOL)arg1 ;
-(void)playUsingCoreAnimation:(id)arg1 ;
-(void)playFromBeginning:(id)arg1 ;
-(void)zoomToActualSize:(id)arg1 ;
-(void)zoomIn:(id)arg1 ;
-(void)zoomOut:(id)arg1 ;
-(void)logLayers:(id)arg1 ;
-(BOOL)renderCompositionBackground;
-(BOOL)autoRepeat;
-(void)setAutoRepeat:(BOOL)arg1 ;
-(void)setSizeToFit:(BOOL)arg1 ;
-(BOOL)renderUsingHeartbeat;
-(BOOL)debugRendering;
-(MGXComposition *)composition;
-(void)setScaleFactor:(double)arg1 ;
-(double)backingScaleFactor;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MGXViewDelegate>)arg1 ;
-(id<MGXViewDelegate>)delegate;
-(void)animationDidStop:(BOOL)arg1 ;
-(BOOL)sizeToFit;
-(void)stopAnimation;
-(void)startAnimation;
-(void)setTime:(double)arg1 ;
-(double)time;
-(double)scaleFactor;
-(void)initCommon;
-(double)lastUpdateTime;
-(void)setComposition:(MGXComposition *)arg1 ;
-(void)setLastUpdateTime:(double)arg1 ;
-(void)sizeToFit:(id)arg1 ;
-(BOOL)playing;
-(MGXCompositionController *)compositionController;
-(void)setCompositionController:(MGXCompositionController *)arg1 ;
-(double)currentTime;
-(void)seekToTime:(double)arg1 ;
-(void)play:(id)arg1 ;
-(void)pause:(id)arg1 ;
-(void)togglePlayback:(id)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
@end
