/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MNGAdContext : NSObject {

	BOOL _isRewardedAd;
	int _gender;
	NSString* _zoneId;
	NSString* _country;
	NSString* _region;
	NSString* _metro;
	NSString* _city;
	NSString* _zip;
	NSString* _yob;
	NSString* _u_country;
	NSString* _u_city;
	NSString* _u_zip;
	NSString* _keywords;
	NSString* _longitude;
	NSString* _latitude;
	NSString* _pub_uid;
	NSString* _nw;
	NSString* _pf;
	NSString* _adId;

}

@property (nonatomic,retain) NSString * zoneId;                 //@synthesize zoneId=_zoneId - In the implementation block
@property (nonatomic,retain) NSString * country;                //@synthesize country=_country - In the implementation block
@property (nonatomic,retain) NSString * region;                 //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSString * metro;                  //@synthesize metro=_metro - In the implementation block
@property (nonatomic,retain) NSString * city;                   //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSString * zip;                    //@synthesize zip=_zip - In the implementation block
@property (nonatomic,retain) NSString * yob;                    //@synthesize yob=_yob - In the implementation block
@property (nonatomic,retain) NSString * u_country;              //@synthesize u_country=_u_country - In the implementation block
@property (nonatomic,retain) NSString * u_city;                 //@synthesize u_city=_u_city - In the implementation block
@property (nonatomic,retain) NSString * u_zip;                  //@synthesize u_zip=_u_zip - In the implementation block
@property (nonatomic,retain) NSString * keywords;               //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,retain) NSString * longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSString * latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSString * pub_uid;                //@synthesize pub_uid=_pub_uid - In the implementation block
@property (nonatomic,retain) NSString * nw;                     //@synthesize nw=_nw - In the implementation block
@property (assign,nonatomic) BOOL isRewardedAd;                 //@synthesize isRewardedAd=_isRewardedAd - In the implementation block
@property (assign,nonatomic) int gender;                        //@synthesize gender=_gender - In the implementation block
@property (nonatomic,retain) NSString * pf;                     //@synthesize pf=_pf - In the implementation block
@property (nonatomic,retain) NSString * adId;                   //@synthesize adId=_adId - In the implementation block
-(NSString *)adId;
-(void)setAdId:(NSString *)arg1 ;
-(BOOL)isRewardedAd;
-(void)setIsRewardedAd:(BOOL)arg1 ;
-(id)initWithOptionsDictionary:(id)arg1 ;
-(void)setU_city:(NSString *)arg1 ;
-(void)setU_country:(NSString *)arg1 ;
-(void)setU_zip:(NSString *)arg1 ;
-(void)setNw:(NSString *)arg1 ;
-(void)setMetro:(NSString *)arg1 ;
-(NSString *)metro;
-(void)setYob:(NSString *)arg1 ;
-(NSString *)yob;
-(void)setPub_uid:(NSString *)arg1 ;
-(NSString *)pub_uid;
-(void)setPf:(NSString *)arg1 ;
-(NSString *)pf;
-(NSString *)u_country;
-(NSString *)u_city;
-(NSString *)u_zip;
-(NSString *)nw;
-(id)dictionaryRepresentation;
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)region;
-(NSString *)zip;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)country;
-(void)setLatitude:(NSString *)arg1 ;
-(void)setLongitude:(NSString *)arg1 ;
-(int)gender;
-(void)setGender:(int)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)city;
-(NSString *)latitude;
-(NSString *)longitude;
-(void)setZoneId:(NSString *)arg1 ;
-(NSString *)zoneId;
-(void)setZip:(NSString *)arg1 ;
-(void)setKeywords:(NSString *)arg1 ;
-(NSString *)keywords;
@end
