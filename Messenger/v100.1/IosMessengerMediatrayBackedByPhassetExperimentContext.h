/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosMessengerMediatrayBackedByPhassetExperimentContext : FBExperimentContext {

	long long _new_data_source_fetch_limit;
	BOOL _new_data_source_enabled;

}

@property (assign,nonatomic) long long new_data_source_fetch_limit;              //@synthesize new_data_source_fetch_limit=_new_data_source_fetch_limit - In the implementation block
@property (assign,nonatomic) BOOL new_data_source_enabled;                       //@synthesize new_data_source_enabled=_new_data_source_enabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)new_data_source_enabled;
-(long long)new_data_source_fetch_limit;
-(void)setNew_data_source_fetch_limit:(long long)arg1 ;
-(void)setNew_data_source_enabled:(BOOL)arg1 ;
@end
