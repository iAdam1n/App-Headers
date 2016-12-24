/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPCallStateMachineModelView.h>

@class UILabel, NSString;

@interface SKPCallEndInfoView : SKPCallStateMachineModelView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSString* _participantVoiceStatus;
	long long _callState;
	unsigned long long _callControls;

}

@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,copy) NSString * participantVoiceStatus;              //@synthesize participantVoiceStatus=_participantVoiceStatus - In the implementation block
@property (assign,nonatomic) long long callState;                          //@synthesize callState=_callState - In the implementation block
@property (assign,nonatomic) unsigned long long callControls;              //@synthesize callControls=_callControls - In the implementation block
+(id)observedCallStateMachineKeyPaths;
+(BOOL)requiresConstraintBasedLayout;
-(void)refreshDueToChangeInCallStateMachineProperty:(id)arg1 change:(id)arg2 ;
-(void)setParticipantVoiceStatus:(NSString *)arg1 ;
-(NSString *)participantVoiceStatus;
-(unsigned long long)callControls;
-(void)setCallControls:(unsigned long long)arg1 ;
-(void)updateEndCallInfoView;
-(void)setCallState:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(void)commonInit;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(long long)callState;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(id)viewConstraints;
@end
