/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNNewUserRampUpExperimentContext : FBExperimentContext {

	BOOL _shouldPresentRampUpStep;
	unsigned long long _rampUpType;

}

@property (nonatomic,readonly) BOOL shouldPresentRampUpStep;               //@synthesize shouldPresentRampUpStep=_shouldPresentRampUpStep - In the implementation block
@property (nonatomic,readonly) unsigned long long rampUpType;              //@synthesize rampUpType=_rampUpType - In the implementation block
+(id)experimentName;
+(id)parameterConfigurations;
+(BOOL)allowUserInterfaceIdiom:(long long)arg1 ;
-(unsigned long long)rampUpType;
-(BOOL)shouldPresentRampUpStep;
@end

