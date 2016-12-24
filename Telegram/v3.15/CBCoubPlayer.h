/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/CBDownloadOperationDelegate.h>
#import <Telegram/STKAudioPlayerDelegate.h>
#import <Telegram/CBCoubLoopDelegate.h>

@protocol CBCoubPlayerDelegate, CBCoubAsset;
@class CBVideoPlayer, STKAudioPlayer, CBCoubLoopCompositionMaker, NSString;

@interface CBCoubPlayer : NSObject <CBDownloadOperationDelegate, STKAudioPlayerDelegate, CBCoubLoopDelegate> {

	BOOL _shouldPlayWhenReady;
	BOOL _shouldResumeWhenAppIsActive;
	BOOL _shouldResumeWhenInterruptionEnds;
	BOOL _shouldPlayAfterStop;
	long long _currentPlayingChunk;
	double _startTime;
	BOOL _isInterrupted;
	BOOL _withoutAudio;
	int _videoPlayMethod;
	id<CBCoubPlayerDelegate> _delegate;
	int _state;
	id<CBCoubAsset> _asset;
	CBVideoPlayer* _videoPlayer;
	STKAudioPlayer* _audioPlayer;
	CBCoubLoopCompositionMaker* _loopMaker;

}

@property (nonatomic,retain) CBVideoPlayer * videoPlayer;                           //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) STKAudioPlayer * audioPlayer;                          //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,retain) CBCoubLoopCompositionMaker * loopMaker;                //@synthesize loopMaker=_loopMaker - In the implementation block
@property (assign,nonatomic,__weak) id<CBCoubPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) BOOL isPaused; 
@property (nonatomic,readonly) BOOL isInterrupted;                                  //@synthesize isInterrupted=_isInterrupted - In the implementation block
@property (nonatomic,readonly) BOOL isActivePlayer; 
@property (assign,nonatomic) int state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL withoutAudio;                                     //@synthesize withoutAudio=_withoutAudio - In the implementation block
@property (nonatomic,retain) id<CBCoubAsset> asset;                                 //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) int videoPlayMethod;                                   //@synthesize videoPlayMethod=_videoPlayMethod - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)pauseActivePlayer:(id)arg1 ;
+(void)resumeActivePlayer:(id)arg1 ;
+(void)initialize;
+(id)activePlayer;
-(void)audioPlayer:(id)arg1 stateChanged:(int)arg2 previousState:(int)arg3 ;
-(void)audioPlayer:(id)arg1 logInfo:(id)arg2 ;
-(void)audioPlayer:(id)arg1 unexpectedError:(int)arg2 ;
-(void)audioPlayer:(id)arg1 didFinishPlayingQueueItemId:(id)arg2 withReason:(int)arg3 andProgress:(double)arg4 andDuration:(double)arg5 ;
-(void)audioPlayer:(id)arg1 didStartPlayingQueueItemId:(id)arg2 ;
-(void)audioPlayer:(id)arg1 didFinishBufferingSourceWithQueueItemId:(id)arg2 ;
-(id)initWithVideoLayer:(id)arg1 videoPlayMethod:(int)arg2 ;
-(void)createVideoPlayerWithLayer:(id)arg1 ;
-(void)stopActivePlayer;
-(void)becomeActivePlayer;
-(void)prepareLoopCompostion;
-(void)failPlaybackWithError:(id)arg1 ;
-(void)downloadMediaAssetsWithCompletion:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)resignActivePlayer;
-(CBCoubLoopCompositionMaker *)loopMaker;
-(id)initWithVideoLayer:(id)arg1 ;
-(void)startPlayingIfPossible;
-(void)startPlayingFirstAudioChunk;
-(void)pauseWhileInterrupted;
-(void)createAudioPlayer;
-(void)prepareAudioPlayer;
-(void)playVideoPlayer;
-(void)setLoopMaker:(CBCoubLoopCompositionMaker *)arg1 ;
-(void)downloadChunk:(long long)arg1 ;
-(void)prepareVideoPlayer;
-(void)pauseWhileInBackground;
-(void)resumeIfPausedWhileInBackground;
-(void)resumeIfPausedWhileInterrupted;
-(void)downloadDidReachProgress:(float)arg1 ;
-(void)downloadHasBeenCancelledWithError:(id)arg1 ;
-(void)coubLoopDidFinishPreparing:(id)arg1 ;
-(void)coubLoop:(id)arg1 didFailToLoadWithError:(id)arg2 ;
-(BOOL)isActivePlayer;
-(void)playAsset:(id)arg1 ;
-(void)pseudoStop;
-(void)resetCurrentPlayer;
-(BOOL)withoutAudio;
-(void)setWithoutAudio:(BOOL)arg1 ;
-(int)videoPlayMethod;
-(void)setVideoPlayMethod:(int)arg1 ;
-(void)setDelegate:(id<CBCoubPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id<CBCoubPlayerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)stop;
-(void)resume;
-(BOOL)isPlaying;
-(id<CBCoubAsset>)asset;
-(void)setAsset:(id<CBCoubAsset>)arg1 ;
-(void)pause;
-(BOOL)isPaused;
-(CBVideoPlayer *)videoPlayer;
-(void)setVideoPlayer:(CBVideoPlayer *)arg1 ;
-(STKAudioPlayer *)audioPlayer;
-(void)setAudioPlayer:(STKAudioPlayer *)arg1 ;
-(BOOL)isInterrupted;
@end
