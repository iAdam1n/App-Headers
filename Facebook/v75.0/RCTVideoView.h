/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/CALayerDelegate.h>
#import <Facebook/RCTInvalidating.h>

@protocol OS_dispatch_queue, RCTVideoViewDelegate;
@class NSObject, AVAsset, AVPlayer, AVPlayerLayer, AVPlayerItem, CALayer, NSURL, NSString;

@interface RCTVideoView : RCTView <CAAnimationDelegate, CALayerDelegate, RCTInvalidating> {

	int _state;
	NSObject*<OS_dispatch_queue> _assetQueue;
	AVAsset* _asset;
	CGSize _assetSize;
	AVPlayer* _player;
	AVPlayerLayer* _playerLayer;
	AVPlayerItem* _item;
	double _currentTime;
	id _image;
	double _imageTime;
	double _imageTimeBeingLoaded;
	CALayer* _imageLayer;
	BOOL _needsUpdate;
	BOOL _pendingSeek;
	BOOL _stateChanged;
	NSObject* _timeObserverToken;
	BOOL _isPaused;
	float _volume;
	id<RCTVideoViewDelegate> _delegate;
	NSURL* _src;
	double _startPosition;
	NSString* _resizeMode;
	/*^block*/id _onProgress;
	/*^block*/id _onStateChange;

}

@property (assign,nonatomic,__weak) id<RCTVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * src;                                             //@synthesize src=_src - In the implementation block
@property (assign,nonatomic) BOOL isPaused;                                         //@synthesize isPaused=_isPaused - In the implementation block
@property (assign,nonatomic) float volume;                                          //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) double startPosition;                                  //@synthesize startPosition=_startPosition - In the implementation block
@property (nonatomic,copy) NSString * resizeMode;                                   //@synthesize resizeMode=_resizeMode - In the implementation block
@property (nonatomic,copy) id onProgress;                                           //@synthesize onProgress=_onProgress - In the implementation block
@property (nonatomic,copy) id onStateChange;                                        //@synthesize onStateChange=_onStateChange - In the implementation block
@property (nonatomic,readonly) int state;                                           //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeImage;
-(void)_removePlayer;
-(void)_delegateCurrentTimeChange:(SCD_Struct_FB100)arg1 duration:(float)arg2 ;
-(void)_updatePlayerWithAsset:(id)arg1 size:(CGSize)arg2 ;
-(void)_updateAsset:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_addVideoTimerObserver;
-(void)_removeVideoTimerObserver;
-(void)_loadedImage:(id)arg1 time:(double)arg2 ;
-(id)onProgress;
-(void)setOnProgress:(id)arg1 ;
-(id)onStateChange;
-(void)setOnStateChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<RCTVideoViewDelegate>)arg1 ;
-(void)dealloc;
-(id<RCTVideoViewDelegate>)delegate;
-(int)state;
-(void)invalidate;
-(void)_reset;
-(BOOL)isValid;
-(void)_update;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(double)startPosition;
-(void)_setState:(int)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setStartPosition:(double)arg1 ;
-(void)setResizeMode:(NSString *)arg1 ;
-(BOOL)isPaused;
-(void)setIsPaused:(BOOL)arg1 ;
-(NSURL *)src;
-(void)setSrc:(NSURL *)arg1 ;
-(void)_setNeedsUpdate;
-(NSString *)resizeMode;
-(void)_updateImage;
-(void)seekToTime:(double)arg1 ;
-(void)playerItemDidReachEnd:(id)arg1 ;
@end
