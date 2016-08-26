/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GADCSIConfiguration : NSObject {

	NSString* _cachedUserAgentString;
	BOOL _reportingEnabled;
	NSString* _server;
	NSString* _serviceName;
	long long _version;

}

@property (assign,nonatomic) BOOL reportingEnabled;                    //@synthesize reportingEnabled=_reportingEnabled - In the implementation block
@property (nonatomic,copy) NSString * server;                          //@synthesize server=_server - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                     //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * userAgent; 
@property (assign,nonatomic) long long version;                        //@synthesize version=_version - In the implementation block
+(id)deviceVersionString;
+(id)defaultConfiguration;
-(BOOL)reportingEnabled;
-(void)setReportingProbability:(float)arg1 ;
-(void)setReportingEnabled:(BOOL)arg1 ;
-(NSString *)serviceName;
-(id)init;
-(NSString *)server;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)userAgent;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setServer:(NSString *)arg1 ;
@end
