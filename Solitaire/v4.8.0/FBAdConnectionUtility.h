/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAdConnectionUtility : NSObject
+(id)forceThrottle;
+(id)getLastLoadTimeForEnvironmentData:(id)arg1 ;
+(long long)getLastRefreshThresholdForEnvironmentData:(id)arg1 ;
+(id)sharedLastLoadTimeMap;
+(id)sharedLastRefreshThresholdMap;
+(void)setForceThrottle:(id)arg1 ;
+(BOOL)shouldThrottleFrequentLoadForEnvironmentData:(id)arg1 ;
+(void)setLastLoadTime:(id)arg1 forEnvironmentData:(id)arg2 ;
+(void)setLastRefreshThreshold:(long long)arg1 forEnvironmentData:(id)arg2 ;
+(id)cachedResponseForEnvironmentData:(id)arg1 ;
+(void)setCachedResponse:(id)arg1 forEnvironmentData:(id)arg2 ;
@end

