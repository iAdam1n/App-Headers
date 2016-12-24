/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface RtcTimeseriesLogExperimentContext : FBExperimentContext {

	BOOL _rtc_timeseries_log_enabled;
	long long _rtc_timeseries_log_v;
	long long _rtc_timeseries_log_nbuckets;

}

@property (assign,nonatomic) BOOL rtc_timeseries_log_enabled;                    //@synthesize rtc_timeseries_log_enabled=_rtc_timeseries_log_enabled - In the implementation block
@property (assign,nonatomic) long long rtc_timeseries_log_v;                     //@synthesize rtc_timeseries_log_v=_rtc_timeseries_log_v - In the implementation block
@property (assign,nonatomic) long long rtc_timeseries_log_nbuckets;              //@synthesize rtc_timeseries_log_nbuckets=_rtc_timeseries_log_nbuckets - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)rtc_timeseries_log_enabled;
-(long long)rtc_timeseries_log_nbuckets;
-(long long)rtc_timeseries_log_v;
-(void)setRtc_timeseries_log_enabled:(BOOL)arg1 ;
-(void)setRtc_timeseries_log_v:(long long)arg1 ;
-(void)setRtc_timeseries_log_nbuckets:(long long)arg1 ;
@end
