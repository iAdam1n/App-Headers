/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosMessengerImageDiskCacheExperimentContext : FBExperimentContext {

	long long _image_disk_cache_max_size_in_mb;
	BOOL _image_disk_cache_enable_disk_cache_config;
	long long _image_disk_cache_low_space_max_size_in_mb;
	long long _image_disk_cache_stale_age_in_days;

}

@property (assign,nonatomic) long long image_disk_cache_max_size_in_mb;                        //@synthesize image_disk_cache_max_size_in_mb=_image_disk_cache_max_size_in_mb - In the implementation block
@property (assign,nonatomic) BOOL image_disk_cache_enable_disk_cache_config;                   //@synthesize image_disk_cache_enable_disk_cache_config=_image_disk_cache_enable_disk_cache_config - In the implementation block
@property (assign,nonatomic) long long image_disk_cache_low_space_max_size_in_mb;              //@synthesize image_disk_cache_low_space_max_size_in_mb=_image_disk_cache_low_space_max_size_in_mb - In the implementation block
@property (assign,nonatomic) long long image_disk_cache_stale_age_in_days;                     //@synthesize image_disk_cache_stale_age_in_days=_image_disk_cache_stale_age_in_days - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)image_disk_cache_enable_disk_cache_config;
-(long long)image_disk_cache_low_space_max_size_in_mb;
-(long long)image_disk_cache_max_size_in_mb;
-(long long)image_disk_cache_stale_age_in_days;
-(void)setImage_disk_cache_max_size_in_mb:(long long)arg1 ;
-(void)setImage_disk_cache_enable_disk_cache_config:(BOOL)arg1 ;
-(void)setImage_disk_cache_low_space_max_size_in_mb:(long long)arg1 ;
-(void)setImage_disk_cache_stale_age_in_days:(long long)arg1 ;
@end
