/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/QuartzCorePlaceholderDelegate.h>

@protocol OS_dispatch_queue, FBNativeArticleVideoScrubberDelegate;
@class NSObject, ASDisplayNode, CALayer, ASTextNode, NSString;

@interface FBNativeArticleVideoScrubber : ASDisplayNode <UIGestureRecognizerDelegate, QuartzCorePlaceholderDelegate> {

	NSObject*<OS_dispatch_queue> _drawingQueue;
	FBTextMetrics* _textMetrics;
	ASDisplayNode* _completedTrack;
	ASDisplayNode* _loadedTrack;
	ASDisplayNode* _unloadedTrack;
	CALayer* _trackBorderLayer;
	ASTextNode* _currentTimeLabel;
	ASTextNode* _remainingTimeLabel;
	double _knobRadius;
	CALayer* _knob;
	BOOL _shouldDisplayTimeLabels;
	BOOL _isScrubbing;
	id<FBNativeArticleVideoScrubberDelegate> _delegate;
	double _videoDuration;
	double _videoPlaybackTime;
	double _videoLoadedDuration;

}

@property (assign,nonatomic) BOOL isScrubbing;                                                      //@synthesize isScrubbing=_isScrubbing - In the implementation block
@property (assign,nonatomic,__weak) id<FBNativeArticleVideoScrubberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayTimeLabels;                                          //@synthesize shouldDisplayTimeLabels=_shouldDisplayTimeLabels - In the implementation block
@property (assign,nonatomic) double videoDuration;                                                  //@synthesize videoDuration=_videoDuration - In the implementation block
@property (assign,nonatomic) double videoPlaybackTime;                                              //@synthesize videoPlaybackTime=_videoPlaybackTime - In the implementation block
@property (assign,nonatomic) double videoLoadedDuration;                                            //@synthesize videoLoadedDuration=_videoLoadedDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_updateTimeLabelsForPlaybackTime:(double)arg1 ;
-(void)handleScrubbing:(id)arg1 ;
-(double)_totalTrackWidth;
-(double)_horizontalTrackOffset;
-(void)_drawTrackBorderInContext:(CGContextRef)arg1 ;
-(void)_drawKnobInContext:(CGContextRef)arg1 ;
-(double)_videoPlaybackTimeForPoint:(CGPoint)arg1 ;
-(void)setVideoPlaybackTime:(double)arg1 ;
-(void)_animateKnobScaleToValue:(double)arg1 ;
-(void)setVideoPlaybackTime:(double)arg1 animated:(BOOL)arg2 ;
-(double)videoPlaybackTime;
-(void)setVideoLoadedDuration:(double)arg1 animated:(BOOL)arg2 ;
-(double)videoLoadedDuration;
-(id)_displayStringForTime:(double)arg1 ;
-(id)initWithTextMetrics:(FBTextMetrics*)arg1 ;
-(void)setVideoLoadedDuration:(double)arg1 ;
-(void)setShouldDisplayTimeLabels:(BOOL)arg1 ;
-(BOOL)shouldDisplayTimeLabels;
-(void)setDelegate:(id<FBNativeArticleVideoScrubberDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<FBNativeArticleVideoScrubberDelegate>)delegate;
-(void)layout;
-(void)displayLayer:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)didLoad;
-(double)videoDuration;
-(BOOL)isScrubbing;
-(void)setVideoDuration:(double)arg1 ;
-(void)setIsScrubbing:(BOOL)arg1 ;
@end
