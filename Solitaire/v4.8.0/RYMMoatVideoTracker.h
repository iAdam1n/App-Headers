/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/RYMMoatBootstrap.h>

@class UIView, CALayer, NSMutableDictionary, NSArray, RYMMoatWebView, NSTimer;

@interface RYMMoatVideoTracker : RYMMoatBootstrap {

	BOOL _debug;
	BOOL _misTracking;
	BOOL _initialized;
	BOOL _isDestroyed;
	float _lastVolume;
	int _nanLoops;
	id _player;
	UIView* _attachmentView;
	CALayer* _targetLayer;
	double _duration;
	unsigned long long _playerState;
	NSMutableDictionary* _adIds;
	NSMutableDictionary* _oneTimeEventsDispatched;
	NSArray* _quartileEvents;
	RYMMoatWebView* _mWebView;
	NSTimer* _timer;
	CGRect _playerDims;

}

@property (assign) BOOL debug;                                                 //@synthesize debug=_debug - In the implementation block
@property (__weak) id player;                                                  //@synthesize player=_player - In the implementation block
@property (__weak) UIView * attachmentView;                                    //@synthesize attachmentView=_attachmentView - In the implementation block
@property (__weak) CALayer * targetLayer;                                      //@synthesize targetLayer=_targetLayer - In the implementation block
@property (assign) float lastVolume;                                           //@synthesize lastVolume=_lastVolume - In the implementation block
@property (assign) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign) unsigned long long playerState;                             //@synthesize playerState=_playerState - In the implementation block
@property (assign) CGRect playerDims;                                          //@synthesize playerDims=_playerDims - In the implementation block
@property (retain) NSMutableDictionary * adIds;                                //@synthesize adIds=_adIds - In the implementation block
@property (retain) NSMutableDictionary * oneTimeEventsDispatched;              //@synthesize oneTimeEventsDispatched=_oneTimeEventsDispatched - In the implementation block
@property (retain) NSArray * quartileEvents;                                   //@synthesize quartileEvents=_quartileEvents - In the implementation block
@property (retain) RYMMoatWebView * mWebView;                                  //@synthesize mWebView=_mWebView - In the implementation block
@property (assign) int nanLoops;                                               //@synthesize nanLoops=_nanLoops - In the implementation block
@property (retain) NSTimer * timer;                                            //@synthesize timer=_timer - In the implementation block
@property (assign) BOOL misTracking;                                           //@synthesize misTracking=_misTracking - In the implementation block
@property (assign) BOOL initialized;                                           //@synthesize initialized=_initialized - In the implementation block
@property (assign) BOOL isDestroyed;                                           //@synthesize isDestroyed=_isDestroyed - In the implementation block
+(id)trackerWithPartnerCode:(id)arg1 ;
-(id)initTracker:(id)arg1 ;
-(BOOL)trackVideoAd:(id)arg1 usingMPMoviePlayer:(id)arg2 ;
-(BOOL)setTrackingParams:(id)arg1 playerDims:(CGRect)arg2 attachmentView:(id)arg3 targetLayer:(id)arg4 ;
-(void)startMPVideoLoop;
-(BOOL)trackVideoAd:(id)arg1 usingAVMoviePlayer:(id)arg2 withLayer:(id)arg3 withContainingView:(id)arg4 ;
-(void)startAVVideoLoop;
-(RYMMoatWebView *)mWebView;
-(BOOL)checkOkToTrack;
-(void)checkAVPlayBack;
-(void)handleAVStop:(id)arg1 ;
-(void)updateScreenMode:(id)arg1 ;
-(void)handleMPStop:(id)arg1 ;
-(void)handleMPNotification:(id)arg1 ;
-(float)getSystemVolume;
-(id)getAVParams:(id)arg1 ;
-(void)checkPlayback:(id)arg1 ;
-(id)getMPParams:(id)arg1 ;
-(void)sendLastEvent:(id)arg1 ;
-(void)checkMPPlayback;
-(void)changeTargetLayer:(id)arg1 withContainingView:(id)arg2 ;
-(CALayer *)targetLayer;
-(void)setTargetLayer:(CALayer *)arg1 ;
-(float)lastVolume;
-(void)setLastVolume:(float)arg1 ;
-(CGRect)playerDims;
-(void)setPlayerDims:(CGRect)arg1 ;
-(NSMutableDictionary *)adIds;
-(void)setAdIds:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)oneTimeEventsDispatched;
-(void)setOneTimeEventsDispatched:(NSMutableDictionary *)arg1 ;
-(NSArray *)quartileEvents;
-(void)setQuartileEvents:(NSArray *)arg1 ;
-(void)setMWebView:(RYMMoatWebView *)arg1 ;
-(int)nanLoops;
-(void)setNanLoops:(int)arg1 ;
-(BOOL)misTracking;
-(void)setMisTracking:(BOOL)arg1 ;
-(BOOL)isDestroyed;
-(void)setIsDestroyed:(BOOL)arg1 ;
-(void)setDebug:(BOOL)arg1 ;
-(void)dispatchEvent:(id)arg1 ;
-(void)dealloc;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)isTracking;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(BOOL)debug;
-(void)startTracking:(double)arg1 ;
-(void)destroy;
-(BOOL)initialized;
-(void)setPlayerState:(unsigned long long)arg1 ;
-(unsigned long long)playerState;
-(void)setPlayer:(id)arg1 ;
-(id)player;
-(UIView *)attachmentView;
-(void)setAttachmentView:(UIView *)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
@end
