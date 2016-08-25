/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventVideoPlay : WAFieldStatsEvent {

	double _video_duration;
	double _video_play_t;
	double _video_age;
	double _video_play_type;
	double _video_play_result;
	double _video_size;
	double _video_initial_buffering_t;

}

@property (assign,nonatomic) double video_duration;                         //@synthesize video_duration=_video_duration - In the implementation block
@property (assign,nonatomic) double video_play_t;                           //@synthesize video_play_t=_video_play_t - In the implementation block
@property (assign,nonatomic) double video_age;                              //@synthesize video_age=_video_age - In the implementation block
@property (assign,nonatomic) double video_play_type;                        //@synthesize video_play_type=_video_play_type - In the implementation block
@property (assign,nonatomic) double video_play_result;                      //@synthesize video_play_result=_video_play_result - In the implementation block
@property (assign,nonatomic) double video_size;                             //@synthesize video_size=_video_size - In the implementation block
@property (assign,nonatomic) double video_initial_buffering_t;              //@synthesize video_initial_buffering_t=_video_initial_buffering_t - In the implementation block
-(void)setVideo_age:(double)arg1 ;
-(void)setVideo_size:(double)arg1 ;
-(void)setVideo_duration:(double)arg1 ;
-(void)setVideo_play_type:(double)arg1 ;
-(void)setVideo_play_result:(double)arg1 ;
-(void)setVideo_play_t:(double)arg1 ;
-(double)video_play_t;
-(double)video_duration;
-(double)video_age;
-(double)video_size;
-(double)video_play_type;
-(double)video_play_result;
-(double)video_initial_buffering_t;
-(void)setVideo_initial_buffering_t:(double)arg1 ;
-(void)submit;
-(id)init;
@end

