/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterAVScribeAutoplayPlayer.h>

@class TFNTwitterAmplifyAbstractVideo;

@interface TFNTwitterAmplifyAVPlayer : TFNTwitterAVScribeAutoplayPlayer {

	BOOL _didSendPlaybackLapse;
	BOOL _didSendPlaybackRetention;
	BOOL _didSendPlayFromTapOnStart;
	TFNTwitterAmplifyAbstractVideo* _video;

}

@property (nonatomic,readonly) TFNTwitterAmplifyAbstractVideo * video;              //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) BOOL didSendPlaybackLapse;                             //@synthesize didSendPlaybackLapse=_didSendPlaybackLapse - In the implementation block
@property (assign,nonatomic) BOOL didSendPlaybackRetention;                         //@synthesize didSendPlaybackRetention=_didSendPlaybackRetention - In the implementation block
@property (assign,nonatomic) BOOL didSendPlayFromTapOnStart;                        //@synthesize didSendPlayFromTapOnStart=_didSendPlayFromTapOnStart - In the implementation block
-(id)initWithDelegate:(id)arg1 mediaURL:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 playerItem:(id)arg2 ;
-(void)playbackDidFinish;
-(void)playbackDidProgressToTime:(double)arg1 withIncrement:(double)arg2 ;
-(id)initWithDelegate:(id)arg1 video:(id)arg2 ;
-(BOOL)didSendPlaybackLapse;
-(void)setDidSendPlaybackLapse:(BOOL)arg1 ;
-(BOOL)didSendPlaybackRetention;
-(void)setDidSendPlaybackRetention:(BOOL)arg1 ;
-(BOOL)didSendPlayFromTapOnStart;
-(void)setDidSendPlayFromTapOnStart:(BOOL)arg1 ;
-(void)dispose;
-(TFNTwitterAmplifyAbstractVideo *)video;
@end
