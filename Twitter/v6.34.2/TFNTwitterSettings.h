/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNPlistSerialization.h>
#import <Twitter/TFSTwitterModel.h>

@class TFNTwitterAccount, TFNTwitterTrendLocation, NSDate, NSString;

@interface TFNTwitterSettings : NSObject <TFNPlistSerialization, TFSTwitterModel> {

	BOOL _geoEnabled;
	BOOL _useCookiePersonalization;
	BOOL _showSensitiveMedia;
	BOOL _discoverableByEmail;
	BOOL _discoverableByPhone;
	BOOL _abuseFilterEnabled;
	BOOL _emailFollowEnabled;
	BOOL _isProtected;
	BOOL _tailorAds;
	TFNTwitterAccount* _account;
	TFNTwitterTrendLocation* _trendLocation;
	NSDate* _lastUpdated;
	unsigned long long _allowMediaTagging;
	unsigned long long _acceptsDirectMessagesFrom;

}

@property (nonatomic,retain) TFNTwitterAccount * account;                               //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL geoEnabled;                                           //@synthesize geoEnabled=_geoEnabled - In the implementation block
@property (nonatomic,retain) TFNTwitterTrendLocation * trendLocation;                   //@synthesize trendLocation=_trendLocation - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                                      //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (assign,nonatomic) BOOL useCookiePersonalization;                             //@synthesize useCookiePersonalization=_useCookiePersonalization - In the implementation block
@property (assign,nonatomic) BOOL showSensitiveMedia;                                   //@synthesize showSensitiveMedia=_showSensitiveMedia - In the implementation block
@property (assign,nonatomic) BOOL discoverableByEmail;                                  //@synthesize discoverableByEmail=_discoverableByEmail - In the implementation block
@property (assign,nonatomic) BOOL discoverableByPhone;                                  //@synthesize discoverableByPhone=_discoverableByPhone - In the implementation block
@property (assign,nonatomic) BOOL abuseFilterEnabled;                                   //@synthesize abuseFilterEnabled=_abuseFilterEnabled - In the implementation block
@property (assign,nonatomic) BOOL emailFollowEnabled;                                   //@synthesize emailFollowEnabled=_emailFollowEnabled - In the implementation block
@property (assign,nonatomic) BOOL isProtected;                                          //@synthesize isProtected=_isProtected - In the implementation block
@property (assign,nonatomic) unsigned long long allowMediaTagging;                      //@synthesize allowMediaTagging=_allowMediaTagging - In the implementation block
@property (assign,nonatomic) BOOL tailorAds;                                            //@synthesize tailorAds=_tailorAds - In the implementation block
@property (assign,nonatomic) unsigned long long acceptsDirectMessagesFrom;              //@synthesize acceptsDirectMessagesFrom=_acceptsDirectMessagesFrom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsWithJSONData:(id)arg1 error:(id*)arg2 ;
-(BOOL)showSensitiveMedia;
-(BOOL)abuseFilterEnabled;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)plistDictionaryValue;
-(id)initWithPlistDictionary:(id)arg1 ;
-(void)setAbuseFilterEnabled:(BOOL)arg1 ;
-(void)setShowSensitiveMedia:(BOOL)arg1 ;
-(BOOL)discoverableByPhone;
-(void)setDiscoverableByPhone:(BOOL)arg1 ;
-(BOOL)geoEnabled;
-(void)setGeoEnabled:(BOOL)arg1 ;
-(unsigned long long)allowMediaTagging;
-(void)setAllowMediaTagging:(unsigned long long)arg1 ;
-(BOOL)emailFollowEnabled;
-(void)setEmailFollowEnabled:(BOOL)arg1 ;
-(BOOL)discoverableByEmail;
-(BOOL)tailorAds;
-(unsigned long long)acceptsDirectMessagesFrom;
-(void)setDiscoverableByEmail:(BOOL)arg1 ;
-(void)setAcceptsDirectMessagesFrom:(unsigned long long)arg1 ;
-(void)setIsProtected:(BOOL)arg1 ;
-(void)setTailorAds:(BOOL)arg1 ;
-(unsigned long long)_allowMediaTaggingFromString:(id)arg1 ;
-(void)_postPropertyDidChangeNotificationForName:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 account:(id)arg4 ;
-(void)setTrendLocation:(TFNTwitterTrendLocation *)arg1 ;
-(void)setUseCookiePersonalization:(BOOL)arg1 ;
-(TFNTwitterTrendLocation *)trendLocation;
-(BOOL)useCookiePersonalization;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(BOOL)isProtected;
-(NSDate *)lastUpdated;
@end

