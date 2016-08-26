/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBVideoSoundToggleExperimentContext : FBExperimentContext {

	BOOL _enableSoundToggle;
	BOOL _enableDefaultSoundOn;
	BOOL _enableDefaultOnOnlyDuringNoAudio;
	BOOL _respectHardwareSwitchWhenUnset;
	BOOL _ignoreHardwareSwitchWhenHeadPhonesPluggedIn;
	NSString* _headNux;
	NSString* _bodyNux;
	NSString* _settingTitle;

}

@property (nonatomic,readonly) BOOL enableSoundToggle;                                        //@synthesize enableSoundToggle=_enableSoundToggle - In the implementation block
@property (nonatomic,readonly) BOOL enableDefaultSoundOn;                                     //@synthesize enableDefaultSoundOn=_enableDefaultSoundOn - In the implementation block
@property (nonatomic,readonly) BOOL enableDefaultOnOnlyDuringNoAudio;                         //@synthesize enableDefaultOnOnlyDuringNoAudio=_enableDefaultOnOnlyDuringNoAudio - In the implementation block
@property (nonatomic,readonly) BOOL respectHardwareSwitchWhenUnset;                           //@synthesize respectHardwareSwitchWhenUnset=_respectHardwareSwitchWhenUnset - In the implementation block
@property (nonatomic,readonly) BOOL ignoreHardwareSwitchWhenHeadPhonesPluggedIn;              //@synthesize ignoreHardwareSwitchWhenHeadPhonesPluggedIn=_ignoreHardwareSwitchWhenHeadPhonesPluggedIn - In the implementation block
@property (nonatomic,copy,readonly) NSString * headNux;                                       //@synthesize headNux=_headNux - In the implementation block
@property (nonatomic,copy,readonly) NSString * bodyNux;                                       //@synthesize bodyNux=_bodyNux - In the implementation block
@property (nonatomic,copy,readonly) NSString * settingTitle;                                  //@synthesize settingTitle=_settingTitle - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)enableDefaultSoundOn;
-(BOOL)enableDefaultOnOnlyDuringNoAudio;
-(BOOL)ignoreHardwareSwitchWhenHeadPhonesPluggedIn;
-(BOOL)respectHardwareSwitchWhenUnset;
-(NSString *)headNux;
-(NSString *)bodyNux;
-(NSString *)settingTitle;
-(BOOL)enableSoundToggle;
@end
