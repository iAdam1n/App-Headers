/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MMHandshakeNativeAdConfig, NSString, MMHandshakePlaylistServer;

@interface MMHandshakeResponse : NSObject <NSCoding, NSCopying> {

	BOOL _sdkEnabled;
	BOOL _moatEnabled;
	long long _reportingBatchFrequency;
	MMHandshakeNativeAdConfig* _nativeAdConfig;
	NSString* _handshakeVersion;
	long long _reportingBatchSize;
	long long _handshakeTtl;
	long long _minInlineRefreshRate;
	long long _interstitialExpirationDuration;
	MMHandshakePlaylistServer* _playlistServer;
	long long _nativeExpirationDuration;
	long long _inlineTimeout;
	long long _interstitialTimeout;
	long long _nativeTimeout;
	long long _clientMediationTimeout;
	long long _serverMediationTimeout;
	long long _exchangeTimeout;
	long long _vastSkipOffsetMax;
	long long _vastSkipOffsetMin;
	long long _vpaidStartAdTimeout;
	long long _vpaidSkipAdTimeout;
	long long _vpaidAdUnitTimeout;
	long long _vpaidHtmlEndCardTimeout;
	NSString* _handshakeBaseURL;
	NSString* _reportingBaseURL;
	NSString* _config;

}

