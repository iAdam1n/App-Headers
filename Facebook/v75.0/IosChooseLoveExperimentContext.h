/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosChooseLoveExperimentContext : FBExperimentContext {

	BOOL _enable_fallback_animation;
	BOOL _enable_firework_animation;
	BOOL _enable_sound;
	BOOL _enable_tooltip;

}

@property (assign,nonatomic) BOOL enable_fallback_animation;              //@synthesize enable_fallback_animation=_enable_fallback_animation - In the implementation block
@property (assign,nonatomic) BOOL enable_firework_animation;              //@synthesize enable_firework_animation=_enable_firework_animation - In the implementation block
@property (assign,nonatomic) BOOL enable_sound;                           //@synthesize enable_sound=_enable_sound - In the implementation block
@property (assign,nonatomic) BOOL enable_tooltip;                         //@synthesize enable_tooltip=_enable_tooltip - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)enable_fallback_animation;
-(BOOL)enable_firework_animation;
-(BOOL)enable_sound;
-(BOOL)enable_tooltip;
-(void)setEnable_fallback_animation:(BOOL)arg1 ;
-(void)setEnable_firework_animation:(BOOL)arg1 ;
-(void)setEnable_sound:(BOOL)arg1 ;
-(void)setEnable_tooltip:(BOOL)arg1 ;
@end
