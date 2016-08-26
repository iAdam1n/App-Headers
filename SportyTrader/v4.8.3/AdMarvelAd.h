/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, AdMarvelAdResponse;

@interface AdMarvelAd : NSObject {

	NSString* clickURL;
	NSString* adHTML;
	NSString* adCSS;
	NSString* adSource;
	NSArray* pixels;
	NSString* fileURL;
	NSString* imageURL;
	NSString* adId;
	NSArray* trackerURLs;
	NSString* trackerId;
	BOOL isJavascript;
	BOOL isAdNetworkSDKCall;
	BOOL isCustomAd;
	BOOL isImageViewAd;
	BOOL registerClick;
	NSDictionary* requestInfo;
	BOOL _isNoClickBanner;
	BOOL _disableAdHistory;
	BOOL _appVerifyEnabled;
	int _autoExpandBehavior;
	AdMarvelAdResponse* _adResponseObject;
	NSString* _adHistoryLogFileName;
	NSString* _siteId;
	NSString* _partnerId;

}

@property (assign,nonatomic) BOOL isNoClickBanner;                               //@synthesize isNoClickBanner=_isNoClickBanner - In the implementation block
@property (nonatomic,retain) AdMarvelAdResponse * adResponseObject;              //@synthesize adResponseObject=_adResponseObject - In the implementation block
@property (nonatomic,retain) NSString * adHistoryLogFileName;                    //@synthesize adHistoryLogFileName=_adHistoryLogFileName - In the implementation block
@property (nonatomic,retain) NSString * siteId;                                  //@synthesize siteId=_siteId - In the implementation block
@property (nonatomic,retain) NSString * partnerId;                               //@synthesize partnerId=_partnerId - In the implementation block
@property (assign,nonatomic) int autoExpandBehavior;                             //@synthesize autoExpandBehavior=_autoExpandBehavior - In the implementation block
@property (assign,nonatomic) BOOL disableAdHistory;                              //@synthesize disableAdHistory=_disableAdHistory - In the implementation block
@property (assign,nonatomic) BOOL appVerifyEnabled;                              //@synthesize appVerifyEnabled=_appVerifyEnabled - In the implementation block
-(NSString *)partnerId;
-(NSString *)siteId;
-(void)setAdId:(id)arg1 ;
-(void)setClickURL:(id)arg1 ;
-(BOOL)isStandardWebViewAd;
-(BOOL)isNoClickBanner;
-(BOOL)isCustomAd;
-(id)getClickURL;
-(BOOL)isImageViewAd;
-(BOOL)isAdMarvelCampaign;
-(BOOL)isAdNetworkSDKCallAd;
-(id)getAdHTML;
-(id)getAdSource;
-(BOOL)disableAdHistory;
-(id)initWithHTML:(id)arg1 file:(id)arg2 css:(id)arg3 clickURL:(id)arg4 source:(id)arg5 pixels:(id)arg6 imageURL:(id)arg7 javascript:(BOOL)arg8 adNetworkSDKCall:(BOOL)arg9 customAd:(BOOL)arg10 imageViewAd:(BOOL)arg11 autoExpand:(id)arg12 disableAdHistory:(id)arg13 ;
-(id)getAdId;
-(id)getTrackerURLs;
-(void)setTrackerURLs:(id)arg1 ;
-(id)getTrackerId;
-(void)setTrackerId:(id)arg1 ;
-(void)setRegisterClick:(BOOL)arg1 ;
-(BOOL)registerClick;
-(id)getPixels;
-(AdMarvelAdResponse *)adResponseObject;
-(void)setAdResponseObject:(AdMarvelAdResponse *)arg1 ;
-(void)setSiteId:(NSString *)arg1 ;
-(void)setPartnerId:(NSString *)arg1 ;
-(void)setAdHistoryLogFileName:(NSString *)arg1 ;
-(NSString *)adHistoryLogFileName;
-(BOOL)isJavascriptAd;
-(int)autoExpandBehaviorFromString:(id)arg1 ;
-(void)setAutoExpandBehavior:(int)arg1 ;
-(void)setDisableAdHistory:(BOOL)arg1 ;
-(void)setAppVerifyEnabled:(BOOL)arg1 ;
-(id)getAdCSS;
-(id)getFileURL;
-(id)getImageURL;
-(void)setIsNoClickBanner:(BOOL)arg1 ;
-(int)autoExpandBehavior;
-(BOOL)appVerifyEnabled;
-(void)dealloc;
-(id)requestInfo;
-(void)setRequestInfo:(id)arg1 ;
@end
