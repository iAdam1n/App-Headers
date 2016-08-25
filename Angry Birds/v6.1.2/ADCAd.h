/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/ADCViewElement.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol AdColonyNativeAdEngagementDelegate, AdColonyAdDelegate;
@class ADCViewElement, ADCV4VCHolding, NSDictionary, UIViewController, NSString, NSDate, NSNumber, ADCZone;

@interface ADCAd : ADCViewElement <SKStoreProductViewControllerDelegate> {

	BOOL _status_bar_hidden;
	ADCViewElement* _active_child;
	ADCViewElement* _last_active_child;
	ADCV4VCHolding* _v4vc_holding;
	BOOL _did_reward;
	BOOL _did_reward_delegate_called;
	BOOL _enable_in_app_store;
	NSDictionary* _tracking;
	NSDictionary* _third_party_tracking;
	BOOL _final_action;
	UIViewController* _store_view_controller;
	BOOL _v4iap_enabled;
	NSString* _v4iap_product_ID;
	NSString* _v4iap_message;
	int _v4iap_quantity;
	int _ad_slot;
	unsigned long long _view_filter;
	NSDictionary* _native_info;
	double _aspectRatio;
	long long _last_state;
	double _playbackStartTime;
	BOOL _show_pre_popup;
	BOOL _show_post_popup;
	BOOL _startedFromNative;
	id<AdColonyNativeAdEngagementDelegate> native_ad_engagement_delegate;
	BOOL _canceled;
	BOOL _ninety_percent_video_playback;
	NSDate* _expiration;
	BOOL _closed;
	BOOL _expired;
	BOOL _disabled_in_backup_config;
	BOOL _contracted;
	BOOL _full_screen;
	BOOL _house_ad;
	BOOL _reward;
	BOOL _completed_first_view;
	BOOL _video_events_on_replays;
	BOOL _ipod_music_playing;
	BOOL _logged_ready;
	BOOL _html5_endcard_loading_started;
	BOOL _html5_endcard_loading_finished;
	BOOL _html5_endcard_loading_timeout;
	BOOL _endcard_dissolved;
	int _video_credit_balance_at_start;
	long long _state;
	NSString* _uuid;
	double _net_earnings;
	NSNumber* _ad_id;
	NSNumber* _ad_group_id;
	NSNumber* _ad_campaign_id;
	NSString* _title;
	ADCZone* _active_zone;
	NSString* _session_guid;
	NSDate* _html5_endcard_loading_start;
	double _html5_endcard_loading_time;
	NSDate* _endcard_time_last_update;
	double _endcard_time_spent;
	NSString* _iap_progress_string;
	id<AdColonyAdDelegate> _takeover_delegate;

}

