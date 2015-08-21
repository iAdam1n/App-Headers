/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAudioSessionManagerClient.h>

@protocol MNVideoControllerDelegate;
@class NSURL, AVPlayer, AVPlayerItem, NSString;

@interface MNVideoController : NSObject <FBAudioSessionManagerClient> {

	BOOL _shouldPlayVideoWhenForegrounded;
	BOOL _isAudioMuted;
	BOOL _shouldLoopPlayback;
	BOOL _shouldPlayWhenAssetsAreLoaded;
	BOOL _shouldStopOtherVideosWhenPlayed;
	BOOL _finishedPlaying;
	long long _playState;
	NSURL* _contentURL;
	id<MNVideoControllerDelegate> _delegate;
	AVPlayer* _player;
	double _duration;
	AVPlayerItem* _playerItem;

}

@property (assign,nonatomic) long long playState;                                        //@synthesize playState=_playState - In the implementation block
@property (nonatomic,retain) NSURL * contentURL;                                         //@synthesize contentURL=_contentURL - In the implementation block
@property (assign,nonatomic,__weak) id<MNVideoControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAudioMuted;                                          //@synthesize isAudioMuted=_isAudioMuted - In the implementation block
@property (assign,nonatomic) BOOL shouldLoopPlayback;                                    //@synthesize shouldLoopPlayback=_shouldLoopPlayback - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayWhenAssetsAreLoaded;                         //@synthesize shouldPlayWhenAssetsAreLoaded=_shouldPlayWhenAssetsAreLoaded - In the implementation block
@property (nonatomic,readonly) AVPlayer * player;                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) double currentPlaybackTime; 
@property (nonatomic,readonly) double playableDuration; 
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL shouldStopOtherVideosWhenPlayed;                       //@synthesize shouldStopOtherVideosWhenPlayed=_shouldStopOtherVideosWhenPlayed - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                  //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) BOOL finishedPlaying;                                       //@synthesize finishedPlaying=_finishedPlaying - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
-(unsigned long long)audioDirection;
-(unsigned long long)outputOptions;
-(unsigned long long)outputCoordinationMode;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
-(void)_addControllerObservers;
-(void)_removePlayerItemObservers;
-(void)_removePlayerObservers;
-(void)_removeControllerObservers;
-(void)_prepareToPlayAsset:(id)arg1 withKeys:(id)arg2 ;
-(void)_addPlayerItemObservers;
-(void)_updatePlayerMuteState;
-(void)_addPlayerObservers;
-(void)_playerDidStartPlaying:(id)arg1 ;
-(void)_selfieVideoDidStartRecording:(id)arg1 ;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldStopOtherVideosWhenPlayed;
-(void)loadAssetResourcesAndPlay;
-(void)setFinishedPlaying:(BOOL)arg1 ;
-(void)_playWithoutSeeking;
-(double)_playableDurationForTimeRanges:(id)arg1 ;
-(BOOL)isLoadingResources;
-(BOOL)hasLoadedResources;
-(void)itemDidFinishPlaying:(id)arg1 ;
-(id)addPeriodicTimeObserverWithBlock:(/*^block*/id)arg1 queue:(id)arg2 interval:(SCD_Struct_FB242)arg3 ;
-(void)removePeriodicTimeObserver:(id)arg1 ;
-(id)generateThumbnailForTime:(SCD_Struct_FB242)arg1 ;
-(unsigned long long)estimatedFileSizeAfterExporting:(BOOL)arg1 ;
-(void)setIsAudioMuted:(BOOL)arg1 ;
-(void)seekToBeginning;
-(void)seekToPosition:(double)arg1 ;
-(BOOL)shouldLoopPlayback;
-(void)setShouldLoopPlayback:(BOOL)arg1 ;
-(BOOL)shouldPlayWhenAssetsAreLoaded;
-(void)setShouldPlayWhenAssetsAreLoaded:(BOOL)arg1 ;
-(void)setShouldStopOtherVideosWhenPlayed:(BOOL)arg1 ;
-(BOOL)finishedPlaying;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(NSURL *)contentURL;
-(double)playableDuration;
-(double)currentPlaybackTime;
-(AVPlayerItem *)playerItem;
-(void)beginInterruption;
-(void)_play;
-(void)dealloc;
-(void)setDelegate:(id<MNVideoControllerDelegate>)arg1 ;
-(id)init;
-(id<MNVideoControllerDelegate>)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)stop;
-(void)resume;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_reset;
-(void)pause;
-(BOOL)isAudioMuted;
-(long long)playState;
-(void)setPlayState:(long long)arg1 ;
-(SCD_Struct_FB242)assetDuration;
-(AVPlayer *)player;
-(BOOL)isPlaying;
@end

