/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosUploadRequestRoutingUniverseExperimentContext : FBExperimentContext {

	BOOL _enable_latency_routing;

}

@property (assign,nonatomic) BOOL enable_latency_routing;              //@synthesize enable_latency_routing=_enable_latency_routing - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)enable_latency_routing;
-(void)setEnable_latency_routing:(BOOL)arg1 ;
@end
