/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBMagicStoryAssetViewProtocol.h>

@protocol FBMagicStoryVideoViewDelegate;
@class AVPlayerLayer, NSURL, FBVideoPlayerAudioMeters, UIImageView, AVPlayer, AVPlayerItem, NSString;

@interface FBMagicStoryVideoView : UIView <FBMagicStoryAssetViewProtocol> {

	AVPlayerLayer* _playerLayer;
	NSURL* _currentURL;
	FBVideoPlayerAudioMeters* _audioMeters;
	long long _state;
	UIImageView* _playButton;
	SCD_Struct_FB242 _timeToStartAt;
	id<FBMagicStoryVideoViewDelegate> _delegate;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;

}

@property (assign,nonatomic,__weak) id<FBMagicStoryVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB242 currentTime; 
@property (nonatomic,retain) AVPlayer * player;                                              //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                      //@synthesize playerItem=_playerItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithAssets:(id)arg1 session:(id)arg2 ;
-(id)assetViewOrLayer;
-(void)playOnce;
-(BOOL)isCurrentlyPaused;
-(SCD_Struct_FB242)_playbackEndTime;
-(void)_itemDidEndPlay;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)setMuted:(BOOL)arg1 ;
-(void)setCurrentTime:(SCD_Struct_FB242)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBMagicStoryVideoViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMagicStoryVideoViewDelegate>)delegate;
-(void)setState:(long long)arg1 ;
-(void)prepareForReuse;
-(void)pause;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(SCD_Struct_FB242)currentTime;
-(AVPlayer *)player;
@end

