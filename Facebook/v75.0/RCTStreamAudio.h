/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTStreamAudioPlayerDelegate.h>
#import <Facebook/RCTBridgeModule.h>

@class RCTStreamAudioPlayer, NSTimer, RCTBridge, NSString;

@interface RCTStreamAudio : NSObject <RCTStreamAudioPlayerDelegate, RCTBridgeModule> {

	BOOL _shouldPauseOnAppBackground;
	RCTStreamAudioPlayer* _player;
	NSTimer* _bufferTimeoutTimer;
	RCTBridge* _bridge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__6390;
+(id)__rct_export__6441;
+(id)__rct_export__6632;
+(id)__rct_export__6703;
+(id)__rct_export__6754;
+(id)__rct_export__6805;
+(id)__rct_export__6856;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)streamAudioPlayerStateDidChange:(id)arg1 state:(unsigned long long)arg2 trackState:(id)arg3 ;
-(void)streamAudioPlayerSeekDidSucceed:(id)arg1 trackState:(id)arg2 ;
-(void)streamAudioPlayerTrackStateDidChange:(id)arg1 trackState:(id)arg2 ;
-(void)_willResignActive:(id)arg1 ;
-(void)_audioHardwareRouteChanged:(id)arg1 ;
-(void)_fireTimeout;
-(void)setPauseOnAppBackground:(BOOL)arg1 ;
-(void)setupWithStreamURL:(id)arg1 cacheName:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)setVolume:(double)arg1 ;
-(void)play;
-(void)pause;
-(void)seekToTime:(double)arg1 ;
-(RCTBridge *)bridge;
@end

