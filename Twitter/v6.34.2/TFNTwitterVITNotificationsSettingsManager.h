/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterAccount, NSUserDefaults;

@interface TFNTwitterVITNotificationsSettingsManager : NSObject {

	BOOL _abuseFilter;
	BOOL _lowQualityFilter;
	TFNTwitterAccount* _account;
	NSUserDefaults* _userDefaults;

}

@property (assign,getter=isAbuseFilterEnabled,nonatomic) BOOL abuseFilter;                        //@synthesize abuseFilter=_abuseFilter - In the implementation block
@property (assign,getter=isLowQualityFilterEnabled,nonatomic) BOOL lowQualityFilter;              //@synthesize lowQualityFilter=_lowQualityFilter - In the implementation block
@property (assign,nonatomic,__weak) TFNTwitterAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                                       //@synthesize userDefaults=_userDefaults - In the implementation block
-(id)initWithAccount:(id)arg1 defaults:(id)arg2 ;
-(void)setAbuseFilter:(BOOL)arg1 ;
-(void)setLowQualityFilter:(BOOL)arg1 ;
-(BOOL)isAbuseFilterEnabled;
-(BOOL)isLowQualityFilterEnabled;
-(void)_loadStoredSettingsConfiguration;
-(id)_defaultsKey:(id)arg1 ;
-(void)_updateFilteredStreamSettings;
-(void)_storeSettingsConfiguration;
-(id)_prefixForActivitySettingsWithAccount:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)_updateSettings;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end
