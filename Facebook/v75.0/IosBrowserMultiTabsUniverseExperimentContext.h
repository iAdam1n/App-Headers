/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosBrowserMultiTabsUniverseExperimentContext : FBExperimentContext {

	BOOL _enabled;
	BOOL _force_open_drawer;
	BOOL _use_disk_cache;

}

@property (assign,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL force_open_drawer;              //@synthesize force_open_drawer=_force_open_drawer - In the implementation block
@property (assign,nonatomic) BOOL use_disk_cache;                 //@synthesize use_disk_cache=_use_disk_cache - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)force_open_drawer;
-(BOOL)use_disk_cache;
-(void)setForce_open_drawer:(BOOL)arg1 ;
-(void)setUse_disk_cache:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
@end

