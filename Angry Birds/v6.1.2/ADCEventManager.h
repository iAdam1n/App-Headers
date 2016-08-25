/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSDictionary;

@interface ADCEventManager : NSObject {

	NSMutableArray* events;
	NSMutableArray* dispatch_queue;
	BOOL queue_session_start_event;
	BOOL queue_install_event;
	BOOL queue_update_event;
	BOOL read_iap_events;
	BOOL dirty_;
	BOOL dirty_meta_data;
	BOOL dirty_dynamic_interests;
	long long last_meta_data_update;
	long long last_dynamic_interest_update;
	NSDictionary* _app_tracking_info;
	NSDictionary* _third_party_app_tracking_info;

}

@property (nonatomic,retain) NSDictionary * app_tracking_info;                          //@synthesize app_tracking_info=_app_tracking_info - In the implementation block
@property (nonatomic,retain) NSDictionary * third_party_app_tracking_info;              //@synthesize third_party_app_tracking_info=_third_party_app_tracking_info - In the implementation block
-(void)queueURL:(id)arg1 type:(id)arg2 isThirdParty:(BOOL)arg3 isReplay:(BOOL)arg4 isReward:(BOOL)arg5 V4VCHolding:(id)arg6 adSessionID:(id)arg7 ;
-(void)reportInstall;
-(void)queueArray:(id)arg1 withType:(id)arg2 isThirdParty:(BOOL)arg3 isReplay:(BOOL)arg4 ;
-(void)queueCustomURL:(id)arg1 type:(id)arg2 isThirdParty:(BOOL)arg3 payload:(id)arg4 V4VCHolding:(id)arg5 adSessionID:(id)arg6 ;
-(void)reportAppUpdate;
-(void)saveEvents;
-(BOOL)notifyIAPComplete:(id)arg1 productID:(id)arg2 quantity:(int)arg3 price:(id)arg4 currencyCode:(id)arg5 ;
-(void)onUserMetaDataChanged;
-(void)onDynamicInterestsChanged;
-(NSDictionary *)app_tracking_info;
-(void)setApp_tracking_info:(NSDictionary *)arg1 ;
-(NSDictionary *)third_party_app_tracking_info;
-(void)setThird_party_app_tracking_info:(NSDictionary *)arg1 ;
-(id)init;
-(void)update;
-(void)applicationWillEnterForeground;
@end

