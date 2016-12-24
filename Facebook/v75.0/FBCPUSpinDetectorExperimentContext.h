/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBCPUSpinDetectorExperimentContext : FBExperimentContext {

	long long _threadPctTrigger;
	long long _processPctTrigger;
	BOOL _detectorEnabled;
	long long _periodSeconds;

}

@property (assign,nonatomic) long long threadPctTrigger;               //@synthesize threadPctTrigger=_threadPctTrigger - In the implementation block
@property (assign,nonatomic) long long processPctTrigger;              //@synthesize processPctTrigger=_processPctTrigger - In the implementation block
@property (assign,nonatomic) BOOL detectorEnabled;                     //@synthesize detectorEnabled=_detectorEnabled - In the implementation block
@property (assign,nonatomic) long long periodSeconds;                  //@synthesize periodSeconds=_periodSeconds - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)detectorEnabled;
-(long long)processPctTrigger;
-(long long)threadPctTrigger;
-(void)setThreadPctTrigger:(long long)arg1 ;
-(void)setProcessPctTrigger:(long long)arg1 ;
-(void)setDetectorEnabled:(BOOL)arg1 ;
-(void)setPeriodSeconds:(long long)arg1 ;
-(long long)periodSeconds;
@end
