/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosLigerConnmgmtExperimentContext : FBExperimentContext {

	long long _liger_connection_max_http_sessions;
	BOOL _liger_connection_limit_video_domain;
	long long _liger_connection_max_spdy_sessions;
	BOOL _liger_connection_per_domain_limit_enabled;
	long long _liger_connection_backup_timeout;
	long long _liger_connection_per_domain_max_retries;

}

@property (assign,nonatomic) long long liger_connection_max_http_sessions;                   //@synthesize liger_connection_max_http_sessions=_liger_connection_max_http_sessions - In the implementation block
@property (assign,nonatomic) BOOL liger_connection_limit_video_domain;                       //@synthesize liger_connection_limit_video_domain=_liger_connection_limit_video_domain - In the implementation block
@property (assign,nonatomic) long long liger_connection_max_spdy_sessions;                   //@synthesize liger_connection_max_spdy_sessions=_liger_connection_max_spdy_sessions - In the implementation block
@property (assign,nonatomic) BOOL liger_connection_per_domain_limit_enabled;                 //@synthesize liger_connection_per_domain_limit_enabled=_liger_connection_per_domain_limit_enabled - In the implementation block
@property (assign,nonatomic) long long liger_connection_backup_timeout;                      //@synthesize liger_connection_backup_timeout=_liger_connection_backup_timeout - In the implementation block
@property (assign,nonatomic) long long liger_connection_per_domain_max_retries;              //@synthesize liger_connection_per_domain_max_retries=_liger_connection_per_domain_max_retries - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)liger_connection_backup_timeout;
-(BOOL)liger_connection_limit_video_domain;
-(long long)liger_connection_max_http_sessions;
-(long long)liger_connection_max_spdy_sessions;
-(BOOL)liger_connection_per_domain_limit_enabled;
-(long long)liger_connection_per_domain_max_retries;
-(void)setLiger_connection_max_http_sessions:(long long)arg1 ;
-(void)setLiger_connection_limit_video_domain:(BOOL)arg1 ;
-(void)setLiger_connection_max_spdy_sessions:(long long)arg1 ;
-(void)setLiger_connection_per_domain_limit_enabled:(BOOL)arg1 ;
-(void)setLiger_connection_backup_timeout:(long long)arg1 ;
-(void)setLiger_connection_per_domain_max_retries:(long long)arg1 ;
@end
