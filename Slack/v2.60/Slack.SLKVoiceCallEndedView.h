/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface Slack.SLKVoiceCallEndedView : UIView {

	 duration;
	 callDurationLabel;
	 callEndedLabel;

}

@property (copy,nonatomic) NSString * duration; 
@property (assign,__weak,nonatomic) UILabel * callDurationLabel; 
@property (assign,__weak,nonatomic) UILabel * callEndedLabel; 
-(UILabel *)callDurationLabel;
-(void)setCallDurationLabel:(UILabel *)arg1 ;
-(UILabel *)callEndedLabel;
-(void)setCallEndedLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)duration;
-(void)setDuration:(NSString *)arg1 ;
-(void)awakeFromNib;
@end

