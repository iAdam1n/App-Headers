/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
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
