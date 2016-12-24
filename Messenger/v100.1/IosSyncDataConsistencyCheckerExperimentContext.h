/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosSyncDataConsistencyCheckerExperimentContext : FBExperimentContext {

	BOOL _ios_data_consistency_checker_is_user_eligible;
	long long _ios_data_consistency_checker_run_every_x_deltas;

}

@property (assign,nonatomic) BOOL ios_data_consistency_checker_is_user_eligible;                     //@synthesize ios_data_consistency_checker_is_user_eligible=_ios_data_consistency_checker_is_user_eligible - In the implementation block
@property (assign,nonatomic) long long ios_data_consistency_checker_run_every_x_deltas;              //@synthesize ios_data_consistency_checker_run_every_x_deltas=_ios_data_consistency_checker_run_every_x_deltas - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)ios_data_consistency_checker_is_user_eligible;
-(long long)ios_data_consistency_checker_run_every_x_deltas;
-(void)setIos_data_consistency_checker_is_user_eligible:(BOOL)arg1 ;
-(void)setIos_data_consistency_checker_run_every_x_deltas:(long long)arg1 ;
@end
