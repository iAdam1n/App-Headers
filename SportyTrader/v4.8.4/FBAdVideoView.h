/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>
#import <SportyTrader/FBAdViewabilityValidatorDelegate.h>
#import <SportyTrader/FBAdFullscreenVideoControllerDelegate.h>
#import <SportyTrader/FBAdUpdatableView.h>

@protocol FBAdVideoViewDelegate;
@class FBAdVideoPlayerView, FBAdVideoPlayButton, FBAdVideoScrubber, UILabel, UITapGestureRecognizer, AVPlayerItem, NSMutableArray, NSURL, FBAdViewabilityValidator, FBGradientView, NSString, AVPlayer;

@interface FBAdVideoView : UIView <FBAdViewabilityValidatorDelegate, FBAdFullscreenVideoControllerDelegate, FBAdUpdatableView> {

	BOOL _tapEnabled;
	BOOL _scrubberEnabled;
	BOOL _playButtonEnabled;
	BOOL _autoplayEnabled;
	BOOL _isInline;
	BOOL _isBeingScrubbed;
	BOOL _playingBeforeScrubbed;
	BOOL _videoCurrentlyShownToUser;
	BOOL _videoShownToUser;
	BOOL _timeCheckSent;
	double _controlSizeMultiplier;
	double _volume;
	id<FBAdVideoViewDelegate> _delegate;
	FBAdVideoPlayerView* _videoView;
	FBAdVideoPlayButton* _playButton;
	FBAdVideoScrubber* _videoScrubber;
	UILabel* _timeRemainingLabel;
	UITapGestureRecognizer* _tapGestureRecognizer;
	AVPlayerItem* _playerItem;
	/*^block*/id _failureBlock;
	/*^block*/id _playCheck;
	/*^block*/id _timeCheck;
	NSMutableArray* _timingObservers;
	double _duration;
	NSURL* _url;
	FBAdViewabilityValidator* _viewabilityValidator;
	FBGradientView* _gradientView;
	SCD_Struct_SA23 _currentTime;
	SCD_Struct_SA23 _maximumSecondsWatched;

}

