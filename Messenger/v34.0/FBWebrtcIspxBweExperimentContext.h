/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBWebrtcIspxBweExperimentContext : FBExperimentContext {

	int _bwe_spx_inc_agg;
	int _bwe_spx_inc_coef;
	int _bwe_spx_inc_step;
	int _bwe_spx_ovr_thrshld;
	int _bwe_isc_inc_coef;
	int _bwe_isc_inc_step;
	int _bwe_isc_ovr_thrshld;
	int _bwe_spx_overuse_pl_thrsh;
	int _bwe_spx_overuse_pl_max_delta;
	int _bwe_spx_overuse_pl_wndw;
	int _bwe_isc_overuse_pl_thrsh;
	int _bwe_isc_overuse_pl_max_delta;
	int _bwe_isc_overuse_pl_wndw;
	int _bwe_max_bwe_change;
	int _bwe_comp_bwe_rep;
	NSString* _bwe_slow_net_type;

}

@property (nonatomic,readonly) int bwe_spx_inc_agg;                            //@synthesize bwe_spx_inc_agg=_bwe_spx_inc_agg - In the implementation block
@property (nonatomic,readonly) int bwe_spx_inc_coef;                           //@synthesize bwe_spx_inc_coef=_bwe_spx_inc_coef - In the implementation block
@property (nonatomic,readonly) int bwe_spx_inc_step;                           //@synthesize bwe_spx_inc_step=_bwe_spx_inc_step - In the implementation block
@property (nonatomic,readonly) int bwe_spx_ovr_thrshld;                        //@synthesize bwe_spx_ovr_thrshld=_bwe_spx_ovr_thrshld - In the implementation block
@property (nonatomic,readonly) int bwe_isc_inc_coef;                           //@synthesize bwe_isc_inc_coef=_bwe_isc_inc_coef - In the implementation block
@property (nonatomic,readonly) int bwe_isc_inc_step;                           //@synthesize bwe_isc_inc_step=_bwe_isc_inc_step - In the implementation block
@property (nonatomic,readonly) int bwe_isc_ovr_thrshld;                        //@synthesize bwe_isc_ovr_thrshld=_bwe_isc_ovr_thrshld - In the implementation block
@property (nonatomic,readonly) int bwe_spx_overuse_pl_thrsh;                   //@synthesize bwe_spx_overuse_pl_thrsh=_bwe_spx_overuse_pl_thrsh - In the implementation block
@property (nonatomic,readonly) int bwe_spx_overuse_pl_max_delta;               //@synthesize bwe_spx_overuse_pl_max_delta=_bwe_spx_overuse_pl_max_delta - In the implementation block
@property (nonatomic,readonly) int bwe_spx_overuse_pl_wndw;                    //@synthesize bwe_spx_overuse_pl_wndw=_bwe_spx_overuse_pl_wndw - In the implementation block
@property (nonatomic,readonly) int bwe_isc_overuse_pl_thrsh;                   //@synthesize bwe_isc_overuse_pl_thrsh=_bwe_isc_overuse_pl_thrsh - In the implementation block
@property (nonatomic,readonly) int bwe_isc_overuse_pl_max_delta;               //@synthesize bwe_isc_overuse_pl_max_delta=_bwe_isc_overuse_pl_max_delta - In the implementation block
@property (nonatomic,readonly) int bwe_isc_overuse_pl_wndw;                    //@synthesize bwe_isc_overuse_pl_wndw=_bwe_isc_overuse_pl_wndw - In the implementation block
@property (nonatomic,readonly) int bwe_max_bwe_change;                         //@synthesize bwe_max_bwe_change=_bwe_max_bwe_change - In the implementation block
@property (nonatomic,readonly) int bwe_comp_bwe_rep;                           //@synthesize bwe_comp_bwe_rep=_bwe_comp_bwe_rep - In the implementation block
@property (nonatomic,copy,readonly) NSString * bwe_slow_net_type;              //@synthesize bwe_slow_net_type=_bwe_slow_net_type - In the implementation block
+(id)experimentName;
+(id)parameterConfigurations;
+(BOOL)allowUserInterfaceIdiom:(long long)arg1 ;
-(int)bwe_spx_inc_agg;
-(int)bwe_spx_inc_coef;
-(int)bwe_spx_inc_step;
-(int)bwe_spx_ovr_thrshld;
-(int)bwe_isc_inc_coef;
-(int)bwe_isc_inc_step;
-(int)bwe_isc_ovr_thrshld;
-(int)bwe_spx_overuse_pl_thrsh;
-(int)bwe_spx_overuse_pl_max_delta;
-(int)bwe_spx_overuse_pl_wndw;
-(int)bwe_isc_overuse_pl_thrsh;
-(int)bwe_isc_overuse_pl_max_delta;
-(int)bwe_isc_overuse_pl_wndw;
-(int)bwe_max_bwe_change;
-(int)bwe_comp_bwe_rep;
-(NSString *)bwe_slow_net_type;
@end

