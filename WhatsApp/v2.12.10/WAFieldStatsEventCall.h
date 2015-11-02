/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@class NSString;

@interface WAFieldStatsEventCall : WAFieldStatsEvent {

	double _audio_get_frame_underflow_ps;
	double _audio_put_frame_overflow_ps;
	double _builtin_aec_available;
	double _builtin_aec_enabled;
	NSString* _builtin_aec_implementor;
	NSString* _builtin_aec_uuid;
	double _builtin_agc_available;
	double _builtin_ns_available;
	double _call_aec_mode;
	double _call_aec_offset;
	double _call_aec_tail_length;
	double _call_agc_mode;
	double _call_android_audio_mode;
	double _call_android_record_audio_preset;
	double _call_android_record_audio_source;
	double _call_audio_engine_type;
	double _call_calculated_ec_offset;
	double _call_calculated_ec_offset_stddev;
	double _call_echo_likelihood;
	double _call_from_ui;
	double _call_interrupted;
	double _call_network;
	double _call_network_subtype;
	double _call_ns_mode;
	double _call_p2p_disabled;
	NSString* _call_peer_app_version;
	double _call_peer_ipv4;
	NSString* _call_peer_platform;
	double _call_playback_buffer_size;
	double _call_playback_callback_stopped;
	double _call_record_buffer_size;
	double _call_record_callback_stopped;
	double _call_record_frames_ps;
	double _call_record_silence_ratio;
	double _call_relay_bind_status;
	NSString* _call_relay_server;
	double _call_result;
	double _call_sampling_rate;
	double _call_self_ipv4;
	double _call_server_nack_error_code;
	double _call_setup_error_type;
	double _call_side;
	double _call_sw_aec_mode;
	double _call_sw_aec_type;
	double _call_term_reason;
	NSString* _call_test_bucket;
	double _call_tones_detected_in_record;
	double _call_tones_detected_in_ringback;
	double _call_transition_count;
	double _call_transport;
	double _call_transport_p2p_to_relay_fallback_count;
	double _call_transport_relay_to_relay_fallback_count;
	double _call_user_rate;
	double _call_wakeup_source;
	double _caller_hungup_before_connected;
	double _encoder_comp_stepdowns;
	double _end_call_after_confirmation;
	double _long_connect;
	NSString* _native_samples_per_frame;
	NSString* _native_sampling_rate;
	double _number_of_processors;
	double _peer_call_result;
	double _peer_loc;
	double _peer_user_id;
	double _peer_xmpp_status;
	double _present_end_call_confirmation;
	double _record_circular_buffer_frame_count;
	NSString* _user_description;
	double _user_rating;
	double _xmpp_status;
	double _avg_clock_cb_t;
	double _avg_decode_t;
	double _avg_encode_t;
	double _avg_play_cb_t;
	double _avg_record_cb_t;
	double _avg_record_get_frame_t;
	double _avg_target_bitrate;
	double _call_accept_func_t;
	double _call_audio_restart_count;
	double _call_avg_rtt;
	double _call_ec_restart_count;
	double _call_echo_likelihood_before_ec;
	double _call_end_func_t;
	double _call_hist_echo_likelihood;
	double _call_last_rtt;
	double _call_max_rtt;
	double _call_min_rtt;
	double _call_offer_ack_timout;
	double _call_offer_elapsed_t;
	double _call_offer_receipt_delay;
	double _call_playback_frames_ps;
	double _call_playback_silence_ratio;
	double _call_recent_playback_frames_ps;
	double _call_recent_record_frames_ps;
	double _call_reject_func_t;
	double _call_relay_create_t;
	double _call_ringing_t;
	double _call_rx_avg_bitrate;
	double _call_rx_avg_jitter;
	double _call_rx_avg_loss_period;
	double _call_rx_max_jitter;
	double _call_rx_max_loss_period;
	double _call_rx_min_jitter;
	double _call_rx_min_loss_period;
	double _call_rx_pkt_loss_pct;
	double _call_rx_stopped_t;
	double _call_setup_t;
	double _call_sound_port_func_t;
	double _call_start_func_t;
	double _call_t;
	double _call_tx_avg_bitrate;
	double _call_tx_avg_jitter;
	double _call_tx_avg_loss_period;
	double _call_tx_max_jitter;
	double _call_tx_max_loss_period;
	double _call_tx_min_jitter;
	double _call_tx_min_loss_period;
	double _call_tx_pkt_loss_pct;
	double _jb_avg_delay;
	double _jb_discards;
	double _jb_empties;
	double _jb_gets;
	double _jb_last_delay;
	double _jb_max_delay;
	double _jb_min_delay;
	double _jb_puts;
	double _low_data_usage_bitrate;
	double _pings_sent;
	double _pongs_received;
	double _push_to_call_offer_delay;
	double _rc_maxrtt;
	double _rc_minrtt;
	double _rx_total_bitrate;
	double _rx_total_bytes;
	double _tx_total_bitrate;
	double _tx_total_bytes;

}

