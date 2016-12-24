/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/AVPictureInPictureControllerDelegate.h>
#import <Telegram/TGPIPAblePlayerView.h>

@class TGImageView, TransformImageView, NSString, AVPlayer, TGModernGalleryVideoView, NSTimer, TGObserverProxy, SPipe, SMetaDisposable, AVPictureInPictureController, TGModernGalleryVideoPlayerState;

@interface TGModernGalleryVideoPlayerView : UIView <AVPictureInPictureControllerDelegate, TGPIPAblePlayerView> {

	TGImageView* _legacyImageView;
	TransformImageView* _transformImageView;
	NSString* _videoPath;
	AVPlayer* _player;
	TGModernGalleryVideoView* _videoView;
	NSTimer* _positionTimer;
	NSTimer* _videoFlickerTimer;
	TGObserverProxy* _didPlayToEndObserver;
	SPipe* _statePipe;
	BOOL _pausedManually;
	BOOL _shouldResumePIPPlayback;
	SMetaDisposable* _currentAudioSession;
	AVPictureInPictureController* _systemPIPController;
	BOOL _disallowPIP;
	/*^block*/id _requestPictureInPicture;
	TGModernGalleryVideoPlayerState* _state;
	CGRect _initialFrame;

}

@property (nonatomic,readonly) TGModernGalleryVideoPlayerState * state;              //@synthesize state=_state - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id requestPictureInPicture;                               //@synthesize requestPictureInPicture=_requestPictureInPicture - In the implementation block
@property (assign,nonatomic) BOOL disallowPIP;                                       //@synthesize disallowPIP=_disallowPIP - In the implementation block
@property (assign,nonatomic) CGRect initialFrame;                                    //@synthesize initialFrame=_initialFrame - In the implementation block
-(id)stateSignal;
-(void)switchToPictureInPicture;
-(void)playerItemDidPlayToEndTime:(id)arg1 ;
-(void)videoFlickerTimerEvent;
-(void)_setupSystemPIP;
-(void)positionTimerEvent;
-(void)seekToPosition:(double)arg1 ;
-(id)requestPictureInPicture;
-(BOOL)disallowPIP;
-(void)seekToFractPosition:(double)arg1 ;
-(BOOL)supportsPIP;
-(void)_requestSystemPictureInPictureMode;
-(void)_prepareToEnterFullscreen;
-(void)_prepareToLeaveFullscreen;
-(void)resumePIPPlayback;
-(void)pausePIPPlayback;
-(void)beginLeavingFullscreen;
-(void)finishedLeavingFullscreen;
-(void)setRequestPictureInPicture:(id)arg1 ;
-(void)setDisallowPIP:(BOOL)arg1 ;
-(CGRect)initialFrame;
-(void)setInitialFrame:(CGRect)arg1 ;
-(void)loadImageWithUri:(id)arg1 update:(BOOL)arg2 synchronously:(BOOL)arg3 ;
-(void)loadImageWithSignal:(id)arg1 ;
-(void)setVideoPath:(id)arg1 duration:(double)arg2 ;
-(void)disposeAudioSession;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(TGModernGalleryVideoPlayerState *)state;
-(void)reset;
-(void)stop;
-(BOOL)isLoaded;
-(void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1 ;
-(void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2 ;
-(void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1 ;
-(void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)_didBeginPlayback;
-(void)pauseVideo;
-(void)playVideo;
-(void)pauseVideo:(BOOL)arg1 ;
-(void)updateState:(id)arg1 ;
@end
