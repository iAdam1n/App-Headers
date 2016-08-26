/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FNFAVPlayer, FNFAVPlayerLayer;
@class CALayer, FBKVOController, NSURL;

@interface FBMediaPickerVideoLoopingPlayerView : UIView {

	BOOL _fnfEnabled;
	BOOL _fnfMemoryOpt;
	id<FNFAVPlayer> _videoPlayer;
	CALayer*<FNFAVPlayerLayer> _videoPlayerLayer;
	id _videoPlayerPlayToEndTimeObserver;
	FBKVOController* _playerLayerObservation;
	NSURL* _videoURL;

}

@property (nonatomic,copy) NSURL * videoURL; 
-(id)initWithFnfEnabled:(BOOL)arg1 fnfMemoryOpt:(BOOL)arg2 ;
-(void)_playerLayerIsReadyForDisplay:(id)arg1 ;
-(void)_didPlayVideoToEndTimeForNote:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pause;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(void)play;
@end
