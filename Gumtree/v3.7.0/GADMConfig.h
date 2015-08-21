/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray, NSString, GADAdType;

@interface GADMConfig : NSObject {

	NSArray* _adNetworkConfigs;
	double _refreshInterval;
	long long _bannerAnimationType;
	double _adNetworkTimeout;
	NSArray* _impressionURLs;
	NSArray* _clickURLs;
	NSArray* _noFillURLs;
	NSString* _qdata;
	GADAdType* _adType;
	NSString* _appKey;

}

@property (nonatomic,copy) NSArray * adNetworkConfigs;                   //@synthesize adNetworkConfigs=_adNetworkConfigs - In the implementation block
@property (assign,nonatomic) double refreshInterval;                     //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (assign,nonatomic) long long bannerAnimationType;              //@synthesize bannerAnimationType=_bannerAnimationType - In the implementation block
@property (assign,nonatomic) double adNetworkTimeout;                    //@synthesize adNetworkTimeout=_adNetworkTimeout - In the implementation block
@property (nonatomic,copy) NSArray * impressionURLs;                     //@synthesize impressionURLs=_impressionURLs - In the implementation block
@property (nonatomic,copy) NSArray * clickURLs;                          //@synthesize clickURLs=_clickURLs - In the implementation block
@property (nonatomic,copy) NSArray * noFillURLs;                         //@synthesize noFillURLs=_noFillURLs - In the implementation block
@property (nonatomic,copy) NSString * qdata;                             //@synthesize qdata=_qdata - In the implementation block
@property (nonatomic,retain) GADAdType * adType;                         //@synthesize adType=_adType - In the implementation block
@property (nonatomic,copy) NSString * appKey;                            //@synthesize appKey=_appKey - In the implementation block
+(id)peekAdTypeFromConfig:(id)arg1 ;
+(id)adTypeFromString:(id)arg1 ;
-(void)setAdType:(GADAdType *)arg1 ;
-(NSArray *)clickURLs;
-(NSArray *)impressionURLs;
-(id)initWithAppKey:(id)arg1 configDict:(id)arg2 error:(id*)arg3 ;
-(NSArray *)adNetworkConfigs;
-(double)adNetworkTimeout;
-(NSArray *)noFillURLs;
-(NSString *)qdata;
-(NSString *)appKey;
-(BOOL)parseConfig:(id)arg1 error:(id*)arg2 ;
-(long long)bannerAnimationType;
-(void)setAdNetworkTimeout:(double)arg1 ;
-(void)setBannerAnimationType:(long long)arg1 ;
-(void)setImpressionURLs:(NSArray *)arg1 ;
-(void)setClickURLs:(NSArray *)arg1 ;
-(void)setNoFillURLs:(NSArray *)arg1 ;
-(BOOL)parseSettingsConfig:(id)arg1 error:(id*)arg2 ;
-(void)setQdata:(NSString *)arg1 ;
-(void)setAdNetworkConfigs:(NSArray *)arg1 ;
-(void)setAppKey:(NSString *)arg1 ;
-(id)description;
-(double)refreshInterval;
-(void)setRefreshInterval:(double)arg1 ;
-(GADAdType *)adType;
@end

