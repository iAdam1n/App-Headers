/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBVideosCachePrunePolicyExperimentContext : FBExperimentContext {

	long long _priorityCoefficient;
	long long _videoSecondPriorityCutoff;
	long long _pruneStrategyId;

}

@property (assign,nonatomic) long long priorityCoefficient;                    //@synthesize priorityCoefficient=_priorityCoefficient - In the implementation block
@property (assign,nonatomic) long long videoSecondPriorityCutoff;              //@synthesize videoSecondPriorityCutoff=_videoSecondPriorityCutoff - In the implementation block
@property (assign,nonatomic) long long pruneStrategyId;                        //@synthesize pruneStrategyId=_pruneStrategyId - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)priorityCoefficient;
-(long long)pruneStrategyId;
-(long long)videoSecondPriorityCutoff;
-(void)setPriorityCoefficient:(long long)arg1 ;
-(void)setVideoSecondPriorityCutoff:(long long)arg1 ;
-(void)setPruneStrategyId:(long long)arg1 ;
@end
