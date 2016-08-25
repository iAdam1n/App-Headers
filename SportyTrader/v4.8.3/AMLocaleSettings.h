/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface AMLocaleSettings : NSObject {

	NSString* _countryCode;
	NSMutableDictionary* _localeSettingDictionary;

}

@property (nonatomic,copy) NSString * countryCode;                                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * localeSettingDictionary;              //@synthesize localeSettingDictionary=_localeSettingDictionary - In the implementation block
+(id)localeSettingsWithCountryCode:(id)arg1 ;
+(void)initialize;
-(id)cornerstoneBesEndpoint;
-(id)initWithCountryCode:(id)arg1 ;
-(void)setLocaleSettingDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)localeSettingDictionary;
-(void)populateDefaultSettings;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
@end

