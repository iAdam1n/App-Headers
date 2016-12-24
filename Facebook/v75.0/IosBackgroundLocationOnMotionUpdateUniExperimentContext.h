/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosBackgroundLocationOnMotionUpdateUniExperimentContext : FBExperimentContext {

	BOOL _wait_for_motion_change;
	BOOL _motion_producer_enabled;

}

@property (assign,nonatomic) BOOL wait_for_motion_change;               //@synthesize wait_for_motion_change=_wait_for_motion_change - In the implementation block
@property (assign,nonatomic) BOOL motion_producer_enabled;              //@synthesize motion_producer_enabled=_motion_producer_enabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)motion_producer_enabled;
-(BOOL)wait_for_motion_change;
-(void)setWait_for_motion_change:(BOOL)arg1 ;
-(void)setMotion_producer_enabled:(BOOL)arg1 ;
@end
