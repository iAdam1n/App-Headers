/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@class UIFont, NSLayoutConstraint, NSString, UILabel;

@interface Slack.SLKCallEndedView : UIView {

	 mainLabelFont;
	 mainTextLabelHeightConstraint;
	 duration;
	 callDurationLabel;
	 callEndedLabel;

}

@property (readonly,nonatomic) UIFont * mainLabelFont; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * mainTextLabelHeightConstraint; 
@property (copy,nonatomic) NSString * duration; 
@property (assign,__weak,nonatomic) UILabel * callDurationLabel; 
@property (assign,__weak,nonatomic) UILabel * callEndedLabel; 
-(UIFont *)mainLabelFont;
-(NSLayoutConstraint *)mainTextLabelHeightConstraint;
-(void)setMainTextLabelHeightConstraint:(NSLayoutConstraint *)arg1 ;
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
