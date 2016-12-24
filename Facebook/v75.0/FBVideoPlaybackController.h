/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>
#import <Facebook/FBVideoAudioRouteEventListener.h>

@protocol OS_dispatch_queue, FNFAVPlayer, FNFAVPlayerLayer, FBVideoItemLoader, FBVideoPlaybackLoggingDataProvider, FBVideoPlayerAudioSessionClientProtocol, FBAudioSessionClientProvider, FB360VideoModelviewPerspectiveProvider, FBPlayerItemBuilder;
@class FBVideoPlaybackEventListenerAnnouncer, NSObject, CALayer, FBVideoPlaybackContainerView, FBVideoNetworker, FBKVOController, FBVideoPlaybackStateMachine, FBPlaybackWaterfallCounter, FBUserSession, FBVideoBitrate, FBAVPlayerVolumeRamp, NSString, FBVideoInitializationTracker, FBVideoAssetMetadata, FNFExperimentContext, FBVideoTVCastingExperimentContext, NSTimer, FB360VideoCamera, FNF360Renderer, FNFCardboardRenderer, FB360VideoViewportLogger, FNF360AudioEngine, FB360AudioLogger, FBScenePath, NSSet, FBVideoAudioRouteMonitor, FB360VideoEngagementLogger, UIView, FBVideoPlaybackItem;

@interface FBVideoPlaybackController : NSObject <AVPlayerItemOutputPullDelegate, FBVideoAudioRouteEventListener> {

	FBVideoPlaybackEventListenerAnnouncer* _announcer;
	NSObject*<OS_dispatch_queue> _queue;
	id<FNFAVPlayer> _player;
	CALayer*<FNFAVPlayerLayer> _playerLayer;
	FBVideoPlaybackContainerView* _playerContainerView;
	id<FBVideoItemLoader> _playerItemLoader;
	FBVideoNetworker* _videoNetworker;
	id _periodicTimeObserver;
	double _currentVideoTime;
	double _videoTimeLoaded;
	FBKVOController* _observation;
	FBKVOController* _playerLayerObservation;
	FBVideoPlaybackStateMachine* _stateMachine;
	FBPlaybackWaterfallCounter* _playbackWaterfallCounter;
	id<FBVideoPlaybackLoggingDataProvider> _loggingProvider;
	FBUserSession* _session;
	FBVideoBitrate* _videoBitrate;
	long long _currentVideoPlaybackQuality;
	id<FBVideoPlayerAudioSessionClientProtocol> _audioSessionManagerClient;
	BOOL _playerIsStalled;
	BOOL _scrubIsInProgress;
	BOOL _wasPlayingBeforeScrubbing;
	BOOL _disablePreviewImage;
	long long _playerProgressState;
	double _pendingSeek;
	double _seekSourceTimePosition;
	double _startedPlayingTimeThreshold;
	FBAVPlayerVolumeRamp* _pendingVolumeRamp;
	NSString* _videoGravity;
	FBVideoInitializationTracker* _videoInitializationTracker;
	FBVideoAssetMetadata* _videoAssetMetadata;
	BOOL _wasHDBeforeQualityChange;
	BOOL _mustCreatePlayer;
	BOOL _allowsExternalPlayback;
	FNFExperimentContext* _fnfExperimentContext;
	FBVideoTVCastingExperimentContext* _castingExperimentContext;
	unsigned long long _invalidateTimeoutMS;
	NSTimer* _invalidationTimer;
	FB360VideoCamera* _360Camera;
	FNF360Renderer* _360Renderer;
	FNFCardboardRenderer* _cardboardRenderer;
	FB360VideoViewportLogger* _viewportLogger;
	BOOL _is360ViewportLoggingEnabled;
	BOOL _rotatedCubemapSupportEnabled;
	FNF360AudioEngine* _360AudioEngine;
	FB360AudioLogger* _360AudioLogger;
	BOOL _fnfEnabled;
	BOOL _sentPlayedFor3SecondsEvent;
	FBScenePath* _scenePath;
	NSSet* _analyticsTags;
	FBVideoAudioRouteMonitor* _audioRouteMonitor;
	BOOL _forceRateOnPlayerStateTest;
	int _warnedViewNotVisibleCount;
	BOOL _seekWhenLoadingLive;
	BOOL _showShadow;
	BOOL _isAtEndOfVideo;
	BOOL _showPreviewImageAfterVideoEnds;
	BOOL _showsVideoPreviewImage;
	BOOL _mute;
	BOOL _respectHardwareMuteSwitch;
	BOOL _camera360RollAxisRotationEnabled;
	BOOL _shouldRender360CubeGeometry;
	BOOL _applyOpacityWorkaround;
	BOOL _outputCoordinationModeDucked;
	id<FBAudioSessionClientProvider> _audioSessionClientProvider;
	double _duration;
	FB360VideoEngagementLogger* _engagementLogger;
	/*^block*/id _volumeRampCompletionBlock;
	id<FB360VideoModelviewPerspectiveProvider> _modelviewPerspectiveProvider;
	id<FBPlayerItemBuilder> _playerItemBuilder;

}

