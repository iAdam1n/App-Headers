/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class GCKMediaInformation, NSArray;

@interface GCKMediaStatus : NSObject {

	long long _supportedMediaCommands;
	BOOL _isMuted;
	float _playbackRate;
	float _volume;
	long long _mediaSessionID;
	long long _playerState;
	long long _idleReason;
	GCKMediaInformation* _mediaInformation;
	double _streamPosition;
	NSArray* _activeTrackIDs;
	id _customData;

}

@property (assign,nonatomic) long long mediaSessionID;                            //@synthesize mediaSessionID=_mediaSessionID - In the implementation block
@property (assign,nonatomic) long long playerState;                               //@synthesize playerState=_playerState - In the implementation block
@property (assign,nonatomic) long long idleReason;                                //@synthesize idleReason=_idleReason - In the implementation block
@property (assign,nonatomic) float playbackRate;                                  //@synthesize playbackRate=_playbackRate - In the implementation block
@property (nonatomic,retain) GCKMediaInformation * mediaInformation;              //@synthesize mediaInformation=_mediaInformation - In the implementation block
@property (assign,nonatomic) double streamPosition;                               //@synthesize streamPosition=_streamPosition - In the implementation block
@property (assign,nonatomic) float volume;                                        //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) BOOL isMuted;                                        //@synthesize isMuted=_isMuted - In the implementation block
@property (nonatomic,retain) NSArray * activeTrackIDs;                            //@synthesize activeTrackIDs=_activeTrackIDs - In the implementation block
@property (nonatomic,retain) id customData;                                       //@synthesize customData=_customData - In the implementation block
-(long long)idleReason;
-(GCKMediaInformation *)mediaInformation;
-(id)initWithJSONObject:(id)arg1 ;
-(id)customData;
-(long long)updateFromJSONObject:(id)arg1 ignoreFields:(long long)arg2 ;
-(long long)mediaSessionID;
-(void)setMediaSessionID:(long long)arg1 ;
-(void)setIdleReason:(long long)arg1 ;
-(double)streamPosition;
-(void)setStreamPosition:(double)arg1 ;
-(NSArray *)activeTrackIDs;
-(void)setActiveTrackIDs:(NSArray *)arg1 ;
-(id)initWithSessionID:(long long)arg1 mediaInformation:(id)arg2 ;
-(BOOL)isMediaCommandSupported:(long long)arg1 ;
-(void)setMediaInformation:(GCKMediaInformation *)arg1 ;
-(void)setCustomData:(id)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(BOOL)isMuted;
-(void)setIsMuted:(BOOL)arg1 ;
-(long long)playerState;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setPlayerState:(long long)arg1 ;
@end
