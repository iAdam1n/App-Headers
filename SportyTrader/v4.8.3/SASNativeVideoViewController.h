/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/SASNativeVideoPlaybackViewDelegate.h>

@protocol SASNativeVideoViewControllerDelegate;
@class SASAdViewController, SASNativeVideoAd, AVPlayerItem, AVPlayer, SASNativeVideoPlaybackView, UIActivityIndicatorView, SASNativeVideoPosterView, SASNoCycleTimer, NSMutableArray, NSString;

@interface SASNativeVideoViewController : NSObject <SASNativeVideoPlaybackViewDelegate> {

	BOOL _isVideoLoaded;
	BOOL _isVideoStarted;
	BOOL _isMuted;
	BOOL _isVisible;
	BOOL _isVideoWaitingToStart;
	BOOL _didVideoCompleteOnce;
	BOOL _isResumed;
	BOOL _isStatusKVORegistered;
	BOOL _isRateKVORegistered;
	BOOL _isPlayerLikelyToKeepUpKVORegistered;
	BOOL _isPosterViewVisible;
	BOOL _playerWillQuit;
	BOOL _playerHasBeenSuspended;
	SASAdViewController* _adViewController;
	id<SASNativeVideoViewControllerDelegate> _delegate;
	SASNativeVideoAd* _ad;
	AVPlayerItem* _playerItem;
	AVPlayer* _player;
	SASNativeVideoPlaybackView* _playbackView;
	UIActivityIndicatorView* _activityView;
	SASNativeVideoPosterView* _posterView;
	SASNoCycleTimer* _progressTimer;
	NSMutableArray* _trackEventTable;
	SCD_Struct_SA23 _suspensionTime;

}

