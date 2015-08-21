/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBWebRTCConfigExperimentContext : FBExperimentContext {

	int _min_supported_version;
	int _outgoing_call_timeout_milli;
	int _incoming_call_timeout_milli;
	int _disconnect_call_timeout_milli;
	int _signal_disconnect_call_timeout_milli;
	int _show_call_ui_timeout_milli;
	int _voip_connection_prune_level;
	int _max_jitter_buffer;
	int _webrtc_ack_timeout_milli;
	int _webrtc_number_retries_on_error;
	int _voip_audio_debug_sampling;

}

@property (nonatomic,readonly) int min_supported_version;                             //@synthesize min_supported_version=_min_supported_version - In the implementation block
@property (nonatomic,readonly) int outgoing_call_timeout_milli;                       //@synthesize outgoing_call_timeout_milli=_outgoing_call_timeout_milli - In the implementation block
@property (nonatomic,readonly) int incoming_call_timeout_milli;                       //@synthesize incoming_call_timeout_milli=_incoming_call_timeout_milli - In the implementation block
@property (nonatomic,readonly) int disconnect_call_timeout_milli;                     //@synthesize disconnect_call_timeout_milli=_disconnect_call_timeout_milli - In the implementation block
@property (nonatomic,readonly) int signal_disconnect_call_timeout_milli;              //@synthesize signal_disconnect_call_timeout_milli=_signal_disconnect_call_timeout_milli - In the implementation block
@property (nonatomic,readonly) int show_call_ui_timeout_milli;                        //@synthesize show_call_ui_timeout_milli=_show_call_ui_timeout_milli - In the implementation block
@property (nonatomic,readonly) int voip_connection_prune_level;                       //@synthesize voip_connection_prune_level=_voip_connection_prune_level - In the implementation block
@property (nonatomic,readonly) int max_jitter_buffer;                                 //@synthesize max_jitter_buffer=_max_jitter_buffer - In the implementation block
@property (nonatomic,readonly) int webrtc_ack_timeout_milli;                          //@synthesize webrtc_ack_timeout_milli=_webrtc_ack_timeout_milli - In the implementation block
@property (nonatomic,readonly) int webrtc_number_retries_on_error;                    //@synthesize webrtc_number_retries_on_error=_webrtc_number_retries_on_error - In the implementation block
@property (nonatomic,readonly) int voip_audio_debug_sampling;                         //@synthesize voip_audio_debug_sampling=_voip_audio_debug_sampling - In the implementation block
+(id)experimentName;
+(id)parameterConfigurations;
+(BOOL)allowUserInterfaceIdiom:(long long)arg1 ;
-(int)min_supported_version;
-(int)outgoing_call_timeout_milli;
-(int)incoming_call_timeout_milli;
-(int)disconnect_call_timeout_milli;
-(int)signal_disconnect_call_timeout_milli;
-(int)show_call_ui_timeout_milli;
-(int)voip_connection_prune_level;
-(int)max_jitter_buffer;
-(int)webrtc_ack_timeout_milli;
-(int)webrtc_number_retries_on_error;
-(int)voip_audio_debug_sampling;
@end

