/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGVideoPlayerTargetViewDelegate.h>

@protocol IGFeedVideoPlayerDelegate, OS_dispatch_queue;
@class AVPlayerItem, AVURLAsset, NSObject, IGVideoPlayerTargetView, NSURL, IGKVOHandle, NSString;

@interface IGFeedVideoPlayer : NSObject <IGVideoPlayerTargetViewDelegate> {

	BOOL _audioEnabled;
	BOOL _assetHasAudio;
	BOOL _looping;
	BOOL _hasError;
	BOOL _requiresResetPlayer;
	BOOL _readyToPlay;
	BOOL _playedFirstFrame;
	double _duration;
	long long _loopCount;
	id<IGFeedVideoPlayerDelegate> _delegate;
	AVPlayerItem* _streamingPlayerItem;
	AVURLAsset* _asset;
	NSObject*<OS_dispatch_queue> _playerQueue;
	IGVideoPlayerTargetView* _videoTargetView;
	NSURL* _URL;
	NSURL* _loadingURL;
	double _rate;
	IGKVOHandle* _playerItemStatusObserver;
	IGKVOHandle* _playerItemPlaybackLikelyToKeepUpObserver;
	IGKVOHandle* _playerItemPlaybackBufferEmptyObserver;
	IGKVOHandle* _playerItemPlaybackBufferFullObserver;
	IGKVOHandle* _playerItemTimeRangeObserver;

}

