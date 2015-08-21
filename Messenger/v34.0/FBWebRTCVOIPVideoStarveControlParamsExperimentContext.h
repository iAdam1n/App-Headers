/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBWebRTCVOIPVideoStarveControlParamsExperimentContext : FBExperimentContext {

	BOOL _enable_starve;
	int _video_packet_loss_low;
	int _video_packet_loss_high;
	int _starve_in_window_ms;
	int _starve_out_window_ms;
	int _video_bitrate_margin_low;
	int _video_bitrate_margin_high;
	int _audio_packet_loss_low;
	int _audio_packet_loss_high;
	int _starve_in_audio_window_ms;
	int _starve_out_audio_window_ms;

}

@property (nonatomic,readonly) BOOL enable_starve;                          //@synthesize enable_starve=_enable_starve - In the implementation block
@property (nonatomic,readonly) int video_packet_loss_low;                   //@synthesize video_packet_loss_low=_video_packet_loss_low - In the implementation block
@property (nonatomic,readonly) int video_packet_loss_high;                  //@synthesize video_packet_loss_high=_video_packet_loss_high - In the implementation block
@property (nonatomic,readonly) int starve_in_window_ms;                     //@synthesize starve_in_window_ms=_starve_in_window_ms - In the implementation block
@property (nonatomic,readonly) int starve_out_window_ms;                    //@synthesize starve_out_window_ms=_starve_out_window_ms - In the implementation block
@property (nonatomic,readonly) int video_bitrate_margin_low;                //@synthesize video_bitrate_margin_low=_video_bitrate_margin_low - In the implementation block
@property (nonatomic,readonly) int video_bitrate_margin_high;               //@synthesize video_bitrate_margin_high=_video_bitrate_margin_high - In the implementation block
@property (nonatomic,readonly) int audio_packet_loss_low;                   //@synthesize audio_packet_loss_low=_audio_packet_loss_low - In the implementation block
@property (nonatomic,readonly) int audio_packet_loss_high;                  //@synthesize audio_packet_loss_high=_audio_packet_loss_high - In the implementation block
@property (nonatomic,readonly) int starve_in_audio_window_ms;               //@synthesize starve_in_audio_window_ms=_starve_in_audio_window_ms - In the implementation block
@property (nonatomic,readonly) int starve_out_audio_window_ms;              //@synthesize starve_out_audio_window_ms=_starve_out_audio_window_ms - In the implementation block
+(id)experimentName;
+(id)parameterConfigurations;
+(BOOL)allowUserInterfaceIdiom:(long long)arg1 ;
-(BOOL)enable_starve;
-(int)video_packet_loss_low;
-(int)video_packet_loss_high;
-(int)starve_in_window_ms;
-(int)starve_out_window_ms;
-(int)video_bitrate_margin_low;
-(int)video_bitrate_margin_high;
-(int)audio_packet_loss_low;
-(int)audio_packet_loss_high;
-(int)starve_in_audio_window_ms;
-(int)starve_out_audio_window_ms;
@end

