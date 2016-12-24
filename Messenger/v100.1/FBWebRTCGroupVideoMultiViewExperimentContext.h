/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBWebRTCGroupVideoMultiViewExperimentContext : FBExperimentContext {

	BOOL _groupStartSecondTone;
	BOOL _useGroupVideoMultiview;
	long long _groupVideoCountdownDuration;
	BOOL _multiviewAnimation;
	long long _numMembersRingDefaultsOff;
	long long _maxThumbnailVideoSubscriptions;
	BOOL _groupVideoStartInVch;
	BOOL _enableGroupVch;

}

@property (assign,nonatomic) BOOL groupStartSecondTone;                             //@synthesize groupStartSecondTone=_groupStartSecondTone - In the implementation block
@property (assign,nonatomic) BOOL useGroupVideoMultiview;                           //@synthesize useGroupVideoMultiview=_useGroupVideoMultiview - In the implementation block
@property (assign,nonatomic) long long groupVideoCountdownDuration;                 //@synthesize groupVideoCountdownDuration=_groupVideoCountdownDuration - In the implementation block
@property (assign,nonatomic) BOOL multiviewAnimation;                               //@synthesize multiviewAnimation=_multiviewAnimation - In the implementation block
@property (assign,nonatomic) long long numMembersRingDefaultsOff;                   //@synthesize numMembersRingDefaultsOff=_numMembersRingDefaultsOff - In the implementation block
@property (assign,nonatomic) long long maxThumbnailVideoSubscriptions;              //@synthesize maxThumbnailVideoSubscriptions=_maxThumbnailVideoSubscriptions - In the implementation block
@property (assign,nonatomic) BOOL groupVideoStartInVch;                             //@synthesize groupVideoStartInVch=_groupVideoStartInVch - In the implementation block
@property (assign,nonatomic) BOOL enableGroupVch;                                   //@synthesize enableGroupVch=_enableGroupVch - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)enableGroupVch;
-(BOOL)groupStartSecondTone;
-(long long)groupVideoCountdownDuration;
-(BOOL)groupVideoStartInVch;
-(long long)maxThumbnailVideoSubscriptions;
-(BOOL)multiviewAnimation;
-(long long)numMembersRingDefaultsOff;
-(BOOL)useGroupVideoMultiview;
-(void)setGroupStartSecondTone:(BOOL)arg1 ;
-(void)setUseGroupVideoMultiview:(BOOL)arg1 ;
-(void)setGroupVideoCountdownDuration:(long long)arg1 ;
-(void)setMultiviewAnimation:(BOOL)arg1 ;
-(void)setNumMembersRingDefaultsOff:(long long)arg1 ;
-(void)setMaxThumbnailVideoSubscriptions:(long long)arg1 ;
-(void)setGroupVideoStartInVch:(BOOL)arg1 ;
-(void)setEnableGroupVch:(BOOL)arg1 ;
@end
