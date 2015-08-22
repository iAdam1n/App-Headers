/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNLigerSchedulingExperimentContext : FBExperimentContext {

	BOOL _schedulerEnabled;
	long long _upperboundLowPriority;
	long long _upperboundHighPriority;
	long long _upperboundNormalPriority;

}

@property (nonatomic,readonly) BOOL schedulerEnabled;                           //@synthesize schedulerEnabled=_schedulerEnabled - In the implementation block
@property (nonatomic,readonly) long long upperboundLowPriority;                 //@synthesize upperboundLowPriority=_upperboundLowPriority - In the implementation block
@property (nonatomic,readonly) long long upperboundHighPriority;                //@synthesize upperboundHighPriority=_upperboundHighPriority - In the implementation block
@property (nonatomic,readonly) long long upperboundNormalPriority;              //@synthesize upperboundNormalPriority=_upperboundNormalPriority - In the implementation block
+(id)experimentName;
+(id)parameterConfigurations;
-(BOOL)schedulerEnabled;
-(long long)upperboundLowPriority;
-(long long)upperboundHighPriority;
-(long long)upperboundNormalPriority;
@end