@property (assign,nonatomic) double duration;                                                     //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled;                             //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,nonatomic) BOOL assetHasAudio;                                                  //@synthesize assetHasAudio=_assetHasAudio - In the implementation block
@property (assign,getter=isLooping,nonatomic) BOOL looping;                                       //@synthesize looping=_looping - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (assign,nonatomic) BOOL hasError;                                                       //@synthesize hasError=_hasError - In the implementation block
@property (assign,nonatomic) BOOL requiresResetPlayer;                                            //@synthesize requiresResetPlayer=_requiresResetPlayer - In the implementation block
@property (assign,nonatomic) long long loopCount;                                                 //@synthesize loopCount=_loopCount - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoPlayerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVPlayerItem * streamingPlayerItem;                                  //@synthesize streamingPlayerItem=_streamingPlayerItem - In the implementation block
@property (nonatomic,retain) AVURLAsset * asset;                                                  //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> playerQueue;                            //@synthesize playerQueue=_playerQueue - In the implementation block
@property (nonatomic,retain) IGVideoPlayerTargetView * videoTargetView;                           //@synthesize videoTargetView=_videoTargetView - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                         //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSURL * loadingURL;                                                  //@synthesize loadingURL=_loadingURL - In the implementation block
@property (assign,nonatomic) BOOL readyToPlay;                                                    //@synthesize readyToPlay=_readyToPlay - In the implementation block
@property (assign,nonatomic) BOOL playedFirstFrame;                                               //@synthesize playedFirstFrame=_playedFirstFrame - In the implementation block
@property (assign,nonatomic) double rate;                                                         //@synthesize rate=_rate - In the implementation block
@property (nonatomic,retain) IGKVOHandle * playerItemStatusObserver;                              //@synthesize playerItemStatusObserver=_playerItemStatusObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * playerItemPlaybackLikelyToKeepUpObserver;              //@synthesize playerItemPlaybackLikelyToKeepUpObserver=_playerItemPlaybackLikelyToKeepUpObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * playerItemPlaybackBufferEmptyObserver;                 //@synthesize playerItemPlaybackBufferEmptyObserver=_playerItemPlaybackBufferEmptyObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * playerItemPlaybackBufferFullObserver;                  //@synthesize playerItemPlaybackBufferFullObserver=_playerItemPlaybackBufferFullObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * playerItemTimeRangeObserver;                           //@synthesize playerItemTimeRangeObserver=_playerItemTimeRangeObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_IG15)playbackEndTimeForAsset:(id)arg1 ;
-(void)loadVideoForURL:(id)arg1 ;
-(BOOL)assetHasAudio;
-(void)prepareForReuseWithCompletion:(/*^block*/id)arg1 ;
-(void)assetFailedToPrepareForPlayback:(id)arg1 ;
-(BOOL)requiresResetPlayer;
-(void)removeStreamingPlayerItemObservers;
-(void)dispatchSyncOnPlayerQueueOrCurrent:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)playerQueue;
-(IGVideoPlayerTargetView *)videoTargetView;
-(void)dispatchAsyncOnPlayerQueue:(/*^block*/id)arg1 ;
-(void)setReadyToPlay:(BOOL)arg1 ;
-(void)setPlayerItemStatusObserver:(IGKVOHandle *)arg1 ;
-(void)playbackLikelyToKeepUp:(BOOL)arg1 ;
-(void)setPlayerItemPlaybackLikelyToKeepUpObserver:(IGKVOHandle *)arg1 ;
-(void)playbackBufferEmpty:(BOOL)arg1 ;
-(void)setPlayerItemPlaybackBufferEmptyObserver:(IGKVOHandle *)arg1 ;
-(void)playbackBufferFull:(BOOL)arg1 ;
-(void)setPlayerItemPlaybackBufferFullObserver:(IGKVOHandle *)arg1 ;
-(long long)loopCount;
-(void)setLoopCount:(long long)arg1 ;
-(AVPlayerItem *)streamingPlayerItem;
-(void)setStreamingPlayerItem:(AVPlayerItem *)arg1 ;
-(id)newPlayerItemForAsset:(id)arg1 ;
-(void)setRequiresResetPlayer:(BOOL)arg1 ;
-(void)setLoadingURL:(NSURL *)arg1 ;
-(void)setPlayedFirstFrame:(BOOL)arg1 ;
-(NSURL *)loadingURL;
-(void)setAssetHasAudio:(BOOL)arg1 ;
-(void)preparePlayerWithAsset:(id)arg1 ;
-(void)prepareToPlayURL:(id)arg1 ;
-(BOOL)playedFirstFrame;
-(BOOL)readyToPlay;
-(void)onPlaybackTimeChanged:(SCD_Struct_IG15)arg1 ;
-(void)videoPlayerViewIsReadyToDisplay:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didChangePlaybackRate:(double)arg2 ;
-(void)videoPlayer:(id)arg1 didChangePlaybackTime:(SCD_Struct_IG15)arg2 ;
-(void)onTimeRangesUpdated:(id)arg1 ;
-(void)setPlayerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setVideoTargetView:(IGVideoPlayerTargetView *)arg1 ;
-(IGKVOHandle *)playerItemStatusObserver;
-(IGKVOHandle *)playerItemPlaybackLikelyToKeepUpObserver;
-(IGKVOHandle *)playerItemPlaybackBufferEmptyObserver;
-(IGKVOHandle *)playerItemPlaybackBufferFullObserver;
-(IGKVOHandle *)playerItemTimeRangeObserver;
-(void)setPlayerItemTimeRangeObserver:(IGKVOHandle *)arg1 ;
-(void)setLooping:(BOOL)arg1 ;
-(void)play;
-(void)dealloc;
-(void)setDelegate:(id<IGFeedVideoPlayerDelegate>)arg1 ;
-(id<IGFeedVideoPlayerDelegate>)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(AVURLAsset *)asset;
-(void)setAsset:(AVURLAsset *)arg1 ;
-(void)playerItemDidPlayToEnd:(id)arg1 ;
-(BOOL)isAudioEnabled;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)hasError;
-(BOOL)isLooping;
-(double)rate;
-(void)setRate:(double)arg1 ;
-(double)currentTime;
-(id)player;
-(BOOL)isPlaying;
-(void)setHasError:(BOOL)arg1 ;
@end

