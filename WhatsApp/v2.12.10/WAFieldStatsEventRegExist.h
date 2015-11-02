/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@class NSString;

@interface WAFieldStatsEventRegExist : WAFieldStatsEvent {

	NSString* _app_version;
	NSString* _device_name;
	NSString* _language_code;
	NSString* _location_code;
	double _mcc;
	double _mnc;
	double _network_radio_type;
	NSString* _os_version;
	double _platform;
	double _reg_asn;
	double _reg_bucket;
	double _reg_copiedrc;
	double _reg_entered;
	double _reg_hasinrc;
	double _reg_is_new;
	double _reg_mistyped;
	double _reg_rcmatch;
	double _reg_self_count;
	double _reg_simnum;
	double _reg_sms_count;
	double _reg_status;
	double _reg_voice_count;

}

@property (nonatomic,retain) NSString * app_version;                 //@synthesize app_version=_app_version - In the implementation block
@property (nonatomic,retain) NSString * device_name;                 //@synthesize device_name=_device_name - In the implementation block
@property (nonatomic,retain) NSString * language_code;               //@synthesize language_code=_language_code - In the implementation block
@property (nonatomic,retain) NSString * location_code;               //@synthesize location_code=_location_code - In the implementation block
@property (assign,nonatomic) double mcc;                             //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) double mnc;                             //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) double network_radio_type;              //@synthesize network_radio_type=_network_radio_type - In the implementation block
@property (nonatomic,retain) NSString * os_version;                  //@synthesize os_version=_os_version - In the implementation block
@property (assign,nonatomic) double platform;                        //@synthesize platform=_platform - In the implementation block
@property (assign,nonatomic) double reg_asn;                         //@synthesize reg_asn=_reg_asn - In the implementation block
@property (assign,nonatomic) double reg_bucket;                      //@synthesize reg_bucket=_reg_bucket - In the implementation block
@property (assign,nonatomic) double reg_copiedrc;                    //@synthesize reg_copiedrc=_reg_copiedrc - In the implementation block
@property (assign,nonatomic) double reg_entered;                     //@synthesize reg_entered=_reg_entered - In the implementation block
@property (assign,nonatomic) double reg_hasinrc;                     //@synthesize reg_hasinrc=_reg_hasinrc - In the implementation block
@property (assign,nonatomic) double reg_is_new;                      //@synthesize reg_is_new=_reg_is_new - In the implementation block
@property (assign,nonatomic) double reg_mistyped;                    //@synthesize reg_mistyped=_reg_mistyped - In the implementation block
@property (assign,nonatomic) double reg_rcmatch;                     //@synthesize reg_rcmatch=_reg_rcmatch - In the implementation block
@property (assign,nonatomic) double reg_self_count;                  //@synthesize reg_self_count=_reg_self_count - In the implementation block
@property (assign,nonatomic) double reg_simnum;                      //@synthesize reg_simnum=_reg_simnum - In the implementation block
@property (assign,nonatomic) double reg_sms_count;                   //@synthesize reg_sms_count=_reg_sms_count - In the implementation block
@property (assign,nonatomic) double reg_status;                      //@synthesize reg_status=_reg_status - In the implementation block
@property (assign,nonatomic) double reg_voice_count;                 //@synthesize reg_voice_count=_reg_voice_count - In the implementation block
-(NSString *)app_version;
-(void)setApp_version:(NSString *)arg1 ;
-(double)mcc;
-(void)setMcc:(double)arg1 ;
-(double)mnc;
-(void)setMnc:(double)arg1 ;
-(NSString *)os_version;
-(void)setOs_version:(NSString *)arg1 ;
-(NSString *)device_name;
-(void)setDevice_name:(NSString *)arg1 ;
-(NSString *)language_code;
-(void)setLanguage_code:(NSString *)arg1 ;
-(NSString *)location_code;
-(void)setLocation_code:(NSString *)arg1 ;
-(double)network_radio_type;
-(void)setNetwork_radio_type:(double)arg1 ;
-(double)reg_asn;
-(void)setReg_asn:(double)arg1 ;
-(double)reg_bucket;
-(void)setReg_bucket:(double)arg1 ;
-(double)reg_copiedrc;
-(void)setReg_copiedrc:(double)arg1 ;
-(double)reg_entered;
-(void)setReg_entered:(double)arg1 ;
-(double)reg_hasinrc;
-(void)setReg_hasinrc:(double)arg1 ;
-(double)reg_is_new;
-(void)setReg_is_new:(double)arg1 ;
-(double)reg_mistyped;
-(void)setReg_mistyped:(double)arg1 ;
-(double)reg_rcmatch;
-(void)setReg_rcmatch:(double)arg1 ;
-(double)reg_self_count;
-(void)setReg_self_count:(double)arg1 ;
-(double)reg_simnum;
-(void)setReg_simnum:(double)arg1 ;
-(double)reg_sms_count;
-(void)setReg_sms_count:(double)arg1 ;
-(double)reg_status;
-(void)setReg_status:(double)arg1 ;
-(double)reg_voice_count;
-(void)setReg_voice_count:(double)arg1 ;
-(id)init;
-(void)setPlatform:(double)arg1 ;
-(double)platform;
-(void)submit;
@end
