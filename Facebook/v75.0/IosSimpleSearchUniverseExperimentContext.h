/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface IosSimpleSearchUniverseExperimentContext : FBExperimentContext {

	BOOL _simple_search_config_rerank_on_backspace;
	BOOL _simple_search_config_pps_bigger_see_more;
	BOOL _simple_search_config_single_state;
	BOOL _simple_search_config_show_top_suggestion_in_search_box;
	NSString* _simple_search_config_bootstrap_prefix_match;

}

@property (assign,nonatomic) BOOL simple_search_config_rerank_on_backspace;                            //@synthesize simple_search_config_rerank_on_backspace=_simple_search_config_rerank_on_backspace - In the implementation block
@property (assign,nonatomic) BOOL simple_search_config_pps_bigger_see_more;                            //@synthesize simple_search_config_pps_bigger_see_more=_simple_search_config_pps_bigger_see_more - In the implementation block
@property (assign,nonatomic) BOOL simple_search_config_single_state;                                   //@synthesize simple_search_config_single_state=_simple_search_config_single_state - In the implementation block
@property (assign,nonatomic) BOOL simple_search_config_show_top_suggestion_in_search_box;              //@synthesize simple_search_config_show_top_suggestion_in_search_box=_simple_search_config_show_top_suggestion_in_search_box - In the implementation block
@property (nonatomic,copy) NSString * simple_search_config_bootstrap_prefix_match;                     //@synthesize simple_search_config_bootstrap_prefix_match=_simple_search_config_bootstrap_prefix_match - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)simple_search_config_bootstrap_prefix_match;
-(BOOL)simple_search_config_pps_bigger_see_more;
-(BOOL)simple_search_config_rerank_on_backspace;
-(BOOL)simple_search_config_show_top_suggestion_in_search_box;
-(BOOL)simple_search_config_single_state;
-(void)setSimple_search_config_rerank_on_backspace:(BOOL)arg1 ;
-(void)setSimple_search_config_pps_bigger_see_more:(BOOL)arg1 ;
-(void)setSimple_search_config_single_state:(BOOL)arg1 ;
-(void)setSimple_search_config_show_top_suggestion_in_search_box:(BOOL)arg1 ;
-(void)setSimple_search_config_bootstrap_prefix_match:(NSString *)arg1 ;
@end