@property (assign,nonatomic,__weak) SASAdViewController * adViewController;                         //@synthesize adViewController=_adViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SASNativeVideoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SASNativeVideoAd * ad;                                                 //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                             //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                     //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) SASNativeVideoPlaybackView * playbackView;                             //@synthesize playbackView=_playbackView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityView;                                //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) SASNativeVideoPosterView * posterView;                                 //@synthesize posterView=_posterView - In the implementation block
@property (nonatomic,retain) SASNoCycleTimer * progressTimer;                                       //@synthesize progressTimer=_progressTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * trackEventTable;                                      //@synthesize trackEventTable=_trackEventTable - In the implementation block
@property (assign,nonatomic) BOOL isVideoLoaded;                                                    //@synthesize isVideoLoaded=_isVideoLoaded - In the implementation block
@property (assign,nonatomic) BOOL isVideoStarted;                                                   //@synthesize isVideoStarted=_isVideoStarted - In the implementation block
@property (assign,nonatomic) BOOL isMuted;                                                          //@synthesize isMuted=_isMuted - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                                                        //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) BOOL isVideoWaitingToStart;                                            //@synthesize isVideoWaitingToStart=_isVideoWaitingToStart - In the implementation block
@property (assign,nonatomic) BOOL didVideoCompleteOnce;                                             //@synthesize didVideoCompleteOnce=_didVideoCompleteOnce - In the implementation block
@property (assign,nonatomic) BOOL isResumed;                                                        //@synthesize isResumed=_isResumed - In the implementation block
@property (assign,nonatomic) BOOL isStatusKVORegistered;                                            //@synthesize isStatusKVORegistered=_isStatusKVORegistered - In the implementation block
@property (assign,nonatomic) BOOL isRateKVORegistered;                                              //@synthesize isRateKVORegistered=_isRateKVORegistered - In the implementation block
@property (assign,nonatomic) BOOL isPlayerLikelyToKeepUpKVORegistered;                              //@synthesize isPlayerLikelyToKeepUpKVORegistered=_isPlayerLikelyToKeepUpKVORegistered - In the implementation block
@property (assign,nonatomic) BOOL isPosterViewVisible;                                              //@synthesize isPosterViewVisible=_isPosterViewVisible - In the implementation block
@property (assign,nonatomic) BOOL playerWillQuit;                                                   //@synthesize playerWillQuit=_playerWillQuit - In the implementation block
@property (assign,nonatomic) BOOL playerHasBeenSuspended;                                           //@synthesize playerHasBeenSuspended=_playerHasBeenSuspended - In the implementation block
@property (assign,nonatomic) SCD_Struct_SA23 suspensionTime;                                        //@synthesize suspensionTime=_suspensionTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAd:(SASNativeVideoAd *)arg1 ;
-(SASAdViewController *)adViewController;
-(void)setAdViewController:(SASAdViewController *)arg1 ;
-(void)resetPlayback;
-(SASNativeVideoPlaybackView *)playbackView;
-(void)videoLoadingFailed;
-(void)adViewFrameChanged;
-(void)playerRateDidChange:(float)arg1 ;
-(BOOL)playerWillQuit;
-(BOOL)isPlayerInPlayMode;
-(void)performEndAudioSessionAndNotifyOthers;
-(void)setPlayerWillQuit:(BOOL)arg1 ;
-(void)mute:(BOOL)arg1 withEvent:(BOOL)arg2 ;
-(void)mute:(BOOL)arg1 forceAudioOn:(BOOL)arg2 withEvent:(BOOL)arg3 ;
-(id)delegateManager;
-(void)doPostLoadingSetupForAsset:(id)arg1 ;
-(void)prepareToPlayAsset:(id)arg1 withKeys:(id)arg2 ;
-(void)showPosterView:(BOOL)arg1 ;
-(BOOL)isVideoStarted;
-(BOOL)isVideoLoaded;
-(void)hideActivityIndicator;
-(void)setIsVideoStarted:(BOOL)arg1 ;
-(void)startPlayer;
-(void)setIsPosterViewVisible:(BOOL)arg1 ;
-(void)updatePosterViewStatus;
-(void)videoPlaybackViewWasTouched:(id)arg1 ;
-(void)playerItemDidPlayToEndTimeNotification:(id)arg1 ;
-(void)playerItemFailedToPlayToEndTimeNotification:(id)arg1 ;
-(void)playerItemPlaybackStalledNotification:(id)arg1 ;
-(void)playerItemNewAccessLogEntryNotification:(id)arg1 ;
-(void)playerItemNewErrorLogEntryNotification:(id)arg1 ;
-(void)progressTimerFired;
-(void)setIsVisible:(BOOL)arg1 ;
-(BOOL)isVideoWaitingToStart;
-(void)setIsVideoWaitingToStart:(BOOL)arg1 ;
-(void)requestPause;
-(BOOL)didVideoCompleteOnce;
-(void)eventControllerWillPlay;
-(void)playerIsReadyToPlaySetup;
-(void)preparePlayingUIAfterItemReady;
-(void)requestPlay;
-(void)unregisterPlayerItemEvents;
-(void)unregisterPlayerEvents;
-(void)setTrackEventTable:(NSMutableArray *)arg1 ;
-(void)setIsVideoLoaded:(BOOL)arg1 ;
-(void)setIsResumed:(BOOL)arg1 ;
-(void)setDidVideoCompleteOnce:(BOOL)arg1 ;
-(SASNativeVideoPosterView *)posterView;
-(void)playerEnteredBackground;
-(void)playerEnteredForeground;
-(void)initializePlaybackView;
-(void)initializePosterView;
-(void)loadAssetAndPlay;
-(void)setPlaybackView:(SASNativeVideoPlaybackView *)arg1 ;
-(void)setPosterView:(SASNativeVideoPosterView *)arg1 ;
-(void)registerPlayerEvents;
-(void)registerPlayerItemEvents;
-(void)playerItemTimeJumpedNotification:(id)arg1 ;
-(void)registerStatusKVO;
-(void)unregisterStatusKVO;
-(void)unregisterPlayerLikelyToKeepUpKVO;
-(void)registerRateKVO;
-(void)unregisterRateKVO;
-(void)setIsStatusKVORegistered:(BOOL)arg1 ;
-(void)setIsRateKVORegistered:(BOOL)arg1 ;
-(void)setIsPlayerLikelyToKeepUpKVORegistered:(BOOL)arg1 ;
-(BOOL)isStatusKVORegistered;
-(BOOL)isRateKVORegistered;
-(BOOL)isPlayerLikelyToKeepUpKVORegistered;
-(void)loadPosterImage:(id)arg1 ;
-(void)initializeActivityView;
-(void)initializePlayerItem:(id)arg1 ;
-(void)initializePlayer;
-(BOOL)isPosterViewVisible;
-(BOOL)canHandleAudioSession;
-(void)registerPlayerLikelyToKeepUpKVO;
-(void)playerItemPlaybackLikelyToKeepUpDidChange:(BOOL)arg1 ;
-(BOOL)isResumed;
-(void)endAudioSessionAndNotifyOthers;
-(void)initializeTrackEventTable;
-(void)dispatchTrackEvents;
-(NSMutableArray *)trackEventTable;
-(void)trackEventReached:(id)arg1 ;
-(SCD_Struct_SA23)multiplyTimeByRatio:(SCD_Struct_SA23)arg1 multiplier:(int)arg2 divider:(int)arg3 ;
-(id)initWithController:(id)arg1 delegate:(id)arg2 ;
-(BOOL)playerHasBeenSuspended;
-(void)setPlayerHasBeenSuspended:(BOOL)arg1 ;
-(SCD_Struct_SA23)suspensionTime;
-(void)setSuspensionTime:(SCD_Struct_SA23)arg1 ;
-(void)setDelegate:(id<SASNativeVideoViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SASNativeVideoViewControllerDelegate>)delegate;
-(BOOL)isVisible;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgressTimer:(SASNoCycleTimer *)arg1 ;
-(SASNoCycleTimer *)progressTimer;
-(UIActivityIndicatorView *)activityView;
-(void)setActivityView:(UIActivityIndicatorView *)arg1 ;
-(SASNativeVideoAd *)ad;
-(double)playableDuration;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerItem *)playerItem;
-(AVPlayer *)player;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(BOOL)isMuted;
-(void)playerItemStatusDidChange:(long long)arg1 ;
-(void)loadAd:(id)arg1 ;
-(id)adView;
-(void)showActivityIndicator;
-(void)setIsMuted:(BOOL)arg1 ;
@end

