/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UISlider.h>

@class UIView;

@interface FBAdVideoScrubber : UISlider {

	UIView* _trackView;
	UIView* _trackMinView;
	UIView* _trackLoadingView;
	UIView* _trackMaxView;
	double _currentScrubberHeight;
	double _currentInset;
	double _playableDuration;
	double _trackInsetWhileScrubbing;
	double _hitAreaBelowScrubber;

}

@property (assign,nonatomic) double playableDuration;                      //@synthesize playableDuration=_playableDuration - In the implementation block
@property (assign,nonatomic) double trackInsetWhileScrubbing;              //@synthesize trackInsetWhileScrubbing=_trackInsetWhileScrubbing - In the implementation block
@property (assign,nonatomic) double hitAreaBelowScrubber;                  //@synthesize hitAreaBelowScrubber=_hitAreaBelowScrubber - In the implementation block
-(id)_imageWithColor:(id)arg1 andSize:(CGRect)arg2 ;
-(id)_imageWithColor:(id)arg1 ;
-(void)_scrubberIsBeingUsed:(id)arg1 ;
-(void)_scrubberIsNotBeingUsed:(id)arg1 ;
-(void)_updateTrackLoadingViewFrame;
-(void)setPlayableDuration:(double)arg1 animated:(BOOL)arg2 ;
-(double)trackInsetWhileScrubbing;
-(void)setTrackInsetWhileScrubbing:(double)arg1 ;
-(double)hitAreaBelowScrubber;
-(void)setHitAreaBelowScrubber:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(double)playableDuration;
-(void)setPlayableDuration:(double)arg1 ;
@end