@property (assign,nonatomic) long long reportingBatchFrequency;                       //@synthesize reportingBatchFrequency=_reportingBatchFrequency - In the implementation block
@property (nonatomic,retain) MMHandshakeNativeAdConfig * nativeAdConfig;              //@synthesize nativeAdConfig=_nativeAdConfig - In the implementation block
@property (nonatomic,retain) NSString * handshakeVersion;                             //@synthesize handshakeVersion=_handshakeVersion - In the implementation block
@property (assign,nonatomic) long long reportingBatchSize;                            //@synthesize reportingBatchSize=_reportingBatchSize - In the implementation block
@property (assign,nonatomic) long long handshakeTtl;                                  //@synthesize handshakeTtl=_handshakeTtl - In the implementation block
@property (assign,nonatomic) long long minInlineRefreshRate;                          //@synthesize minInlineRefreshRate=_minInlineRefreshRate - In the implementation block
@property (assign,nonatomic) long long interstitialExpirationDuration;                //@synthesize interstitialExpirationDuration=_interstitialExpirationDuration - In the implementation block
@property (assign,nonatomic) BOOL sdkEnabled;                                         //@synthesize sdkEnabled=_sdkEnabled - In the implementation block
@property (nonatomic,retain) MMHandshakePlaylistServer * playlistServer;              //@synthesize playlistServer=_playlistServer - In the implementation block
@property (assign,nonatomic) long long nativeExpirationDuration;                      //@synthesize nativeExpirationDuration=_nativeExpirationDuration - In the implementation block
@property (assign,nonatomic) long long inlineTimeout;                                 //@synthesize inlineTimeout=_inlineTimeout - In the implementation block
@property (assign,nonatomic) long long interstitialTimeout;                           //@synthesize interstitialTimeout=_interstitialTimeout - In the implementation block
@property (assign,nonatomic) long long nativeTimeout;                                 //@synthesize nativeTimeout=_nativeTimeout - In the implementation block
@property (assign,nonatomic) long long clientMediationTimeout;                        //@synthesize clientMediationTimeout=_clientMediationTimeout - In the implementation block
@property (assign,nonatomic) long long serverMediationTimeout;                        //@synthesize serverMediationTimeout=_serverMediationTimeout - In the implementation block
@property (assign,nonatomic) long long exchangeTimeout;                               //@synthesize exchangeTimeout=_exchangeTimeout - In the implementation block
@property (assign,nonatomic) long long vastSkipOffsetMax;                             //@synthesize vastSkipOffsetMax=_vastSkipOffsetMax - In the implementation block
@property (assign,nonatomic) long long vastSkipOffsetMin;                             //@synthesize vastSkipOffsetMin=_vastSkipOffsetMin - In the implementation block
@property (assign,nonatomic) long long vpaidStartAdTimeout;                           //@synthesize vpaidStartAdTimeout=_vpaidStartAdTimeout - In the implementation block
@property (assign,nonatomic) long long vpaidSkipAdTimeout;                            //@synthesize vpaidSkipAdTimeout=_vpaidSkipAdTimeout - In the implementation block
@property (assign,nonatomic) long long vpaidAdUnitTimeout;                            //@synthesize vpaidAdUnitTimeout=_vpaidAdUnitTimeout - In the implementation block
@property (assign,nonatomic) long long vpaidHtmlEndCardTimeout;                       //@synthesize vpaidHtmlEndCardTimeout=_vpaidHtmlEndCardTimeout - In the implementation block
@property (nonatomic,retain) NSString * handshakeBaseURL;                             //@synthesize handshakeBaseURL=_handshakeBaseURL - In the implementation block
@property (nonatomic,retain) NSString * reportingBaseURL;                             //@synthesize reportingBaseURL=_reportingBaseURL - In the implementation block
@property (nonatomic,retain) NSString * config;                                       //@synthesize config=_config - In the implementation block
@property (assign,nonatomic) BOOL moatEnabled;                                        //@synthesize moatEnabled=_moatEnabled - In the implementation block
+(id)modelObjectWithDictionary:(id)arg1 ;
-(long long)vastSkipOffsetMin;
-(long long)vastSkipOffsetMax;
-(long long)vpaidStartAdTimeout;
-(long long)vpaidSkipAdTimeout;
-(long long)vpaidAdUnitTimeout;
-(long long)vpaidHtmlEndCardTimeout;
-(NSString *)reportingBaseURL;
-(long long)reportingBatchFrequency;
-(long long)reportingBatchSize;
-(long long)interstitialTimeout;
-(long long)interstitialExpirationDuration;
-(long long)clientMediationTimeout;
-(BOOL)moatEnabled;
-(long long)inlineTimeout;
-(MMHandshakeNativeAdConfig *)nativeAdConfig;
-(long long)nativeExpirationDuration;
-(long long)nativeTimeout;
-(long long)integerOrMinimumFromDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)objectOrDefaultFromDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)setReportingBatchFrequency:(long long)arg1 ;
-(void)setNativeAdConfig:(MMHandshakeNativeAdConfig *)arg1 ;
-(NSString *)handshakeVersion;
-(void)setHandshakeVersion:(NSString *)arg1 ;
-(void)setReportingBatchSize:(long long)arg1 ;
-(long long)handshakeTtl;
-(void)setHandshakeTtl:(long long)arg1 ;
-(long long)minInlineRefreshRate;
-(void)setMinInlineRefreshRate:(long long)arg1 ;
-(void)setInterstitialExpirationDuration:(long long)arg1 ;
-(void)setSdkEnabled:(BOOL)arg1 ;
-(void)setPlaylistServer:(MMHandshakePlaylistServer *)arg1 ;
-(void)setNativeExpirationDuration:(long long)arg1 ;
-(void)setInlineTimeout:(long long)arg1 ;
-(void)setInterstitialTimeout:(long long)arg1 ;
-(void)setNativeTimeout:(long long)arg1 ;
-(void)setClientMediationTimeout:(long long)arg1 ;
-(long long)serverMediationTimeout;
-(void)setServerMediationTimeout:(long long)arg1 ;
-(void)setExchangeTimeout:(long long)arg1 ;
-(void)setVastSkipOffsetMax:(long long)arg1 ;
-(void)setVastSkipOffsetMin:(long long)arg1 ;
-(void)setVpaidStartAdTimeout:(long long)arg1 ;
-(void)setVpaidAdUnitTimeout:(long long)arg1 ;
-(void)setVpaidSkipAdTimeout:(long long)arg1 ;
-(void)setVpaidHtmlEndCardTimeout:(long long)arg1 ;
-(NSString *)handshakeBaseURL;
-(void)setHandshakeBaseURL:(NSString *)arg1 ;
-(void)setReportingBaseURL:(NSString *)arg1 ;
-(void)setMoatEnabled:(BOOL)arg1 ;
-(MMHandshakePlaylistServer *)playlistServer;
-(BOOL)sdkEnabled;
-(long long)exchangeTimeout;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)config;
-(void)setConfig:(NSString *)arg1 ;
@end
