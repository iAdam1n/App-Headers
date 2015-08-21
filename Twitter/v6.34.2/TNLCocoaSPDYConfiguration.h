/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSCopying.h>

@class NSDictionary, NSString;

@interface TNLCocoaSPDYConfiguration : NSObject <NSCopying> {

	SCD_Struct_TN51 _basicIVars;
	NSDictionary* _TLSSettings;
	NSString* _proxyHost;

}

@property (assign,nonatomic) BOOL parallelTCPConnectionsEnabled; 
@property (assign,nonatomic) unsigned long long sessionReceiveWindowInBytes; 
@property (assign,nonatomic) unsigned long long streamReceiveWindowInBytes; 
@property (assign,nonatomic) long long headerCompressionLevel; 
@property (assign,nonatomic) BOOL settingsMinorVersionEnabled; 
@property (nonatomic,copy) NSDictionary * TLSSettings;                                    //@synthesize TLSSettings=_TLSSettings - In the implementation block
@property (assign,nonatomic) double connectTimeout; 
@property (assign,nonatomic) BOOL TCPNoDelayEnabled; 
@property (assign,nonatomic) BOOL proxyEnabled; 
@property (nonatomic,copy) NSString * proxyHost;                                          //@synthesize proxyHost=_proxyHost - In the implementation block
@property (assign,nonatomic) long long proxyPort; 
@property (assign,nonatomic) BOOL enforceSessionPoolCorrectness; 
+(id)configurationFromSPDYConfiguration:(id)arg1 ;
+(id)defaultConfiguration;
-(id)SPDYConfiguration;
-(void)setTCPNoDelayEnabled:(BOOL)arg1 ;
-(void)setHeaderCompressionLevel:(long long)arg1 ;
-(void)setTLSSettings:(NSDictionary *)arg1 ;
-(void)setParallelTCPConnectionsEnabled:(BOOL)arg1 ;
-(void)setProxyEnabled:(BOOL)arg1 ;
-(void)setEnforceSessionPoolCorrectness:(BOOL)arg1 ;
-(long long)headerCompressionLevel;
-(BOOL)enforceSessionPoolCorrectness;
-(id)initWithSPDYConfiguration:(id)arg1 ;
-(NSDictionary *)TLSSettings;
-(void)setProxyHost:(NSString *)arg1 ;
-(BOOL)parallelTCPConnectionsEnabled;
-(void)setSessionReceiveWindowInBytes:(unsigned long long)arg1 ;
-(unsigned long long)sessionReceiveWindowInBytes;
-(void)setStreamReceiveWindowInBytes:(unsigned long long)arg1 ;
-(unsigned long long)streamReceiveWindowInBytes;
-(void)setSettingsMinorVersionEnabled:(BOOL)arg1 ;
-(BOOL)settingsMinorVersionEnabled;
-(BOOL)TCPNoDelayEnabled;
-(BOOL)proxyEnabled;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)connectTimeout;
-(void)setConnectTimeout:(double)arg1 ;
-(NSString *)proxyHost;
-(long long)proxyPort;
-(void)setProxyPort:(long long)arg1 ;
@end

