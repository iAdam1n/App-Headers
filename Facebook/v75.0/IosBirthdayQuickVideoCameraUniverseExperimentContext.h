/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosBirthdayQuickVideoCameraUniverseExperimentContext : FBExperimentContext {

	BOOL _enableMixedSwipeableFrames;
	BOOL _enableStaticSwipeableFrames;
	BOOL _friendsBirthdayPromptEnabled;
	BOOL _showVideoButtonInComposer;

}

@property (assign,nonatomic) BOOL enableMixedSwipeableFrames;                //@synthesize enableMixedSwipeableFrames=_enableMixedSwipeableFrames - In the implementation block
@property (assign,nonatomic) BOOL enableStaticSwipeableFrames;               //@synthesize enableStaticSwipeableFrames=_enableStaticSwipeableFrames - In the implementation block
@property (assign,nonatomic) BOOL friendsBirthdayPromptEnabled;              //@synthesize friendsBirthdayPromptEnabled=_friendsBirthdayPromptEnabled - In the implementation block
@property (assign,nonatomic) BOOL showVideoButtonInComposer;                 //@synthesize showVideoButtonInComposer=_showVideoButtonInComposer - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)enableMixedSwipeableFrames;
-(BOOL)enableStaticSwipeableFrames;
-(BOOL)friendsBirthdayPromptEnabled;
-(BOOL)showVideoButtonInComposer;
-(void)setEnableMixedSwipeableFrames:(BOOL)arg1 ;
-(void)setEnableStaticSwipeableFrames:(BOOL)arg1 ;
-(void)setFriendsBirthdayPromptEnabled:(BOOL)arg1 ;
-(void)setShowVideoButtonInComposer:(BOOL)arg1 ;
@end