@property (assign,nonatomic) double audio_get_frame_underflow_ps;                              //@synthesize audio_get_frame_underflow_ps=_audio_get_frame_underflow_ps - In the implementation block
@property (assign,nonatomic) double audio_put_frame_overflow_ps;                               //@synthesize audio_put_frame_overflow_ps=_audio_put_frame_overflow_ps - In the implementation block
@property (assign,nonatomic) double builtin_aec_available;                                     //@synthesize builtin_aec_available=_builtin_aec_available - In the implementation block
@property (assign,nonatomic) double builtin_aec_enabled;                                       //@synthesize builtin_aec_enabled=_builtin_aec_enabled - In the implementation block
@property (nonatomic,retain) NSString * builtin_aec_implementor;                               //@synthesize builtin_aec_implementor=_builtin_aec_implementor - In the implementation block
@property (nonatomic,retain) NSString * builtin_aec_uuid;                                      //@synthesize builtin_aec_uuid=_builtin_aec_uuid - In the implementation block
@property (assign,nonatomic) double builtin_agc_available;                                     //@synthesize builtin_agc_available=_builtin_agc_available - In the implementation block
@property (assign,nonatomic) double builtin_ns_available;                                      //@synthesize builtin_ns_available=_builtin_ns_available - In the implementation block
@property (assign,nonatomic) double call_aec_mode;                                             //@synthesize call_aec_mode=_call_aec_mode - In the implementation block
@property (assign,nonatomic) double call_aec_offset;                                           //@synthesize call_aec_offset=_call_aec_offset - In the implementation block
@property (assign,nonatomic) double call_aec_tail_length;                                      //@synthesize call_aec_tail_length=_call_aec_tail_length - In the implementation block
@property (assign,nonatomic) double call_agc_mode;                                             //@synthesize call_agc_mode=_call_agc_mode - In the implementation block
@property (assign,nonatomic) double call_android_audio_mode;                                   //@synthesize call_android_audio_mode=_call_android_audio_mode - In the implementation block
@property (assign,nonatomic) double call_android_record_audio_preset;                          //@synthesize call_android_record_audio_preset=_call_android_record_audio_preset - In the implementation block
@property (assign,nonatomic) double call_android_record_audio_source;                          //@synthesize call_android_record_audio_source=_call_android_record_audio_source - In the implementation block
@property (assign,nonatomic) double call_audio_engine_type;                                    //@synthesize call_audio_engine_type=_call_audio_engine_type - In the implementation block
@property (assign,nonatomic) double call_calculated_ec_offset;                                 //@synthesize call_calculated_ec_offset=_call_calculated_ec_offset - In the implementation block
@property (assign,nonatomic) double call_calculated_ec_offset_stddev;                          //@synthesize call_calculated_ec_offset_stddev=_call_calculated_ec_offset_stddev - In the implementation block
@property (assign,nonatomic) double call_echo_likelihood;                                      //@synthesize call_echo_likelihood=_call_echo_likelihood - In the implementation block
@property (assign,nonatomic) double call_from_ui;                                              //@synthesize call_from_ui=_call_from_ui - In the implementation block
@property (assign,nonatomic) double call_interrupted;                                          //@synthesize call_interrupted=_call_interrupted - In the implementation block
@property (assign,nonatomic) double call_network;                                              //@synthesize call_network=_call_network - In the implementation block
@property (assign,nonatomic) double call_network_subtype;                                      //@synthesize call_network_subtype=_call_network_subtype - In the implementation block
@property (assign,nonatomic) double call_ns_mode;                                              //@synthesize call_ns_mode=_call_ns_mode - In the implementation block
@property (assign,nonatomic) double call_p2p_disabled;                                         //@synthesize call_p2p_disabled=_call_p2p_disabled - In the implementation block
@property (nonatomic,retain) NSString * call_peer_app_version;                                 //@synthesize call_peer_app_version=_call_peer_app_version - In the implementation block
@property (assign,nonatomic) double call_peer_ipv4;                                            //@synthesize call_peer_ipv4=_call_peer_ipv4 - In the implementation block
@property (nonatomic,retain) NSString * call_peer_platform;                                    //@synthesize call_peer_platform=_call_peer_platform - In the implementation block
@property (assign,nonatomic) double call_playback_buffer_size;                                 //@synthesize call_playback_buffer_size=_call_playback_buffer_size - In the implementation block
@property (assign,nonatomic) double call_playback_callback_stopped;                            //@synthesize call_playback_callback_stopped=_call_playback_callback_stopped - In the implementation block
@property (assign,nonatomic) double call_record_buffer_size;                                   //@synthesize call_record_buffer_size=_call_record_buffer_size - In the implementation block
@property (assign,nonatomic) double call_record_callback_stopped;                              //@synthesize call_record_callback_stopped=_call_record_callback_stopped - In the implementation block
@property (assign,nonatomic) double call_record_frames_ps;                                     //@synthesize call_record_frames_ps=_call_record_frames_ps - In the implementation block
@property (assign,nonatomic) double call_record_silence_ratio;                                 //@synthesize call_record_silence_ratio=_call_record_silence_ratio - In the implementation block
@property (assign,nonatomic) double call_relay_bind_status;                                    //@synthesize call_relay_bind_status=_call_relay_bind_status - In the implementation block
@property (nonatomic,retain) NSString * call_relay_server;                                     //@synthesize call_relay_server=_call_relay_server - In the implementation block
@property (assign,nonatomic) double call_result;                                               //@synthesize call_result=_call_result - In the implementation block
@property (assign,nonatomic) double call_sampling_rate;                                        //@synthesize call_sampling_rate=_call_sampling_rate - In the implementation block
@property (assign,nonatomic) double call_self_ipv4;                                            //@synthesize call_self_ipv4=_call_self_ipv4 - In the implementation block
@property (assign,nonatomic) double call_server_nack_error_code;                               //@synthesize call_server_nack_error_code=_call_server_nack_error_code - In the implementation block
@property (assign,nonatomic) double call_setup_error_type;                                     //@synthesize call_setup_error_type=_call_setup_error_type - In the implementation block
@property (assign,nonatomic) double call_side;                                                 //@synthesize call_side=_call_side - In the implementation block
@property (assign,nonatomic) double call_sw_aec_mode;                                          //@synthesize call_sw_aec_mode=_call_sw_aec_mode - In the implementation block
@property (assign,nonatomic) double call_sw_aec_type;                                          //@synthesize call_sw_aec_type=_call_sw_aec_type - In the implementation block
@property (assign,nonatomic) double call_term_reason;                                          //@synthesize call_term_reason=_call_term_reason - In the implementation block
@property (nonatomic,retain) NSString * call_test_bucket;                                      //@synthesize call_test_bucket=_call_test_bucket - In the implementation block
@property (assign,nonatomic) double call_tones_detected_in_record;                             //@synthesize call_tones_detected_in_record=_call_tones_detected_in_record - In the implementation block
@property (assign,nonatomic) double call_tones_detected_in_ringback;                           //@synthesize call_tones_detected_in_ringback=_call_tones_detected_in_ringback - In the implementation block
@property (assign,nonatomic) double call_transition_count;                                     //@synthesize call_transition_count=_call_transition_count - In the implementation block
@property (assign,nonatomic) double call_transport;                                            //@synthesize call_transport=_call_transport - In the implementation block
@property (assign,nonatomic) double call_transport_p2p_to_relay_fallback_count;                //@synthesize call_transport_p2p_to_relay_fallback_count=_call_transport_p2p_to_relay_fallback_count - In the implementation block
@property (assign,nonatomic) double call_transport_relay_to_relay_fallback_count;              //@synthesize call_transport_relay_to_relay_fallback_count=_call_transport_relay_to_relay_fallback_count - In the implementation block
@property (assign,nonatomic) double call_user_rate;                                            //@synthesize call_user_rate=_call_user_rate - In the implementation block
@property (assign,nonatomic) double call_wakeup_source;                                        //@synthesize call_wakeup_source=_call_wakeup_source - In the implementation block
@property (assign,nonatomic) double caller_hungup_before_connected;                            //@synthesize caller_hungup_before_connected=_caller_hungup_before_connected - In the implementation block
@property (assign,nonatomic) double encoder_comp_stepdowns;                                    //@synthesize encoder_comp_stepdowns=_encoder_comp_stepdowns - In the implementation block
@property (assign,nonatomic) double end_call_after_confirmation;                               //@synthesize end_call_after_confirmation=_end_call_after_confirmation - In the implementation block
@property (assign,nonatomic) double long_connect;                                              //@synthesize long_connect=_long_connect - In the implementation block
@property (nonatomic,retain) NSString * native_samples_per_frame;                              //@synthesize native_samples_per_frame=_native_samples_per_frame - In the implementation block
@property (nonatomic,retain) NSString * native_sampling_rate;                                  //@synthesize native_sampling_rate=_native_sampling_rate - In the implementation block
@property (assign,nonatomic) double number_of_processors;                                      //@synthesize number_of_processors=_number_of_processors - In the implementation block
@property (assign,nonatomic) double peer_call_result;                                          //@synthesize peer_call_result=_peer_call_result - In the implementation block
@property (assign,nonatomic) double peer_loc;                                                  //@synthesize peer_loc=_peer_loc - In the implementation block
@property (assign,nonatomic) double peer_user_id;                                              //@synthesize peer_user_id=_peer_user_id - In the implementation block
@property (assign,nonatomic) double peer_xmpp_status;                                          //@synthesize peer_xmpp_status=_peer_xmpp_status - In the implementation block
@property (assign,nonatomic) double present_end_call_confirmation;                             //@synthesize present_end_call_confirmation=_present_end_call_confirmation - In the implementation block
@property (assign,nonatomic) double record_circular_buffer_frame_count;                        //@synthesize record_circular_buffer_frame_count=_record_circular_buffer_frame_count - In the implementation block
@property (nonatomic,retain) NSString * user_description;                                      //@synthesize user_description=_user_description - In the implementation block
@property (assign,nonatomic) double user_rating;                                               //@synthesize user_rating=_user_rating - In the implementation block
@property (assign,nonatomic) double xmpp_status;                                               //@synthesize xmpp_status=_xmpp_status - In the implementation block
@property (assign,nonatomic) double avg_clock_cb_t;                                            //@synthesize avg_clock_cb_t=_avg_clock_cb_t - In the implementation block
@property (assign,nonatomic) double avg_decode_t;                                              //@synthesize avg_decode_t=_avg_decode_t - In the implementation block
@property (assign,nonatomic) double avg_encode_t;                                              //@synthesize avg_encode_t=_avg_encode_t - In the implementation block
@property (assign,nonatomic) double avg_play_cb_t;                                             //@synthesize avg_play_cb_t=_avg_play_cb_t - In the implementation block
@property (assign,nonatomic) double avg_record_cb_t;                                           //@synthesize avg_record_cb_t=_avg_record_cb_t - In the implementation block
@property (assign,nonatomic) double avg_record_get_frame_t;                                    //@synthesize avg_record_get_frame_t=_avg_record_get_frame_t - In the implementation block
@property (assign,nonatomic) double avg_target_bitrate;                                        //@synthesize avg_target_bitrate=_avg_target_bitrate - In the implementation block
@property (assign,nonatomic) double call_accept_func_t;                                        //@synthesize call_accept_func_t=_call_accept_func_t - In the implementation block
@property (assign,nonatomic) double call_audio_restart_count;                                  //@synthesize call_audio_restart_count=_call_audio_restart_count - In the implementation block
@property (assign,nonatomic) double call_avg_rtt;                                              //@synthesize call_avg_rtt=_call_avg_rtt - In the implementation block
@property (assign,nonatomic) double call_ec_restart_count;                                     //@synthesize call_ec_restart_count=_call_ec_restart_count - In the implementation block
@property (assign,nonatomic) double call_echo_likelihood_before_ec;                            //@synthesize call_echo_likelihood_before_ec=_call_echo_likelihood_before_ec - In the implementation block
@property (assign,nonatomic) double call_end_func_t;                                           //@synthesize call_end_func_t=_call_end_func_t - In the implementation block
@property (assign,nonatomic) double call_hist_echo_likelihood;                                 //@synthesize call_hist_echo_likelihood=_call_hist_echo_likelihood - In the implementation block
@property (assign,nonatomic) double call_last_rtt;                                             //@synthesize call_last_rtt=_call_last_rtt - In the implementation block
@property (assign,nonatomic) double call_max_rtt;                                              //@synthesize call_max_rtt=_call_max_rtt - In the implementation block
@property (assign,nonatomic) double call_min_rtt;                                              //@synthesize call_min_rtt=_call_min_rtt - In the implementation block
@property (assign,nonatomic) double call_offer_ack_timout;                                     //@synthesize call_offer_ack_timout=_call_offer_ack_timout - In the implementation block
@property (assign,nonatomic) double call_offer_elapsed_t;                                      //@synthesize call_offer_elapsed_t=_call_offer_elapsed_t - In the implementation block
@property (assign,nonatomic) double call_offer_receipt_delay;                                  //@synthesize call_offer_receipt_delay=_call_offer_receipt_delay - In the implementation block
@property (assign,nonatomic) double call_playback_frames_ps;                                   //@synthesize call_playback_frames_ps=_call_playback_frames_ps - In the implementation block
@property (assign,nonatomic) double call_playback_silence_ratio;                               //@synthesize call_playback_silence_ratio=_call_playback_silence_ratio - In the implementation block
@property (assign,nonatomic) double call_recent_playback_frames_ps;                            //@synthesize call_recent_playback_frames_ps=_call_recent_playback_frames_ps - In the implementation block
@property (assign,nonatomic) double call_recent_record_frames_ps;                              //@synthesize call_recent_record_frames_ps=_call_recent_record_frames_ps - In the implementation block
@property (assign,nonatomic) double call_reject_func_t;                                        //@synthesize call_reject_func_t=_call_reject_func_t - In the implementation block
@property (assign,nonatomic) double call_relay_create_t;                                       //@synthesize call_relay_create_t=_call_relay_create_t - In the implementation block
@property (assign,nonatomic) double call_ringing_t;                                            //@synthesize call_ringing_t=_call_ringing_t - In the implementation block
@property (assign,nonatomic) double call_rx_avg_bitrate;                                       //@synthesize call_rx_avg_bitrate=_call_rx_avg_bitrate - In the implementation block
@property (assign,nonatomic) double call_rx_avg_jitter;                                        //@synthesize call_rx_avg_jitter=_call_rx_avg_jitter - In the implementation block
@property (assign,nonatomic) double call_rx_avg_loss_period;                                   //@synthesize call_rx_avg_loss_period=_call_rx_avg_loss_period - In the implementation block
@property (assign,nonatomic) double call_rx_max_jitter;                                        //@synthesize call_rx_max_jitter=_call_rx_max_jitter - In the implementation block
@property (assign,nonatomic) double call_rx_max_loss_period;                                   //@synthesize call_rx_max_loss_period=_call_rx_max_loss_period - In the implementation block
@property (assign,nonatomic) double call_rx_min_jitter;                                        //@synthesize call_rx_min_jitter=_call_rx_min_jitter - In the implementation block
@property (assign,nonatomic) double call_rx_min_loss_period;                                   //@synthesize call_rx_min_loss_period=_call_rx_min_loss_period - In the implementation block
@property (assign,nonatomic) double call_rx_pkt_loss_pct;                                      //@synthesize call_rx_pkt_loss_pct=_call_rx_pkt_loss_pct - In the implementation block
@property (assign,nonatomic) double call_rx_stopped_t;                                         //@synthesize call_rx_stopped_t=_call_rx_stopped_t - In the implementation block
@property (assign,nonatomic) double call_setup_t;                                              //@synthesize call_setup_t=_call_setup_t - In the implementation block
@property (assign,nonatomic) double call_sound_port_func_t;                                    //@synthesize call_sound_port_func_t=_call_sound_port_func_t - In the implementation block
@property (assign,nonatomic) double call_start_func_t;                                         //@synthesize call_start_func_t=_call_start_func_t - In the implementation block
@property (assign,nonatomic) double call_t;                                                    //@synthesize call_t=_call_t - In the implementation block
@property (assign,nonatomic) double call_tx_avg_bitrate;                                       //@synthesize call_tx_avg_bitrate=_call_tx_avg_bitrate - In the implementation block
@property (assign,nonatomic) double call_tx_avg_jitter;                                        //@synthesize call_tx_avg_jitter=_call_tx_avg_jitter - In the implementation block
@property (assign,nonatomic) double call_tx_avg_loss_period;                                   //@synthesize call_tx_avg_loss_period=_call_tx_avg_loss_period - In the implementation block
@property (assign,nonatomic) double call_tx_max_jitter;                                        //@synthesize call_tx_max_jitter=_call_tx_max_jitter - In the implementation block
@property (assign,nonatomic) double call_tx_max_loss_period;                                   //@synthesize call_tx_max_loss_period=_call_tx_max_loss_period - In the implementation block
@property (assign,nonatomic) double call_tx_min_jitter;                                        //@synthesize call_tx_min_jitter=_call_tx_min_jitter - In the implementation block
@property (assign,nonatomic) double call_tx_min_loss_period;                                   //@synthesize call_tx_min_loss_period=_call_tx_min_loss_period - In the implementation block
@property (assign,nonatomic) double call_tx_pkt_loss_pct;                                      //@synthesize call_tx_pkt_loss_pct=_call_tx_pkt_loss_pct - In the implementation block
@property (assign,nonatomic) double jb_avg_delay;                                              //@synthesize jb_avg_delay=_jb_avg_delay - In the implementation block
@property (assign,nonatomic) double jb_discards;                                               //@synthesize jb_discards=_jb_discards - In the implementation block
@property (assign,nonatomic) double jb_empties;                                                //@synthesize jb_empties=_jb_empties - In the implementation block
@property (assign,nonatomic) double jb_gets;                                                   //@synthesize jb_gets=_jb_gets - In the implementation block
@property (assign,nonatomic) double jb_last_delay;                                             //@synthesize jb_last_delay=_jb_last_delay - In the implementation block
@property (assign,nonatomic) double jb_max_delay;                                              //@synthesize jb_max_delay=_jb_max_delay - In the implementation block
@property (assign,nonatomic) double jb_min_delay;                                              //@synthesize jb_min_delay=_jb_min_delay - In the implementation block
@property (assign,nonatomic) double jb_puts;                                                   //@synthesize jb_puts=_jb_puts - In the implementation block
@property (assign,nonatomic) double low_data_usage_bitrate;                                    //@synthesize low_data_usage_bitrate=_low_data_usage_bitrate - In the implementation block
@property (assign,nonatomic) double pings_sent;                                                //@synthesize pings_sent=_pings_sent - In the implementation block
@property (assign,nonatomic) double pongs_received;                                            //@synthesize pongs_received=_pongs_received - In the implementation block
@property (assign,nonatomic) double push_to_call_offer_delay;                                  //@synthesize push_to_call_offer_delay=_push_to_call_offer_delay - In the implementation block
@property (assign,nonatomic) double rc_maxrtt;                                                 //@synthesize rc_maxrtt=_rc_maxrtt - In the implementation block
@property (assign,nonatomic) double rc_minrtt;                                                 //@synthesize rc_minrtt=_rc_minrtt - In the implementation block
@property (assign,nonatomic) double rx_total_bitrate;                                          //@synthesize rx_total_bitrate=_rx_total_bitrate - In the implementation block
@property (assign,nonatomic) double rx_total_bytes;                                            //@synthesize rx_total_bytes=_rx_total_bytes - In the implementation block
@property (assign,nonatomic) double tx_total_bitrate;                                          //@synthesize tx_total_bitrate=_tx_total_bitrate - In the implementation block
@property (assign,nonatomic) double tx_total_bytes;                                            //@synthesize tx_total_bytes=_tx_total_bytes - In the implementation block
-(double)audio_get_frame_underflow_ps;
-(void)setAudio_get_frame_underflow_ps:(double)arg1 ;
-(double)audio_put_frame_overflow_ps;
-(void)setAudio_put_frame_overflow_ps:(double)arg1 ;
-(double)builtin_aec_available;
-(void)setBuiltin_aec_available:(double)arg1 ;
-(double)builtin_aec_enabled;
-(void)setBuiltin_aec_enabled:(double)arg1 ;
-(NSString *)builtin_aec_implementor;
-(void)setBuiltin_aec_implementor:(NSString *)arg1 ;
-(NSString *)builtin_aec_uuid;
-(void)setBuiltin_aec_uuid:(NSString *)arg1 ;
-(double)builtin_agc_available;
-(void)setBuiltin_agc_available:(double)arg1 ;
-(double)builtin_ns_available;
-(void)setBuiltin_ns_available:(double)arg1 ;
-(double)call_aec_mode;
-(void)setCall_aec_mode:(double)arg1 ;
-(double)call_aec_offset;
-(void)setCall_aec_offset:(double)arg1 ;
-(double)call_aec_tail_length;
-(void)setCall_aec_tail_length:(double)arg1 ;
-(double)call_agc_mode;
-(void)setCall_agc_mode:(double)arg1 ;
-(double)call_android_audio_mode;
-(void)setCall_android_audio_mode:(double)arg1 ;
-(double)call_android_record_audio_preset;
-(void)setCall_android_record_audio_preset:(double)arg1 ;
-(double)call_android_record_audio_source;
-(void)setCall_android_record_audio_source:(double)arg1 ;
-(double)call_audio_engine_type;
-(void)setCall_audio_engine_type:(double)arg1 ;
-(double)call_calculated_ec_offset;
-(void)setCall_calculated_ec_offset:(double)arg1 ;
-(double)call_calculated_ec_offset_stddev;
-(void)setCall_calculated_ec_offset_stddev:(double)arg1 ;
-(double)call_echo_likelihood;
-(void)setCall_echo_likelihood:(double)arg1 ;
-(double)call_from_ui;
-(void)setCall_from_ui:(double)arg1 ;
-(double)call_interrupted;
-(void)setCall_interrupted:(double)arg1 ;
-(double)call_network;
-(void)setCall_network:(double)arg1 ;
-(double)call_network_subtype;
-(void)setCall_network_subtype:(double)arg1 ;
-(double)call_ns_mode;
-(void)setCall_ns_mode:(double)arg1 ;
-(double)call_p2p_disabled;
-(void)setCall_p2p_disabled:(double)arg1 ;
-(NSString *)call_peer_app_version;
-(void)setCall_peer_app_version:(NSString *)arg1 ;
-(double)call_peer_ipv4;
-(void)setCall_peer_ipv4:(double)arg1 ;
-(NSString *)call_peer_platform;
-(void)setCall_peer_platform:(NSString *)arg1 ;
-(double)call_playback_buffer_size;
-(void)setCall_playback_buffer_size:(double)arg1 ;
-(double)call_playback_callback_stopped;
-(void)setCall_playback_callback_stopped:(double)arg1 ;
-(double)call_record_buffer_size;
-(void)setCall_record_buffer_size:(double)arg1 ;
-(double)call_record_callback_stopped;
-(void)setCall_record_callback_stopped:(double)arg1 ;
-(double)call_record_frames_ps;
-(void)setCall_record_frames_ps:(double)arg1 ;
-(double)call_record_silence_ratio;
-(void)setCall_record_silence_ratio:(double)arg1 ;
-(double)call_relay_bind_status;
-(void)setCall_relay_bind_status:(double)arg1 ;
-(NSString *)call_relay_server;
-(void)setCall_relay_server:(NSString *)arg1 ;
-(double)call_result;
-(void)setCall_result:(double)arg1 ;
-(double)call_sampling_rate;
-(void)setCall_sampling_rate:(double)arg1 ;
-(double)call_self_ipv4;
-(void)setCall_self_ipv4:(double)arg1 ;
-(double)call_server_nack_error_code;
-(void)setCall_server_nack_error_code:(double)arg1 ;
-(double)call_setup_error_type;
-(void)setCall_setup_error_type:(double)arg1 ;
-(double)call_side;
-(void)setCall_side:(double)arg1 ;
-(double)call_sw_aec_mode;
-(void)setCall_sw_aec_mode:(double)arg1 ;
-(double)call_sw_aec_type;
-(void)setCall_sw_aec_type:(double)arg1 ;
-(double)call_term_reason;
-(void)setCall_term_reason:(double)arg1 ;
-(NSString *)call_test_bucket;
-(void)setCall_test_bucket:(NSString *)arg1 ;
-(double)call_tones_detected_in_record;
-(void)setCall_tones_detected_in_record:(double)arg1 ;
-(double)call_tones_detected_in_ringback;
-(void)setCall_tones_detected_in_ringback:(double)arg1 ;
-(double)call_transition_count;
-(void)setCall_transition_count:(double)arg1 ;
-(double)call_transport;
-(void)setCall_transport:(double)arg1 ;
-(double)call_transport_p2p_to_relay_fallback_count;
-(void)setCall_transport_p2p_to_relay_fallback_count:(double)arg1 ;
-(double)call_transport_relay_to_relay_fallback_count;
-(void)setCall_transport_relay_to_relay_fallback_count:(double)arg1 ;
-(double)call_user_rate;
-(void)setCall_user_rate:(double)arg1 ;
-(double)call_wakeup_source;
-(void)setCall_wakeup_source:(double)arg1 ;
-(double)caller_hungup_before_connected;
-(void)setCaller_hungup_before_connected:(double)arg1 ;
-(double)encoder_comp_stepdowns;
-(void)setEncoder_comp_stepdowns:(double)arg1 ;
-(double)end_call_after_confirmation;
-(void)setEnd_call_after_confirmation:(double)arg1 ;
-(double)long_connect;
-(void)setLong_connect:(double)arg1 ;
-(NSString *)native_samples_per_frame;
-(void)setNative_samples_per_frame:(NSString *)arg1 ;
-(NSString *)native_sampling_rate;
-(void)setNative_sampling_rate:(NSString *)arg1 ;
-(double)number_of_processors;
-(void)setNumber_of_processors:(double)arg1 ;
-(double)peer_call_result;
-(void)setPeer_call_result:(double)arg1 ;
-(double)peer_loc;
-(void)setPeer_loc:(double)arg1 ;
-(double)peer_user_id;
-(void)setPeer_user_id:(double)arg1 ;
-(double)peer_xmpp_status;
-(void)setPeer_xmpp_status:(double)arg1 ;
-(double)present_end_call_confirmation;
-(void)setPresent_end_call_confirmation:(double)arg1 ;
-(double)record_circular_buffer_frame_count;
-(void)setRecord_circular_buffer_frame_count:(double)arg1 ;
-(NSString *)user_description;
-(void)setUser_description:(NSString *)arg1 ;
-(double)user_rating;
-(void)setUser_rating:(double)arg1 ;
-(double)xmpp_status;
-(void)setXmpp_status:(double)arg1 ;
-(double)avg_clock_cb_t;
-(void)setAvg_clock_cb_t:(double)arg1 ;
-(double)avg_decode_t;
-(void)setAvg_decode_t:(double)arg1 ;
-(double)avg_encode_t;
-(void)setAvg_encode_t:(double)arg1 ;
-(double)avg_play_cb_t;
-(void)setAvg_play_cb_t:(double)arg1 ;
-(double)avg_record_cb_t;
-(void)setAvg_record_cb_t:(double)arg1 ;
-(double)avg_record_get_frame_t;
-(void)setAvg_record_get_frame_t:(double)arg1 ;
-(double)avg_target_bitrate;
-(void)setAvg_target_bitrate:(double)arg1 ;
-(double)call_accept_func_t;
-(void)setCall_accept_func_t:(double)arg1 ;
-(double)call_audio_restart_count;
-(void)setCall_audio_restart_count:(double)arg1 ;
-(double)call_avg_rtt;
-(void)setCall_avg_rtt:(double)arg1 ;
-(double)call_ec_restart_count;
-(void)setCall_ec_restart_count:(double)arg1 ;
-(double)call_echo_likelihood_before_ec;
-(void)setCall_echo_likelihood_before_ec:(double)arg1 ;
-(double)call_end_func_t;
-(void)setCall_end_func_t:(double)arg1 ;
-(double)call_hist_echo_likelihood;
-(void)setCall_hist_echo_likelihood:(double)arg1 ;
-(double)call_last_rtt;
-(void)setCall_last_rtt:(double)arg1 ;
-(double)call_max_rtt;
-(void)setCall_max_rtt:(double)arg1 ;
-(double)call_min_rtt;
-(void)setCall_min_rtt:(double)arg1 ;
-(double)call_offer_ack_timout;
-(void)setCall_offer_ack_timout:(double)arg1 ;
-(double)call_offer_elapsed_t;
-(void)setCall_offer_elapsed_t:(double)arg1 ;
-(double)call_offer_receipt_delay;
-(void)setCall_offer_receipt_delay:(double)arg1 ;
-(double)call_playback_frames_ps;
-(void)setCall_playback_frames_ps:(double)arg1 ;
-(double)call_playback_silence_ratio;
-(void)setCall_playback_silence_ratio:(double)arg1 ;
-(double)call_recent_playback_frames_ps;
-(void)setCall_recent_playback_frames_ps:(double)arg1 ;
-(double)call_recent_record_frames_ps;
-(void)setCall_recent_record_frames_ps:(double)arg1 ;
-(double)call_reject_func_t;
-(void)setCall_reject_func_t:(double)arg1 ;
-(double)call_relay_create_t;
-(void)setCall_relay_create_t:(double)arg1 ;
-(double)call_ringing_t;
-(void)setCall_ringing_t:(double)arg1 ;
-(double)call_rx_avg_bitrate;
-(void)setCall_rx_avg_bitrate:(double)arg1 ;
-(double)call_rx_avg_jitter;
-(void)setCall_rx_avg_jitter:(double)arg1 ;
-(double)call_rx_avg_loss_period;
-(void)setCall_rx_avg_loss_period:(double)arg1 ;
-(double)call_rx_max_jitter;
-(void)setCall_rx_max_jitter:(double)arg1 ;
-(double)call_rx_max_loss_period;
-(void)setCall_rx_max_loss_period:(double)arg1 ;
-(double)call_rx_min_jitter;
-(void)setCall_rx_min_jitter:(double)arg1 ;
-(double)call_rx_min_loss_period;
-(void)setCall_rx_min_loss_period:(double)arg1 ;
-(double)call_rx_pkt_loss_pct;
-(void)setCall_rx_pkt_loss_pct:(double)arg1 ;
-(double)call_rx_stopped_t;
-(void)setCall_rx_stopped_t:(double)arg1 ;
-(double)call_setup_t;
-(void)setCall_setup_t:(double)arg1 ;
-(double)call_sound_port_func_t;
-(void)setCall_sound_port_func_t:(double)arg1 ;
-(double)call_start_func_t;
-(void)setCall_start_func_t:(double)arg1 ;
-(double)call_t;
-(void)setCall_t:(double)arg1 ;
-(double)call_tx_avg_bitrate;
-(void)setCall_tx_avg_bitrate:(double)arg1 ;
-(double)call_tx_avg_jitter;
-(void)setCall_tx_avg_jitter:(double)arg1 ;
-(double)call_tx_avg_loss_period;
-(void)setCall_tx_avg_loss_period:(double)arg1 ;
-(double)call_tx_max_jitter;
-(void)setCall_tx_max_jitter:(double)arg1 ;
-(double)call_tx_max_loss_period;
-(void)setCall_tx_max_loss_period:(double)arg1 ;
-(double)call_tx_min_jitter;
-(void)setCall_tx_min_jitter:(double)arg1 ;
-(double)call_tx_min_loss_period;
-(void)setCall_tx_min_loss_period:(double)arg1 ;
-(double)call_tx_pkt_loss_pct;
-(void)setCall_tx_pkt_loss_pct:(double)arg1 ;
-(double)jb_avg_delay;
-(void)setJb_avg_delay:(double)arg1 ;
-(double)jb_discards;
-(void)setJb_discards:(double)arg1 ;
-(double)jb_empties;
-(void)setJb_empties:(double)arg1 ;
-(double)jb_gets;
-(void)setJb_gets:(double)arg1 ;
-(double)jb_last_delay;
-(void)setJb_last_delay:(double)arg1 ;
-(double)jb_max_delay;
-(void)setJb_max_delay:(double)arg1 ;
-(double)jb_min_delay;
-(void)setJb_min_delay:(double)arg1 ;
-(double)jb_puts;
-(void)setJb_puts:(double)arg1 ;
-(double)low_data_usage_bitrate;
-(void)setLow_data_usage_bitrate:(double)arg1 ;
-(double)pings_sent;
-(void)setPings_sent:(double)arg1 ;
-(double)pongs_received;
-(void)setPongs_received:(double)arg1 ;
-(double)push_to_call_offer_delay;
-(void)setPush_to_call_offer_delay:(double)arg1 ;
-(double)rc_maxrtt;
-(void)setRc_maxrtt:(double)arg1 ;
-(double)rc_minrtt;
-(void)setRc_minrtt:(double)arg1 ;
-(double)rx_total_bitrate;
-(void)setRx_total_bitrate:(double)arg1 ;
-(double)rx_total_bytes;
-(void)setRx_total_bytes:(double)arg1 ;
-(double)tx_total_bitrate;
-(void)setTx_total_bitrate:(double)arg1 ;
-(double)tx_total_bytes;
-(void)setTx_total_bytes:(double)arg1 ;
-(id)init;
-(void)submit;
@end
