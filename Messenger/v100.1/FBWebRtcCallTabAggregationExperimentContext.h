/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBWebRtcCallTabAggregationExperimentContext : FBExperimentContext {

	long long _voicemail_player_style;
	long long _callstab_aggregation_mode;

}

@property (assign,nonatomic) long long voicemail_player_style;                 //@synthesize voicemail_player_style=_voicemail_player_style - In the implementation block
@property (assign,nonatomic) long long callstab_aggregation_mode;              //@synthesize callstab_aggregation_mode=_callstab_aggregation_mode - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)callstab_aggregation_mode;
-(long long)voicemail_player_style;
-(void)setVoicemail_player_style:(long long)arg1 ;
-(void)setCallstab_aggregation_mode:(long long)arg1 ;
@end
