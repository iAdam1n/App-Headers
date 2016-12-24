/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBFacecastInAppNotificationExperimentContext : FBExperimentContext {

	long long _wnsEnabled;
	long long _timeToAutoDismissBeeper;
	long long _beeperEnabled;
	long long _timeToFadeOutStory;

}

@property (assign,nonatomic) long long wnsEnabled;                           //@synthesize wnsEnabled=_wnsEnabled - In the implementation block
@property (assign,nonatomic) long long timeToAutoDismissBeeper;              //@synthesize timeToAutoDismissBeeper=_timeToAutoDismissBeeper - In the implementation block
@property (assign,nonatomic) long long beeperEnabled;                        //@synthesize beeperEnabled=_beeperEnabled - In the implementation block
@property (assign,nonatomic) long long timeToFadeOutStory;                   //@synthesize timeToFadeOutStory=_timeToFadeOutStory - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)beeperEnabled;
-(long long)timeToAutoDismissBeeper;
-(long long)timeToFadeOutStory;
-(long long)wnsEnabled;
-(void)setWnsEnabled:(long long)arg1 ;
-(void)setTimeToAutoDismissBeeper:(long long)arg1 ;
-(void)setBeeperEnabled:(long long)arg1 ;
-(void)setTimeToFadeOutStory:(long long)arg1 ;
@end
