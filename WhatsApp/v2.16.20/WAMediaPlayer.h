/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_group, WAMediaPlayerDelegate;
@class AVPlayer, _WAPlayerView, WAMediaPlayerPlayButtonView, NSObject, WAFieldStatsEventVideoPlay, NSError, WACropAwareImageView, AVPlayerItem, UIImage, AVVideoComposition, UIView;

@interface WAMediaPlayer : UIView {

	AVPlayer* _player;
	_WAPlayerView* _playerView;
	id _timeObserver;
	float _playerRateBeforeScrubbing;
	SCD_Struct_WA8 _desiredSeekTime;
	WAMediaPlayerPlayButtonView* _playButtonView;
	CGRect _frameForPlayButtonSnapshot;
	BOOL _showPlayButtonOnReady;
	id _playbackActivity;
	BOOL _playButtonNormallyVisible;
	NSObject*<OS_dispatch_group> _seekDispatchGroup;
	WAFieldStatsEventVideoPlay* _pendingPlayEvent;
	double _totalPlaybackTime;
	double _lastPlaybackStartTime;
	BOOL _seekInProgress;
	BOOL _alwaysShowPlayButtonOnPause;
	BOOL _suppressPlayButton;
	BOOL _reportsStats;
	BOOL _scrubbingInProgress;
	BOOL _fromMe;
	float _playbackRate;
	int _audioActivityType;
	unsigned long long _status;
	id<WAMediaPlayerDelegate> _delegate;
	NSError* _error;
	WACropAwareImageView* _posterImageView;
	AVPlayerItem* _playerItem;
	SCD_Struct_WA8 _playbackStartTime;

}

@property (assign,nonatomic) unsigned long long status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic,__weak) id<WAMediaPlayerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float playbackRate;                                           //@synthesize playbackRate=_playbackRate - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (getter=isReadyToPlay,nonatomic,readonly) BOOL readyToPlay; 
@property (nonatomic,readonly) BOOL seekInProgress;                                        //@synthesize seekInProgress=_seekInProgress - In the implementation block
@property (nonatomic,readonly) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) UIImage * posterImage; 
@property (nonatomic,readonly) WACropAwareImageView * posterImageView;                     //@synthesize posterImageView=_posterImageView - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                    //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) AVVideoComposition * playerItemVideoComposition; 
@property (assign,nonatomic) SCD_Struct_WA8 playbackStartTime;                             //@synthesize playbackStartTime=_playbackStartTime - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowPlayButtonOnPause;                             //@synthesize alwaysShowPlayButtonOnPause=_alwaysShowPlayButtonOnPause - In the implementation block
@property (assign,nonatomic) BOOL suppressPlayButton;                                      //@synthesize suppressPlayButton=_suppressPlayButton - In the implementation block
@property (nonatomic,readonly) BOOL reportsStats;                                          //@synthesize reportsStats=_reportsStats - In the implementation block
@property (nonatomic,readonly) UIView * playButtonView;                                    //@synthesize playButtonView=_playButtonView - In the implementation block
@property (assign,nonatomic) int audioActivityType;                                        //@synthesize audioActivityType=_audioActivityType - In the implementation block
@property (nonatomic,readonly) CGSize presentationSize; 
@property (nonatomic,readonly) SCD_Struct_WA8 currentTime; 
@property (nonatomic,readonly) SCD_Struct_WA8 duration; 
@property (nonatomic,readonly) BOOL scrubbingInProgress;                                   //@synthesize scrubbingInProgress=_scrubbingInProgress - In the implementation block
@property (assign,getter=isFromMe,nonatomic) BOOL fromMe;                                  //@synthesize fromMe=_fromMe - In the implementation block
-(void)setAlwaysShowPlayButtonOnPause:(BOOL)arg1 ;
-(void)setSuppressPlayButton:(BOOL)arg1 ;
-(UIView *)playButtonView;
-(SCD_Struct_WA8)playbackStartTime;
-(void)setPlaybackStartTime:(SCD_Struct_WA8)arg1 ;
-(void)playButtonTapped:(id)arg1 ;
-(BOOL)scrubbingInProgress;
-(BOOL)playInitiatedByAutoPlay:(BOOL)arg1 ;
-(void)seekToTime:(SCD_Struct_WA8)arg1 tolerance:(SCD_Struct_WA8)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithStatsReporting:(BOOL)arg1 ;
-(void)setInitialPosterImage:(id)arg1 ;
-(void)setFromMe:(BOOL)arg1 ;
-(void)updatePlayButtonAlphaWithAnimation:(BOOL)arg1 ;
-(void)removeTimeObserverFromPlayer;
-(void)endAudioActivityIfNeeded;
-(void)submitVideoPlayEvent;
-(void)playerItemDidPlayToEndTime:(id)arg1 ;
-(void)prepareVideoPlayEventIfNeeded;
-(void)addTimeObserverToPlayer;
-(void)playerItemDidBecomeReadyToPlay;
-(void)playerDidChangeCurrentTime;
-(BOOL)alwaysShowPlayButtonOnPause;
-(BOOL)suppressPlayButton;
-(BOOL)isPlayButtonHidden;
-(void)internalSeekWithTolerance:(SCD_Struct_WA8)arg1 ;
-(void)performBlockAfterSeeking:(/*^block*/id)arg1 ;
-(AVVideoComposition *)playerItemVideoComposition;
-(void)setPlayerItemVideoComposition:(AVVideoComposition *)arg1 ;
-(BOOL)seekInProgress;
-(BOOL)reportsStats;
-(int)audioActivityType;
-(void)setAudioActivityType:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<WAMediaPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(id<WAMediaPlayerDelegate>)delegate;
-(SCD_Struct_WA8)duration;
-(void)applicationWillResignActive:(id)arg1 ;
-(SCD_Struct_WA8)currentTime;
-(BOOL)isPlaying;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setAccessibilityValue:(id)arg1 ;
-(void)pause;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(CGSize)presentationSize;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(void)setPosterImage:(UIImage *)arg1 ;
-(void)beginScrubbing;
-(id)initWithContentURL:(id)arg1 ;
-(NSError *)error;
-(UIImage *)posterImage;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(BOOL)isFromMe;
-(void)seekToTime:(SCD_Struct_WA8)arg1 ;
-(void)rewind;
-(BOOL)isReadyToPlay;
-(WACropAwareImageView *)posterImageView;
-(void)endScrubbing;
-(id)snapshotImage;
-(void)seekToTime:(SCD_Struct_WA8)arg1 tolerance:(SCD_Struct_WA8)arg2 ;
@end