@property (nonatomic,readonly) long long state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL expired;                                            //@synthesize expired=_expired - In the implementation block
@property (assign,nonatomic) BOOL disabled_in_backup_config;                          //@synthesize disabled_in_backup_config=_disabled_in_backup_config - In the implementation block
@property (nonatomic,readonly) BOOL contracted;                                       //@synthesize contracted=_contracted - In the implementation block
@property (nonatomic,readonly) BOOL full_screen;                                      //@synthesize full_screen=_full_screen - In the implementation block
@property (nonatomic,readonly) BOOL house_ad;                                         //@synthesize house_ad=_house_ad - In the implementation block
@property (nonatomic,readonly) BOOL reward;                                           //@synthesize reward=_reward - In the implementation block
@property (nonatomic,readonly) BOOL completed_first_view;                             //@synthesize completed_first_view=_completed_first_view - In the implementation block
@property (nonatomic,readonly) BOOL video_events_on_replays;                          //@synthesize video_events_on_replays=_video_events_on_replays - In the implementation block
@property (nonatomic,readonly) double net_earnings;                                   //@synthesize net_earnings=_net_earnings - In the implementation block
@property (nonatomic,readonly) BOOL ipod_music_playing;                               //@synthesize ipod_music_playing=_ipod_music_playing - In the implementation block
@property (nonatomic,readonly) NSNumber * ad_id;                                      //@synthesize ad_id=_ad_id - In the implementation block
@property (nonatomic,readonly) NSNumber * ad_group_id;                                //@synthesize ad_group_id=_ad_group_id - In the implementation block
@property (nonatomic,readonly) NSNumber * ad_campaign_id;                             //@synthesize ad_campaign_id=_ad_campaign_id - In the implementation block
@property (nonatomic,readonly) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) ADCZone * active_zone;                                 //@synthesize active_zone=_active_zone - In the implementation block
@property (nonatomic,readonly) int video_credit_balance_at_start;                     //@synthesize video_credit_balance_at_start=_video_credit_balance_at_start - In the implementation block
@property (nonatomic,readonly) NSString * session_guid;                               //@synthesize session_guid=_session_guid - In the implementation block
@property (assign,nonatomic) BOOL logged_ready;                                       //@synthesize logged_ready=_logged_ready - In the implementation block
@property (assign,nonatomic) BOOL html5_endcard_loading_started;                      //@synthesize html5_endcard_loading_started=_html5_endcard_loading_started - In the implementation block
@property (assign,nonatomic) BOOL html5_endcard_loading_finished;                     //@synthesize html5_endcard_loading_finished=_html5_endcard_loading_finished - In the implementation block
@property (nonatomic,retain) NSDate * html5_endcard_loading_start;                    //@synthesize html5_endcard_loading_start=_html5_endcard_loading_start - In the implementation block
@property (assign,nonatomic) double html5_endcard_loading_time;                       //@synthesize html5_endcard_loading_time=_html5_endcard_loading_time - In the implementation block
@property (nonatomic,retain) NSDate * endcard_time_last_update;                       //@synthesize endcard_time_last_update=_endcard_time_last_update - In the implementation block
@property (assign,nonatomic) double endcard_time_spent;                               //@synthesize endcard_time_spent=_endcard_time_spent - In the implementation block
@property (assign,nonatomic) BOOL html5_endcard_loading_timeout;                      //@synthesize html5_endcard_loading_timeout=_html5_endcard_loading_timeout - In the implementation block
@property (assign,nonatomic) BOOL endcard_dissolved;                                  //@synthesize endcard_dissolved=_endcard_dissolved - In the implementation block
@property (nonatomic,readonly) NSString * iap_progress_string;                        //@synthesize iap_progress_string=_iap_progress_string - In the implementation block
@property (nonatomic,readonly) id<AdColonyAdDelegate> takeover_delegate;              //@synthesize takeover_delegate=_takeover_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showVideo;
-(id)v4iapConfig;
-(void)startInZone:(id)arg1 existingSessionID:(id)arg2 atTime:(double)arg3 startedFromNative:(BOOL)arg4 asReplay:(BOOL)arg5 adSlot:(int)arg6 forReward:(BOOL)arg7 withRewardCallback:(BOOL)arg8 withDelegate:(id)arg9 withNativeAdEngagementDelegate:(id)arg10 showPrePopup:(BOOL)arg11 showPostPopup:(BOOL)arg12 ;
-(void)onExpiredWithZoneID:(id)arg1 ;
-(void)resumeAd;
-(void)pauseAd:(BOOL)arg1 ;
-(void)cancelAd;
-(void)setEndcard_time_spent:(double)arg1 ;
-(void)setEndcard_time_last_update:(NSDate *)arg1 ;
-(void)startInMainThread;
-(void)showV4VCPrePopup;
-(void)showCompanionAd;
-(BOOL)pushChild:(id)arg1 ;
-(NSDate *)endcard_time_last_update;
-(double)endcard_time_spent;
-(void)onEventVideoSkip;
-(void)onEventContinue;
-(void)showV4VCPostPopup;
-(void)onEventAdCancel;
-(void)onEventVideoReplay;
-(void)replayVideo:(id)arg1 ;
-(void)resumeVideo;
-(void)showWebView:(id)arg1 ;
-(void)showInAppStoreView:(id)arg1 ;
-(void)onEventCardShown;
-(long long)getUnreadyReason;
-(BOOL)viewAllowed;
-(void)onEventRewardV4VC;
-(id)getCurrentSessionID;
-(int)getCurrentImpressionCount;
-(NSString *)session_guid;
-(void)onFireRewardForView;
-(id)getNativeAdViewInZone:(id)arg1 viewController:(id)arg2 adSlot:(int)arg3 delegate:(id)arg4 ;
-(void)onEventVideoStart;
-(void)onEventVideoFirstQuartile;
-(void)onEventVideoMidpoint;
-(void)onEventVideoThirdQuartile;
-(void)onEventVideoNinetyPercent;
-(void)onEventVideoComplete:(BOOL)arg1 ;
-(BOOL)disabled_in_backup_config;
-(void)setDisabled_in_backup_config:(BOOL)arg1 ;
-(BOOL)contracted;
-(BOOL)full_screen;
-(BOOL)house_ad;
-(BOOL)video_events_on_replays;
-(double)net_earnings;
-(BOOL)ipod_music_playing;
-(NSNumber *)ad_id;
-(NSNumber *)ad_group_id;
-(NSNumber *)ad_campaign_id;
-(BOOL)logged_ready;
-(void)setLogged_ready:(BOOL)arg1 ;
-(BOOL)html5_endcard_loading_started;
-(double)html5_endcard_loading_time;
-(BOOL)html5_endcard_loading_timeout;
-(BOOL)endcard_dissolved;
-(NSString *)iap_progress_string;
-(BOOL)isShowingAppStore;
-(void)setEndcard_dissolved:(BOOL)arg1 ;
-(void)closeAd;
-(void)onEventInfo;
-(void)onEventDownload;
-(void)onEventInVideoEngagement;
-(BOOL)reward;
-(BOOL)completed_first_view;
-(void)unlockPause;
-(void)skipAd;
-(id<AdColonyAdDelegate>)takeover_delegate;
-(ADCZone *)active_zone;
-(int)video_credit_balance_at_start;
-(void)performAction:(id)arg1 withType:(id)arg2 ;
-(void)setHtml5_endcard_loading_timeout:(BOOL)arg1 ;
-(void)setHtml5_endcard_loading_started:(BOOL)arg1 ;
-(void)setHtml5_endcard_loading_start:(NSDate *)arg1 ;
-(BOOL)html5_endcard_loading_finished;
-(NSDate *)html5_endcard_loading_start;
-(void)setHtml5_endcard_loading_finished:(BOOL)arg1 ;
-(void)setHtml5_endcard_loading_time:(double)arg1 ;
-(void)onEventHTML5Interaction;
-(void)performFinalAction:(id)arg1 withType:(id)arg2 ;
-(id)parseStoreIDFromURL:(id)arg1 ;
-(void)onEventCustom:(id)arg1 ;
-(void)iapTriggeredWithEngagementType:(unsigned long long)arg1 ;
-(id)init:(id)arg1 ;
-(long long)state;
-(long long)type;
-(NSString *)title;
-(void)reset;
-(void)layout;
-(void)update;
-(void)cleanup;
-(NSString *)uuid;
-(void)stop:(BOOL)arg1 ;
-(BOOL)expired;
-(void)setExpired:(BOOL)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)runBlock:(/*^block*/id)arg1 ;
-(BOOL)ready;
@end