@property (nonatomic,copy) id volumeRampCompletionBlock;                                                                  //@synthesize volumeRampCompletionBlock=_volumeRampCompletionBlock - In the implementation block
@property (assign,nonatomic,__weak) id<FB360VideoModelviewPerspectiveProvider> modelviewPerspectiveProvider;              //@synthesize modelviewPerspectiveProvider=_modelviewPerspectiveProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FBPlayerItemBuilder> playerItemBuilder;                                            //@synthesize playerItemBuilder=_playerItemBuilder - In the implementation block
@property (assign,nonatomic) BOOL showShadow;                                                                             //@synthesize showShadow=_showShadow - In the implementation block
@property (assign,nonatomic,__weak) id<FBAudioSessionClientProvider> audioSessionClientProvider;                          //@synthesize audioSessionClientProvider=_audioSessionClientProvider - In the implementation block
@property (nonatomic,readonly) BOOL invalidated; 
@property (nonatomic,readonly) CGSize bestEffortVideoSize; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) FBVideoPlaybackItem * currentVideoPlaybackItem; 
@property (nonatomic,readonly) long long state; 
@property (assign,nonatomic) long long playbackQuality; 
@property (nonatomic,readonly) BOOL isVisuallyStalled; 
@property (nonatomic,readonly) double currentVideoTime; 
@property (nonatomic,readonly) double requestedVideoTime; 
@property (nonatomic,readonly) double videoTimeLoaded; 
@property (nonatomic,readonly) double duration;                                                                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL isAtEndOfVideo;                                                                       //@synthesize isAtEndOfVideo=_isAtEndOfVideo - In the implementation block
@property (assign,nonatomic) BOOL showPreviewImageAfterVideoEnds;                                                         //@synthesize showPreviewImageAfterVideoEnds=_showPreviewImageAfterVideoEnds - In the implementation block
@property (assign,nonatomic) BOOL showsVideoPreviewImage;                                                                 //@synthesize showsVideoPreviewImage=_showsVideoPreviewImage - In the implementation block
@property (nonatomic,retain) id<FBVideoPlaybackLoggingDataProvider> loggingProvider;                                      //@synthesize loggingProvider=_loggingProvider - In the implementation block
@property (nonatomic,readonly) FBVideoInitializationTracker * videoInitializationTracker;                                 //@synthesize videoInitializationTracker=_videoInitializationTracker - In the implementation block
@property (nonatomic,readonly) FBVideoAssetMetadata * videoAssetMetadata;                                                 //@synthesize videoAssetMetadata=_videoAssetMetadata - In the implementation block
@property (assign,nonatomic) BOOL mute;                                                                                   //@synthesize mute=_mute - In the implementation block
@property (assign,nonatomic) BOOL respectHardwareMuteSwitch;                                                              //@synthesize respectHardwareMuteSwitch=_respectHardwareMuteSwitch - In the implementation block
@property (assign,nonatomic) BOOL camera360RollAxisRotationEnabled;                                                       //@synthesize camera360RollAxisRotationEnabled=_camera360RollAxisRotationEnabled - In the implementation block
@property (assign,nonatomic) BOOL cardboardEnabled; 
@property (nonatomic,retain) FB360VideoEngagementLogger * engagementLogger;                                               //@synthesize engagementLogger=_engagementLogger - In the implementation block
@property (assign,nonatomic) BOOL shouldRender360CubeGeometry;                                                            //@synthesize shouldRender360CubeGeometry=_shouldRender360CubeGeometry - In the implementation block
@property (nonatomic,readonly) BOOL is360AudioActive; 
@property (nonatomic,readonly) BOOL is360AudioEnabled; 
@property (assign,nonatomic) BOOL applyOpacityWorkaround;                                                                 //@synthesize applyOpacityWorkaround=_applyOpacityWorkaround - In the implementation block
@property (assign,nonatomic) BOOL outputCoordinationModeDucked;                                                           //@synthesize outputCoordinationModeDucked=_outputCoordinationModeDucked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addVideoPlaybackEventListener:(id)arg1 ;
-(void)removeVideoPlaybackEventListener:(id)arg1 ;
-(id)initWithSession:(id)arg1 fnfEnabled:(BOOL)arg2 analyticsTags:(id)arg3 ;
-(void)setLoggingProvider:(id<FBVideoPlaybackLoggingDataProvider>)arg1 ;
-(void)replaceVideoPlaybackItem:(id)arg1 forScenePath:(id)arg2 ;
-(void)prepareToPlayWithCompletionBlock:(/*^block*/id)arg1 ;
-(id<FBVideoPlaybackLoggingDataProvider>)loggingProvider;
-(void)stopBuffering;
-(void)scrubToPlaybackTime:(double)arg1 ;
-(void)setRespectHardwareMuteSwitch:(BOOL)arg1 ;
-(void)finishScrubbing;
-(FBVideoPlaybackItem *)currentVideoPlaybackItem;
-(void)setShowShadow:(BOOL)arg1 ;
-(void)setShowsVideoPreviewImage:(BOOL)arg1 ;
-(void)fadeAudioOutWithDuration:(float)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)bestEffortVideoSize;
-(void)fadeAudioInWithDuration:(float)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShowPreviewImageAfterVideoEnds:(BOOL)arg1 ;
-(BOOL)didRequestPlayback;
-(BOOL)isAtEndOfVideo;
-(double)currentVideoTime;
-(void)setOutputCoordinationModeDucked:(BOOL)arg1 ;
-(FB360VideoEngagementLogger *)engagementLogger;
-(id)camera360;
-(BOOL)isEligibleForDefinition:(long long)arg1 ;
-(double)videoTimeLoaded;
-(BOOL)isScrubbingSupported;
-(BOOL)isVisuallyStalled;
-(void)removeAudioLevelMeterCallback;
-(void)addAudioLevelMeterCallback:(/*^block*/id)arg1 timeInterval:(SCD_Struct_FB100)arg2 ;
-(double)nextLiveAudioTimestamp;
-(void)scrubToPlaybackTime:(double)arg1 withStateReevaluation:(BOOL)arg2 ;
-(void)cancelDelayedInvalidation;
-(void)setApplyOpacityWorkaround:(BOOL)arg1 ;
-(void)setShouldRender360CubeGeometry:(BOOL)arg1 ;
-(BOOL)is360AudioEnabled;
-(void)invalidateWithDelay;
-(void)setCamera360RollAxisRotationEnabled:(BOOL)arg1 ;
-(id)streamFormat;
-(id)playerVersion;
-(void)enableExternalPlayback;
-(void)replaceVideoPlaybackItem:(id)arg1 forScenePath:(id)arg2 videoQuality:(long long)arg3 ;
-(double)elapsedVideoTimestamp;
-(id)initWithSession:(id)arg1 queue:(id)arg2 fnfEnabled:(BOOL)arg3 analyticsTags:(id)arg4 ;
-(BOOL)cardboardEnabled;
-(void)setCardboardEnabled:(BOOL)arg1 ;
-(void)getVolume:(/*^block*/id)arg1 ;
-(id)playbackWaterfallCounter;
-(id)assetDebugDetails;
-(id)bandwidthEstimatorInfo;
-(BOOL)showShadow;
-(id)_audioRampForItem:(id)arg1 startVolume:(float)arg2 endVolume:(float)arg3 timeRange:(SCD_Struct_FB101)arg4 ;
-(id)volumeRampCompletionBlock;
-(void)rampToVolume:(float)arg1 duration:(float)arg2 completion:(/*^block*/id)arg3 ;
-(void)setVolumeRampCompletionBlock:(id)arg1 ;
-(void)setModelviewPerspectiveProvider:(id<FB360VideoModelviewPerspectiveProvider>)arg1 ;
-(void)_playbackStalled;
-(void)_playerLayerIsReadyForDisplay:(id)arg1 ;
-(void)_applicationDidBackground;
-(void)_applicationWillForeground;
-(void)set360GuideEnabled:(BOOL)arg1 isAutomatic:(BOOL)arg2 ;
-(BOOL)is360AudioActive;
-(void)set360ViewportLoggingEnabled:(BOOL)arg1 ;
-(id)getPreviewImageView;
-(void)setAudioSessionClientProvider:(id<FBAudioSessionClientProvider>)arg1 ;
-(void)setPlayerItemBuilder:(id<FBPlayerItemBuilder>)arg1 ;
-(id<FB360VideoModelviewPerspectiveProvider>)modelviewPerspectiveProvider;
-(void)_audioInterrupted:(id)arg1 ;
-(void)_createPlayer;
-(void)_teardownPeriodicTimeObserverForPlayer:(id)arg1 ;
-(BOOL)_shouldReloadFromPlaybackItem:(id)arg1 ;
-(void)_setNewItemOnPlayerAndCancelLoadingCurrent:(id)arg1 player:(id)arg2 ;
-(void)_clearExistingState;
-(BOOL)_bypassVideoNetworker;
-(void)_itemDidWarn:(id)arg1 ;
-(void)_updateVideoAssetMetadata;
-(void)_refreshImagePlaceHolderURL;
-(void)_unloadVideoRecreatePlayerAndLoaderWithRate:(float)arg1 ;
-(void)_reevaluatePlayerState:(float)arg1 ;
-(void)_resetPlayerItemLoader;
-(void)_setup360Camera;
-(void)_setup360env;
-(void)_cleanup360Camera;
-(void)_doObservePlayerItem:(id)arg1 ;
-(void)_refreshVideoPreviewImage;
-(void)_subscribeToAudioRouteChanges;
-(void)_playbackItemLoadedWithPlaybackItem:(id)arg1 playerItem:(id)arg2 error:(id)arg3 loader:(id)arg4 ;
-(void)_resetForError:(id)arg1 ;
-(void)_playerStateBlockHandlerUsingRate:(float)arg1 ;
-(void)_safeSeekToTime:(SCD_Struct_FB100)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isRequestInProgress;
-(void)_pauseWithNetworkCancel:(BOOL)arg1 ;
-(void)_cancelRequestedPlayingIfNecessaryWithNetworkCancel:(BOOL)arg1 ;
-(void)_cancelThePreparationRequest;
-(id)_getCurrentScreenshot;
-(void)_invalidateWithDelayTimerMethod;
-(double)_getSanitizedTimePosition:(double)arg1 ;
-(void)_seekCompletionHandler:(BOOL)arg1 withStateReevaluation:(BOOL)arg2 ;
-(BOOL)_playerIsStalledBasedOnTimeLoaded;
-(id)playableURL;
-(void)_refreshAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)_createPlayerContainerView;
-(void)_makePlayerLayer;
-(void)_getVolumeCompletionBlockWithFromVolume:(float)arg1 toVolume:(float)arg2 duration:(float)arg3 completion:(/*^block*/id)arg4 ;
-(void)_itemDidPlayToEndTime;
-(void)_itemDidAddAccessLogEvent;
-(void)_playbackDriedOut;
-(void)_playbackUnDried;
-(void)_itemDidFail:(id)arg1 ;
-(void)_loadedTimeRangeChanged:(id)arg1 ;
-(void)_playerItemChanged:(id)arg1 ;
-(void)_playerStatusChanged:(id)arg1 ;
-(void)_setupPeriodicTimeObserverForPlayer:(id)arg1 ;
-(SCD_Struct_FB579)_fetchVideoMetadataForVideoNetworkerAnalysis;
-(void)_transitionToStartedPlaying;
-(BOOL)_isReadyForDisplayOrExternalPlaybackActive;
-(void)_updateLoggingForStartedPlaying;
-(void)_resumePlaybackFromStallIfNeeded;
-(BOOL)_shouldOverrideRateToPlaying;
-(void)_updateStallStateBasedOnPlaybackTime;
-(void)_periodicTimeObserverCallback:(SCD_Struct_FB100)arg1 ;
-(void)_prepare360Renderer:(BOOL)arg1 playerItem:(id)arg2 player:(id)arg3 ;
-(void)_maybeLog360AudioWithIgnoreLoggingInterval:(BOOL)arg1 ;
-(void)_360DrawFrameCallback:(id)arg1 ;
-(void)_setupCardboardRenderer;
-(void)_updateCardboardParameters:(id)arg1 ;
-(void)_maybeLogViewportChange;
-(void)_maybeLog360AudioOnMainThreadWithLogger:(id)arg1 bufferUnderrunCount:(int)arg2 ignoreLoggingInterval:(BOOL)arg3 ;
-(BOOL)isCurrentlyPlaying;
-(id)currentPlayableURL;
-(BOOL)_sphericalIsPermitted;
-(double)requestedVideoTime;
-(long long)_fetchBitRate;
-(long long)_fetchAtomSize;
-(BOOL)_viewIsHiddenForTooLong;
-(void)_setVideoLoader:(id)arg1 ;
-(id)_getPlayer;
-(id<FBAudioSessionClientProvider>)audioSessionClientProvider;
-(BOOL)showPreviewImageAfterVideoEnds;
-(BOOL)showsVideoPreviewImage;
-(FBVideoInitializationTracker *)videoInitializationTracker;
-(FBVideoAssetMetadata *)videoAssetMetadata;
-(BOOL)respectHardwareMuteSwitch;
-(BOOL)camera360RollAxisRotationEnabled;
-(void)setEngagementLogger:(FB360VideoEngagementLogger *)arg1 ;
-(BOOL)shouldRender360CubeGeometry;
-(BOOL)applyOpacityWorkaround;
-(BOOL)outputCoordinationModeDucked;
-(id<FBPlayerItemBuilder>)playerItemBuilder;
-(void)dealloc;
-(NSString *)description;
-(UIView *)view;
-(long long)state;
-(double)duration;
-(void)invalidate;
-(void)setVolume:(float)arg1 ;
-(void)_setPlayer:(id)arg1 ;
-(void)play;
-(void)pause;
-(double)videoLength;
-(BOOL)isExternalPlaybackActive;
-(NSString *)videoGravity;
-(void)beginScrubbing;
-(id)session;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)prepareToPlay;
-(void)audioRouteDidChange:(BOOL)arg1 ;
-(BOOL)invalidated;
-(id)playerLayer;
-(BOOL)mute;
-(void)setMute:(BOOL)arg1 ;
-(long long)playbackQuality;
-(void)setPlaybackQuality:(long long)arg1 ;
@end
