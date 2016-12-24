/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASStaticLoggerFields : NSObject {

	NSString* _os;
	NSString* _osv;
	NSString* _adid;
	NSString* _oid;
	NSString* _bundleid;
	NSString* _sdkv;
	NSString* _ua;

}

@property (nonatomic,copy) NSString * os;                    //@synthesize os=_os - In the implementation block
@property (nonatomic,copy) NSString * osv;                   //@synthesize osv=_osv - In the implementation block
@property (nonatomic,copy) NSString * adid;                  //@synthesize adid=_adid - In the implementation block
@property (nonatomic,copy) NSString * oid;                   //@synthesize oid=_oid - In the implementation block
@property (nonatomic,copy) NSString * bundleid;              //@synthesize bundleid=_bundleid - In the implementation block
@property (nonatomic,copy) NSString * sdkv;                  //@synthesize sdkv=_sdkv - In the implementation block
@property (nonatomic,copy) NSString * ua;                    //@synthesize ua=_ua - In the implementation block
+(BOOL)areStaticFieldsDefined;
+(void)setSDKVersion:(id)arg1 ;
+(void)setUserAgent:(id)arg1 ;
+(id)fields;
-(NSString *)osv;
-(NSString *)adid;
-(NSString *)oid;
-(NSString *)bundleid;
-(NSString *)sdkv;
-(NSString *)ua;
-(void)setOsv:(NSString *)arg1 ;
-(void)setAdid:(NSString *)arg1 ;
-(void)setOid:(NSString *)arg1 ;
-(void)setBundleid:(NSString *)arg1 ;
-(void)setSdkv:(NSString *)arg1 ;
-(void)setUa:(NSString *)arg1 ;
-(NSString *)os;
-(void)setOs:(NSString *)arg1 ;
@end
