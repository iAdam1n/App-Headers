/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ADCViewElement.h>

@class AVPlayer, ADCVideoTimer, UIView;

@interface ADCVideo : ADCViewElement {

	AVPlayer* player;
	double last_playback_position;
	BOOL enabled_;
	BOOL replaying_;
	BOOL lock_pause;
	double duration;
	long long desired_playback_state;
	long long actual_playback_state;
	ADCVideoTimer* video_timer;
	UIView* parent_container;
	int attempts_to_rebuild_player;
	BOOL event_first_quartile_dispatched;
	BOOL event_mid_point_dispatched;
	BOOL event_third_quartile_dispatched;
	BOOL event_complete_dispatched;
	int watchdog_trigger;
	id ad;

}

@property (assign,nonatomic) id ad; 
@property (assign,nonatomic) BOOL replaying; 
@property (nonatomic,readonly) BOOL enabled; 
-(void)setAd:(id)arg1 ;
-(void)unlockPause;
-(void)replay;
-(void)setReplaying:(BOOL)arg1 ;
-(BOOL)replaying;
-(id)init:(id)arg1 inAd:(id)arg2 ;
-(void)layout:(id)arg1 ;
-(BOOL)setupPlayer;
-(BOOL)enabled;
-(BOOL)show:(id)arg1 ;
-(void)reset;
-(void)resume;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)update:(id)arg1 ;
-(void)setPlaybackPosition:(double)arg1 ;
-(id)ad;
-(void)pause:(BOOL)arg1 ;
-(void)playerItemDidReachEnd:(id)arg1 ;
@end

