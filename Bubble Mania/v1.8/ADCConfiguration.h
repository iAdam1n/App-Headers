/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AdColonyDelegate;
@class NSMutableDictionary, NSString, NSDate;

@interface ADCConfiguration : NSObject {

	NSMutableDictionary* currency_list;
	NSMutableDictionary* zones;
	id<AdColonyDelegate> delegate_;
	NSString* app_id_;
	BOOL downloading;
	BOOL enabled_;
	BOOL currency_dirty;
	BOOL needs_initial_configuration;
	NSDate* last_ad_update_request_;
	NSDate* last_ad_update_;
	unsigned long long cache_filter;
	BOOL has_zones_;
	BOOL _publisher_logging_wanted;

}

@property (nonatomic,readonly) id<AdColonyDelegate> delegate; 
@property (nonatomic,readonly) NSString * app_id; 
@property (nonatomic,readonly) NSDate * last_ad_update; 
@property (nonatomic,readonly) NSDate * last_ad_update_request; 
@property (nonatomic,readonly) BOOL enabled; 
@property (assign,nonatomic) BOOL publisher_logging_wanted;                  //@synthesize publisher_logging_wanted=_publisher_logging_wanted - In the implementation block
@property (assign,nonatomic) BOOL has_zones; 
-(BOOL)cacheAllowed;
-(NSString *)app_id;
-(void)downloadConfiguration;
-(id)getZone:(id)arg1 ;
-(BOOL)has_zones;
-(id)getZones;
-(id)getCurrency:(id)arg1 ;
-(void)externalReloadAppInfo:(id)arg1 ;
-(void)onAdExpiration;
-(void)reloadAppInfo:(id)arg1 ;
-(void)sendConfigRequest:(id)arg1 ;
-(void)onConfigRequestError;
-(void)onSuccessfulConfigDownload:(id)arg1 ;
-(id)parseConfigData:(id)arg1 ;
-(void)parseConfiguration:(id)arg1 ;
-(void)saveConfigBackup:(id)arg1 ;
-(void)loadConfigBackup;
-(id)updateCurrencyType:(id)arg1 ;
-(id)getCurrencies;
-(BOOL)areAdsDisabled;
-(NSDate *)last_ad_update;
-(NSDate *)last_ad_update_request;
-(void)setHas_zones:(BOOL)arg1 ;
-(BOOL)publisher_logging_wanted;
-(void)setPublisher_logging_wanted:(BOOL)arg1 ;
-(void)onDirtyCurrencyList;
-(id)init:(id)arg1 ;
-(BOOL)enabled;
-(id<AdColonyDelegate>)delegate;
-(void)update;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)runBlock:(/*^block*/id)arg1 ;
@end

