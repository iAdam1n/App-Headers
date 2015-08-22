/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface MNWelcomeViewPushabilityExperimentContext : FBExperimentContext {

	BOOL _shouldPresentEnableNotificationsButton;
	BOOL _shouldPresentEnableNotificationsConfirmationDialog;
	BOOL _shouldPresentContinueWithoutNotificationsConfirmationDialog;

}

@property (nonatomic,readonly) BOOL shouldPresentEnableNotificationsButton;                                   //@synthesize shouldPresentEnableNotificationsButton=_shouldPresentEnableNotificationsButton - In the implementation block
@property (nonatomic,readonly) BOOL shouldPresentEnableNotificationsConfirmationDialog;                       //@synthesize shouldPresentEnableNotificationsConfirmationDialog=_shouldPresentEnableNotificationsConfirmationDialog - In the implementation block
@property (nonatomic,readonly) BOOL shouldPresentContinueWithoutNotificationsConfirmationDialog;              //@synthesize shouldPresentContinueWithoutNotificationsConfirmationDialog=_shouldPresentContinueWithoutNotificationsConfirmationDialog - In the implementation block
+(id)experimentName;
+(id)parameterConfigurations;
-(BOOL)shouldPresentEnableNotificationsConfirmationDialog;
-(BOOL)shouldPresentContinueWithoutNotificationsConfirmationDialog;
-(BOOL)shouldPresentEnableNotificationsButton;
@end
