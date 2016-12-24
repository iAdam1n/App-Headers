/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBSouvenirsStorytellerIntegrationExperimentContext : FBExperimentContext {

	BOOL _useWeekClustering;
	BOOL _enabled;
	BOOL _useWeekendClustering;
	BOOL _compactdiskCacheEnabled;
	BOOL _keepMergedCollections;

}

@property (assign,nonatomic) BOOL useWeekClustering;                    //@synthesize useWeekClustering=_useWeekClustering - In the implementation block
@property (assign,nonatomic) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL useWeekendClustering;                 //@synthesize useWeekendClustering=_useWeekendClustering - In the implementation block
@property (assign,nonatomic) BOOL compactdiskCacheEnabled;              //@synthesize compactdiskCacheEnabled=_compactdiskCacheEnabled - In the implementation block
@property (assign,nonatomic) BOOL keepMergedCollections;                //@synthesize keepMergedCollections=_keepMergedCollections - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)compactdiskCacheEnabled;
-(BOOL)keepMergedCollections;
-(BOOL)useWeekClustering;
-(BOOL)useWeekendClustering;
-(void)setUseWeekClustering:(BOOL)arg1 ;
-(void)setUseWeekendClustering:(BOOL)arg1 ;
-(void)setCompactdiskCacheEnabled:(BOOL)arg1 ;
-(void)setKeepMergedCollections:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
@end
