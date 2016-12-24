/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosGraphStorePerfV461UniverseExperimentContext : FBExperimentContext {

	BOOL _graph_store_perf_multi_fetch_enabled;
	BOOL _graph_store_perf_fragment_based_merge_enabled;
	BOOL _graph_store_perf_collate_writes_enabled;

}

@property (assign,nonatomic) BOOL graph_store_perf_multi_fetch_enabled;                       //@synthesize graph_store_perf_multi_fetch_enabled=_graph_store_perf_multi_fetch_enabled - In the implementation block
@property (assign,nonatomic) BOOL graph_store_perf_fragment_based_merge_enabled;              //@synthesize graph_store_perf_fragment_based_merge_enabled=_graph_store_perf_fragment_based_merge_enabled - In the implementation block
@property (assign,nonatomic) BOOL graph_store_perf_collate_writes_enabled;                    //@synthesize graph_store_perf_collate_writes_enabled=_graph_store_perf_collate_writes_enabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)graph_store_perf_collate_writes_enabled;
-(BOOL)graph_store_perf_fragment_based_merge_enabled;
-(BOOL)graph_store_perf_multi_fetch_enabled;
-(void)setGraph_store_perf_multi_fetch_enabled:(BOOL)arg1 ;
-(void)setGraph_store_perf_fragment_based_merge_enabled:(BOOL)arg1 ;
-(void)setGraph_store_perf_collate_writes_enabled:(BOOL)arg1 ;
@end