@property (nonatomic,copy) NSString * videoGravity; 
@property (assign,getter=isTapEnabled,nonatomic) BOOL tapEnabled;                               //@synthesize tapEnabled=_tapEnabled - In the implementation block
@property (assign,getter=isScrubberEnabled,nonatomic) BOOL scrubberEnabled;                     //@synthesize scrubberEnabled=_scrubberEnabled - In the implementation block
@property (assign,getter=isPlayButtonEnabled,nonatomic) BOOL playButtonEnabled;                 //@synthesize playButtonEnabled=_playButtonEnabled - In the implementation block
@property (assign,nonatomic) double controlSizeMultiplier;                                      //@synthesize controlSizeMultiplier=_controlSizeMultiplier - In the implementation block
@property (assign,nonatomic) double volume;                                                     //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdVideoViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isAutoplayEnabled,nonatomic) BOOL autoplayEnabled;                     //@synthesize autoplayEnabled=_autoplayEnabled - In the implementation block
@property (assign,nonatomic) SCD_Struct_SA23 currentTime;                                       //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) BOOL isInline;                                                     //@synthesize isInline=_isInline - In the implementation block
@property (assign,nonatomic,__weak) FBAdVideoPlayerView * videoView;                            //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic,__weak) FBAdVideoPlayButton * playButton;                           //@synthesize playButton=_playButton - In the implementation block
@property (assign,nonatomic,__weak) FBAdVideoScrubber * videoScrubber;                          //@synthesize videoScrubber=_videoScrubber - In the implementation block
@property (assign,nonatomic,__weak) UILabel * timeRemainingLabel;                               //@synthesize timeRemainingLabel=_timeRemainingLabel - In the implementation block
@property (assign,nonatomic,__weak) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) AVPlayer * player; 
@property (assign,nonatomic,__weak) AVPlayerItem * playerItem;                                  //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,copy) id failureBlock;                                                     //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy) id playCheck;                                                        //@synthesize playCheck=_playCheck - In the implementation block
@property (nonatomic,copy) id timeCheck;                                                        //@synthesize timeCheck=_timeCheck - In the implementation block
@property (nonatomic,retain) NSMutableArray * timingObservers;                                  //@synthesize timingObservers=_timingObservers - In the implementation block
@property (assign,nonatomic) BOOL isBeingScrubbed;                                              //@synthesize isBeingScrubbed=_isBeingScrubbed - In the implementation block
@property (assign,nonatomic) BOOL playingBeforeScrubbed;                                        //@synthesize playingBeforeScrubbed=_playingBeforeScrubbed - In the implementation block
@property (assign,nonatomic) double duration;                                                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSURL * url;                                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) FBAdViewabilityValidator * viewabilityValidator;                   //@synthesize viewabilityValidator=_viewabilityValidator - In the implementation block
@property (assign,nonatomic) BOOL videoCurrentlyShownToUser;                                    //@synthesize videoCurrentlyShownToUser=_videoCurrentlyShownToUser - In the implementation block
@property (assign,nonatomic) BOOL videoShownToUser;                                             //@synthesize videoShownToUser=_videoShownToUser - In the implementation block
@property (assign,nonatomic,__weak) FBGradientView * gradientView;                              //@synthesize gradientView=_gradientView - In the implementation block
@property (assign,nonatomic) SCD_Struct_SA23 maximumSecondsWatched;                             //@synthesize maximumSecondsWatched=_maximumSecondsWatched - In the implementation block
@property (assign,nonatomic) BOOL timeCheckSent;                                                //@synthesize timeCheckSent=_timeCheckSent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dateFormatter;
-(void)setControlSizeMultiplier:(double)arg1 ;
-(void)setPlayButtonEnabled:(BOOL)arg1 ;
-(void)setAutoplayEnabled:(BOOL)arg1 ;
-(void)videoController:(id)arg1 periodicTimerTriggered:(SCD_Struct_SA23)arg2 ;
-(void)videoController:(id)arg1 videoTimeCheckTriggered:(SCD_Struct_SA23)arg2 ;
-(void)playMovieWithURL:(id)arg1 withVideoPlayCheck:(/*^block*/id)arg2 withVideoTimeCheck:(/*^block*/id)arg3 withFailure:(/*^block*/id)arg4 ;
-(BOOL)viewDidAppearOnScreen;
-(BOOL)viewNotVisibleOnScreen;
-(FBAdViewabilityValidator *)viewabilityValidator;
-(void)setViewabilityValidator:(FBAdViewabilityValidator *)arg1 ;
-(void)startStopAction:(id)arg1 ;
-(void)videoScrubberChanged:(id)arg1 ;
-(void)videoScrubberTouchDown:(id)arg1 ;
-(void)videoScrubberTouchComplete:(id)arg1 ;
-(void)addGestureRecognizers;
-(double)controlSizeMultiplier;
-(BOOL)isPlayButtonEnabled;
-(SCD_Struct_SA23)maximumSecondsWatched;
-(void)logVideoTime:(SCD_Struct_SA23)arg1 withInlineView:(BOOL)arg2 ;
-(void)checkIfVideoEnded;
-(void)updateMaximumWatched:(SCD_Struct_SA23)arg1 ;
-(void)removeAllTimingObservers;
-(void)setVideoShownToUser:(BOOL)arg1 ;
-(id)remainingTimeLabelFromDate:(id)arg1 duration:(double)arg2 ;
-(BOOL)isBeingScrubbed;
-(void)addTimingObserver:(/*^block*/id)arg1 ;
-(void)setPlayCheck:(id)arg1 ;
-(void)setTimeCheck:(id)arg1 ;
-(BOOL)videoShownToUser;
-(void)setMaximumSecondsWatched:(SCD_Struct_SA23)arg1 ;
-(void)setTimeCheckSent:(BOOL)arg1 ;
-(void)setVideoCurrentlyShownToUser:(BOOL)arg1 ;
-(void)logVideoTime:(SCD_Struct_SA23)arg1 withInlineView:(BOOL)arg2 overrideLimit:(BOOL)arg3 ;
-(id)timeCheck;
-(BOOL)timeCheckSent;
-(NSMutableArray *)timingObservers;
-(void)removeGestureRecognizers;
-(id)playCheck;
-(void)videoScrubberStartScrub;
-(void)setIsBeingScrubbed:(BOOL)arg1 ;
-(BOOL)playingBeforeScrubbed;
-(BOOL)videoCurrentlyShownToUser;
-(void)videoControllerDismissed:(id)arg1 ;
-(BOOL)isTapEnabled;
-(void)setVideoScrubber:(FBAdVideoScrubber *)arg1 ;
-(void)setTimingObservers:(NSMutableArray *)arg1 ;
-(void)setPlayingBeforeScrubbed:(BOOL)arg1 ;
-(void)updateView:(BOOL)arg1 ;
-(BOOL)isAutoplayEnabled;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBAdVideoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(id<FBAdVideoViewDelegate>)delegate;
-(double)duration;
-(NSURL *)url;
-(void)setDuration:(double)arg1 ;
-(void)stop;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)start;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(SCD_Struct_SA23)currentTime;
-(BOOL)isPlaying;
-(void)setUrl:(NSURL *)arg1 ;
-(void)tap:(id)arg1 ;
-(FBAdVideoPlayerView *)videoView;
-(void)setVideoView:(FBAdVideoPlayerView *)arg1 ;
-(NSString *)videoGravity;
-(FBAdVideoScrubber *)videoScrubber;
-(BOOL)isInline;
-(BOOL)isScrubberEnabled;
-(void)setScrubberEnabled:(BOOL)arg1 ;
-(void)setIsInline:(BOOL)arg1 ;
-(FBAdVideoPlayButton *)playButton;
-(void)setCurrentTime:(SCD_Struct_SA23)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)setTimeRemainingLabel:(UILabel *)arg1 ;
-(UILabel *)timeRemainingLabel;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setGradientView:(FBGradientView *)arg1 ;
-(FBGradientView *)gradientView;
-(void)setupNotifications;
-(void)setTapEnabled:(BOOL)arg1 ;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
-(void)setPlayButton:(FBAdVideoPlayButton *)arg1 ;
@end
