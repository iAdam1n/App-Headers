/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIImageView.h>

@class FLAnimatedImage, UIImage, CADisplayLink;

@interface FLAnimatedImageView : UIImageView {

	BOOL _shouldAnimate;
	BOOL _needsDisplayWhenImageBecomesAvailable;
	FLAnimatedImage* _animatedImage;
	UIImage* _currentFrame;
	unsigned long long _currentFrameIndex;
	unsigned long long _loopCountdown;
	double _accumulator;
	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) FLAnimatedImage * animatedImage;                         //@synthesize animatedImage=_animatedImage - In the implementation block
@property (nonatomic,retain) UIImage * currentFrame;                                  //@synthesize currentFrame=_currentFrame - In the implementation block
@property (assign,nonatomic) unsigned long long currentFrameIndex;                    //@synthesize currentFrameIndex=_currentFrameIndex - In the implementation block
@property (assign,nonatomic) unsigned long long loopCountdown;                        //@synthesize loopCountdown=_loopCountdown - In the implementation block
@property (assign,nonatomic) double accumulator;                                      //@synthesize accumulator=_accumulator - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                             //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimate;                                      //@synthesize shouldAnimate=_shouldAnimate - In the implementation block
@property (assign,nonatomic) BOOL needsDisplayWhenImageBecomesAvailable;              //@synthesize needsDisplayWhenImageBecomesAvailable=_needsDisplayWhenImageBecomesAvailable - In the implementation block
-(void)setCurrentFrame:(UIImage *)arg1 ;
-(void)setLoopCountdown:(unsigned long long)arg1 ;
-(void)updateShouldAnimate;
-(BOOL)needsDisplayWhenImageBecomesAvailable;
-(void)setNeedsDisplayWhenImageBecomesAvailable:(BOOL)arg1 ;
-(unsigned long long)loopCountdown;
-(void)setShouldAnimate:(BOOL)arg1 ;
-(unsigned long long)currentFrameIndex;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(BOOL)shouldAnimate;
-(id)image;
-(void)didMoveToSuperview;
-(CGSize)intrinsicContentSize;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)displayLayer:(id)arg1 ;
-(UIImage *)currentFrame;
-(void)displayDidRefresh:(id)arg1 ;
-(double)accumulator;
-(void)setAccumulator:(double)arg1 ;
-(void)setAnimatedImage:(FLAnimatedImage *)arg1 ;
-(FLAnimatedImage *)animatedImage;
-(void)setCurrentFrameIndex:(unsigned long long)arg1 ;
@end

