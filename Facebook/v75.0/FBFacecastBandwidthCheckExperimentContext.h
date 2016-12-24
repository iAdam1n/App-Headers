/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBFacecastBandwidthCheckExperimentContext : FBExperimentContext {

	long long _bwThreshold;
	BOOL _allowOldData;
	BOOL _checkDownloadSpeed;
	long long _rttThreshold;

}

@property (assign,nonatomic) long long bwThreshold;                //@synthesize bwThreshold=_bwThreshold - In the implementation block
@property (assign,nonatomic) BOOL allowOldData;                    //@synthesize allowOldData=_allowOldData - In the implementation block
@property (assign,nonatomic) BOOL checkDownloadSpeed;              //@synthesize checkDownloadSpeed=_checkDownloadSpeed - In the implementation block
@property (assign,nonatomic) long long rttThreshold;               //@synthesize rttThreshold=_rttThreshold - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)allowOldData;
-(long long)bwThreshold;
-(BOOL)checkDownloadSpeed;
-(long long)rttThreshold;
-(void)setBwThreshold:(long long)arg1 ;
-(void)setAllowOldData:(BOOL)arg1 ;
-(void)setCheckDownloadSpeed:(BOOL)arg1 ;
-(void)setRttThreshold:(long long)arg1 ;
@end
