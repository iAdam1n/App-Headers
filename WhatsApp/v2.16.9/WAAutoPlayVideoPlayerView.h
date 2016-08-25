/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@protocol WAAutoPlayVideoPlayerPlaybackDelegate;
@class NSString, AVPlayerItem, AVQueuePlayer;

@interface WAAutoPlayVideoPlayerView : UIView {

	BOOL _wasPlaying;
	BOOL _muted;
	NSString* _currentPlayerItemFilePath;
	AVPlayerItem* _originalItem;
	AVPlayerItem* _observedItem;
	id _playbackActivity;
	SCD_Struct_WA5 _playbackStartTime;
	BOOL _isDisabled;
	BOOL _isDisabledInternal;
	BOOL _isObservingPlayer;
	CGSize _internalItemSize;
	id _timeObserver;
	BOOL _isScrubbing;
	SCD_Struct_WA5 _internalTime;
	BOOL _appForegrounded;
	id<WAAutoPlayVideoPlayerPlaybackDelegate> _playbackDelegate;

}

@property (assign,nonatomic) BOOL appForegrounded;                                                           //@synthesize appForegrounded=_appForegrounded - In the implementation block
@property (nonatomic,retain) AVQueuePlayer * player; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,nonatomic,__weak) id<WAAutoPlayVideoPlayerPlaybackDelegate> playbackDelegate;              //@synthesize playbackDelegate=_playbackDelegate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_WA5 sourceTime; 
+(Class)layerClass;
-(void)setPlaybackStartTime:(SCD_Struct_WA5)arg1 ;
-(void)updatePlayerItemForURLPath:(id)arg1 ;
-(void)updatePlayerItemForPlayerItem:(id)arg1 ;
-(void)didEnterForeground:(id)arg1 ;
-(void)stopObservingPlayer;
-(void)updatePlayerForStateChange;
-(void)updateForNoItem;
-(void)prepareForNewPlayerItem;
-(void)detachPlayer;
-(void)failPlayerItemUpdate;
-(void)updatePlayerForNewPlayerItem:(id)arg1 ;
-(BOOL)appForegrounded;
-(BOOL)canAutoPlay;
-(void)attachPlayer;
-(void)startObservingPlayer;
-(void)setAppForegrounded:(BOOL)arg1 ;
-(void)setPlaybackFinishTime:(SCD_Struct_WA5)arg1 ;
-(void)endScrubbingAtTime:(SCD_Struct_WA5)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)intrinsicContentSize;
-(void)setDisabled:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)commonInit;
-(void)didEnterBackground:(id)arg1 ;
-(id<WAAutoPlayVideoPlayerPlaybackDelegate>)playbackDelegate;
-(void)setPlaybackDelegate:(id<WAAutoPlayVideoPlayerPlaybackDelegate>)arg1 ;
-(void)beginScrubbing;
-(void)setPlayer:(AVQueuePlayer *)arg1 ;
-(AVQueuePlayer *)player;
-(SCD_Struct_WA5)sourceTime;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(id)playerLayer;
@end

