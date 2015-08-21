/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UISlider.h>

@class UIView;

@interface FBVideoScrubber : UISlider {

	UIView* _trackView;
	UIView* _trackMinView;
	UIView* _trackLoadingView;
	UIView* _trackMaxView;
	BOOL _newStyle;
	double _currentScrubberHeight;
	double _currentInset;
	float _playableDuration;
	float _trackInsetWhileScrubbing;
	float _hitAreaBelowScrubber;

}

@property (assign,nonatomic) float playableDuration;                      //@synthesize playableDuration=_playableDuration - In the implementation block
@property (assign,nonatomic) float trackInsetWhileScrubbing;              //@synthesize trackInsetWhileScrubbing=_trackInsetWhileScrubbing - In the implementation block
@property (assign,nonatomic) float hitAreaBelowScrubber;                  //@synthesize hitAreaBelowScrubber=_hitAreaBelowScrubber - In the implementation block
-(id)initWithFrame:(CGRect)arg1 usingNewStyle:(BOOL)arg2 ;
-(void)setHitAreaBelowScrubber:(float)arg1 ;
-(id)_imageWithColor:(id)arg1 andSize:(CGRect)arg2 ;
-(id)_imageWithColor:(id)arg1 ;
-(void)_scrubberIsBeingUsed:(id)arg1 ;
-(void)_scrubberIsNotBeingUsed:(id)arg1 ;
-(void)_updateTrackLoadingViewFrame;
-(void)setPlayableDuration:(float)arg1 animated:(BOOL)arg2 ;
-(float)trackInsetWhileScrubbing;
-(void)setTrackInsetWhileScrubbing:(float)arg1 ;
-(float)hitAreaBelowScrubber;
-(float)playableDuration;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setPlayableDuration:(float)arg1 ;
@end

